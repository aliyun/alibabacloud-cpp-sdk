// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERPROHIBITSTATUSFORGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERPROHIBITSTATUSFORGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRspDomainServerProhibitStatusForGatewayRequestAddStatusList.hpp>
#include <alibabacloud/models/UpdateRspDomainServerProhibitStatusForGatewayRequestDeleteStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainServerProhibitStatusForGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainServerProhibitStatusForGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddStatusList, addStatusList_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeleteStatusList, deleteStatusList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainServerProhibitStatusForGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddStatusList, addStatusList_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeleteStatusList, deleteStatusList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    UpdateRspDomainServerProhibitStatusForGatewayRequest() = default ;
    UpdateRspDomainServerProhibitStatusForGatewayRequest(const UpdateRspDomainServerProhibitStatusForGatewayRequest &) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayRequest(UpdateRspDomainServerProhibitStatusForGatewayRequest &&) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainServerProhibitStatusForGatewayRequest() = default ;
    UpdateRspDomainServerProhibitStatusForGatewayRequest& operator=(const UpdateRspDomainServerProhibitStatusForGatewayRequest &) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayRequest& operator=(UpdateRspDomainServerProhibitStatusForGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addStatusList_ == nullptr
        && return this->clientToken_ == nullptr && return this->deleteStatusList_ == nullptr && return this->domainName_ == nullptr; };
    // addStatusList Field Functions 
    bool hasAddStatusList() const { return this->addStatusList_ != nullptr;};
    void deleteAddStatusList() { this->addStatusList_ = nullptr;};
    inline const vector<UpdateRspDomainServerProhibitStatusForGatewayRequestAddStatusList> & addStatusList() const { DARABONBA_PTR_GET_CONST(addStatusList_, vector<UpdateRspDomainServerProhibitStatusForGatewayRequestAddStatusList>) };
    inline vector<UpdateRspDomainServerProhibitStatusForGatewayRequestAddStatusList> addStatusList() { DARABONBA_PTR_GET(addStatusList_, vector<UpdateRspDomainServerProhibitStatusForGatewayRequestAddStatusList>) };
    inline UpdateRspDomainServerProhibitStatusForGatewayRequest& setAddStatusList(const vector<UpdateRspDomainServerProhibitStatusForGatewayRequestAddStatusList> & addStatusList) { DARABONBA_PTR_SET_VALUE(addStatusList_, addStatusList) };
    inline UpdateRspDomainServerProhibitStatusForGatewayRequest& setAddStatusList(vector<UpdateRspDomainServerProhibitStatusForGatewayRequestAddStatusList> && addStatusList) { DARABONBA_PTR_SET_RVALUE(addStatusList_, addStatusList) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRspDomainServerProhibitStatusForGatewayRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deleteStatusList Field Functions 
    bool hasDeleteStatusList() const { return this->deleteStatusList_ != nullptr;};
    void deleteDeleteStatusList() { this->deleteStatusList_ = nullptr;};
    inline const vector<UpdateRspDomainServerProhibitStatusForGatewayRequestDeleteStatusList> & deleteStatusList() const { DARABONBA_PTR_GET_CONST(deleteStatusList_, vector<UpdateRspDomainServerProhibitStatusForGatewayRequestDeleteStatusList>) };
    inline vector<UpdateRspDomainServerProhibitStatusForGatewayRequestDeleteStatusList> deleteStatusList() { DARABONBA_PTR_GET(deleteStatusList_, vector<UpdateRspDomainServerProhibitStatusForGatewayRequestDeleteStatusList>) };
    inline UpdateRspDomainServerProhibitStatusForGatewayRequest& setDeleteStatusList(const vector<UpdateRspDomainServerProhibitStatusForGatewayRequestDeleteStatusList> & deleteStatusList) { DARABONBA_PTR_SET_VALUE(deleteStatusList_, deleteStatusList) };
    inline UpdateRspDomainServerProhibitStatusForGatewayRequest& setDeleteStatusList(vector<UpdateRspDomainServerProhibitStatusForGatewayRequestDeleteStatusList> && deleteStatusList) { DARABONBA_PTR_SET_RVALUE(deleteStatusList_, deleteStatusList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateRspDomainServerProhibitStatusForGatewayRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    std::shared_ptr<vector<UpdateRspDomainServerProhibitStatusForGatewayRequestAddStatusList>> addStatusList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<vector<UpdateRspDomainServerProhibitStatusForGatewayRequestDeleteStatusList>> deleteStatusList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
