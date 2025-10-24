// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPABROADCOUNTRYINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPABROADCOUNTRYINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeIpAbroadCountryInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpAbroadCountryInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbroadRegion, abroadRegion_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpAbroadCountryInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbroadRegion, abroadRegion_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeIpAbroadCountryInfosRequest() = default ;
    DescribeIpAbroadCountryInfosRequest(const DescribeIpAbroadCountryInfosRequest &) = default ;
    DescribeIpAbroadCountryInfosRequest(DescribeIpAbroadCountryInfosRequest &&) = default ;
    DescribeIpAbroadCountryInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpAbroadCountryInfosRequest() = default ;
    DescribeIpAbroadCountryInfosRequest& operator=(const DescribeIpAbroadCountryInfosRequest &) = default ;
    DescribeIpAbroadCountryInfosRequest& operator=(DescribeIpAbroadCountryInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abroadRegion_ == nullptr
        && return this->country_ == nullptr && return this->instanceId_ == nullptr && return this->language_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr; };
    // abroadRegion Field Functions 
    bool hasAbroadRegion() const { return this->abroadRegion_ != nullptr;};
    void deleteAbroadRegion() { this->abroadRegion_ = nullptr;};
    inline string abroadRegion() const { DARABONBA_PTR_GET_DEFAULT(abroadRegion_, "") };
    inline DescribeIpAbroadCountryInfosRequest& setAbroadRegion(string abroadRegion) { DARABONBA_PTR_SET_VALUE(abroadRegion_, abroadRegion) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline DescribeIpAbroadCountryInfosRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeIpAbroadCountryInfosRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeIpAbroadCountryInfosRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeIpAbroadCountryInfosRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeIpAbroadCountryInfosRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeIpAbroadCountryInfosRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeIpAbroadCountryInfosRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    std::shared_ptr<string> abroadRegion_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
