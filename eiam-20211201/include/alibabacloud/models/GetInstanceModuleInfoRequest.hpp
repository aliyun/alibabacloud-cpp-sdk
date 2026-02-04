// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMODULEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMODULEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceModuleInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceModuleInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleKey, moduleKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceModuleInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleKey, moduleKey_);
    };
    GetInstanceModuleInfoRequest() = default ;
    GetInstanceModuleInfoRequest(const GetInstanceModuleInfoRequest &) = default ;
    GetInstanceModuleInfoRequest(GetInstanceModuleInfoRequest &&) = default ;
    GetInstanceModuleInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceModuleInfoRequest() = default ;
    GetInstanceModuleInfoRequest& operator=(const GetInstanceModuleInfoRequest &) = default ;
    GetInstanceModuleInfoRequest& operator=(GetInstanceModuleInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->moduleKey_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceModuleInfoRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleKey Field Functions 
    bool hasModuleKey() const { return this->moduleKey_ != nullptr;};
    void deleteModuleKey() { this->moduleKey_ = nullptr;};
    inline string getModuleKey() const { DARABONBA_PTR_GET_DEFAULT(moduleKey_, "") };
    inline GetInstanceModuleInfoRequest& setModuleKey(string moduleKey) { DARABONBA_PTR_SET_VALUE(moduleKey_, moduleKey) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 一级模块标识，必填
    // 
    // This parameter is required.
    shared_ptr<string> moduleKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
