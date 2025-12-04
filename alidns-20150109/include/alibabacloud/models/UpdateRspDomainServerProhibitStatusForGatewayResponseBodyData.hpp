// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERPROHIBITSTATUSFORGATEWAYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERPROHIBITSTATUSFORGATEWAYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData() = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData(const UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData &) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData(UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData &&) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData() = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData& operator=(const UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData &) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData& operator=(UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->statusList_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<Models::UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<Models::UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList>) };
    inline vector<Models::UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList> statusList() { DARABONBA_PTR_GET(statusList_, vector<Models::UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList>) };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData& setStatusList(const vector<Models::UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline UpdateRspDomainServerProhibitStatusForGatewayResponseBodyData& setStatusList(vector<Models::UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<vector<Models::UpdateRspDomainServerProhibitStatusForGatewayResponseBodyDataStatusList>> statusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
