// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFORWARDENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFORWARDENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateForwardEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateForwardEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_TO_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateForwardEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_FROM_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateForwardEntryRequest() = default ;
    CreateForwardEntryRequest(const CreateForwardEntryRequest &) = default ;
    CreateForwardEntryRequest(CreateForwardEntryRequest &&) = default ;
    CreateForwardEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateForwardEntryRequest() = default ;
    CreateForwardEntryRequest& operator=(const CreateForwardEntryRequest &) = default ;
    CreateForwardEntryRequest& operator=(CreateForwardEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalIp_ == nullptr
        && this->externalPort_ == nullptr && this->forwardEntryName_ == nullptr && this->forwardTableId_ == nullptr && this->internalIp_ == nullptr && this->internalPort_ == nullptr
        && this->ipProtocol_ == nullptr && this->regionId_ == nullptr; };
    // externalIp Field Functions 
    bool hasExternalIp() const { return this->externalIp_ != nullptr;};
    void deleteExternalIp() { this->externalIp_ = nullptr;};
    inline string getExternalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
    inline CreateForwardEntryRequest& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


    // externalPort Field Functions 
    bool hasExternalPort() const { return this->externalPort_ != nullptr;};
    void deleteExternalPort() { this->externalPort_ = nullptr;};
    inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
    inline CreateForwardEntryRequest& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


    // forwardEntryName Field Functions 
    bool hasForwardEntryName() const { return this->forwardEntryName_ != nullptr;};
    void deleteForwardEntryName() { this->forwardEntryName_ = nullptr;};
    inline string getForwardEntryName() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryName_, "") };
    inline CreateForwardEntryRequest& setForwardEntryName(string forwardEntryName) { DARABONBA_PTR_SET_VALUE(forwardEntryName_, forwardEntryName) };


    // forwardTableId Field Functions 
    bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
    void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
    inline string getForwardTableId() const { DARABONBA_PTR_GET_DEFAULT(forwardTableId_, "") };
    inline CreateForwardEntryRequest& setForwardTableId(string forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string getInternalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline CreateForwardEntryRequest& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // internalPort Field Functions 
    bool hasInternalPort() const { return this->internalPort_ != nullptr;};
    void deleteInternalPort() { this->internalPort_ = nullptr;};
    inline string getInternalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
    inline CreateForwardEntryRequest& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline CreateForwardEntryRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateForwardEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> externalIp_ {};
    // This parameter is required.
    shared_ptr<string> externalPort_ {};
    shared_ptr<string> forwardEntryName_ {};
    // This parameter is required.
    shared_ptr<string> forwardTableId_ {};
    // This parameter is required.
    shared_ptr<string> internalIp_ {};
    // This parameter is required.
    shared_ptr<string> internalPort_ {};
    // This parameter is required.
    shared_ptr<string> ipProtocol_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
