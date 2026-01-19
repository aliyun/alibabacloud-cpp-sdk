// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetOrganizationalUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(organizationalUnitExternalId, organizationalUnitExternalId_);
      DARABONBA_PTR_TO_JSON(organizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_TO_JSON(organizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_TO_JSON(organizationalUnitSourceId, organizationalUnitSourceId_);
      DARABONBA_PTR_TO_JSON(organizationalUnitSourceType, organizationalUnitSourceType_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitExternalId, organizationalUnitExternalId_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitSourceId, organizationalUnitSourceId_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitSourceType, organizationalUnitSourceType_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
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
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->instanceId_ == nullptr && this->organizationalUnitExternalId_ == nullptr && this->organizationalUnitId_ == nullptr && this->organizationalUnitName_ == nullptr
        && this->organizationalUnitSourceId_ == nullptr && this->organizationalUnitSourceType_ == nullptr && this->parentId_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetOrganizationalUnitResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetOrganizationalUnitResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetOrganizationalUnitResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitExternalId Field Functions 
    bool hasOrganizationalUnitExternalId() const { return this->organizationalUnitExternalId_ != nullptr;};
    void deleteOrganizationalUnitExternalId() { this->organizationalUnitExternalId_ = nullptr;};
    inline string getOrganizationalUnitExternalId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitExternalId_, "") };
    inline GetOrganizationalUnitResponseBody& setOrganizationalUnitExternalId(string organizationalUnitExternalId) { DARABONBA_PTR_SET_VALUE(organizationalUnitExternalId_, organizationalUnitExternalId) };


    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string getOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline GetOrganizationalUnitResponseBody& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


    // organizationalUnitName Field Functions 
    bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
    void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
    inline string getOrganizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
    inline GetOrganizationalUnitResponseBody& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


    // organizationalUnitSourceId Field Functions 
    bool hasOrganizationalUnitSourceId() const { return this->organizationalUnitSourceId_ != nullptr;};
    void deleteOrganizationalUnitSourceId() { this->organizationalUnitSourceId_ = nullptr;};
    inline string getOrganizationalUnitSourceId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitSourceId_, "") };
    inline GetOrganizationalUnitResponseBody& setOrganizationalUnitSourceId(string organizationalUnitSourceId) { DARABONBA_PTR_SET_VALUE(organizationalUnitSourceId_, organizationalUnitSourceId) };


    // organizationalUnitSourceType Field Functions 
    bool hasOrganizationalUnitSourceType() const { return this->organizationalUnitSourceType_ != nullptr;};
    void deleteOrganizationalUnitSourceType() { this->organizationalUnitSourceType_ = nullptr;};
    inline string getOrganizationalUnitSourceType() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitSourceType_, "") };
    inline GetOrganizationalUnitResponseBody& setOrganizationalUnitSourceType(string organizationalUnitSourceType) { DARABONBA_PTR_SET_VALUE(organizationalUnitSourceType_, organizationalUnitSourceType) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline GetOrganizationalUnitResponseBody& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetOrganizationalUnitResponseBody& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the organizational unit was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTime_ {};
    // The description of the organizational unit.
    shared_ptr<string> description_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The external ID of the organizational unit.
    shared_ptr<string> organizationalUnitExternalId_ {};
    // The ID of the organizational unit.
    shared_ptr<string> organizationalUnitId_ {};
    // The name of the organizational unit.
    shared_ptr<string> organizationalUnitName_ {};
    // The source ID of the organizational unit.
    shared_ptr<string> organizationalUnitSourceId_ {};
    // The source type of the organizational unit. Valid values:
    // 
    // *   build_in: The organizational unit was created in Identity as a Service (IDaaS).
    // *   ding_talk: The organizational unit was imported from DingTalk.
    // *   ad: The organizational unit was imported from Microsoft Active Directory (AD).
    // *   ldap: The organizational unit was imported from a Lightweight Directory Access Protocol (LDAP) service.
    shared_ptr<string> organizationalUnitSourceType_ {};
    // The ID of the parent organizational unit.
    shared_ptr<string> parentId_ {};
    // The time when the organizational unit was last updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
