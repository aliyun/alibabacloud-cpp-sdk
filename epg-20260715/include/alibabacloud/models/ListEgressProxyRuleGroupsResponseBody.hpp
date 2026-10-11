// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEGRESSPROXYRULEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEGRESSPROXYRULEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class ListEgressProxyRuleGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEgressProxyRuleGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroups, egressProxyRuleGroups_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEgressProxyRuleGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroups, egressProxyRuleGroups_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEgressProxyRuleGroupsResponseBody() = default ;
    ListEgressProxyRuleGroupsResponseBody(const ListEgressProxyRuleGroupsResponseBody &) = default ;
    ListEgressProxyRuleGroupsResponseBody(ListEgressProxyRuleGroupsResponseBody &&) = default ;
    ListEgressProxyRuleGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEgressProxyRuleGroupsResponseBody() = default ;
    ListEgressProxyRuleGroupsResponseBody& operator=(const ListEgressProxyRuleGroupsResponseBody &) = default ;
    ListEgressProxyRuleGroupsResponseBody& operator=(ListEgressProxyRuleGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EgressProxyRuleGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EgressProxyRuleGroups& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
        DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
        DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupName, egressProxyRuleGroupName_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, EgressProxyRuleGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
        DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
        DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupName, egressProxyRuleGroupName_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      EgressProxyRuleGroups() = default ;
      EgressProxyRuleGroups(const EgressProxyRuleGroups &) = default ;
      EgressProxyRuleGroups(EgressProxyRuleGroups &&) = default ;
      EgressProxyRuleGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EgressProxyRuleGroups() = default ;
      EgressProxyRuleGroups& operator=(const EgressProxyRuleGroups &) = default ;
      EgressProxyRuleGroups& operator=(EgressProxyRuleGroups &&) = default ;
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
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->egressProxyIpPoolId_ == nullptr && this->egressProxyRuleGroupId_ == nullptr && this->egressProxyRuleGroupName_ == nullptr && this->resourceGroupId_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline EgressProxyRuleGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EgressProxyRuleGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // egressProxyIpPoolId Field Functions 
      bool hasEgressProxyIpPoolId() const { return this->egressProxyIpPoolId_ != nullptr;};
      void deleteEgressProxyIpPoolId() { this->egressProxyIpPoolId_ = nullptr;};
      inline string getEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolId_, "") };
      inline EgressProxyRuleGroups& setEgressProxyIpPoolId(string egressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolId_, egressProxyIpPoolId) };


      // egressProxyRuleGroupId Field Functions 
      bool hasEgressProxyRuleGroupId() const { return this->egressProxyRuleGroupId_ != nullptr;};
      void deleteEgressProxyRuleGroupId() { this->egressProxyRuleGroupId_ = nullptr;};
      inline string getEgressProxyRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupId_, "") };
      inline EgressProxyRuleGroups& setEgressProxyRuleGroupId(string egressProxyRuleGroupId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupId_, egressProxyRuleGroupId) };


      // egressProxyRuleGroupName Field Functions 
      bool hasEgressProxyRuleGroupName() const { return this->egressProxyRuleGroupName_ != nullptr;};
      void deleteEgressProxyRuleGroupName() { this->egressProxyRuleGroupName_ = nullptr;};
      inline string getEgressProxyRuleGroupName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupName_, "") };
      inline EgressProxyRuleGroups& setEgressProxyRuleGroupName(string egressProxyRuleGroupName) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupName_, egressProxyRuleGroupName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline EgressProxyRuleGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EgressProxyRuleGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<EgressProxyRuleGroups::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<EgressProxyRuleGroups::Tags>) };
      inline vector<EgressProxyRuleGroups::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<EgressProxyRuleGroups::Tags>) };
      inline EgressProxyRuleGroups& setTags(const vector<EgressProxyRuleGroups::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline EgressProxyRuleGroups& setTags(vector<EgressProxyRuleGroups::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> egressProxyIpPoolId_ {};
      shared_ptr<string> egressProxyRuleGroupId_ {};
      shared_ptr<string> egressProxyRuleGroupName_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<EgressProxyRuleGroups::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->egressProxyRuleGroups_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // egressProxyRuleGroups Field Functions 
    bool hasEgressProxyRuleGroups() const { return this->egressProxyRuleGroups_ != nullptr;};
    void deleteEgressProxyRuleGroups() { this->egressProxyRuleGroups_ = nullptr;};
    inline const vector<ListEgressProxyRuleGroupsResponseBody::EgressProxyRuleGroups> & getEgressProxyRuleGroups() const { DARABONBA_PTR_GET_CONST(egressProxyRuleGroups_, vector<ListEgressProxyRuleGroupsResponseBody::EgressProxyRuleGroups>) };
    inline vector<ListEgressProxyRuleGroupsResponseBody::EgressProxyRuleGroups> getEgressProxyRuleGroups() { DARABONBA_PTR_GET(egressProxyRuleGroups_, vector<ListEgressProxyRuleGroupsResponseBody::EgressProxyRuleGroups>) };
    inline ListEgressProxyRuleGroupsResponseBody& setEgressProxyRuleGroups(const vector<ListEgressProxyRuleGroupsResponseBody::EgressProxyRuleGroups> & egressProxyRuleGroups) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroups_, egressProxyRuleGroups) };
    inline ListEgressProxyRuleGroupsResponseBody& setEgressProxyRuleGroups(vector<ListEgressProxyRuleGroupsResponseBody::EgressProxyRuleGroups> && egressProxyRuleGroups) { DARABONBA_PTR_SET_RVALUE(egressProxyRuleGroups_, egressProxyRuleGroups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEgressProxyRuleGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEgressProxyRuleGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEgressProxyRuleGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEgressProxyRuleGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListEgressProxyRuleGroupsResponseBody::EgressProxyRuleGroups>> egressProxyRuleGroups_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
