// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERSPDOMAINSTATUSOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERSPDOMAINSTATUSOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRspDomainStatusOteRequestAddStatusList.hpp>
#include <alibabacloud/models/UpdateRspDomainStatusOteRequestDeleteStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRspDomainStatusOteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRspDomainStatusOteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddStatusList, addStatusList_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeleteStatusList, deleteStatusList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRspDomainStatusOteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddStatusList, addStatusList_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeleteStatusList, deleteStatusList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
    };
    UpdateRspDomainStatusOteRequest() = default ;
    UpdateRspDomainStatusOteRequest(const UpdateRspDomainStatusOteRequest &) = default ;
    UpdateRspDomainStatusOteRequest(UpdateRspDomainStatusOteRequest &&) = default ;
    UpdateRspDomainStatusOteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRspDomainStatusOteRequest() = default ;
    UpdateRspDomainStatusOteRequest& operator=(const UpdateRspDomainStatusOteRequest &) = default ;
    UpdateRspDomainStatusOteRequest& operator=(UpdateRspDomainStatusOteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addStatusList_ == nullptr
        && return this->clientToken_ == nullptr && return this->deleteStatusList_ == nullptr && return this->domainName_ == nullptr && return this->operatorId_ == nullptr && return this->operatorType_ == nullptr; };
    // addStatusList Field Functions 
    bool hasAddStatusList() const { return this->addStatusList_ != nullptr;};
    void deleteAddStatusList() { this->addStatusList_ = nullptr;};
    inline const vector<UpdateRspDomainStatusOteRequestAddStatusList> & addStatusList() const { DARABONBA_PTR_GET_CONST(addStatusList_, vector<UpdateRspDomainStatusOteRequestAddStatusList>) };
    inline vector<UpdateRspDomainStatusOteRequestAddStatusList> addStatusList() { DARABONBA_PTR_GET(addStatusList_, vector<UpdateRspDomainStatusOteRequestAddStatusList>) };
    inline UpdateRspDomainStatusOteRequest& setAddStatusList(const vector<UpdateRspDomainStatusOteRequestAddStatusList> & addStatusList) { DARABONBA_PTR_SET_VALUE(addStatusList_, addStatusList) };
    inline UpdateRspDomainStatusOteRequest& setAddStatusList(vector<UpdateRspDomainStatusOteRequestAddStatusList> && addStatusList) { DARABONBA_PTR_SET_RVALUE(addStatusList_, addStatusList) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRspDomainStatusOteRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deleteStatusList Field Functions 
    bool hasDeleteStatusList() const { return this->deleteStatusList_ != nullptr;};
    void deleteDeleteStatusList() { this->deleteStatusList_ = nullptr;};
    inline const vector<UpdateRspDomainStatusOteRequestDeleteStatusList> & deleteStatusList() const { DARABONBA_PTR_GET_CONST(deleteStatusList_, vector<UpdateRspDomainStatusOteRequestDeleteStatusList>) };
    inline vector<UpdateRspDomainStatusOteRequestDeleteStatusList> deleteStatusList() { DARABONBA_PTR_GET(deleteStatusList_, vector<UpdateRspDomainStatusOteRequestDeleteStatusList>) };
    inline UpdateRspDomainStatusOteRequest& setDeleteStatusList(const vector<UpdateRspDomainStatusOteRequestDeleteStatusList> & deleteStatusList) { DARABONBA_PTR_SET_VALUE(deleteStatusList_, deleteStatusList) };
    inline UpdateRspDomainStatusOteRequest& setDeleteStatusList(vector<UpdateRspDomainStatusOteRequestDeleteStatusList> && deleteStatusList) { DARABONBA_PTR_SET_RVALUE(deleteStatusList_, deleteStatusList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateRspDomainStatusOteRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string operatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline UpdateRspDomainStatusOteRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline UpdateRspDomainStatusOteRequest& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


  protected:
    std::shared_ptr<vector<UpdateRspDomainStatusOteRequestAddStatusList>> addStatusList_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<vector<UpdateRspDomainStatusOteRequestDeleteStatusList>> deleteStatusList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operatorId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operatorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
