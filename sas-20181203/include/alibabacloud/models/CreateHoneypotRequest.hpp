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
        && return this->honeypotImageName_ == nullptr && return this->honeypotName_ == nullptr && return this->meta_ == nullptr && return this->nodeId_ == nullptr; };
    // honeypotImageId Field Functions 
    bool hasHoneypotImageId() const { return this->honeypotImageId_ != nullptr;};
    void deleteHoneypotImageId() { this->honeypotImageId_ = nullptr;};
    inline string honeypotImageId() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageId_, "") };
    inline CreateHoneypotRequest& setHoneypotImageId(string honeypotImageId) { DARABONBA_PTR_SET_VALUE(honeypotImageId_, honeypotImageId) };


    // honeypotImageName Field Functions 
    bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
    void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
    inline string honeypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
    inline CreateHoneypotRequest& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


    // honeypotName Field Functions 
    bool hasHoneypotName() const { return this->honeypotName_ != nullptr;};
    void deleteHoneypotName() { this->honeypotName_ = nullptr;};
    inline string honeypotName() const { DARABONBA_PTR_GET_DEFAULT(honeypotName_, "") };
    inline CreateHoneypotRequest& setHoneypotName(string honeypotName) { DARABONBA_PTR_SET_VALUE(honeypotName_, honeypotName) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string meta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline CreateHoneypotRequest& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateHoneypotRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The ID of the honeypot image.
    // 
    // > You can call the [ListAvailableHoneypot](~~ListAvailableHoneypot~~) operation to query the IDs of images from the **HoneypotImageId** response parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> honeypotImageId_ = nullptr;
    // The name of the honeypot image.
    // 
    // > You can call the [ListAvailableHoneypot](~~ListAvailableHoneypot~~) operation to query the names of images from the **HoneypotImageName** response parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> honeypotImageName_ = nullptr;
    // The custom name of the honeypot.
    // 
    // This parameter is required.
    std::shared_ptr<string> honeypotName_ = nullptr;
    // The custom configuration of the honeypot in the JSON format. The value contains the following fields:
    // 
    // *   **trojan_git**: Git-specific Defense. Valid values:
    // 
    //     *   **zip**: Git Source Code Package
    //     *   **web**: Git Directory Leak
    //     *   **close**: Disabled
    // 
    // *   **trojan_git_addr**: Git Trojan Address.
    // 
    // *   **trojan_git.zip**: Git Trojan.
    // 
    // *   **burp**: Burp-specific Defense. Valid values:
    // 
    //     *   **open**: Enable
    //     *   **close**: Disable
    // 
    // *   **portrait_option**: Source Tracing Configuration. Valid values:
    // 
    //     *   **false**: Disable
    //     *   **true**: Enable
    std::shared_ptr<string> meta_ = nullptr;
    // The ID of the management node.
    // 
    // > You can call the [ListHoneypotNode](~~ListHoneypotNode~~) operation to query the IDs of management nodes.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
