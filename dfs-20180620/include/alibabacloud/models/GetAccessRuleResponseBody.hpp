// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetAccessRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRule, accessRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRule, accessRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessRuleResponseBody() = default ;
    GetAccessRuleResponseBody(const GetAccessRuleResponseBody &) = default ;
    GetAccessRuleResponseBody(GetAccessRuleResponseBody &&) = default ;
    GetAccessRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessRuleResponseBody() = default ;
    GetAccessRuleResponseBody& operator=(const GetAccessRuleResponseBody &) = default ;
    GetAccessRuleResponseBody& operator=(GetAccessRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessRule& obj) { 
        DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
        DARABONBA_PTR_TO_JSON(AccessRuleId, accessRuleId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(NetworkSegment, networkSegment_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RWAccessType, RWAccessType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, AccessRule& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
        DARABONBA_PTR_FROM_JSON(AccessRuleId, accessRuleId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(NetworkSegment, networkSegment_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RWAccessType, RWAccessType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      AccessRule() = default ;
      AccessRule(const AccessRule &) = default ;
      AccessRule(AccessRule &&) = default ;
      AccessRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessRule() = default ;
      AccessRule& operator=(const AccessRule &) = default ;
      AccessRule& operator=(AccessRule &&) = default ;
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
      inline AccessRule& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


      // accessRuleId Field Functions 
      bool hasAccessRuleId() const { return this->accessRuleId_ != nullptr;};
      void deleteAccessRuleId() { this->accessRuleId_ = nullptr;};
      inline string getAccessRuleId() const { DARABONBA_PTR_GET_DEFAULT(accessRuleId_, "") };
      inline AccessRule& setAccessRuleId(string accessRuleId) { DARABONBA_PTR_SET_VALUE(accessRuleId_, accessRuleId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AccessRule& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AccessRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // networkSegment Field Functions 
      bool hasNetworkSegment() const { return this->networkSegment_ != nullptr;};
      void deleteNetworkSegment() { this->networkSegment_ = nullptr;};
      inline string getNetworkSegment() const { DARABONBA_PTR_GET_DEFAULT(networkSegment_, "") };
      inline AccessRule& setNetworkSegment(string networkSegment) { DARABONBA_PTR_SET_VALUE(networkSegment_, networkSegment) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline AccessRule& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // RWAccessType Field Functions 
      bool hasRWAccessType() const { return this->RWAccessType_ != nullptr;};
      void deleteRWAccessType() { this->RWAccessType_ = nullptr;};
      inline string getRWAccessType() const { DARABONBA_PTR_GET_DEFAULT(RWAccessType_, "") };
      inline AccessRule& setRWAccessType(string RWAccessType) { DARABONBA_PTR_SET_VALUE(RWAccessType_, RWAccessType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AccessRule& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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

    virtual bool empty() const override { return this->accessRule_ == nullptr
        && this->requestId_ == nullptr; };
    // accessRule Field Functions 
    bool hasAccessRule() const { return this->accessRule_ != nullptr;};
    void deleteAccessRule() { this->accessRule_ = nullptr;};
    inline const GetAccessRuleResponseBody::AccessRule & getAccessRule() const { DARABONBA_PTR_GET_CONST(accessRule_, GetAccessRuleResponseBody::AccessRule) };
    inline GetAccessRuleResponseBody::AccessRule getAccessRule() { DARABONBA_PTR_GET(accessRule_, GetAccessRuleResponseBody::AccessRule) };
    inline GetAccessRuleResponseBody& setAccessRule(const GetAccessRuleResponseBody::AccessRule & accessRule) { DARABONBA_PTR_SET_VALUE(accessRule_, accessRule) };
    inline GetAccessRuleResponseBody& setAccessRule(GetAccessRuleResponseBody::AccessRule && accessRule) { DARABONBA_PTR_SET_RVALUE(accessRule_, accessRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAccessRuleResponseBody::AccessRule> accessRule_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
