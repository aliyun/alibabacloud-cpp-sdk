// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetOrganizationalUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationalUnit, organizationalUnit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationalUnit, organizationalUnit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOrganizationalUnitResponseBody() = default ;
    GetOrganizationalUnitResponseBody(const GetOrganizationalUnitResponseBody &) = default ;
    GetOrganizationalUnitResponseBody(GetOrganizationalUnitResponseBody &&) = default ;
    GetOrganizationalUnitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrganizationalUnitResponseBody() = default ;
    GetOrganizationalUnitResponseBody& operator=(const GetOrganizationalUnitResponseBody &) = default ;
    GetOrganizationalUnitResponseBody& operator=(GetOrganizationalUnitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrganizationalUnit : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrganizationalUnit& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Leaf, leaf_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitExternalId, organizationalUnitExternalId_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitName, organizationalUnitName_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitSourceId, organizationalUnitSourceId_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitSourceType, organizationalUnitSourceType_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, OrganizationalUnit& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Leaf, leaf_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitExternalId, organizationalUnitExternalId_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitName, organizationalUnitName_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitSourceId, organizationalUnitSourceId_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitSourceType, organizationalUnitSourceType_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      OrganizationalUnit() = default ;
      OrganizationalUnit(const OrganizationalUnit &) = default ;
      OrganizationalUnit(OrganizationalUnit &&) = default ;
      OrganizationalUnit(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrganizationalUnit() = default ;
      OrganizationalUnit& operator=(const OrganizationalUnit &) = default ;
      OrganizationalUnit& operator=(OrganizationalUnit &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->instanceId_ == nullptr && this->leaf_ == nullptr && this->organizationalUnitExternalId_ == nullptr && this->organizationalUnitId_ == nullptr
        && this->organizationalUnitName_ == nullptr && this->organizationalUnitSourceId_ == nullptr && this->organizationalUnitSourceType_ == nullptr && this->parentId_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline OrganizationalUnit& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline OrganizationalUnit& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline OrganizationalUnit& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // leaf Field Functions 
      bool hasLeaf() const { return this->leaf_ != nullptr;};
      void deleteLeaf() { this->leaf_ = nullptr;};
      inline bool getLeaf() const { DARABONBA_PTR_GET_DEFAULT(leaf_, false) };
      inline OrganizationalUnit& setLeaf(bool leaf) { DARABONBA_PTR_SET_VALUE(leaf_, leaf) };


      // organizationalUnitExternalId Field Functions 
      bool hasOrganizationalUnitExternalId() const { return this->organizationalUnitExternalId_ != nullptr;};
      void deleteOrganizationalUnitExternalId() { this->organizationalUnitExternalId_ = nullptr;};
      inline string getOrganizationalUnitExternalId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitExternalId_, "") };
      inline OrganizationalUnit& setOrganizationalUnitExternalId(string organizationalUnitExternalId) { DARABONBA_PTR_SET_VALUE(organizationalUnitExternalId_, organizationalUnitExternalId) };


      // organizationalUnitId Field Functions 
      bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
      void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
      inline string getOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
      inline OrganizationalUnit& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


      // organizationalUnitName Field Functions 
      bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
      void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
      inline string getOrganizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
      inline OrganizationalUnit& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


      // organizationalUnitSourceId Field Functions 
      bool hasOrganizationalUnitSourceId() const { return this->organizationalUnitSourceId_ != nullptr;};
      void deleteOrganizationalUnitSourceId() { this->organizationalUnitSourceId_ = nullptr;};
      inline string getOrganizationalUnitSourceId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitSourceId_, "") };
      inline OrganizationalUnit& setOrganizationalUnitSourceId(string organizationalUnitSourceId) { DARABONBA_PTR_SET_VALUE(organizationalUnitSourceId_, organizationalUnitSourceId) };


      // organizationalUnitSourceType Field Functions 
      bool hasOrganizationalUnitSourceType() const { return this->organizationalUnitSourceType_ != nullptr;};
      void deleteOrganizationalUnitSourceType() { this->organizationalUnitSourceType_ = nullptr;};
      inline string getOrganizationalUnitSourceType() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitSourceType_, "") };
      inline OrganizationalUnit& setOrganizationalUnitSourceType(string organizationalUnitSourceType) { DARABONBA_PTR_SET_VALUE(organizationalUnitSourceType_, organizationalUnitSourceType) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline OrganizationalUnit& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline OrganizationalUnit& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the organizational unit was created, in Unix timestamp format, in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // Description of the organizational unit.
      shared_ptr<string> description_ {};
      // Instance ID.
      shared_ptr<string> instanceId_ {};
      // Indicates whether the organizational unit is a leaf node. A value of true indicates that the organizational unit has no child nodes, and a value of false indicates that the organizational unit has child nodes.
      shared_ptr<bool> leaf_ {};
      // Organizational unit external ID, used for mapping between external data and IDaaS organizational units. The default value is the IDaaS organizational unit ID.
      // 
      // Note: The external ID is unique within the same source type and source ID.
      shared_ptr<string> organizationalUnitExternalId_ {};
      // Organizational unit ID.
      shared_ptr<string> organizationalUnitId_ {};
      // Organizational unit name.
      shared_ptr<string> organizationalUnitName_ {};
      // Organizational unit source ID.
      // 
      // The default value for the self-built type is the instance ID. For other types, the value corresponds to the enterprise ID of the respective source. For example, the DingTalk source corresponds to the corpId of the DingTalk enterprise.
      shared_ptr<string> organizationalUnitSourceId_ {};
      // Account source type. Valid values:
      // - build_in: self-built.
      // - ding_talk: imported from DingTalk.
      // - ad: imported from AD.
      // - ldap: imported from LDAP.
      // - we_com: imported from WeCom.
      shared_ptr<string> organizationalUnitSourceType_ {};
      // Parent organizational unit ID.
      shared_ptr<string> parentId_ {};
      // The time when the organizational unit was last updated, in Unix timestamp format, in milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->organizationalUnit_ == nullptr
        && this->requestId_ == nullptr; };
    // organizationalUnit Field Functions 
    bool hasOrganizationalUnit() const { return this->organizationalUnit_ != nullptr;};
    void deleteOrganizationalUnit() { this->organizationalUnit_ = nullptr;};
    inline const GetOrganizationalUnitResponseBody::OrganizationalUnit & getOrganizationalUnit() const { DARABONBA_PTR_GET_CONST(organizationalUnit_, GetOrganizationalUnitResponseBody::OrganizationalUnit) };
    inline GetOrganizationalUnitResponseBody::OrganizationalUnit getOrganizationalUnit() { DARABONBA_PTR_GET(organizationalUnit_, GetOrganizationalUnitResponseBody::OrganizationalUnit) };
    inline GetOrganizationalUnitResponseBody& setOrganizationalUnit(const GetOrganizationalUnitResponseBody::OrganizationalUnit & organizationalUnit) { DARABONBA_PTR_SET_VALUE(organizationalUnit_, organizationalUnit) };
    inline GetOrganizationalUnitResponseBody& setOrganizationalUnit(GetOrganizationalUnitResponseBody::OrganizationalUnit && organizationalUnit) { DARABONBA_PTR_SET_RVALUE(organizationalUnit_, organizationalUnit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOrganizationalUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Organizational unit data object.
    shared_ptr<GetOrganizationalUnitResponseBody::OrganizationalUnit> organizationalUnit_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
