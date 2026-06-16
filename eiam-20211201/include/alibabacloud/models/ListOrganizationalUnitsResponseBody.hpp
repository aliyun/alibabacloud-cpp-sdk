// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListOrganizationalUnitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationalUnits, organizationalUnits_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationalUnits, organizationalUnits_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOrganizationalUnitsResponseBody() = default ;
    ListOrganizationalUnitsResponseBody(const ListOrganizationalUnitsResponseBody &) = default ;
    ListOrganizationalUnitsResponseBody(ListOrganizationalUnitsResponseBody &&) = default ;
    ListOrganizationalUnitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitsResponseBody() = default ;
    ListOrganizationalUnitsResponseBody& operator=(const ListOrganizationalUnitsResponseBody &) = default ;
    ListOrganizationalUnitsResponseBody& operator=(ListOrganizationalUnitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrganizationalUnits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrganizationalUnits& obj) { 
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
      friend void from_json(const Darabonba::Json& j, OrganizationalUnits& obj) { 
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
      OrganizationalUnits() = default ;
      OrganizationalUnits(const OrganizationalUnits &) = default ;
      OrganizationalUnits(OrganizationalUnits &&) = default ;
      OrganizationalUnits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrganizationalUnits() = default ;
      OrganizationalUnits& operator=(const OrganizationalUnits &) = default ;
      OrganizationalUnits& operator=(OrganizationalUnits &&) = default ;
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
      inline OrganizationalUnits& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline OrganizationalUnits& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline OrganizationalUnits& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // leaf Field Functions 
      bool hasLeaf() const { return this->leaf_ != nullptr;};
      void deleteLeaf() { this->leaf_ = nullptr;};
      inline bool getLeaf() const { DARABONBA_PTR_GET_DEFAULT(leaf_, false) };
      inline OrganizationalUnits& setLeaf(bool leaf) { DARABONBA_PTR_SET_VALUE(leaf_, leaf) };


      // organizationalUnitExternalId Field Functions 
      bool hasOrganizationalUnitExternalId() const { return this->organizationalUnitExternalId_ != nullptr;};
      void deleteOrganizationalUnitExternalId() { this->organizationalUnitExternalId_ = nullptr;};
      inline string getOrganizationalUnitExternalId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitExternalId_, "") };
      inline OrganizationalUnits& setOrganizationalUnitExternalId(string organizationalUnitExternalId) { DARABONBA_PTR_SET_VALUE(organizationalUnitExternalId_, organizationalUnitExternalId) };


      // organizationalUnitId Field Functions 
      bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
      void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
      inline string getOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
      inline OrganizationalUnits& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


      // organizationalUnitName Field Functions 
      bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
      void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
      inline string getOrganizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
      inline OrganizationalUnits& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


      // organizationalUnitSourceId Field Functions 
      bool hasOrganizationalUnitSourceId() const { return this->organizationalUnitSourceId_ != nullptr;};
      void deleteOrganizationalUnitSourceId() { this->organizationalUnitSourceId_ = nullptr;};
      inline string getOrganizationalUnitSourceId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitSourceId_, "") };
      inline OrganizationalUnits& setOrganizationalUnitSourceId(string organizationalUnitSourceId) { DARABONBA_PTR_SET_VALUE(organizationalUnitSourceId_, organizationalUnitSourceId) };


      // organizationalUnitSourceType Field Functions 
      bool hasOrganizationalUnitSourceType() const { return this->organizationalUnitSourceType_ != nullptr;};
      void deleteOrganizationalUnitSourceType() { this->organizationalUnitSourceType_ = nullptr;};
      inline string getOrganizationalUnitSourceType() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitSourceType_, "") };
      inline OrganizationalUnits& setOrganizationalUnitSourceType(string organizationalUnitSourceType) { DARABONBA_PTR_SET_VALUE(organizationalUnitSourceType_, organizationalUnitSourceType) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline OrganizationalUnits& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline OrganizationalUnits& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the organizational unit was created. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the organizational unit.
      shared_ptr<string> description_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // Indicates whether the organizational unit is a leaf node. A value of true indicates that the organizational unit has no child nodes. A value of false indicates that the organizational unit has child nodes.
      shared_ptr<bool> leaf_ {};
      // The external ID of the organizational unit. This ID is used to map the data of the organizational unit to the data of an external system. By default, the value of this parameter is the organizational unit ID.
      // 
      // Note: The external ID must be unique within the same source type and source ID.
      shared_ptr<string> organizationalUnitExternalId_ {};
      // The organizational unit ID.
      shared_ptr<string> organizationalUnitId_ {};
      // The name of the organizational unit.
      shared_ptr<string> organizationalUnitName_ {};
      // The source ID of the organizational unit.
      shared_ptr<string> organizationalUnitSourceId_ {};
      // The source type of the organizational unit. Valid values:
      // 
      // - build_in: The organizational unit is created in IDaaS.
      // - ding_talk: The organizational unit is imported from DingTalk.
      // - ad: The organizational unit is imported from Active Directory (AD).
      // - ldap: The organizational unit is imported from a Lightweight Directory Access Protocol (LDAP) directory.
      // - we_com: The organizational unit is imported from WeCom.
      shared_ptr<string> organizationalUnitSourceType_ {};
      // The ID of the parent organizational unit.
      shared_ptr<string> parentId_ {};
      // The time when the organizational unit was last updated. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->organizationalUnits_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // organizationalUnits Field Functions 
    bool hasOrganizationalUnits() const { return this->organizationalUnits_ != nullptr;};
    void deleteOrganizationalUnits() { this->organizationalUnits_ = nullptr;};
    inline const vector<ListOrganizationalUnitsResponseBody::OrganizationalUnits> & getOrganizationalUnits() const { DARABONBA_PTR_GET_CONST(organizationalUnits_, vector<ListOrganizationalUnitsResponseBody::OrganizationalUnits>) };
    inline vector<ListOrganizationalUnitsResponseBody::OrganizationalUnits> getOrganizationalUnits() { DARABONBA_PTR_GET(organizationalUnits_, vector<ListOrganizationalUnitsResponseBody::OrganizationalUnits>) };
    inline ListOrganizationalUnitsResponseBody& setOrganizationalUnits(const vector<ListOrganizationalUnitsResponseBody::OrganizationalUnits> & organizationalUnits) { DARABONBA_PTR_SET_VALUE(organizationalUnits_, organizationalUnits) };
    inline ListOrganizationalUnitsResponseBody& setOrganizationalUnits(vector<ListOrganizationalUnitsResponseBody::OrganizationalUnits> && organizationalUnits) { DARABONBA_PTR_SET_RVALUE(organizationalUnits_, organizationalUnits) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOrganizationalUnitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOrganizationalUnitsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of organizational units.
    shared_ptr<vector<ListOrganizationalUnitsResponseBody::OrganizationalUnits>> organizationalUnits_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that are returned. This value is the total number of matched entries. The maximum number of entries that can be returned in a single request is specified by PageSize.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
