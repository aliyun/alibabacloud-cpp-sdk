// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListAccessRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRules, accessRules_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRules, accessRules_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAccessRulesResponseBody() = default ;
    ListAccessRulesResponseBody(const ListAccessRulesResponseBody &) = default ;
    ListAccessRulesResponseBody(ListAccessRulesResponseBody &&) = default ;
    ListAccessRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessRulesResponseBody() = default ;
    ListAccessRulesResponseBody& operator=(const ListAccessRulesResponseBody &) = default ;
    ListAccessRulesResponseBody& operator=(ListAccessRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessRules& obj) { 
        DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
        DARABONBA_PTR_TO_JSON(AccessRuleId, accessRuleId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(NetworkSegment, networkSegment_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RWAccessType, RWAccessType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, AccessRules& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
        DARABONBA_PTR_FROM_JSON(AccessRuleId, accessRuleId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(NetworkSegment, networkSegment_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RWAccessType, RWAccessType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      AccessRules() = default ;
      AccessRules(const AccessRules &) = default ;
      AccessRules(AccessRules &&) = default ;
      AccessRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessRules() = default ;
      AccessRules& operator=(const AccessRules &) = default ;
      AccessRules& operator=(AccessRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessGroupId_ == nullptr
        && this->accessRuleId_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->networkSegment_ == nullptr && this->priority_ == nullptr
        && this->RWAccessType_ == nullptr && this->regionId_ == nullptr; };
      // accessGroupId Field Functions 
      bool hasAccessGroupId() const { return this->accessGroupId_ != nullptr;};
      void deleteAccessGroupId() { this->accessGroupId_ = nullptr;};
      inline string getAccessGroupId() const { DARABONBA_PTR_GET_DEFAULT(accessGroupId_, "") };
      inline AccessRules& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


      // accessRuleId Field Functions 
      bool hasAccessRuleId() const { return this->accessRuleId_ != nullptr;};
      void deleteAccessRuleId() { this->accessRuleId_ = nullptr;};
      inline string getAccessRuleId() const { DARABONBA_PTR_GET_DEFAULT(accessRuleId_, "") };
      inline AccessRules& setAccessRuleId(string accessRuleId) { DARABONBA_PTR_SET_VALUE(accessRuleId_, accessRuleId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AccessRules& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AccessRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // networkSegment Field Functions 
      bool hasNetworkSegment() const { return this->networkSegment_ != nullptr;};
      void deleteNetworkSegment() { this->networkSegment_ = nullptr;};
      inline string getNetworkSegment() const { DARABONBA_PTR_GET_DEFAULT(networkSegment_, "") };
      inline AccessRules& setNetworkSegment(string networkSegment) { DARABONBA_PTR_SET_VALUE(networkSegment_, networkSegment) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline AccessRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // RWAccessType Field Functions 
      bool hasRWAccessType() const { return this->RWAccessType_ != nullptr;};
      void deleteRWAccessType() { this->RWAccessType_ = nullptr;};
      inline string getRWAccessType() const { DARABONBA_PTR_GET_DEFAULT(RWAccessType_, "") };
      inline AccessRules& setRWAccessType(string RWAccessType) { DARABONBA_PTR_SET_VALUE(RWAccessType_, RWAccessType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AccessRules& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      shared_ptr<string> accessGroupId_ {};
      shared_ptr<string> accessRuleId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> networkSegment_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<string> RWAccessType_ {};
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->accessRules_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessRules Field Functions 
    bool hasAccessRules() const { return this->accessRules_ != nullptr;};
    void deleteAccessRules() { this->accessRules_ = nullptr;};
    inline const vector<ListAccessRulesResponseBody::AccessRules> & getAccessRules() const { DARABONBA_PTR_GET_CONST(accessRules_, vector<ListAccessRulesResponseBody::AccessRules>) };
    inline vector<ListAccessRulesResponseBody::AccessRules> getAccessRules() { DARABONBA_PTR_GET(accessRules_, vector<ListAccessRulesResponseBody::AccessRules>) };
    inline ListAccessRulesResponseBody& setAccessRules(const vector<ListAccessRulesResponseBody::AccessRules> & accessRules) { DARABONBA_PTR_SET_VALUE(accessRules_, accessRules) };
    inline ListAccessRulesResponseBody& setAccessRules(vector<ListAccessRulesResponseBody::AccessRules> && accessRules) { DARABONBA_PTR_SET_RVALUE(accessRules_, accessRules) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAccessRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListAccessRulesResponseBody::AccessRules>> accessRules_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
