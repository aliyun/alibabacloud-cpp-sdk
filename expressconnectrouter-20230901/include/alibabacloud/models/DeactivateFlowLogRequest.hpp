// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEACTIVATEFLOWLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEACTIVATEFLOWLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DeactivateFlowLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeactivateFlowLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DeactivateFlowLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DeactivateFlowLogRequest() = default ;
    DeactivateFlowLogRequest(const DeactivateFlowLogRequest &) = default ;
    DeactivateFlowLogRequest(DeactivateFlowLogRequest &&) = default ;
    DeactivateFlowLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeactivateFlowLogRequest() = default ;
    DeactivateFlowLogRequest& operator=(const DeactivateFlowLogRequest &) = default ;
    DeactivateFlowLogRequest& operator=(DeactivateFlowLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->flowLogId_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeactivateFlowLogRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeactivateFlowLogRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DeactivateFlowLogRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // flowLogId Field Functions 
    bool hasFlowLogId() const { return this->flowLogId_ != nullptr;};
    void deleteFlowLogId() { this->flowLogId_ = nullptr;};
    inline string getFlowLogId() const { DARABONBA_PTR_GET_DEFAULT(flowLogId_, "") };
    inline DeactivateFlowLogRequest& setFlowLogId(string flowLogId) { DARABONBA_PTR_SET_VALUE(flowLogId_, flowLogId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DeactivateFlowLogRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the parameter value from your client to ensure that the value is unique among different requests. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether this is a dry run request. Valid values:
    // 
    // - **true**: Sends a check request and does not modify the resources.
    // 
    // - **false**: Sends a normal request. Default value.
    shared_ptr<bool> dryRun_ {};
    // The ID of the Express Connect Router (ECR) instance.
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The ID of the flow log instance.
    // 
    // This parameter is required.
    shared_ptr<string> flowLogId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
