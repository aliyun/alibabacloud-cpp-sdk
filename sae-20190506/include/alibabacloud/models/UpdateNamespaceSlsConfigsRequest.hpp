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
    // The short ID of the namespace. The region is not required. This parameter is recommended.
    shared_ptr<string> nameSpaceShortId_ {};
    // The ID of the namespace.
    shared_ptr<string> namespaceId_ {};
    // The configuration for collecting logs to Simple Log Service (SLS).
    // 
    // - To use SLS resources automatically created by Serverless App Engine (SAE): `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
    // - To use custom SLS resources: `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // The parameter settings are as follows:
    // 
    // - **projectName**: the name of the SLS project.  
    // - **logDir**: the log path.
    // - **logType**: the log type. **stdout** indicates container standard output logs. Only one stdout log can be set. If it is not set, file logs are collected.
    // - **logstoreName**: the name of the SLS Logstore.
    // - **logtailName**: the name of the SLS Logtail. If this parameter is not specified, a new Logtail is created.
    // 
    // If the SLS collection configuration remains unchanged during multiple deployments, you do not need to set this parameter (that is, the **SlsConfigs** field is not required in the request). If you no longer need the SLS collection feature, you must set the value of this field to an empty string (that is, set the **SlsConfigs** field to "") in the request.
    // 
    // > A project automatically created with a job template is deleted when the job template is deleted. Therefore, when you select an existing project, you cannot select a project automatically created by SAE.
    shared_ptr<string> slsConfigs_ {};
    // sls log tags
    shared_ptr<string> slsLogEnvTags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
