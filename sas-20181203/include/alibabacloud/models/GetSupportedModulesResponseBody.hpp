// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPORTEDMODULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPORTEDMODULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSupportedModulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupportedModulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportedModuleResponse, supportedModuleResponse_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupportedModulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportedModuleResponse, supportedModuleResponse_);
    };
    GetSupportedModulesResponseBody() = default ;
    GetSupportedModulesResponseBody(const GetSupportedModulesResponseBody &) = default ;
    GetSupportedModulesResponseBody(GetSupportedModulesResponseBody &&) = default ;
    GetSupportedModulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupportedModulesResponseBody() = default ;
    GetSupportedModulesResponseBody& operator=(const GetSupportedModulesResponseBody &) = default ;
    GetSupportedModulesResponseBody& operator=(GetSupportedModulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupportedModuleResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportedModuleResponse& obj) { 
        DARABONBA_PTR_TO_JSON(SupportedModules, supportedModules_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, SupportedModuleResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportedModules, supportedModules_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      SupportedModuleResponse() = default ;
      SupportedModuleResponse(const SupportedModuleResponse &) = default ;
      SupportedModuleResponse(SupportedModuleResponse &&) = default ;
      SupportedModuleResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportedModuleResponse() = default ;
      SupportedModuleResponse& operator=(const SupportedModuleResponse &) = default ;
      SupportedModuleResponse& operator=(SupportedModuleResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportedModules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedModules& obj) { 
          DARABONBA_PTR_TO_JSON(Module, module_);
          DARABONBA_PTR_TO_JSON(ModuleDisp, moduleDisp_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedModules& obj) { 
          DARABONBA_PTR_FROM_JSON(Module, module_);
          DARABONBA_PTR_FROM_JSON(ModuleDisp, moduleDisp_);
        };
        SupportedModules() = default ;
        SupportedModules(const SupportedModules &) = default ;
        SupportedModules(SupportedModules &&) = default ;
        SupportedModules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedModules() = default ;
        SupportedModules& operator=(const SupportedModules &) = default ;
        SupportedModules& operator=(SupportedModules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->module_ == nullptr
        && this->moduleDisp_ == nullptr; };
        // module Field Functions 
        bool hasModule() const { return this->module_ != nullptr;};
        void deleteModule() { this->module_ = nullptr;};
        inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
        inline SupportedModules& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


        // moduleDisp Field Functions 
        bool hasModuleDisp() const { return this->moduleDisp_ != nullptr;};
        void deleteModuleDisp() { this->moduleDisp_ = nullptr;};
        inline string getModuleDisp() const { DARABONBA_PTR_GET_DEFAULT(moduleDisp_, "") };
        inline SupportedModules& setModuleDisp(string moduleDisp) { DARABONBA_PTR_SET_VALUE(moduleDisp_, moduleDisp) };


      protected:
        // The code of the module. Valid values:
        // 
        // *   **HOST**: host
        // *   **CSPM**: configuration assessment
        // *   **SIEM**: CloudSiem
        // *   **TRIAL**: log audit
        shared_ptr<string> module_ {};
        // The display name of the module.
        shared_ptr<string> moduleDisp_ {};
      };

      virtual bool empty() const override { return this->supportedModules_ == nullptr
        && this->vendor_ == nullptr; };
      // supportedModules Field Functions 
      bool hasSupportedModules() const { return this->supportedModules_ != nullptr;};
      void deleteSupportedModules() { this->supportedModules_ = nullptr;};
      inline const vector<SupportedModuleResponse::SupportedModules> & getSupportedModules() const { DARABONBA_PTR_GET_CONST(supportedModules_, vector<SupportedModuleResponse::SupportedModules>) };
      inline vector<SupportedModuleResponse::SupportedModules> getSupportedModules() { DARABONBA_PTR_GET(supportedModules_, vector<SupportedModuleResponse::SupportedModules>) };
      inline SupportedModuleResponse& setSupportedModules(const vector<SupportedModuleResponse::SupportedModules> & supportedModules) { DARABONBA_PTR_SET_VALUE(supportedModules_, supportedModules) };
      inline SupportedModuleResponse& setSupportedModules(vector<SupportedModuleResponse::SupportedModules> && supportedModules) { DARABONBA_PTR_SET_RVALUE(supportedModules_, supportedModules) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline SupportedModuleResponse& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // The modules supported by the cloud service provider.
      shared_ptr<vector<SupportedModuleResponse::SupportedModules>> supportedModules_ {};
      // The cloud service provider. Valid values:
      // 
      // *   **Tencent**: Tencent Cloud
      // *   **HUAWEICLOUD**:Huawei Cloud
      // *   **Azure**: Microsoft Azure
      // *   **AWS**: Amazon Web Services (AWS)
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->supportedModuleResponse_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupportedModulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportedModuleResponse Field Functions 
    bool hasSupportedModuleResponse() const { return this->supportedModuleResponse_ != nullptr;};
    void deleteSupportedModuleResponse() { this->supportedModuleResponse_ = nullptr;};
    inline const vector<GetSupportedModulesResponseBody::SupportedModuleResponse> & getSupportedModuleResponse() const { DARABONBA_PTR_GET_CONST(supportedModuleResponse_, vector<GetSupportedModulesResponseBody::SupportedModuleResponse>) };
    inline vector<GetSupportedModulesResponseBody::SupportedModuleResponse> getSupportedModuleResponse() { DARABONBA_PTR_GET(supportedModuleResponse_, vector<GetSupportedModulesResponseBody::SupportedModuleResponse>) };
    inline GetSupportedModulesResponseBody& setSupportedModuleResponse(const vector<GetSupportedModulesResponseBody::SupportedModuleResponse> & supportedModuleResponse) { DARABONBA_PTR_SET_VALUE(supportedModuleResponse_, supportedModuleResponse) };
    inline GetSupportedModulesResponseBody& setSupportedModuleResponse(vector<GetSupportedModulesResponseBody::SupportedModuleResponse> && supportedModuleResponse) { DARABONBA_PTR_SET_RVALUE(supportedModuleResponse_, supportedModuleResponse) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The supported modules. The module information is classified by cloud service provider.
    shared_ptr<vector<GetSupportedModulesResponseBody::SupportedModuleResponse>> supportedModuleResponse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
