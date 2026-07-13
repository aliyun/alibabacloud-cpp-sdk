// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROTECTIONPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROTECTIONPOLICIESRESPONSEBODY_HPP_
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
  class ListProtectionPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProtectionPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProtectionPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProtectionPoliciesResponseBody() = default ;
    ListProtectionPoliciesResponseBody(const ListProtectionPoliciesResponseBody &) = default ;
    ListProtectionPoliciesResponseBody(ListProtectionPoliciesResponseBody &&) = default ;
    ListProtectionPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProtectionPoliciesResponseBody() = default ;
    ListProtectionPoliciesResponseBody& operator=(const ListProtectionPoliciesResponseBody &) = default ;
    ListProtectionPoliciesResponseBody& operator=(ListProtectionPoliciesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(BoundResourceCategoryIds, boundResourceCategoryIds_);
          DARABONBA_PTR_TO_JSON(LatestApplySummary, latestApplySummary_);
          DARABONBA_PTR_TO_JSON(LatestApplyTime, latestApplyTime_);
          DARABONBA_PTR_TO_JSON(LatestTaskId, latestTaskId_);
          DARABONBA_PTR_TO_JSON(ProtectionPolicyId, protectionPolicyId_);
          DARABONBA_PTR_TO_JSON(ProtectionPolicyName, protectionPolicyName_);
          DARABONBA_PTR_TO_JSON(ProtectionPolicyRegionId, protectionPolicyRegionId_);
          DARABONBA_PTR_TO_JSON(SubProtectionPolicies, subProtectionPolicies_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(BoundResourceCategoryIds, boundResourceCategoryIds_);
          DARABONBA_PTR_FROM_JSON(LatestApplySummary, latestApplySummary_);
          DARABONBA_PTR_FROM_JSON(LatestApplyTime, latestApplyTime_);
          DARABONBA_PTR_FROM_JSON(LatestTaskId, latestTaskId_);
          DARABONBA_PTR_FROM_JSON(ProtectionPolicyId, protectionPolicyId_);
          DARABONBA_PTR_FROM_JSON(ProtectionPolicyName, protectionPolicyName_);
          DARABONBA_PTR_FROM_JSON(ProtectionPolicyRegionId, protectionPolicyRegionId_);
          DARABONBA_PTR_FROM_JSON(SubProtectionPolicies, subProtectionPolicies_);
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
        class SubProtectionPolicies : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubProtectionPolicies& obj) { 
            DARABONBA_PTR_TO_JSON(Config, config_);
            DARABONBA_PTR_TO_JSON(SubProtectionPolicyType, subProtectionPolicyType_);
          };
          friend void from_json(const Darabonba::Json& j, SubProtectionPolicies& obj) { 
            DARABONBA_PTR_FROM_JSON(Config, config_);
            DARABONBA_PTR_FROM_JSON(SubProtectionPolicyType, subProtectionPolicyType_);
          };
          SubProtectionPolicies() = default ;
          SubProtectionPolicies(const SubProtectionPolicies &) = default ;
          SubProtectionPolicies(SubProtectionPolicies &&) = default ;
          SubProtectionPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubProtectionPolicies() = default ;
          SubProtectionPolicies& operator=(const SubProtectionPolicies &) = default ;
          SubProtectionPolicies& operator=(SubProtectionPolicies &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->config_ == nullptr
        && this->subProtectionPolicyType_ == nullptr; };
          // config Field Functions 
          bool hasConfig() const { return this->config_ != nullptr;};
          void deleteConfig() { this->config_ = nullptr;};
          inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
          inline SubProtectionPolicies& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


          // subProtectionPolicyType Field Functions 
          bool hasSubProtectionPolicyType() const { return this->subProtectionPolicyType_ != nullptr;};
          void deleteSubProtectionPolicyType() { this->subProtectionPolicyType_ = nullptr;};
          inline string getSubProtectionPolicyType() const { DARABONBA_PTR_GET_DEFAULT(subProtectionPolicyType_, "") };
          inline SubProtectionPolicies& setSubProtectionPolicyType(string subProtectionPolicyType) { DARABONBA_PTR_SET_VALUE(subProtectionPolicyType_, subProtectionPolicyType) };


        protected:
          // The sub-protection policy configuration.
          shared_ptr<string> config_ {};
          // The sub-protection policy type.
          shared_ptr<string> subProtectionPolicyType_ {};
        };

        class LatestApplySummary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LatestApplySummary& obj) { 
            DARABONBA_PTR_TO_JSON(ApplyStatusCount, applyStatusCount_);
            DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
            DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
          };
          friend void from_json(const Darabonba::Json& j, LatestApplySummary& obj) { 
            DARABONBA_PTR_FROM_JSON(ApplyStatusCount, applyStatusCount_);
            DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
            DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
          };
          LatestApplySummary() = default ;
          LatestApplySummary(const LatestApplySummary &) = default ;
          LatestApplySummary(LatestApplySummary &&) = default ;
          LatestApplySummary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LatestApplySummary() = default ;
          LatestApplySummary& operator=(const LatestApplySummary &) = default ;
          LatestApplySummary& operator=(LatestApplySummary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ResourceCount : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ResourceCount& obj) { 
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
            };
            friend void from_json(const Darabonba::Json& j, ResourceCount& obj) { 
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
            };
            ResourceCount() = default ;
            ResourceCount(const ResourceCount &) = default ;
            ResourceCount(ResourceCount &&) = default ;
            ResourceCount(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ResourceCount() = default ;
            ResourceCount& operator=(const ResourceCount &) = default ;
            ResourceCount& operator=(ResourceCount &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->count_ == nullptr
        && this->resourceType_ == nullptr; };
            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
            inline ResourceCount& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // resourceType Field Functions 
            bool hasResourceType() const { return this->resourceType_ != nullptr;};
            void deleteResourceType() { this->resourceType_ = nullptr;};
            inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
            inline ResourceCount& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


          protected:
            // The count of resources by type.
            shared_ptr<int64_t> count_ {};
            // The resource type.
            shared_ptr<string> resourceType_ {};
          };

          class ApplyStatusCount : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ApplyStatusCount& obj) { 
              DARABONBA_PTR_TO_JSON(ApplyStatus, applyStatus_);
              DARABONBA_PTR_TO_JSON(Count, count_);
            };
            friend void from_json(const Darabonba::Json& j, ApplyStatusCount& obj) { 
              DARABONBA_PTR_FROM_JSON(ApplyStatus, applyStatus_);
              DARABONBA_PTR_FROM_JSON(Count, count_);
            };
            ApplyStatusCount() = default ;
            ApplyStatusCount(const ApplyStatusCount &) = default ;
            ApplyStatusCount(ApplyStatusCount &&) = default ;
            ApplyStatusCount(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ApplyStatusCount() = default ;
            ApplyStatusCount& operator=(const ApplyStatusCount &) = default ;
            ApplyStatusCount& operator=(ApplyStatusCount &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->applyStatus_ == nullptr
        && this->count_ == nullptr; };
            // applyStatus Field Functions 
            bool hasApplyStatus() const { return this->applyStatus_ != nullptr;};
            void deleteApplyStatus() { this->applyStatus_ = nullptr;};
            inline string getApplyStatus() const { DARABONBA_PTR_GET_DEFAULT(applyStatus_, "") };
            inline ApplyStatusCount& setApplyStatus(string applyStatus) { DARABONBA_PTR_SET_VALUE(applyStatus_, applyStatus) };


            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
            inline ApplyStatusCount& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          protected:
            // The application status.
            shared_ptr<string> applyStatus_ {};
            // The count of resources by type.
            shared_ptr<int64_t> count_ {};
          };

          virtual bool empty() const override { return this->applyStatusCount_ == nullptr
        && this->completeTime_ == nullptr && this->resourceCount_ == nullptr; };
          // applyStatusCount Field Functions 
          bool hasApplyStatusCount() const { return this->applyStatusCount_ != nullptr;};
          void deleteApplyStatusCount() { this->applyStatusCount_ = nullptr;};
          inline const vector<LatestApplySummary::ApplyStatusCount> & getApplyStatusCount() const { DARABONBA_PTR_GET_CONST(applyStatusCount_, vector<LatestApplySummary::ApplyStatusCount>) };
          inline vector<LatestApplySummary::ApplyStatusCount> getApplyStatusCount() { DARABONBA_PTR_GET(applyStatusCount_, vector<LatestApplySummary::ApplyStatusCount>) };
          inline LatestApplySummary& setApplyStatusCount(const vector<LatestApplySummary::ApplyStatusCount> & applyStatusCount) { DARABONBA_PTR_SET_VALUE(applyStatusCount_, applyStatusCount) };
          inline LatestApplySummary& setApplyStatusCount(vector<LatestApplySummary::ApplyStatusCount> && applyStatusCount) { DARABONBA_PTR_SET_RVALUE(applyStatusCount_, applyStatusCount) };


          // completeTime Field Functions 
          bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
          void deleteCompleteTime() { this->completeTime_ = nullptr;};
          inline int64_t getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
          inline LatestApplySummary& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


          // resourceCount Field Functions 
          bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
          void deleteResourceCount() { this->resourceCount_ = nullptr;};
          inline const vector<LatestApplySummary::ResourceCount> & getResourceCount() const { DARABONBA_PTR_GET_CONST(resourceCount_, vector<LatestApplySummary::ResourceCount>) };
          inline vector<LatestApplySummary::ResourceCount> getResourceCount() { DARABONBA_PTR_GET(resourceCount_, vector<LatestApplySummary::ResourceCount>) };
          inline LatestApplySummary& setResourceCount(const vector<LatestApplySummary::ResourceCount> & resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };
          inline LatestApplySummary& setResourceCount(vector<LatestApplySummary::ResourceCount> && resourceCount) { DARABONBA_PTR_SET_RVALUE(resourceCount_, resourceCount) };


        protected:
          // The count statistics of application status.
          shared_ptr<vector<LatestApplySummary::ApplyStatusCount>> applyStatusCount_ {};
          // The time when the task was completed. Unix timestamp format, in seconds.
          shared_ptr<int64_t> completeTime_ {};
          // The count of resources by type.
          shared_ptr<vector<LatestApplySummary::ResourceCount>> resourceCount_ {};
        };

        virtual bool empty() const override { return this->boundResourceCategoryIds_ == nullptr
        && this->latestApplySummary_ == nullptr && this->latestApplyTime_ == nullptr && this->latestTaskId_ == nullptr && this->protectionPolicyId_ == nullptr && this->protectionPolicyName_ == nullptr
        && this->protectionPolicyRegionId_ == nullptr && this->subProtectionPolicies_ == nullptr; };
        // boundResourceCategoryIds Field Functions 
        bool hasBoundResourceCategoryIds() const { return this->boundResourceCategoryIds_ != nullptr;};
        void deleteBoundResourceCategoryIds() { this->boundResourceCategoryIds_ = nullptr;};
        inline const vector<string> & getBoundResourceCategoryIds() const { DARABONBA_PTR_GET_CONST(boundResourceCategoryIds_, vector<string>) };
        inline vector<string> getBoundResourceCategoryIds() { DARABONBA_PTR_GET(boundResourceCategoryIds_, vector<string>) };
        inline Content& setBoundResourceCategoryIds(const vector<string> & boundResourceCategoryIds) { DARABONBA_PTR_SET_VALUE(boundResourceCategoryIds_, boundResourceCategoryIds) };
        inline Content& setBoundResourceCategoryIds(vector<string> && boundResourceCategoryIds) { DARABONBA_PTR_SET_RVALUE(boundResourceCategoryIds_, boundResourceCategoryIds) };


        // latestApplySummary Field Functions 
        bool hasLatestApplySummary() const { return this->latestApplySummary_ != nullptr;};
        void deleteLatestApplySummary() { this->latestApplySummary_ = nullptr;};
        inline const Content::LatestApplySummary & getLatestApplySummary() const { DARABONBA_PTR_GET_CONST(latestApplySummary_, Content::LatestApplySummary) };
        inline Content::LatestApplySummary getLatestApplySummary() { DARABONBA_PTR_GET(latestApplySummary_, Content::LatestApplySummary) };
        inline Content& setLatestApplySummary(const Content::LatestApplySummary & latestApplySummary) { DARABONBA_PTR_SET_VALUE(latestApplySummary_, latestApplySummary) };
        inline Content& setLatestApplySummary(Content::LatestApplySummary && latestApplySummary) { DARABONBA_PTR_SET_RVALUE(latestApplySummary_, latestApplySummary) };


        // latestApplyTime Field Functions 
        bool hasLatestApplyTime() const { return this->latestApplyTime_ != nullptr;};
        void deleteLatestApplyTime() { this->latestApplyTime_ = nullptr;};
        inline int64_t getLatestApplyTime() const { DARABONBA_PTR_GET_DEFAULT(latestApplyTime_, 0L) };
        inline Content& setLatestApplyTime(int64_t latestApplyTime) { DARABONBA_PTR_SET_VALUE(latestApplyTime_, latestApplyTime) };


        // latestTaskId Field Functions 
        bool hasLatestTaskId() const { return this->latestTaskId_ != nullptr;};
        void deleteLatestTaskId() { this->latestTaskId_ = nullptr;};
        inline string getLatestTaskId() const { DARABONBA_PTR_GET_DEFAULT(latestTaskId_, "") };
        inline Content& setLatestTaskId(string latestTaskId) { DARABONBA_PTR_SET_VALUE(latestTaskId_, latestTaskId) };


        // protectionPolicyId Field Functions 
        bool hasProtectionPolicyId() const { return this->protectionPolicyId_ != nullptr;};
        void deleteProtectionPolicyId() { this->protectionPolicyId_ = nullptr;};
        inline string getProtectionPolicyId() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyId_, "") };
        inline Content& setProtectionPolicyId(string protectionPolicyId) { DARABONBA_PTR_SET_VALUE(protectionPolicyId_, protectionPolicyId) };


        // protectionPolicyName Field Functions 
        bool hasProtectionPolicyName() const { return this->protectionPolicyName_ != nullptr;};
        void deleteProtectionPolicyName() { this->protectionPolicyName_ = nullptr;};
        inline string getProtectionPolicyName() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyName_, "") };
        inline Content& setProtectionPolicyName(string protectionPolicyName) { DARABONBA_PTR_SET_VALUE(protectionPolicyName_, protectionPolicyName) };


        // protectionPolicyRegionId Field Functions 
        bool hasProtectionPolicyRegionId() const { return this->protectionPolicyRegionId_ != nullptr;};
        void deleteProtectionPolicyRegionId() { this->protectionPolicyRegionId_ = nullptr;};
        inline string getProtectionPolicyRegionId() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyRegionId_, "") };
        inline Content& setProtectionPolicyRegionId(string protectionPolicyRegionId) { DARABONBA_PTR_SET_VALUE(protectionPolicyRegionId_, protectionPolicyRegionId) };


        // subProtectionPolicies Field Functions 
        bool hasSubProtectionPolicies() const { return this->subProtectionPolicies_ != nullptr;};
        void deleteSubProtectionPolicies() { this->subProtectionPolicies_ = nullptr;};
        inline const vector<Content::SubProtectionPolicies> & getSubProtectionPolicies() const { DARABONBA_PTR_GET_CONST(subProtectionPolicies_, vector<Content::SubProtectionPolicies>) };
        inline vector<Content::SubProtectionPolicies> getSubProtectionPolicies() { DARABONBA_PTR_GET(subProtectionPolicies_, vector<Content::SubProtectionPolicies>) };
        inline Content& setSubProtectionPolicies(const vector<Content::SubProtectionPolicies> & subProtectionPolicies) { DARABONBA_PTR_SET_VALUE(subProtectionPolicies_, subProtectionPolicies) };
        inline Content& setSubProtectionPolicies(vector<Content::SubProtectionPolicies> && subProtectionPolicies) { DARABONBA_PTR_SET_RVALUE(subProtectionPolicies_, subProtectionPolicies) };


      protected:
        // The attached resource category IDs.
        shared_ptr<vector<string>> boundResourceCategoryIds_ {};
        // The summary of the latest application result.
        shared_ptr<Content::LatestApplySummary> latestApplySummary_ {};
        // The time when the policy was last applied.
        shared_ptr<int64_t> latestApplyTime_ {};
        // The task ID of the latest policy application.
        shared_ptr<string> latestTaskId_ {};
        // The protection policy ID.
        shared_ptr<string> protectionPolicyId_ {};
        // The protection policy name.
        shared_ptr<string> protectionPolicyName_ {};
        // The region ID of the protection policy.
        shared_ptr<string> protectionPolicyRegionId_ {};
        // The sub-protection policies.
        shared_ptr<vector<Content::SubProtectionPolicies>> subProtectionPolicies_ {};
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
      // The response parameters.
      shared_ptr<vector<Data::Content>> content_ {};
      // The maximum number of results requested.
      shared_ptr<int32_t> maxResults_ {};
      // The paging token.
      shared_ptr<string> nextToken_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListProtectionPoliciesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListProtectionPoliciesResponseBody::Data) };
    inline ListProtectionPoliciesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListProtectionPoliciesResponseBody::Data) };
    inline ListProtectionPoliciesResponseBody& setData(const ListProtectionPoliciesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProtectionPoliciesResponseBody& setData(ListProtectionPoliciesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProtectionPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<ListProtectionPoliciesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
