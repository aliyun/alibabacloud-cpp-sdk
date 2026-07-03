// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDPICONFIGERRORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDPICONFIGERRORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListDpiConfigErrorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDpiConfigErrorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DpiConfigType, dpiConfigType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleInstanceId, ruleInstanceId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDpiConfigErrorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DpiConfigType, dpiConfigType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleInstanceId, ruleInstanceId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
    };
    ListDpiConfigErrorRequest() = default ;
    ListDpiConfigErrorRequest(const ListDpiConfigErrorRequest &) = default ;
    ListDpiConfigErrorRequest(ListDpiConfigErrorRequest &&) = default ;
    ListDpiConfigErrorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDpiConfigErrorRequest() = default ;
    ListDpiConfigErrorRequest& operator=(const ListDpiConfigErrorRequest &) = default ;
    ListDpiConfigErrorRequest& operator=(ListDpiConfigErrorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dpiConfigType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->ruleInstanceId_ == nullptr && this->smartAGId_ == nullptr; };
    // dpiConfigType Field Functions 
    bool hasDpiConfigType() const { return this->dpiConfigType_ != nullptr;};
    void deleteDpiConfigType() { this->dpiConfigType_ = nullptr;};
    inline string getDpiConfigType() const { DARABONBA_PTR_GET_DEFAULT(dpiConfigType_, "") };
    inline ListDpiConfigErrorRequest& setDpiConfigType(string dpiConfigType) { DARABONBA_PTR_SET_VALUE(dpiConfigType_, dpiConfigType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDpiConfigErrorRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDpiConfigErrorRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDpiConfigErrorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleInstanceId Field Functions 
    bool hasRuleInstanceId() const { return this->ruleInstanceId_ != nullptr;};
    void deleteRuleInstanceId() { this->ruleInstanceId_ = nullptr;};
    inline string getRuleInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ruleInstanceId_, "") };
    inline ListDpiConfigErrorRequest& setRuleInstanceId(string ruleInstanceId) { DARABONBA_PTR_SET_VALUE(ruleInstanceId_, ruleInstanceId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ListDpiConfigErrorRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


  protected:
    // The type of instance for which the DPI feature is configured:
    // 
    // - **acl**: a Resource Access Management instance.
    // - **qos**: a QoS policy instance.
    // 
    // This parameter is required.
    shared_ptr<string> dpiConfigType_ {};
    // The maximum number of configuration errors to return on each page.
    // 
    // Valid values: **1** to **100**.
    // 
    // Default value: **10**.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the region where the Smart Access Gateway instance is deployed. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the regions and their IDs that Smart Access Gateway supports.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the instance for which the DPI feature is configured.
    shared_ptr<string> ruleInstanceId_ {};
    // The ID of the Smart Access Gateway instance.
    shared_ptr<string> smartAGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
