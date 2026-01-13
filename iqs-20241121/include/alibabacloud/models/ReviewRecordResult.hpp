// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVIEWRECORDRESULT_HPP_
#define ALIBABACLOUD_MODELS_REVIEWRECORDRESULT_HPP_
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
  class ReviewRecordResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReviewRecordResult& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(applyType, applyType_);
      DARABONBA_PTR_TO_JSON(contactName, contactName_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(sceneDesc, sceneDesc_);
      DARABONBA_PTR_TO_JSON(scopes, scopes_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, ReviewRecordResult& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(applyType, applyType_);
      DARABONBA_PTR_FROM_JSON(contactName, contactName_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(sceneDesc, sceneDesc_);
      DARABONBA_PTR_FROM_JSON(scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
    };
    ReviewRecordResult() = default ;
    ReviewRecordResult(const ReviewRecordResult &) = default ;
    ReviewRecordResult(ReviewRecordResult &&) = default ;
    ReviewRecordResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReviewRecordResult() = default ;
    ReviewRecordResult& operator=(const ReviewRecordResult &) = default ;
    ReviewRecordResult& operator=(ReviewRecordResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->applyType_ == nullptr && this->contactName_ == nullptr && this->phone_ == nullptr && this->sceneDesc_ == nullptr && this->scopes_ == nullptr
        && this->serviceType_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ReviewRecordResult& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline string getApplyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
    inline ReviewRecordResult& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline ReviewRecordResult& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ReviewRecordResult& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // sceneDesc Field Functions 
    bool hasSceneDesc() const { return this->sceneDesc_ != nullptr;};
    void deleteSceneDesc() { this->sceneDesc_ = nullptr;};
    inline string getSceneDesc() const { DARABONBA_PTR_GET_DEFAULT(sceneDesc_, "") };
    inline ReviewRecordResult& setSceneDesc(string sceneDesc) { DARABONBA_PTR_SET_VALUE(sceneDesc_, sceneDesc) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
    inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
    inline ReviewRecordResult& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline ReviewRecordResult& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ReviewRecordResult& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> applyType_ {};
    shared_ptr<string> contactName_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> sceneDesc_ {};
    shared_ptr<vector<string>> scopes_ {};
    shared_ptr<string> serviceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
