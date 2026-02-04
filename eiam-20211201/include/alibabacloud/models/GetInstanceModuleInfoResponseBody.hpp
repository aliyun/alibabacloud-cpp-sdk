// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMODULEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMODULEINFORESPONSEBODY_HPP_
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
  class GetInstanceModuleInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceModuleInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceModuleInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceModuleInfoResponseBody() = default ;
    GetInstanceModuleInfoResponseBody(const GetInstanceModuleInfoResponseBody &) = default ;
    GetInstanceModuleInfoResponseBody(GetInstanceModuleInfoResponseBody &&) = default ;
    GetInstanceModuleInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceModuleInfoResponseBody() = default ;
    GetInstanceModuleInfoResponseBody& operator=(const GetInstanceModuleInfoResponseBody &) = default ;
    GetInstanceModuleInfoResponseBody& operator=(GetInstanceModuleInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(Features, features_);
        DARABONBA_PTR_TO_JSON(ModuleKey, moduleKey_);
        DARABONBA_PTR_TO_JSON(ModuleStatus, moduleStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(Features, features_);
        DARABONBA_PTR_FROM_JSON(ModuleKey, moduleKey_);
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
      class Features : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Features& obj) { 
          DARABONBA_PTR_TO_JSON(FeatureKey, featureKey_);
          DARABONBA_PTR_TO_JSON(FeatureStatus, featureStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Features& obj) { 
          DARABONBA_PTR_FROM_JSON(FeatureKey, featureKey_);
          DARABONBA_PTR_FROM_JSON(FeatureStatus, featureStatus_);
        };
        Features() = default ;
        Features(const Features &) = default ;
        Features(Features &&) = default ;
        Features(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Features() = default ;
        Features& operator=(const Features &) = default ;
        Features& operator=(Features &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->featureKey_ == nullptr
        && this->featureStatus_ == nullptr; };
        // featureKey Field Functions 
        bool hasFeatureKey() const { return this->featureKey_ != nullptr;};
        void deleteFeatureKey() { this->featureKey_ = nullptr;};
        inline string getFeatureKey() const { DARABONBA_PTR_GET_DEFAULT(featureKey_, "") };
        inline Features& setFeatureKey(string featureKey) { DARABONBA_PTR_SET_VALUE(featureKey_, featureKey) };


        // featureStatus Field Functions 
        bool hasFeatureStatus() const { return this->featureStatus_ != nullptr;};
        void deleteFeatureStatus() { this->featureStatus_ = nullptr;};
        inline string getFeatureStatus() const { DARABONBA_PTR_GET_DEFAULT(featureStatus_, "") };
        inline Features& setFeatureStatus(string featureStatus) { DARABONBA_PTR_SET_VALUE(featureStatus_, featureStatus) };


      protected:
        // 二级模块标识
        shared_ptr<string> featureKey_ {};
        // 二级模块状态
        shared_ptr<string> featureStatus_ {};
      };

      virtual bool empty() const override { return this->features_ == nullptr
        && this->moduleKey_ == nullptr && this->moduleStatus_ == nullptr; };
      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline const vector<Module::Features> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<Module::Features>) };
      inline vector<Module::Features> getFeatures() { DARABONBA_PTR_GET(features_, vector<Module::Features>) };
      inline Module& setFeatures(const vector<Module::Features> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
      inline Module& setFeatures(vector<Module::Features> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


      // moduleKey Field Functions 
      bool hasModuleKey() const { return this->moduleKey_ != nullptr;};
      void deleteModuleKey() { this->moduleKey_ = nullptr;};
      inline string getModuleKey() const { DARABONBA_PTR_GET_DEFAULT(moduleKey_, "") };
      inline Module& setModuleKey(string moduleKey) { DARABONBA_PTR_SET_VALUE(moduleKey_, moduleKey) };


      // moduleStatus Field Functions 
      bool hasModuleStatus() const { return this->moduleStatus_ != nullptr;};
      void deleteModuleStatus() { this->moduleStatus_ = nullptr;};
      inline string getModuleStatus() const { DARABONBA_PTR_GET_DEFAULT(moduleStatus_, "") };
      inline Module& setModuleStatus(string moduleStatus) { DARABONBA_PTR_SET_VALUE(moduleStatus_, moduleStatus) };


    protected:
      // 二级模块信息
      shared_ptr<vector<Module::Features>> features_ {};
      // 模块状态
      shared_ptr<string> moduleKey_ {};
      // 一级模块状态
      shared_ptr<string> moduleStatus_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetInstanceModuleInfoResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetInstanceModuleInfoResponseBody::Module) };
    inline GetInstanceModuleInfoResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetInstanceModuleInfoResponseBody::Module) };
    inline GetInstanceModuleInfoResponseBody& setModule(const GetInstanceModuleInfoResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetInstanceModuleInfoResponseBody& setModule(GetInstanceModuleInfoResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceModuleInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetInstanceModuleInfoResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
