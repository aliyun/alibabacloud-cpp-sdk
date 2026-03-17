// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISECODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISECODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListEnterpriseCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnterpriseCode, enterpriseCode_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnterpriseCode, enterpriseCode_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListEnterpriseCodeRequest() = default ;
    ListEnterpriseCodeRequest(const ListEnterpriseCodeRequest &) = default ;
    ListEnterpriseCodeRequest(ListEnterpriseCodeRequest &&) = default ;
    ListEnterpriseCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseCodeRequest() = default ;
    ListEnterpriseCodeRequest& operator=(const ListEnterpriseCodeRequest &) = default ;
    ListEnterpriseCodeRequest& operator=(ListEnterpriseCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterpriseCode_ == nullptr
        && this->isDefault_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr; };
    // enterpriseCode Field Functions 
    bool hasEnterpriseCode() const { return this->enterpriseCode_ != nullptr;};
    void deleteEnterpriseCode() { this->enterpriseCode_ = nullptr;};
    inline string getEnterpriseCode() const { DARABONBA_PTR_GET_DEFAULT(enterpriseCode_, "") };
    inline ListEnterpriseCodeRequest& setEnterpriseCode(string enterpriseCode) { DARABONBA_PTR_SET_VALUE(enterpriseCode_, enterpriseCode) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListEnterpriseCodeRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEnterpriseCodeRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEnterpriseCodeRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnterpriseCodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The enterprise code that you want to query.
    shared_ptr<string> enterpriseCode_ {};
    // Specifies whether to query only default enterprise codes. Valid values:
    // 
    // *   **true**: yes
    // *   **false** (default): no
    shared_ptr<bool> isDefault_ {};
    // The number of entries returned per page.
    // 
    // Valid values: **1** to **100**. Default value: **10**.
    shared_ptr<int32_t> maxResults_ {};
    // The token for returning the next page when the data is returned in more than one page.
    shared_ptr<string> nextToken_ {};
    // The ID of the region.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
