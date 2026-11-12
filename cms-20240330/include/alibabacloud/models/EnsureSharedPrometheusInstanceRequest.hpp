// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENSURESHAREDPROMETHEUSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENSURESHAREDPROMETHEUSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EnsureSharedPrometheusInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnsureSharedPrometheusInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(shareScope, shareScope_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, EnsureSharedPrometheusInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(shareScope, shareScope_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    EnsureSharedPrometheusInstanceRequest() = default ;
    EnsureSharedPrometheusInstanceRequest(const EnsureSharedPrometheusInstanceRequest &) = default ;
    EnsureSharedPrometheusInstanceRequest(EnsureSharedPrometheusInstanceRequest &&) = default ;
    EnsureSharedPrometheusInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnsureSharedPrometheusInstanceRequest() = default ;
    EnsureSharedPrometheusInstanceRequest& operator=(const EnsureSharedPrometheusInstanceRequest &) = default ;
    EnsureSharedPrometheusInstanceRequest& operator=(EnsureSharedPrometheusInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunLang_ == nullptr
        && this->shareScope_ == nullptr && this->workspace_ == nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline EnsureSharedPrometheusInstanceRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // shareScope Field Functions 
    bool hasShareScope() const { return this->shareScope_ != nullptr;};
    void deleteShareScope() { this->shareScope_ = nullptr;};
    inline string getShareScope() const { DARABONBA_PTR_GET_DEFAULT(shareScope_, "") };
    inline EnsureSharedPrometheusInstanceRequest& setShareScope(string shareScope) { DARABONBA_PTR_SET_VALUE(shareScope_, shareScope) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline EnsureSharedPrometheusInstanceRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The language of the returned information. zh indicates Chinese, and en indicates English. Default value: zh.
    shared_ptr<string> aliyunLang_ {};
    // The share scope. Currently, only Workspace is supported, which indicates the shared Prometheus instance for the workspace in the requested region. Workspaces in the same region share the same instance, and no additional instances are created. Policy and Environment are not currently supported.
    // 
    // This parameter is required.
    shared_ptr<string> shareScope_ {};
    // The name of the workspace. If the workspace does not exist, a 404 error is returned.
    // 
    // This parameter is required.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
