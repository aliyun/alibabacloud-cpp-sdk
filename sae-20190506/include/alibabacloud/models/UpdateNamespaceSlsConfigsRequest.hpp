// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENAMESPACESLSCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENAMESPACESLSCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateNamespaceSlsConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNamespaceSlsConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_TO_JSON(SlsLogEnvTags, slsLogEnvTags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNamespaceSlsConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_FROM_JSON(SlsLogEnvTags, slsLogEnvTags_);
    };
    UpdateNamespaceSlsConfigsRequest() = default ;
    UpdateNamespaceSlsConfigsRequest(const UpdateNamespaceSlsConfigsRequest &) = default ;
    UpdateNamespaceSlsConfigsRequest(UpdateNamespaceSlsConfigsRequest &&) = default ;
    UpdateNamespaceSlsConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNamespaceSlsConfigsRequest() = default ;
    UpdateNamespaceSlsConfigsRequest& operator=(const UpdateNamespaceSlsConfigsRequest &) = default ;
    UpdateNamespaceSlsConfigsRequest& operator=(UpdateNamespaceSlsConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nameSpaceShortId_ == nullptr
        && this->namespaceId_ == nullptr && this->slsConfigs_ == nullptr && this->slsLogEnvTags_ == nullptr; };
    // nameSpaceShortId Field Functions 
    bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
    void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
    inline string getNameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
    inline UpdateNamespaceSlsConfigsRequest& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateNamespaceSlsConfigsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string getSlsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline UpdateNamespaceSlsConfigsRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // slsLogEnvTags Field Functions 
    bool hasSlsLogEnvTags() const { return this->slsLogEnvTags_ != nullptr;};
    void deleteSlsLogEnvTags() { this->slsLogEnvTags_ = nullptr;};
    inline string getSlsLogEnvTags() const { DARABONBA_PTR_GET_DEFAULT(slsLogEnvTags_, "") };
    inline UpdateNamespaceSlsConfigsRequest& setSlsLogEnvTags(string slsLogEnvTags) { DARABONBA_PTR_SET_VALUE(slsLogEnvTags_, slsLogEnvTags) };


  protected:
    // The short ID of the namespace. You do not need to include the region. This parameter is recommended.
    shared_ptr<string> nameSpaceShortId_ {};
    // The ID of the namespace.
    shared_ptr<string> namespaceId_ {};
    // The configuration for collecting logs to SLS.
    // 
    // - To use an SLS resource that is automatically created by SAE: `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
    // 
    // - To use a custom SLS resource: `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // The parameters are described as follows:
    // 
    // - `projectName`: The name of the SLS project.
    // 
    // - `logDir`: The log path.
    // 
    // - `logType`: The log type. A value of `stdout` specifies container standard output logs. You can specify only one `stdout` configuration. If you do not set this parameter, file logs are collected.
    // 
    // - `logstoreName`: The name of the SLS logstore.
    // 
    // - `logtailName`: The name of the Logtail. If you do not specify this parameter, a new Logtail is created.
    // 
    // If the SLS configuration remains the same across deployments, you can omit this parameter. To disable log collection to SLS, set the value of `SlsConfigs` to an empty string ("").
    // 
    // > SAE automatically deletes a project when you delete the task template used to create it. Therefore, when you select an existing project, do not select a project that was automatically created by SAE.
    shared_ptr<string> slsConfigs_ {};
    // The SLS log tags.
    shared_ptr<string> slsLogEnvTags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
