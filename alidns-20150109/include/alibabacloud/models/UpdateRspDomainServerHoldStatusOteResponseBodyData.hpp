// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERHOLDSTATUSOTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERHOLDSTATUSOTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainServerHoldStatusOteResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainServerHoldStatusOteResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ServerHoldStatus, serverHoldStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainServerHoldStatusOteResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ServerHoldStatus, serverHoldStatus_);
    };
    UpdateRspDomainServerHoldStatusOteResponseBodyData() = default ;
    UpdateRspDomainServerHoldStatusOteResponseBodyData(const UpdateRspDomainServerHoldStatusOteResponseBodyData &) = default ;
    UpdateRspDomainServerHoldStatusOteResponseBodyData(UpdateRspDomainServerHoldStatusOteResponseBodyData &&) = default ;
    UpdateRspDomainServerHoldStatusOteResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainServerHoldStatusOteResponseBodyData() = default ;
    UpdateRspDomainServerHoldStatusOteResponseBodyData& operator=(const UpdateRspDomainServerHoldStatusOteResponseBodyData &) = default ;
    UpdateRspDomainServerHoldStatusOteResponseBodyData& operator=(UpdateRspDomainServerHoldStatusOteResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->serverHoldStatus_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateRspDomainServerHoldStatusOteResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // serverHoldStatus Field Functions 
    bool hasServerHoldStatus() const { return this->serverHoldStatus_ != nullptr;};
    void deleteServerHoldStatus() { this->serverHoldStatus_ = nullptr;};
    inline string serverHoldStatus() const { DARABONBA_PTR_GET_DEFAULT(serverHoldStatus_, "") };
    inline UpdateRspDomainServerHoldStatusOteResponseBodyData& setServerHoldStatus(string serverHoldStatus) { DARABONBA_PTR_SET_VALUE(serverHoldStatus_, serverHoldStatus) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> serverHoldStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
