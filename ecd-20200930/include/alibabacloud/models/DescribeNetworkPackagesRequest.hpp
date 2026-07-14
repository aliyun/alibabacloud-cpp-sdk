// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNetworkPackagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkPackagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkPackagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeNetworkPackagesRequest() = default ;
    DescribeNetworkPackagesRequest(const DescribeNetworkPackagesRequest &) = default ;
    DescribeNetworkPackagesRequest(DescribeNetworkPackagesRequest &&) = default ;
    DescribeNetworkPackagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkPackagesRequest() = default ;
    DescribeNetworkPackagesRequest& operator=(const DescribeNetworkPackagesRequest &) = default ;
    DescribeNetworkPackagesRequest& operator=(DescribeNetworkPackagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->internetChargeType_ == nullptr
        && this->maxResults_ == nullptr && this->networkPackageId_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->tag_ == nullptr; };
    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeNetworkPackagesRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNetworkPackagesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline const vector<string> & getNetworkPackageId() const { DARABONBA_PTR_GET_CONST(networkPackageId_, vector<string>) };
    inline vector<string> getNetworkPackageId() { DARABONBA_PTR_GET(networkPackageId_, vector<string>) };
    inline DescribeNetworkPackagesRequest& setNetworkPackageId(const vector<string> & networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };
    inline DescribeNetworkPackagesRequest& setNetworkPackageId(vector<string> && networkPackageId) { DARABONBA_PTR_SET_RVALUE(networkPackageId_, networkPackageId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNetworkPackagesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNetworkPackagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeNetworkPackagesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeNetworkPackagesRequest::Tag>) };
    inline vector<DescribeNetworkPackagesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeNetworkPackagesRequest::Tag>) };
    inline DescribeNetworkPackagesRequest& setTag(const vector<DescribeNetworkPackagesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeNetworkPackagesRequest& setTag(vector<DescribeNetworkPackagesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The billing method of the pay-as-you-go premium Internet bandwidth plan.
    shared_ptr<string> internetChargeType_ {};
    // The number of entries per page in a paged query.    
    // 
    // - Maximum value: 100.    
    // - Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The IDs of the premium Internet bandwidth plans. You can specify 1 to 100 IDs.
    shared_ptr<vector<string>> networkPackageId_ {};
    // The token for the next query.
    shared_ptr<string> nextToken_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<vector<DescribeNetworkPackagesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
