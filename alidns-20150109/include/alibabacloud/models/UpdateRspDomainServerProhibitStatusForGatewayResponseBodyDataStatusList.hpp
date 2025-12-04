// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERPROHIBITSTATUSFORGATEWAYRESPONSEBODYDATASTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERPROHIBITSTATUSFORGATEWAYRESPONSEBODYDATASTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMsg, statusMsg_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMsg, statusMsg_);
    };
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList() = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList(const UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList &) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList(UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList &&) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList() = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList& operator=(const UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList &) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList& operator=(UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->status_ == nullptr && return this->statusMsg_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMsg Field Functions 
    bool hasStatusMsg() const { return this->statusMsg_ != nullptr;};
    void deleteStatusMsg() { this->statusMsg_ = nullptr;};
    inline string statusMsg() const { DARABONBA_PTR_GET_DEFAULT(statusMsg_, "") };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList& setStatusMsg(string statusMsg) { DARABONBA_PTR_SET_VALUE(statusMsg_, statusMsg) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusMsg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
