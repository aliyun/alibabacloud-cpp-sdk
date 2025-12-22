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
        && return this->namespaceId_ == nullptr && return this->slsConfigs_ == nullptr && return this->slsLogEnvTags_ == nullptr; };
    // nameSpaceShortId Field Functions 
    bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
    void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
    inline string nameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
    inline UpdateNamespaceSlsConfigsRequest& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateNamespaceSlsConfigsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline string slsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
    inline UpdateNamespaceSlsConfigsRequest& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


    // slsLogEnvTags Field Functions 
    bool hasSlsLogEnvTags() const { return this->slsLogEnvTags_ != nullptr;};
    void deleteSlsLogEnvTags() { this->slsLogEnvTags_ = nullptr;};
    inline string slsLogEnvTags() const { DARABONBA_PTR_GET_DEFAULT(slsLogEnvTags_, "") };
    inline UpdateNamespaceSlsConfigsRequest& setSlsLogEnvTags(string slsLogEnvTags) { DARABONBA_PTR_SET_VALUE(slsLogEnvTags_, slsLogEnvTags) };


  protected:
    // The short ID of the namespace. No need to specify a region ID. We recommend configuring this parameter.
    std::shared_ptr<string> nameSpaceShortId_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The logging configurations of Simple Log Service.
    // 
    // *   `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`: Simple Log Service resources automatically created by Serverless App Engine (SAE) are used.
    // *   To use custom Simple Log Service resources, set this parameter to `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
    // 
    // Take note of the following subparameters:
    // 
    // *   **projectName**: the name of the Simple Log Service project.
    // *   **logDir**: the path in which logs are stored.
    // *   **logType**: the log type. **stdout** indicates the standard output (stdout) logs of the container. You can specify only one stdout value for this parameter. If not specified, file logs are collected.
    // *   **logstoreName**: the name of the Logstore in Simple Log Service.
    // *   **logtailName**: the name of the Logtail in Simple Log Service. If not specified, a new Logtail is created.
    // 
    // If logging configuration changes are not needed during job template deployment, specify **SlsConfigs** only in the first request. Omit this parameter in later requests. To stop using Simple Log Service, leave **SlsConfigs** empty.
    // 
    // > Projects automatically created by SAE for job templates are deleted when their corresponding job templates are deleted. Therefore, you should not select an existing SAE-created project for log collection.
    std::shared_ptr<string> slsConfigs_ = nullptr;
    std::shared_ptr<string> slsLogEnvTags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
