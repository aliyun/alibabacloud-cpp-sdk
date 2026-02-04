// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCEMODULESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCEMODULESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CheckInstanceModuleStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceModuleStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceModuleStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckInstanceModuleStatusResponseBody() = default ;
    CheckInstanceModuleStatusResponseBody(const CheckInstanceModuleStatusResponseBody &) = default ;
    CheckInstanceModuleStatusResponseBody(CheckInstanceModuleStatusResponseBody &&) = default ;
    CheckInstanceModuleStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceModuleStatusResponseBody() = default ;
    CheckInstanceModuleStatusResponseBody& operator=(const CheckInstanceModuleStatusResponseBody &) = default ;
    CheckInstanceModuleStatusResponseBody& operator=(CheckInstanceModuleStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(ModuleStatus, moduleStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(ModuleStatus, moduleStatus_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->moduleStatus_ == nullptr; };
      // moduleStatus Field Functions 
      bool hasModuleStatus() const { return this->moduleStatus_ != nullptr;};
      void deleteModuleStatus() { this->moduleStatus_ = nullptr;};
      inline string getModuleStatus() const { DARABONBA_PTR_GET_DEFAULT(moduleStatus_, "") };
      inline Module& setModuleStatus(string moduleStatus) { DARABONBA_PTR_SET_VALUE(moduleStatus_, moduleStatus) };


    protected:
      // 模块状态
      shared_ptr<string> moduleStatus_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CheckInstanceModuleStatusResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CheckInstanceModuleStatusResponseBody::Module) };
    inline CheckInstanceModuleStatusResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CheckInstanceModuleStatusResponseBody::Module) };
    inline CheckInstanceModuleStatusResponseBody& setModule(const CheckInstanceModuleStatusResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CheckInstanceModuleStatusResponseBody& setModule(CheckInstanceModuleStatusResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckInstanceModuleStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CheckInstanceModuleStatusResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
