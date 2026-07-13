// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROTECTIONPOLICYAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROTECTIONPOLICYAPPLICATIONSRESPONSEBODY_HPP_
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
  class ListProtectionPolicyApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProtectionPolicyApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProtectionPolicyApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProtectionPolicyApplicationsResponseBody() = default ;
    ListProtectionPolicyApplicationsResponseBody(const ListProtectionPolicyApplicationsResponseBody &) = default ;
    ListProtectionPolicyApplicationsResponseBody(ListProtectionPolicyApplicationsResponseBody &&) = default ;
    ListProtectionPolicyApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProtectionPolicyApplicationsResponseBody() = default ;
    ListProtectionPolicyApplicationsResponseBody& operator=(const ListProtectionPolicyApplicationsResponseBody &) = default ;
    ListProtectionPolicyApplicationsResponseBody& operator=(ListProtectionPolicyApplicationsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ApplyDetail, applyDetail_);
          DARABONBA_PTR_TO_JSON(ApplyStatus, applyStatus_);
          DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(ProtectionPolicyId, protectionPolicyId_);
          DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(SubProtectionPolicyType, subProtectionPolicyType_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplyDetail, applyDetail_);
          DARABONBA_PTR_FROM_JSON(ApplyStatus, applyStatus_);
          DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(ProtectionPolicyId, protectionPolicyId_);
          DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(SubProtectionPolicyType, subProtectionPolicyType_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
        virtual bool empty() const override { return this->applyDetail_ == nullptr
        && this->applyStatus_ == nullptr && this->applyTime_ == nullptr && this->productType_ == nullptr && this->protectionPolicyId_ == nullptr && this->resourceArn_ == nullptr
        && this->resourceId_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr && this->subProtectionPolicyType_ == nullptr && this->taskId_ == nullptr; };
        // applyDetail Field Functions 
        bool hasApplyDetail() const { return this->applyDetail_ != nullptr;};
        void deleteApplyDetail() { this->applyDetail_ = nullptr;};
        inline string getApplyDetail() const { DARABONBA_PTR_GET_DEFAULT(applyDetail_, "") };
        inline Content& setApplyDetail(string applyDetail) { DARABONBA_PTR_SET_VALUE(applyDetail_, applyDetail) };


        // applyStatus Field Functions 
        bool hasApplyStatus() const { return this->applyStatus_ != nullptr;};
        void deleteApplyStatus() { this->applyStatus_ = nullptr;};
        inline string getApplyStatus() const { DARABONBA_PTR_GET_DEFAULT(applyStatus_, "") };
        inline Content& setApplyStatus(string applyStatus) { DARABONBA_PTR_SET_VALUE(applyStatus_, applyStatus) };


        // applyTime Field Functions 
        bool hasApplyTime() const { return this->applyTime_ != nullptr;};
        void deleteApplyTime() { this->applyTime_ = nullptr;};
        inline int64_t getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, 0L) };
        inline Content& setApplyTime(int64_t applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
        inline Content& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // protectionPolicyId Field Functions 
        bool hasProtectionPolicyId() const { return this->protectionPolicyId_ != nullptr;};
        void deleteProtectionPolicyId() { this->protectionPolicyId_ = nullptr;};
        inline string getProtectionPolicyId() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyId_, "") };
        inline Content& setProtectionPolicyId(string protectionPolicyId) { DARABONBA_PTR_SET_VALUE(protectionPolicyId_, protectionPolicyId) };


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


        // subProtectionPolicyType Field Functions 
        bool hasSubProtectionPolicyType() const { return this->subProtectionPolicyType_ != nullptr;};
        void deleteSubProtectionPolicyType() { this->subProtectionPolicyType_ = nullptr;};
        inline string getSubProtectionPolicyType() const { DARABONBA_PTR_GET_DEFAULT(subProtectionPolicyType_, "") };
        inline Content& setSubProtectionPolicyType(string subProtectionPolicyType) { DARABONBA_PTR_SET_VALUE(subProtectionPolicyType_, subProtectionPolicyType) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Content& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // The error details, returned when the application fails.
        shared_ptr<string> applyDetail_ {};
        // The policy application status.
        shared_ptr<string> applyStatus_ {};
        // The time the policy was applied.
        shared_ptr<int64_t> applyTime_ {};
        // The product type.
        shared_ptr<string> productType_ {};
        // The protection policy ID.
        shared_ptr<string> protectionPolicyId_ {};
        // The resource ARN.
        shared_ptr<string> resourceArn_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        shared_ptr<int64_t> resourceOwnerId_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
        // The sub-protection policy type.
        shared_ptr<string> subProtectionPolicyType_ {};
        // The task ID.
        shared_ptr<string> taskId_ {};
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
      // The response content.
      shared_ptr<vector<Data::Content>> content_ {};
      // The maximum number of results to return.
      shared_ptr<int32_t> maxResults_ {};
      // The pagination token for retrieving the next page of results. If this parameter is empty, all results have been returned.
      shared_ptr<string> nextToken_ {};
      // The total number of entries.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListProtectionPolicyApplicationsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListProtectionPolicyApplicationsResponseBody::Data) };
    inline ListProtectionPolicyApplicationsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListProtectionPolicyApplicationsResponseBody::Data) };
    inline ListProtectionPolicyApplicationsResponseBody& setData(const ListProtectionPolicyApplicationsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProtectionPolicyApplicationsResponseBody& setData(ListProtectionPolicyApplicationsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProtectionPolicyApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response data.
    shared_ptr<ListProtectionPolicyApplicationsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
