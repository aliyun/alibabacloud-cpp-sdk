// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERHOLDSTATUSOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERHOLDSTATUSOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainServerHoldStatusOteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainServerHoldStatusOteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(ServerHoldStatus, serverHoldStatus_);
      DARABONBA_PTR_TO_JSON(StatusMsg, statusMsg_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainServerHoldStatusOteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(ServerHoldStatus, serverHoldStatus_);
      DARABONBA_PTR_FROM_JSON(StatusMsg, statusMsg_);
    };
    UpdateRspDomainServerHoldStatusOteRequest() = default ;
    UpdateRspDomainServerHoldStatusOteRequest(const UpdateRspDomainServerHoldStatusOteRequest &) = default ;
    UpdateRspDomainServerHoldStatusOteRequest(UpdateRspDomainServerHoldStatusOteRequest &&) = default ;
    UpdateRspDomainServerHoldStatusOteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainServerHoldStatusOteRequest() = default ;
    UpdateRspDomainServerHoldStatusOteRequest& operator=(const UpdateRspDomainServerHoldStatusOteRequest &) = default ;
    UpdateRspDomainServerHoldStatusOteRequest& operator=(UpdateRspDomainServerHoldStatusOteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->domainName_ == nullptr && return this->operatorId_ == nullptr && return this->operatorType_ == nullptr && return this->serverHoldStatus_ == nullptr && return this->statusMsg_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRspDomainServerHoldStatusOteRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateRspDomainServerHoldStatusOteRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string operatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline UpdateRspDomainServerHoldStatusOteRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline UpdateRspDomainServerHoldStatusOteRequest& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // serverHoldStatus Field Functions 
    bool hasServerHoldStatus() const { return this->serverHoldStatus_ != nullptr;};
    void deleteServerHoldStatus() { this->serverHoldStatus_ = nullptr;};
    inline string serverHoldStatus() const { DARABONBA_PTR_GET_DEFAULT(serverHoldStatus_, "") };
    inline UpdateRspDomainServerHoldStatusOteRequest& setServerHoldStatus(string serverHoldStatus) { DARABONBA_PTR_SET_VALUE(serverHoldStatus_, serverHoldStatus) };


    // statusMsg Field Functions 
    bool hasStatusMsg() const { return this->statusMsg_ != nullptr;};
    void deleteStatusMsg() { this->statusMsg_ = nullptr;};
    inline string statusMsg() const { DARABONBA_PTR_GET_DEFAULT(statusMsg_, "") };
    inline UpdateRspDomainServerHoldStatusOteRequest& setStatusMsg(string statusMsg) { DARABONBA_PTR_SET_VALUE(statusMsg_, statusMsg) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operatorId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operatorType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serverHoldStatus_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> statusMsg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
