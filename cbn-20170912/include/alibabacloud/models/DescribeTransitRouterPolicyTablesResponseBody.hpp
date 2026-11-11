// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERPOLICYTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERPOLICYTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeTransitRouterPolicyTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouterPolicyTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyTables, policyTables_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouterPolicyTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyTables, policyTables_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTransitRouterPolicyTablesResponseBody() = default ;
    DescribeTransitRouterPolicyTablesResponseBody(const DescribeTransitRouterPolicyTablesResponseBody &) = default ;
    DescribeTransitRouterPolicyTablesResponseBody(DescribeTransitRouterPolicyTablesResponseBody &&) = default ;
    DescribeTransitRouterPolicyTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouterPolicyTablesResponseBody() = default ;
    DescribeTransitRouterPolicyTablesResponseBody& operator=(const DescribeTransitRouterPolicyTablesResponseBody &) = default ;
    DescribeTransitRouterPolicyTablesResponseBody& operator=(DescribeTransitRouterPolicyTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyTables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyTables& obj) { 
        DARABONBA_PTR_TO_JSON(Attachments, attachments_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PolicyTableId, policyTableId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyTables& obj) { 
        DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PolicyTableId, policyTableId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      };
      PolicyTables() = default ;
      PolicyTables(const PolicyTables &) = default ;
      PolicyTables(PolicyTables &&) = default ;
      PolicyTables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyTables() = default ;
      PolicyTables& operator=(const PolicyTables &) = default ;
      PolicyTables& operator=(PolicyTables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
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
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->attachments_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->policyTableId_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->transitRouterId_ == nullptr; };
      // attachments Field Functions 
      bool hasAttachments() const { return this->attachments_ != nullptr;};
      void deleteAttachments() { this->attachments_ = nullptr;};
      inline const vector<string> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<string>) };
      inline vector<string> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<string>) };
      inline PolicyTables& setAttachments(const vector<string> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
      inline PolicyTables& setAttachments(vector<string> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline PolicyTables& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PolicyTables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PolicyTables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // policyTableId Field Functions 
      bool hasPolicyTableId() const { return this->policyTableId_ != nullptr;};
      void deletePolicyTableId() { this->policyTableId_ = nullptr;};
      inline string getPolicyTableId() const { DARABONBA_PTR_GET_DEFAULT(policyTableId_, "") };
      inline PolicyTables& setPolicyTableId(string policyTableId) { DARABONBA_PTR_SET_VALUE(policyTableId_, policyTableId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PolicyTables& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PolicyTables& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<PolicyTables::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<PolicyTables::Tags>) };
      inline vector<PolicyTables::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<PolicyTables::Tags>) };
      inline PolicyTables& setTags(const vector<PolicyTables::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline PolicyTables& setTags(vector<PolicyTables::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline PolicyTables& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    protected:
      // The attachments associated with the policy route table.
      shared_ptr<vector<string>> attachments_ {};
      // The time when the policy route table was created. The time is displayed in UTC and follows the ISO 8601 standard in the YYYY-MM-DDThh:mmZ format.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> creationTime_ {};
      // The description of the policy route table.
      shared_ptr<string> description_ {};
      // The name of the policy route table.
      shared_ptr<string> name_ {};
      // The ID of the policy route table instance.
      shared_ptr<string> policyTableId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The status of the policy route table. Valid values:
      // 
      // - Creating: The policy route table is being created.
      // 
      // - Active: The policy route table is running.
      // 
      // - Deleting: The policy route table is being deleted.
      shared_ptr<string> status_ {};
      // The tags that are added to the policy route table.
      shared_ptr<vector<PolicyTables::Tags>> tags_ {};
      // The ID of the Enterprise Edition transit router.
      shared_ptr<string> transitRouterId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->policyTables_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeTransitRouterPolicyTablesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTransitRouterPolicyTablesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyTables Field Functions 
    bool hasPolicyTables() const { return this->policyTables_ != nullptr;};
    void deletePolicyTables() { this->policyTables_ = nullptr;};
    inline const vector<DescribeTransitRouterPolicyTablesResponseBody::PolicyTables> & getPolicyTables() const { DARABONBA_PTR_GET_CONST(policyTables_, vector<DescribeTransitRouterPolicyTablesResponseBody::PolicyTables>) };
    inline vector<DescribeTransitRouterPolicyTablesResponseBody::PolicyTables> getPolicyTables() { DARABONBA_PTR_GET(policyTables_, vector<DescribeTransitRouterPolicyTablesResponseBody::PolicyTables>) };
    inline DescribeTransitRouterPolicyTablesResponseBody& setPolicyTables(const vector<DescribeTransitRouterPolicyTablesResponseBody::PolicyTables> & policyTables) { DARABONBA_PTR_SET_VALUE(policyTables_, policyTables) };
    inline DescribeTransitRouterPolicyTablesResponseBody& setPolicyTables(vector<DescribeTransitRouterPolicyTablesResponseBody::PolicyTables> && policyTables) { DARABONBA_PTR_SET_RVALUE(policyTables_, policyTables) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransitRouterPolicyTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTransitRouterPolicyTablesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results. Valid values:
    // 
    // If NextToken is empty, no next query is to be sent.
    // If NextToken is returned, the value indicates the token that is used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The policy route tables.
    shared_ptr<vector<DescribeTransitRouterPolicyTablesResponseBody::PolicyTables>> policyTables_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
