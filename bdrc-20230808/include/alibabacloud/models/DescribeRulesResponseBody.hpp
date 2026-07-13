// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRulesResponseBody() = default ;
    DescribeRulesResponseBody(const DescribeRulesResponseBody &) = default ;
    DescribeRulesResponseBody(DescribeRulesResponseBody &&) = default ;
    DescribeRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRulesResponseBody() = default ;
    DescribeRulesResponseBody& operator=(const DescribeRulesResponseBody &) = default ;
    DescribeRulesResponseBody& operator=(DescribeRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(CheckFailedResourceCount, checkFailedResourceCount_);
          DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_TO_JSON(CheckTime, checkTime_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(RiskyResourceCount, riskyResourceCount_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleTemplate, ruleTemplate_);
          DARABONBA_PTR_TO_JSON(TotalResourceCount, totalResourceCount_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckFailedResourceCount, checkFailedResourceCount_);
          DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_FROM_JSON(CheckTime, checkTime_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(RiskyResourceCount, riskyResourceCount_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleTemplate, ruleTemplate_);
          DARABONBA_PTR_FROM_JSON(TotalResourceCount, totalResourceCount_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkFailedResourceCount_ == nullptr
        && this->checkStatus_ == nullptr && this->checkTime_ == nullptr && this->productType_ == nullptr && this->resourceType_ == nullptr && this->riskyResourceCount_ == nullptr
        && this->ruleId_ == nullptr && this->ruleTemplate_ == nullptr && this->totalResourceCount_ == nullptr; };
        // checkFailedResourceCount Field Functions 
        bool hasCheckFailedResourceCount() const { return this->checkFailedResourceCount_ != nullptr;};
        void deleteCheckFailedResourceCount() { this->checkFailedResourceCount_ = nullptr;};
        inline int64_t getCheckFailedResourceCount() const { DARABONBA_PTR_GET_DEFAULT(checkFailedResourceCount_, 0L) };
        inline Content& setCheckFailedResourceCount(int64_t checkFailedResourceCount) { DARABONBA_PTR_SET_VALUE(checkFailedResourceCount_, checkFailedResourceCount) };


        // checkStatus Field Functions 
        bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
        void deleteCheckStatus() { this->checkStatus_ = nullptr;};
        inline string getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
        inline Content& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


        // checkTime Field Functions 
        bool hasCheckTime() const { return this->checkTime_ != nullptr;};
        void deleteCheckTime() { this->checkTime_ = nullptr;};
        inline int64_t getCheckTime() const { DARABONBA_PTR_GET_DEFAULT(checkTime_, 0L) };
        inline Content& setCheckTime(int64_t checkTime) { DARABONBA_PTR_SET_VALUE(checkTime_, checkTime) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
        inline Content& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Content& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // riskyResourceCount Field Functions 
        bool hasRiskyResourceCount() const { return this->riskyResourceCount_ != nullptr;};
        void deleteRiskyResourceCount() { this->riskyResourceCount_ = nullptr;};
        inline int64_t getRiskyResourceCount() const { DARABONBA_PTR_GET_DEFAULT(riskyResourceCount_, 0L) };
        inline Content& setRiskyResourceCount(int64_t riskyResourceCount) { DARABONBA_PTR_SET_VALUE(riskyResourceCount_, riskyResourceCount) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Content& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleTemplate Field Functions 
        bool hasRuleTemplate() const { return this->ruleTemplate_ != nullptr;};
        void deleteRuleTemplate() { this->ruleTemplate_ = nullptr;};
        inline string getRuleTemplate() const { DARABONBA_PTR_GET_DEFAULT(ruleTemplate_, "") };
        inline Content& setRuleTemplate(string ruleTemplate) { DARABONBA_PTR_SET_VALUE(ruleTemplate_, ruleTemplate) };


        // totalResourceCount Field Functions 
        bool hasTotalResourceCount() const { return this->totalResourceCount_ != nullptr;};
        void deleteTotalResourceCount() { this->totalResourceCount_ = nullptr;};
        inline int64_t getTotalResourceCount() const { DARABONBA_PTR_GET_DEFAULT(totalResourceCount_, 0L) };
        inline Content& setTotalResourceCount(int64_t totalResourceCount) { DARABONBA_PTR_SET_VALUE(totalResourceCount_, totalResourceCount) };


      protected:
        // The number of resources for which the check failed.
        shared_ptr<int64_t> checkFailedResourceCount_ {};
        // The check status. Valid values: NOT_CHECKED (Not checked), PASSED (Passed), FAILED (Failed), CHECKING (Checking), and CHECK_FAILED (Check failed).
        shared_ptr<string> checkStatus_ {};
        // The UNIX timestamp that indicates when the check was performed.
        shared_ptr<int64_t> checkTime_ {};
        // The product type to which the rule applies.
        shared_ptr<string> productType_ {};
        // The resource type to which the rule applies.
        shared_ptr<string> resourceType_ {};
        // The number of at-risk resources.
        shared_ptr<int64_t> riskyResourceCount_ {};
        // The unique ID of the rule.
        shared_ptr<string> ruleId_ {};
        // The rule template.
        shared_ptr<string> ruleTemplate_ {};
        // The total number of resources that were checked.
        shared_ptr<int64_t> totalResourceCount_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of returned records.
      shared_ptr<vector<Data::Content>> content_ {};
      // The maximum number of entries returned on the current page.
      shared_ptr<int32_t> maxResults_ {};
      // The token that is used to retrieve the next page of results. If this parameter is empty, all results have been returned.
      shared_ptr<string> nextToken_ {};
      // The total number of entries that meet the filter criteria. This parameter is optional and is not returned by default.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeRulesResponseBody::Data) };
    inline DescribeRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeRulesResponseBody::Data) };
    inline DescribeRulesResponseBody& setData(const DescribeRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeRulesResponseBody& setData(DescribeRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<DescribeRulesResponseBody::Data> data_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
