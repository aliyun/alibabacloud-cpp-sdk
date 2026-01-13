// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYFORMALSERVICECMD_HPP_
#define ALIBABACLOUD_MODELS_APPLYFORMALSERVICECMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class ApplyFormalServiceCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyFormalServiceCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(accountName, accountName_);
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(applyServiceInfos, applyServiceInfos_);
      DARABONBA_PTR_TO_JSON(applyType, applyType_);
      DARABONBA_PTR_TO_JSON(contactName, contactName_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(qps, qps_);
      DARABONBA_PTR_TO_JSON(sceneDesc, sceneDesc_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyFormalServiceCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(accountName, accountName_);
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(applyServiceInfos, applyServiceInfos_);
      DARABONBA_PTR_FROM_JSON(applyType, applyType_);
      DARABONBA_PTR_FROM_JSON(contactName, contactName_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(qps, qps_);
      DARABONBA_PTR_FROM_JSON(sceneDesc, sceneDesc_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
    };
    ApplyFormalServiceCmd() = default ;
    ApplyFormalServiceCmd(const ApplyFormalServiceCmd &) = default ;
    ApplyFormalServiceCmd(ApplyFormalServiceCmd &&) = default ;
    ApplyFormalServiceCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyFormalServiceCmd() = default ;
    ApplyFormalServiceCmd& operator=(const ApplyFormalServiceCmd &) = default ;
    ApplyFormalServiceCmd& operator=(ApplyFormalServiceCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->address_ == nullptr && this->applyServiceInfos_ == nullptr && this->applyType_ == nullptr && this->contactName_ == nullptr
        && this->instanceId_ == nullptr && this->phone_ == nullptr && this->productName_ == nullptr && this->qps_ == nullptr && this->sceneDesc_ == nullptr
        && this->serviceType_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ApplyFormalServiceCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ApplyFormalServiceCmd& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ApplyFormalServiceCmd& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // applyServiceInfos Field Functions 
    bool hasApplyServiceInfos() const { return this->applyServiceInfos_ != nullptr;};
    void deleteApplyServiceInfos() { this->applyServiceInfos_ = nullptr;};
    inline const vector<Darabonba::Json> & getApplyServiceInfos() const { DARABONBA_PTR_GET_CONST(applyServiceInfos_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getApplyServiceInfos() { DARABONBA_PTR_GET(applyServiceInfos_, vector<Darabonba::Json>) };
    inline ApplyFormalServiceCmd& setApplyServiceInfos(const vector<Darabonba::Json> & applyServiceInfos) { DARABONBA_PTR_SET_VALUE(applyServiceInfos_, applyServiceInfos) };
    inline ApplyFormalServiceCmd& setApplyServiceInfos(vector<Darabonba::Json> && applyServiceInfos) { DARABONBA_PTR_SET_RVALUE(applyServiceInfos_, applyServiceInfos) };


    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline string getApplyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
    inline ApplyFormalServiceCmd& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline ApplyFormalServiceCmd& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ApplyFormalServiceCmd& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ApplyFormalServiceCmd& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ApplyFormalServiceCmd& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int32_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0) };
    inline ApplyFormalServiceCmd& setQps(int32_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // sceneDesc Field Functions 
    bool hasSceneDesc() const { return this->sceneDesc_ != nullptr;};
    void deleteSceneDesc() { this->sceneDesc_ = nullptr;};
    inline string getSceneDesc() const { DARABONBA_PTR_GET_DEFAULT(sceneDesc_, "") };
    inline ApplyFormalServiceCmd& setSceneDesc(string sceneDesc) { DARABONBA_PTR_SET_VALUE(sceneDesc_, sceneDesc) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ApplyFormalServiceCmd& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> accountName_ {};
    shared_ptr<string> address_ {};
    shared_ptr<vector<Darabonba::Json>> applyServiceInfos_ {};
    shared_ptr<string> applyType_ {};
    shared_ptr<string> contactName_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> productName_ {};
    shared_ptr<int32_t> qps_ {};
    shared_ptr<string> sceneDesc_ {};
    shared_ptr<string> serviceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
