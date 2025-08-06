// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROOTORGANIZATIONALUNITRESPONSEBODYORGANIZATIONALUNIT_HPP_
#define ALIBABACLOUD_MODELS_GETROOTORGANIZATIONALUNITRESPONSEBODYORGANIZATIONALUNIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetRootOrganizationalUnitResponseBodyOrganizationalUnit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRootOrganizationalUnitResponseBodyOrganizationalUnit& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetRootOrganizationalUnitResponseBodyOrganizationalUnit& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetRootOrganizationalUnitResponseBodyOrganizationalUnit() = default ;
    GetRootOrganizationalUnitResponseBodyOrganizationalUnit(const GetRootOrganizationalUnitResponseBodyOrganizationalUnit &) = default ;
    GetRootOrganizationalUnitResponseBodyOrganizationalUnit(GetRootOrganizationalUnitResponseBodyOrganizationalUnit &&) = default ;
    GetRootOrganizationalUnitResponseBodyOrganizationalUnit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRootOrganizationalUnitResponseBodyOrganizationalUnit() = default ;
    GetRootOrganizationalUnitResponseBodyOrganizationalUnit& operator=(const GetRootOrganizationalUnitResponseBodyOrganizationalUnit &) = default ;
    GetRootOrganizationalUnitResponseBodyOrganizationalUnit& operator=(GetRootOrganizationalUnitResponseBodyOrganizationalUnit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->instanceId_ != nullptr && this->organizationalUnitId_ != nullptr && this->organizationalUnitName_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetRootOrganizationalUnitResponseBodyOrganizationalUnit& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRootOrganizationalUnitResponseBodyOrganizationalUnit& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRootOrganizationalUnitResponseBodyOrganizationalUnit& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string organizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline GetRootOrganizationalUnitResponseBodyOrganizationalUnit& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


    // organizationalUnitName Field Functions 
    bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
    void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
    inline string organizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
    inline GetRootOrganizationalUnitResponseBodyOrganizationalUnit& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetRootOrganizationalUnitResponseBodyOrganizationalUnit& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the organizational unit was created. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the organizational unit.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the organizational unit.
    std::shared_ptr<string> organizationalUnitId_ = nullptr;
    // The name of the organization.
    std::shared_ptr<string> organizationalUnitName_ = nullptr;
    // The time when the organizational unit was last updated. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
