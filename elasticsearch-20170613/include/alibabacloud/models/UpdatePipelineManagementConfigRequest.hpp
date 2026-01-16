// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPIPELINEMANAGEMENTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPIPELINEMANAGEMENTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdatePipelineManagementConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePipelineManagementConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(esInstanceId, esInstanceId_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(pipelineIds, pipelineIds_);
      DARABONBA_PTR_TO_JSON(pipelineManagementType, pipelineManagementType_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePipelineManagementConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(esInstanceId, esInstanceId_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(pipelineIds, pipelineIds_);
      DARABONBA_PTR_FROM_JSON(pipelineManagementType, pipelineManagementType_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdatePipelineManagementConfigRequest() = default ;
    UpdatePipelineManagementConfigRequest(const UpdatePipelineManagementConfigRequest &) = default ;
    UpdatePipelineManagementConfigRequest(UpdatePipelineManagementConfigRequest &&) = default ;
    UpdatePipelineManagementConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePipelineManagementConfigRequest() = default ;
    UpdatePipelineManagementConfigRequest& operator=(const UpdatePipelineManagementConfigRequest &) = default ;
    UpdatePipelineManagementConfigRequest& operator=(UpdatePipelineManagementConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoints_ == nullptr
        && this->esInstanceId_ == nullptr && this->password_ == nullptr && this->pipelineIds_ == nullptr && this->pipelineManagementType_ == nullptr && this->userName_ == nullptr
        && this->clientToken_ == nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<string> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<string>) };
    inline vector<string> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<string>) };
    inline UpdatePipelineManagementConfigRequest& setEndpoints(const vector<string> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline UpdatePipelineManagementConfigRequest& setEndpoints(vector<string> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // esInstanceId Field Functions 
    bool hasEsInstanceId() const { return this->esInstanceId_ != nullptr;};
    void deleteEsInstanceId() { this->esInstanceId_ = nullptr;};
    inline string getEsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(esInstanceId_, "") };
    inline UpdatePipelineManagementConfigRequest& setEsInstanceId(string esInstanceId) { DARABONBA_PTR_SET_VALUE(esInstanceId_, esInstanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdatePipelineManagementConfigRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // pipelineIds Field Functions 
    bool hasPipelineIds() const { return this->pipelineIds_ != nullptr;};
    void deletePipelineIds() { this->pipelineIds_ = nullptr;};
    inline const vector<string> & getPipelineIds() const { DARABONBA_PTR_GET_CONST(pipelineIds_, vector<string>) };
    inline vector<string> getPipelineIds() { DARABONBA_PTR_GET(pipelineIds_, vector<string>) };
    inline UpdatePipelineManagementConfigRequest& setPipelineIds(const vector<string> & pipelineIds) { DARABONBA_PTR_SET_VALUE(pipelineIds_, pipelineIds) };
    inline UpdatePipelineManagementConfigRequest& setPipelineIds(vector<string> && pipelineIds) { DARABONBA_PTR_SET_RVALUE(pipelineIds_, pipelineIds) };


    // pipelineManagementType Field Functions 
    bool hasPipelineManagementType() const { return this->pipelineManagementType_ != nullptr;};
    void deletePipelineManagementType() { this->pipelineManagementType_ = nullptr;};
    inline string getPipelineManagementType() const { DARABONBA_PTR_GET_DEFAULT(pipelineManagementType_, "") };
    inline UpdatePipelineManagementConfigRequest& setPipelineManagementType(string pipelineManagementType) { DARABONBA_PTR_SET_VALUE(pipelineManagementType_, pipelineManagementType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UpdatePipelineManagementConfigRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdatePipelineManagementConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<vector<string>> endpoints_ {};
    shared_ptr<string> esInstanceId_ {};
    shared_ptr<string> password_ {};
    shared_ptr<vector<string>> pipelineIds_ {};
    shared_ptr<string> pipelineManagementType_ {};
    shared_ptr<string> userName_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
