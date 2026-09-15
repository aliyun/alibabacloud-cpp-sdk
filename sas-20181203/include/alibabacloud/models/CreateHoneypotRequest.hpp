// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotImageId, honeypotImageId_);
      DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_TO_JSON(HoneypotName, honeypotName_);
      DARABONBA_PTR_TO_JSON(Meta, meta_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotImageId, honeypotImageId_);
      DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_FROM_JSON(HoneypotName, honeypotName_);
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    CreateHoneypotRequest() = default ;
    CreateHoneypotRequest(const CreateHoneypotRequest &) = default ;
    CreateHoneypotRequest(CreateHoneypotRequest &&) = default ;
    CreateHoneypotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotRequest() = default ;
    CreateHoneypotRequest& operator=(const CreateHoneypotRequest &) = default ;
    CreateHoneypotRequest& operator=(CreateHoneypotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honeypotImageId_ == nullptr
        && this->honeypotImageName_ == nullptr && this->honeypotName_ == nullptr && this->meta_ == nullptr && this->nodeId_ == nullptr; };
    // honeypotImageId Field Functions 
    bool hasHoneypotImageId() const { return this->honeypotImageId_ != nullptr;};
    void deleteHoneypotImageId() { this->honeypotImageId_ = nullptr;};
    inline string getHoneypotImageId() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageId_, "") };
    inline CreateHoneypotRequest& setHoneypotImageId(string honeypotImageId) { DARABONBA_PTR_SET_VALUE(honeypotImageId_, honeypotImageId) };


    // honeypotImageName Field Functions 
    bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
    void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
    inline string getHoneypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
    inline CreateHoneypotRequest& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


    // honeypotName Field Functions 
    bool hasHoneypotName() const { return this->honeypotName_ != nullptr;};
    void deleteHoneypotName() { this->honeypotName_ = nullptr;};
    inline string getHoneypotName() const { DARABONBA_PTR_GET_DEFAULT(honeypotName_, "") };
    inline CreateHoneypotRequest& setHoneypotName(string honeypotName) { DARABONBA_PTR_SET_VALUE(honeypotName_, honeypotName) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string getMeta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline CreateHoneypotRequest& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateHoneypotRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The honeypot image ID.
    // > You can obtain this value from the **HoneypotImageId** field returned by the [ListAvailableHoneypot](~~ListAvailableHoneypot~~) operation.
    // 
    // This parameter is required.
    shared_ptr<string> honeypotImageId_ {};
    // The honeypot image name.
    // > You can obtain this value from the **HoneypotImageName** field returned by the [ListAvailableHoneypot](~~ListAvailableHoneypot~~) operation.
    // 
    // This parameter is required.
    shared_ptr<string> honeypotImageName_ {};
    // The custom name of the honeypot.
    // 
    // This parameter is required.
    shared_ptr<string> honeypotName_ {};
    // The custom configuration of the honeypot in JSON format. The following fields are included:
    // 
    // - **trojan_git**: The Git counter-intelligence method. Valid values:
    //     -   **zip**: Git source code package.
    //     -  **web**: .git folder leak.
    //     -  **close**: Shutdown.
    // - **trojan_git_addr**: The Git counter-intelligence endpoint.
    // - **trojan_git.zip**: The Git counter-intelligence trojan package.
    // - **burp**: The Burp counter-intelligence method. Valid values:
    //      - **open**: Enabled.
    //     - **close**: Shutdown.
    // - **portrait_option**: The tracing configuration. Valid values:
    //     - **false**: Shutdown.
    //     - **true**: Enabled.
    shared_ptr<string> meta_ {};
    // The ID of the honeypot management node.
    // > Call the [ListHoneypotNode](~~ListHoneypotNode~~) operation to obtain this value.
    // 
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
