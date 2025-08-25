// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTADMINSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMPORTADMINSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ImportAdminsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportAdminsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RamId, ramId_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportAdminsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RamId, ramId_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ImportAdminsResponseBodyData() = default ;
    ImportAdminsResponseBodyData(const ImportAdminsResponseBodyData &) = default ;
    ImportAdminsResponseBodyData(ImportAdminsResponseBodyData &&) = default ;
    ImportAdminsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportAdminsResponseBodyData() = default ;
    ImportAdminsResponseBodyData& operator=(const ImportAdminsResponseBodyData &) = default ;
    ImportAdminsResponseBodyData& operator=(ImportAdminsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extension_ != nullptr
        && this->instanceId_ != nullptr && this->ramId_ != nullptr && this->roleId_ != nullptr && this->userId_ != nullptr; };
    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline ImportAdminsResponseBodyData& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ImportAdminsResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ramId Field Functions 
    bool hasRamId() const { return this->ramId_ != nullptr;};
    void deleteRamId() { this->ramId_ = nullptr;};
    inline string ramId() const { DARABONBA_PTR_GET_DEFAULT(ramId_, "") };
    inline ImportAdminsResponseBodyData& setRamId(string ramId) { DARABONBA_PTR_SET_VALUE(ramId_, ramId) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline ImportAdminsResponseBodyData& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ImportAdminsResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> ramId_ = nullptr;
    std::shared_ptr<string> roleId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
