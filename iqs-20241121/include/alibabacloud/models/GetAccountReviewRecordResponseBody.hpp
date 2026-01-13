// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTREVIEWRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTREVIEWRECORDRESPONSEBODY_HPP_
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
  class GetAccountReviewRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountReviewRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(aliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(applyType, applyType_);
      DARABONBA_PTR_TO_JSON(contactName, contactName_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(qps, qps_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sceneDesc, sceneDesc_);
      DARABONBA_PTR_TO_JSON(scopes, scopes_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountReviewRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(aliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(applyType, applyType_);
      DARABONBA_PTR_FROM_JSON(contactName, contactName_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(qps, qps_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sceneDesc, sceneDesc_);
      DARABONBA_PTR_FROM_JSON(scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
    };
    GetAccountReviewRecordResponseBody() = default ;
    GetAccountReviewRecordResponseBody(const GetAccountReviewRecordResponseBody &) = default ;
    GetAccountReviewRecordResponseBody(GetAccountReviewRecordResponseBody &&) = default ;
    GetAccountReviewRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountReviewRecordResponseBody() = default ;
    GetAccountReviewRecordResponseBody& operator=(const GetAccountReviewRecordResponseBody &) = default ;
    GetAccountReviewRecordResponseBody& operator=(GetAccountReviewRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->aliUid_ == nullptr && this->applyType_ == nullptr && this->contactName_ == nullptr && this->instanceId_ == nullptr && this->phone_ == nullptr
        && this->productName_ == nullptr && this->qps_ == nullptr && this->requestId_ == nullptr && this->sceneDesc_ == nullptr && this->scopes_ == nullptr
        && this->serviceType_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline GetAccountReviewRecordResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline GetAccountReviewRecordResponseBody& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline string getApplyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
    inline GetAccountReviewRecordResponseBody& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline GetAccountReviewRecordResponseBody& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAccountReviewRecordResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetAccountReviewRecordResponseBody& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline GetAccountReviewRecordResponseBody& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int32_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0) };
    inline GetAccountReviewRecordResponseBody& setQps(int32_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountReviewRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneDesc Field Functions 
    bool hasSceneDesc() const { return this->sceneDesc_ != nullptr;};
    void deleteSceneDesc() { this->sceneDesc_ = nullptr;};
    inline string getSceneDesc() const { DARABONBA_PTR_GET_DEFAULT(sceneDesc_, "") };
    inline GetAccountReviewRecordResponseBody& setSceneDesc(string sceneDesc) { DARABONBA_PTR_SET_VALUE(sceneDesc_, sceneDesc) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
    inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
    inline GetAccountReviewRecordResponseBody& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline GetAccountReviewRecordResponseBody& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetAccountReviewRecordResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> aliUid_ {};
    shared_ptr<string> applyType_ {};
    shared_ptr<string> contactName_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> productName_ {};
    shared_ptr<int32_t> qps_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sceneDesc_ {};
    shared_ptr<vector<string>> scopes_ {};
    shared_ptr<string> serviceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
