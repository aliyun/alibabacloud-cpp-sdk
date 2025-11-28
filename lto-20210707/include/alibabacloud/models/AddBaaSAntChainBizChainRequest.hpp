// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBAASANTCHAINBIZCHAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDBAASANTCHAINBIZCHAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class AddBaaSAntChainBizChainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddBaaSAntChainBizChainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaaSAntChainChainId, baaSAntChainChainId_);
      DARABONBA_PTR_TO_JSON(BaaSAntChainConsortiumId, baaSAntChainConsortiumId_);
      DARABONBA_PTR_TO_JSON(CaCert, caCert_);
      DARABONBA_PTR_TO_JSON(CaCertPassword, caCertPassword_);
      DARABONBA_PTR_TO_JSON(ClientCert, clientCert_);
      DARABONBA_PTR_TO_JSON(ClientKey, clientKey_);
      DARABONBA_PTR_TO_JSON(ClientKeyPassword, clientKeyPassword_);
      DARABONBA_PTR_TO_JSON(ContractTemplateIdList, contractTemplateIdList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeNameList, nodeNameList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(UserKey, userKey_);
      DARABONBA_PTR_TO_JSON(UserKeyPassword, userKeyPassword_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, AddBaaSAntChainBizChainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaaSAntChainChainId, baaSAntChainChainId_);
      DARABONBA_PTR_FROM_JSON(BaaSAntChainConsortiumId, baaSAntChainConsortiumId_);
      DARABONBA_PTR_FROM_JSON(CaCert, caCert_);
      DARABONBA_PTR_FROM_JSON(CaCertPassword, caCertPassword_);
      DARABONBA_PTR_FROM_JSON(ClientCert, clientCert_);
      DARABONBA_PTR_FROM_JSON(ClientKey, clientKey_);
      DARABONBA_PTR_FROM_JSON(ClientKeyPassword, clientKeyPassword_);
      DARABONBA_PTR_FROM_JSON(ContractTemplateIdList, contractTemplateIdList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeNameList, nodeNameList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(UserKey, userKey_);
      DARABONBA_PTR_FROM_JSON(UserKeyPassword, userKeyPassword_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    AddBaaSAntChainBizChainRequest() = default ;
    AddBaaSAntChainBizChainRequest(const AddBaaSAntChainBizChainRequest &) = default ;
    AddBaaSAntChainBizChainRequest(AddBaaSAntChainBizChainRequest &&) = default ;
    AddBaaSAntChainBizChainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddBaaSAntChainBizChainRequest() = default ;
    AddBaaSAntChainBizChainRequest& operator=(const AddBaaSAntChainBizChainRequest &) = default ;
    AddBaaSAntChainBizChainRequest& operator=(AddBaaSAntChainBizChainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baaSAntChainChainId_ == nullptr
        && return this->baaSAntChainConsortiumId_ == nullptr && return this->caCert_ == nullptr && return this->caCertPassword_ == nullptr && return this->clientCert_ == nullptr && return this->clientKey_ == nullptr
        && return this->clientKeyPassword_ == nullptr && return this->contractTemplateIdList_ == nullptr && return this->name_ == nullptr && return this->nodeNameList_ == nullptr && return this->regionId_ == nullptr
        && return this->remark_ == nullptr && return this->userKey_ == nullptr && return this->userKeyPassword_ == nullptr && return this->userName_ == nullptr; };
    // baaSAntChainChainId Field Functions 
    bool hasBaaSAntChainChainId() const { return this->baaSAntChainChainId_ != nullptr;};
    void deleteBaaSAntChainChainId() { this->baaSAntChainChainId_ = nullptr;};
    inline string baaSAntChainChainId() const { DARABONBA_PTR_GET_DEFAULT(baaSAntChainChainId_, "") };
    inline AddBaaSAntChainBizChainRequest& setBaaSAntChainChainId(string baaSAntChainChainId) { DARABONBA_PTR_SET_VALUE(baaSAntChainChainId_, baaSAntChainChainId) };


    // baaSAntChainConsortiumId Field Functions 
    bool hasBaaSAntChainConsortiumId() const { return this->baaSAntChainConsortiumId_ != nullptr;};
    void deleteBaaSAntChainConsortiumId() { this->baaSAntChainConsortiumId_ = nullptr;};
    inline string baaSAntChainConsortiumId() const { DARABONBA_PTR_GET_DEFAULT(baaSAntChainConsortiumId_, "") };
    inline AddBaaSAntChainBizChainRequest& setBaaSAntChainConsortiumId(string baaSAntChainConsortiumId) { DARABONBA_PTR_SET_VALUE(baaSAntChainConsortiumId_, baaSAntChainConsortiumId) };


    // caCert Field Functions 
    bool hasCaCert() const { return this->caCert_ != nullptr;};
    void deleteCaCert() { this->caCert_ = nullptr;};
    inline string caCert() const { DARABONBA_PTR_GET_DEFAULT(caCert_, "") };
    inline AddBaaSAntChainBizChainRequest& setCaCert(string caCert) { DARABONBA_PTR_SET_VALUE(caCert_, caCert) };


    // caCertPassword Field Functions 
    bool hasCaCertPassword() const { return this->caCertPassword_ != nullptr;};
    void deleteCaCertPassword() { this->caCertPassword_ = nullptr;};
    inline string caCertPassword() const { DARABONBA_PTR_GET_DEFAULT(caCertPassword_, "") };
    inline AddBaaSAntChainBizChainRequest& setCaCertPassword(string caCertPassword) { DARABONBA_PTR_SET_VALUE(caCertPassword_, caCertPassword) };


    // clientCert Field Functions 
    bool hasClientCert() const { return this->clientCert_ != nullptr;};
    void deleteClientCert() { this->clientCert_ = nullptr;};
    inline string clientCert() const { DARABONBA_PTR_GET_DEFAULT(clientCert_, "") };
    inline AddBaaSAntChainBizChainRequest& setClientCert(string clientCert) { DARABONBA_PTR_SET_VALUE(clientCert_, clientCert) };


    // clientKey Field Functions 
    bool hasClientKey() const { return this->clientKey_ != nullptr;};
    void deleteClientKey() { this->clientKey_ = nullptr;};
    inline string clientKey() const { DARABONBA_PTR_GET_DEFAULT(clientKey_, "") };
    inline AddBaaSAntChainBizChainRequest& setClientKey(string clientKey) { DARABONBA_PTR_SET_VALUE(clientKey_, clientKey) };


    // clientKeyPassword Field Functions 
    bool hasClientKeyPassword() const { return this->clientKeyPassword_ != nullptr;};
    void deleteClientKeyPassword() { this->clientKeyPassword_ = nullptr;};
    inline string clientKeyPassword() const { DARABONBA_PTR_GET_DEFAULT(clientKeyPassword_, "") };
    inline AddBaaSAntChainBizChainRequest& setClientKeyPassword(string clientKeyPassword) { DARABONBA_PTR_SET_VALUE(clientKeyPassword_, clientKeyPassword) };


    // contractTemplateIdList Field Functions 
    bool hasContractTemplateIdList() const { return this->contractTemplateIdList_ != nullptr;};
    void deleteContractTemplateIdList() { this->contractTemplateIdList_ = nullptr;};
    inline string contractTemplateIdList() const { DARABONBA_PTR_GET_DEFAULT(contractTemplateIdList_, "") };
    inline AddBaaSAntChainBizChainRequest& setContractTemplateIdList(string contractTemplateIdList) { DARABONBA_PTR_SET_VALUE(contractTemplateIdList_, contractTemplateIdList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddBaaSAntChainBizChainRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeNameList Field Functions 
    bool hasNodeNameList() const { return this->nodeNameList_ != nullptr;};
    void deleteNodeNameList() { this->nodeNameList_ = nullptr;};
    inline string nodeNameList() const { DARABONBA_PTR_GET_DEFAULT(nodeNameList_, "") };
    inline AddBaaSAntChainBizChainRequest& setNodeNameList(string nodeNameList) { DARABONBA_PTR_SET_VALUE(nodeNameList_, nodeNameList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddBaaSAntChainBizChainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddBaaSAntChainBizChainRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // userKey Field Functions 
    bool hasUserKey() const { return this->userKey_ != nullptr;};
    void deleteUserKey() { this->userKey_ = nullptr;};
    inline string userKey() const { DARABONBA_PTR_GET_DEFAULT(userKey_, "") };
    inline AddBaaSAntChainBizChainRequest& setUserKey(string userKey) { DARABONBA_PTR_SET_VALUE(userKey_, userKey) };


    // userKeyPassword Field Functions 
    bool hasUserKeyPassword() const { return this->userKeyPassword_ != nullptr;};
    void deleteUserKeyPassword() { this->userKeyPassword_ = nullptr;};
    inline string userKeyPassword() const { DARABONBA_PTR_GET_DEFAULT(userKeyPassword_, "") };
    inline AddBaaSAntChainBizChainRequest& setUserKeyPassword(string userKeyPassword) { DARABONBA_PTR_SET_VALUE(userKeyPassword_, userKeyPassword) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline AddBaaSAntChainBizChainRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baaSAntChainChainId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> baaSAntChainConsortiumId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> caCert_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> caCertPassword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientCert_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientKeyPassword_ = nullptr;
    std::shared_ptr<string> contractTemplateIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeNameList_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userKeyPassword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
