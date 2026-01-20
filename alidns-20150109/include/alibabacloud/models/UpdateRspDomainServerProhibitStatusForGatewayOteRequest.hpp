// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERPROHIBITSTATUSFORGATEWAYOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSERVERPROHIBITSTATUSFORGATEWAYOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainServerProhibitStatusForGatewayOteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainServerProhibitStatusForGatewayOteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddStatusList, addStatusList_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeleteStatusList, deleteStatusList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainServerProhibitStatusForGatewayOteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddStatusList, addStatusList_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeleteStatusList, deleteStatusList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    UpdateRspDomainServerProhibitStatusForGatewayOteRequest() = default ;
    UpdateRspDomainServerProhibitStatusForGatewayOteRequest(const UpdateRspDomainServerProhibitStatusForGatewayOteRequest &) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayOteRequest(UpdateRspDomainServerProhibitStatusForGatewayOteRequest &&) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayOteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainServerProhibitStatusForGatewayOteRequest() = default ;
    UpdateRspDomainServerProhibitStatusForGatewayOteRequest& operator=(const UpdateRspDomainServerProhibitStatusForGatewayOteRequest &) = default ;
    UpdateRspDomainServerProhibitStatusForGatewayOteRequest& operator=(UpdateRspDomainServerProhibitStatusForGatewayOteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusMsg, statusMsg_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusMsg, statusMsg_);
      };
      DeleteStatusList() = default ;
      DeleteStatusList(const DeleteStatusList &) = default ;
      DeleteStatusList(DeleteStatusList &&) = default ;
      DeleteStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteStatusList() = default ;
      DeleteStatusList& operator=(const DeleteStatusList &) = default ;
      DeleteStatusList& operator=(DeleteStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->statusMsg_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DeleteStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMsg Field Functions 
      bool hasStatusMsg() const { return this->statusMsg_ != nullptr;};
      void deleteStatusMsg() { this->statusMsg_ = nullptr;};
      inline string getStatusMsg() const { DARABONBA_PTR_GET_DEFAULT(statusMsg_, "") };
      inline DeleteStatusList& setStatusMsg(string statusMsg) { DARABONBA_PTR_SET_VALUE(statusMsg_, statusMsg) };


    protected:
      shared_ptr<string> status_ {};
      shared_ptr<string> statusMsg_ {};
    };

    class AddStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusMsg, statusMsg_);
      };
      friend void from_json(const Darabonba::Json& j, AddStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusMsg, statusMsg_);
      };
      AddStatusList() = default ;
      AddStatusList(const AddStatusList &) = default ;
      AddStatusList(AddStatusList &&) = default ;
      AddStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddStatusList() = default ;
      AddStatusList& operator=(const AddStatusList &) = default ;
      AddStatusList& operator=(AddStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->statusMsg_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AddStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMsg Field Functions 
      bool hasStatusMsg() const { return this->statusMsg_ != nullptr;};
      void deleteStatusMsg() { this->statusMsg_ = nullptr;};
      inline string getStatusMsg() const { DARABONBA_PTR_GET_DEFAULT(statusMsg_, "") };
      inline AddStatusList& setStatusMsg(string statusMsg) { DARABONBA_PTR_SET_VALUE(statusMsg_, statusMsg) };


    protected:
      shared_ptr<string> status_ {};
      shared_ptr<string> statusMsg_ {};
    };

    virtual bool empty() const override { return this->addStatusList_ == nullptr
        && this->clientToken_ == nullptr && this->deleteStatusList_ == nullptr && this->domainName_ == nullptr; };
    // addStatusList Field Functions 
    bool hasAddStatusList() const { return this->addStatusList_ != nullptr;};
    void deleteAddStatusList() { this->addStatusList_ = nullptr;};
    inline const vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::AddStatusList> & getAddStatusList() const { DARABONBA_PTR_GET_CONST(addStatusList_, vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::AddStatusList>) };
    inline vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::AddStatusList> getAddStatusList() { DARABONBA_PTR_GET(addStatusList_, vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::AddStatusList>) };
    inline UpdateRspDomainServerProhibitStatusForGatewayOteRequest& setAddStatusList(const vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::AddStatusList> & addStatusList) { DARABONBA_PTR_SET_VALUE(addStatusList_, addStatusList) };
    inline UpdateRspDomainServerProhibitStatusForGatewayOteRequest& setAddStatusList(vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::AddStatusList> && addStatusList) { DARABONBA_PTR_SET_RVALUE(addStatusList_, addStatusList) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRspDomainServerProhibitStatusForGatewayOteRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deleteStatusList Field Functions 
    bool hasDeleteStatusList() const { return this->deleteStatusList_ != nullptr;};
    void deleteDeleteStatusList() { this->deleteStatusList_ = nullptr;};
    inline const vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::DeleteStatusList> & getDeleteStatusList() const { DARABONBA_PTR_GET_CONST(deleteStatusList_, vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::DeleteStatusList>) };
    inline vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::DeleteStatusList> getDeleteStatusList() { DARABONBA_PTR_GET(deleteStatusList_, vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::DeleteStatusList>) };
    inline UpdateRspDomainServerProhibitStatusForGatewayOteRequest& setDeleteStatusList(const vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::DeleteStatusList> & deleteStatusList) { DARABONBA_PTR_SET_VALUE(deleteStatusList_, deleteStatusList) };
    inline UpdateRspDomainServerProhibitStatusForGatewayOteRequest& setDeleteStatusList(vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::DeleteStatusList> && deleteStatusList) { DARABONBA_PTR_SET_RVALUE(deleteStatusList_, deleteStatusList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateRspDomainServerProhibitStatusForGatewayOteRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    shared_ptr<vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::AddStatusList>> addStatusList_ {};
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<UpdateRspDomainServerProhibitStatusForGatewayOteRequest::DeleteStatusList>> deleteStatusList_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
