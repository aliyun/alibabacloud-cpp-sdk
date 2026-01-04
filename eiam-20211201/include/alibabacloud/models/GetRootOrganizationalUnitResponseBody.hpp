// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROOTORGANIZATIONALUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROOTORGANIZATIONALUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetRootOrganizationalUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRootOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationalUnit, organizationalUnit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRootOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationalUnit, organizationalUnit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRootOrganizationalUnitResponseBody() = default ;
    GetRootOrganizationalUnitResponseBody(const GetRootOrganizationalUnitResponseBody &) = default ;
    GetRootOrganizationalUnitResponseBody(GetRootOrganizationalUnitResponseBody &&) = default ;
    GetRootOrganizationalUnitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRootOrganizationalUnitResponseBody() = default ;
    GetRootOrganizationalUnitResponseBody& operator=(const GetRootOrganizationalUnitResponseBody &) = default ;
    GetRootOrganizationalUnitResponseBody& operator=(GetRootOrganizationalUnitResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitName, organizationalUnitName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, OrganizationalUnit& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitName, organizationalUnitName_);
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
        && this->description_ == nullptr && this->instanceId_ == nullptr && this->organizationalUnitId_ == nullptr && this->organizationalUnitName_ == nullptr && this->updateTime_ == nullptr; };
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


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline OrganizationalUnit& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the organizational unit was created. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the organizational unit.
      shared_ptr<string> description_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The ID of the organizational unit.
      shared_ptr<string> organizationalUnitId_ {};
      // The name of the organization.
      shared_ptr<string> organizationalUnitName_ {};
      // The time when the organizational unit was last updated. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->organizationalUnit_ == nullptr
        && this->requestId_ == nullptr; };
    // organizationalUnit Field Functions 
    bool hasOrganizationalUnit() const { return this->organizationalUnit_ != nullptr;};
    void deleteOrganizationalUnit() { this->organizationalUnit_ = nullptr;};
    inline const GetRootOrganizationalUnitResponseBody::OrganizationalUnit & getOrganizationalUnit() const { DARABONBA_PTR_GET_CONST(organizationalUnit_, GetRootOrganizationalUnitResponseBody::OrganizationalUnit) };
    inline GetRootOrganizationalUnitResponseBody::OrganizationalUnit getOrganizationalUnit() { DARABONBA_PTR_GET(organizationalUnit_, GetRootOrganizationalUnitResponseBody::OrganizationalUnit) };
    inline GetRootOrganizationalUnitResponseBody& setOrganizationalUnit(const GetRootOrganizationalUnitResponseBody::OrganizationalUnit & organizationalUnit) { DARABONBA_PTR_SET_VALUE(organizationalUnit_, organizationalUnit) };
    inline GetRootOrganizationalUnitResponseBody& setOrganizationalUnit(GetRootOrganizationalUnitResponseBody::OrganizationalUnit && organizationalUnit) { DARABONBA_PTR_SET_RVALUE(organizationalUnit_, organizationalUnit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRootOrganizationalUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data object of the organizational unit.
    shared_ptr<GetRootOrganizationalUnitResponseBody::OrganizationalUnit> organizationalUnit_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
