// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITRESPONSEBODYORGANIZATIONALUNIT_HPP_
#define ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITRESPONSEBODYORGANIZATIONALUNIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetOrganizationalUnitResponseBodyOrganizationalUnit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrganizationalUnitResponseBodyOrganizationalUnit& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetOrganizationalUnitResponseBodyOrganizationalUnit& obj) { 
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
    GetOrganizationalUnitResponseBodyOrganizationalUnit() = default ;
    GetOrganizationalUnitResponseBodyOrganizationalUnit(const GetOrganizationalUnitResponseBodyOrganizationalUnit &) = default ;
    GetOrganizationalUnitResponseBodyOrganizationalUnit(GetOrganizationalUnitResponseBodyOrganizationalUnit &&) = default ;
    GetOrganizationalUnitResponseBodyOrganizationalUnit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrganizationalUnitResponseBodyOrganizationalUnit() = default ;
    GetOrganizationalUnitResponseBodyOrganizationalUnit& operator=(const GetOrganizationalUnitResponseBodyOrganizationalUnit &) = default ;
    GetOrganizationalUnitResponseBodyOrganizationalUnit& operator=(GetOrganizationalUnitResponseBodyOrganizationalUnit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->instanceId_ != nullptr && this->leaf_ != nullptr && this->organizationalUnitExternalId_ != nullptr && this->organizationalUnitId_ != nullptr
        && this->organizationalUnitName_ != nullptr && this->organizationalUnitSourceId_ != nullptr && this->organizationalUnitSourceType_ != nullptr && this->parentId_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // leaf Field Functions 
    bool hasLeaf() const { return this->leaf_ != nullptr;};
    void deleteLeaf() { this->leaf_ = nullptr;};
    inline bool leaf() const { DARABONBA_PTR_GET_DEFAULT(leaf_, false) };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit& setLeaf(bool leaf) { DARABONBA_PTR_SET_VALUE(leaf_, leaf) };


    // organizationalUnitExternalId Field Functions 
    bool hasOrganizationalUnitExternalId() const { return this->organizationalUnitExternalId_ != nullptr;};
    void deleteOrganizationalUnitExternalId() { this->organizationalUnitExternalId_ = nullptr;};
    inline string organizationalUnitExternalId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitExternalId_, "") };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit& setOrganizationalUnitExternalId(string organizationalUnitExternalId) { DARABONBA_PTR_SET_VALUE(organizationalUnitExternalId_, organizationalUnitExternalId) };


    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string organizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


    // organizationalUnitName Field Functions 
    bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
    void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
    inline string organizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


    // organizationalUnitSourceId Field Functions 
    bool hasOrganizationalUnitSourceId() const { return this->organizationalUnitSourceId_ != nullptr;};
    void deleteOrganizationalUnitSourceId() { this->organizationalUnitSourceId_ = nullptr;};
    inline string organizationalUnitSourceId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitSourceId_, "") };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit& setOrganizationalUnitSourceId(string organizationalUnitSourceId) { DARABONBA_PTR_SET_VALUE(organizationalUnitSourceId_, organizationalUnitSourceId) };


    // organizationalUnitSourceType Field Functions 
    bool hasOrganizationalUnitSourceType() const { return this->organizationalUnitSourceType_ != nullptr;};
    void deleteOrganizationalUnitSourceType() { this->organizationalUnitSourceType_ = nullptr;};
    inline string organizationalUnitSourceType() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitSourceType_, "") };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit& setOrganizationalUnitSourceType(string organizationalUnitSourceType) { DARABONBA_PTR_SET_VALUE(organizationalUnitSourceType_, organizationalUnitSourceType) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetOrganizationalUnitResponseBodyOrganizationalUnit& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the organizational unit was created. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the organizational unit.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the node is a leaf node.
    std::shared_ptr<bool> leaf_ = nullptr;
    // The external ID of the organizational unit. The external ID can be used by external data to map the data of the organizational unit in IDaaS EIAM. By default, the external ID is the organizational unit ID.
    // 
    // For organizational units with the same source type and source ID, each organizational unit has a unique external ID.
    std::shared_ptr<string> organizationalUnitExternalId_ = nullptr;
    // The ID of the organizational unit.
    std::shared_ptr<string> organizationalUnitId_ = nullptr;
    // The Name of the organizational unit.
    std::shared_ptr<string> organizationalUnitName_ = nullptr;
    // The source ID of the organizational unit.
    // 
    // If the organizational unit was created in IDaaS, its source ID is the ID of the IDaaS instance. If the organizational unit was imported, its source ID is the enterprise ID in the source. For example, if the organizational unit was imported from DingTalk, its source ID is the corpId value of the enterprise in DingTalk.
    std::shared_ptr<string> organizationalUnitSourceId_ = nullptr;
    // The source type of the organizational unit. Valid values:
    // 
    // *   build_in: The organizational unit was created in IDaaS.
    // *   ding_talk: The organizational unit was imported from DingTalk.
    // *   ad: The organizational unit was imported from Microsoft Active Directory (AD).
    // *   ldap: The organizational unit was imported from a Lightweight Directory Access Protocol (LDAP) service.
    std::shared_ptr<string> organizationalUnitSourceType_ = nullptr;
    // The ID of the parent organizational unit.
    std::shared_ptr<string> parentId_ = nullptr;
    // The time when the organizational unit was last updated. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
