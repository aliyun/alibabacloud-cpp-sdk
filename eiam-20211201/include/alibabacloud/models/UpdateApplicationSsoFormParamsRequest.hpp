// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSSOFORMPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSSOFORMPARAMSREQUEST_HPP_
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
  class UpdateApplicationSsoFormParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationSsoFormParamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationTemplateParams, applicationTemplateParams_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationSsoFormParamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateParams, applicationTemplateParams_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateApplicationSsoFormParamsRequest() = default ;
    UpdateApplicationSsoFormParamsRequest(const UpdateApplicationSsoFormParamsRequest &) = default ;
    UpdateApplicationSsoFormParamsRequest(UpdateApplicationSsoFormParamsRequest &&) = default ;
    UpdateApplicationSsoFormParamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationSsoFormParamsRequest() = default ;
    UpdateApplicationSsoFormParamsRequest& operator=(const UpdateApplicationSsoFormParamsRequest &) = default ;
    UpdateApplicationSsoFormParamsRequest& operator=(UpdateApplicationSsoFormParamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationTemplateParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationTemplateParams& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateParamName, templateParamName_);
        DARABONBA_PTR_TO_JSON(TemplateParamValue, templateParamValue_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationTemplateParams& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateParamName, templateParamName_);
        DARABONBA_PTR_FROM_JSON(TemplateParamValue, templateParamValue_);
      };
      ApplicationTemplateParams() = default ;
      ApplicationTemplateParams(const ApplicationTemplateParams &) = default ;
      ApplicationTemplateParams(ApplicationTemplateParams &&) = default ;
      ApplicationTemplateParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationTemplateParams() = default ;
      ApplicationTemplateParams& operator=(const ApplicationTemplateParams &) = default ;
      ApplicationTemplateParams& operator=(ApplicationTemplateParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->templateParamName_ == nullptr
        && this->templateParamValue_ == nullptr; };
      // templateParamName Field Functions 
      bool hasTemplateParamName() const { return this->templateParamName_ != nullptr;};
      void deleteTemplateParamName() { this->templateParamName_ = nullptr;};
      inline string getTemplateParamName() const { DARABONBA_PTR_GET_DEFAULT(templateParamName_, "") };
      inline ApplicationTemplateParams& setTemplateParamName(string templateParamName) { DARABONBA_PTR_SET_VALUE(templateParamName_, templateParamName) };


      // templateParamValue Field Functions 
      bool hasTemplateParamValue() const { return this->templateParamValue_ != nullptr;};
      void deleteTemplateParamValue() { this->templateParamValue_ = nullptr;};
      inline string getTemplateParamValue() const { DARABONBA_PTR_GET_DEFAULT(templateParamValue_, "") };
      inline ApplicationTemplateParams& setTemplateParamValue(string templateParamValue) { DARABONBA_PTR_SET_VALUE(templateParamValue_, templateParamValue) };


    protected:
      // 应用模板创建参数具体名称
      shared_ptr<string> templateParamName_ {};
      // 应用模板创建参数真实的取值
      shared_ptr<string> templateParamValue_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationTemplateParams_ == nullptr && this->instanceId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateApplicationSsoFormParamsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationTemplateParams Field Functions 
    bool hasApplicationTemplateParams() const { return this->applicationTemplateParams_ != nullptr;};
    void deleteApplicationTemplateParams() { this->applicationTemplateParams_ = nullptr;};
    inline const vector<UpdateApplicationSsoFormParamsRequest::ApplicationTemplateParams> & getApplicationTemplateParams() const { DARABONBA_PTR_GET_CONST(applicationTemplateParams_, vector<UpdateApplicationSsoFormParamsRequest::ApplicationTemplateParams>) };
    inline vector<UpdateApplicationSsoFormParamsRequest::ApplicationTemplateParams> getApplicationTemplateParams() { DARABONBA_PTR_GET(applicationTemplateParams_, vector<UpdateApplicationSsoFormParamsRequest::ApplicationTemplateParams>) };
    inline UpdateApplicationSsoFormParamsRequest& setApplicationTemplateParams(const vector<UpdateApplicationSsoFormParamsRequest::ApplicationTemplateParams> & applicationTemplateParams) { DARABONBA_PTR_SET_VALUE(applicationTemplateParams_, applicationTemplateParams) };
    inline UpdateApplicationSsoFormParamsRequest& setApplicationTemplateParams(vector<UpdateApplicationSsoFormParamsRequest::ApplicationTemplateParams> && applicationTemplateParams) { DARABONBA_PTR_SET_RVALUE(applicationTemplateParams_, applicationTemplateParams) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateApplicationSsoFormParamsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // IDaaS的应用主键id
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // 应用模板创建参数，应用创建来源为模板时才可以指定
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateApplicationSsoFormParamsRequest::ApplicationTemplateParams>> applicationTemplateParams_ {};
    // IDaaS EIAM的实例id
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
