// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKDETAILSRESPONSEBODY_HPP_
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
  class DescribeCheckDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCheckDetailsResponseBody() = default ;
    DescribeCheckDetailsResponseBody(const DescribeCheckDetailsResponseBody &) = default ;
    DescribeCheckDetailsResponseBody(DescribeCheckDetailsResponseBody &&) = default ;
    DescribeCheckDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckDetailsResponseBody() = default ;
    DescribeCheckDetailsResponseBody& operator=(const DescribeCheckDetailsResponseBody &) = default ;
    DescribeCheckDetailsResponseBody& operator=(DescribeCheckDetailsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_TO_JSON(CheckTime, checkTime_);
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleTemplate, ruleTemplate_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_FROM_JSON(CheckTime, checkTime_);
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleTemplate, ruleTemplate_);
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
        virtual bool empty() const override { return this->checkStatus_ == nullptr
        && this->checkTime_ == nullptr && this->detail_ == nullptr && this->productType_ == nullptr && this->resourceArn_ == nullptr && this->resourceId_ == nullptr
        && this->resourceName_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr && this->ruleId_ == nullptr && this->ruleTemplate_ == nullptr; };
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


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline Content& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
        inline Content& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // resourceArn Field Functions 
        bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
        void deleteResourceArn() { this->resourceArn_ = nullptr;};
        inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
        inline Content& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Content& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline Content& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceOwnerId Field Functions 
        bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
        void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
        inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
        inline Content& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Content& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


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


      protected:
        // The check status. Valid values: NOT_CHECKED, PASSED, FAILED, CHECKING, and CHECK_FAILED.
        shared_ptr<string> checkStatus_ {};
        // The time when the check was performed.
        shared_ptr<int64_t> checkTime_ {};
        // The check details.
        shared_ptr<string> detail_ {};
        // The type of the cloud service.
        shared_ptr<string> productType_ {};
        // The globally unique Alibaba Cloud Resource Name (ARN) of the resource.
        shared_ptr<string> resourceArn_ {};
        // The unique ID of the resource.
        shared_ptr<string> resourceId_ {};
        // The name of the resource.
        shared_ptr<string> resourceName_ {};
        // The ID of the resource owner.
        shared_ptr<int64_t> resourceOwnerId_ {};
        // The type of the resource.
        shared_ptr<string> resourceType_ {};
        // The unique ID of the rule.
        shared_ptr<string> ruleId_ {};
        // The rule template.
        shared_ptr<string> ruleTemplate_ {};
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
      // The collection of records returned by this request.
      shared_ptr<vector<Data::Content>> content_ {};
      // The maximum number of entries returned in this response.
      shared_ptr<int32_t> maxResults_ {};
      // The token that is used to retrieve the next page of results. If this parameter is empty, it indicates that all data has been retrieved.
      shared_ptr<string> nextToken_ {};
      // The total number of entries that meet the query conditions. This parameter is optional and is not returned by default.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCheckDetailsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCheckDetailsResponseBody::Data) };
    inline DescribeCheckDetailsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCheckDetailsResponseBody::Data) };
    inline DescribeCheckDetailsResponseBody& setData(const DescribeCheckDetailsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCheckDetailsResponseBody& setData(DescribeCheckDetailsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeCheckDetailsResponseBody::Data> data_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
