// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTRANSFERCALLEEPOOLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETTRANSFERCALLEEPOOLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class SetTransferCalleePoolConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetTransferCalleePoolConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledRouteMode, calledRouteMode_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, SetTransferCalleePoolConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledRouteMode, calledRouteMode_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    SetTransferCalleePoolConfigRequest() = default ;
    SetTransferCalleePoolConfigRequest(const SetTransferCalleePoolConfigRequest &) = default ;
    SetTransferCalleePoolConfigRequest(SetTransferCalleePoolConfigRequest &&) = default ;
    SetTransferCalleePoolConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetTransferCalleePoolConfigRequest() = default ;
    SetTransferCalleePoolConfigRequest& operator=(const SetTransferCalleePoolConfigRequest &) = default ;
    SetTransferCalleePoolConfigRequest& operator=(SetTransferCalleePoolConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Details : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Details& obj) { 
        DARABONBA_PTR_TO_JSON(Called, called_);
        DARABONBA_PTR_TO_JSON(Caller, caller_);
      };
      friend void from_json(const Darabonba::Json& j, Details& obj) { 
        DARABONBA_PTR_FROM_JSON(Called, called_);
        DARABONBA_PTR_FROM_JSON(Caller, caller_);
      };
      Details() = default ;
      Details(const Details &) = default ;
      Details(Details &&) = default ;
      Details(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Details() = default ;
      Details& operator=(const Details &) = default ;
      Details& operator=(Details &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->called_ == nullptr
        && this->caller_ == nullptr; };
      // called Field Functions 
      bool hasCalled() const { return this->called_ != nullptr;};
      void deleteCalled() { this->called_ = nullptr;};
      inline string getCalled() const { DARABONBA_PTR_GET_DEFAULT(called_, "") };
      inline Details& setCalled(string called) { DARABONBA_PTR_SET_VALUE(called_, called) };


      // caller Field Functions 
      bool hasCaller() const { return this->caller_ != nullptr;};
      void deleteCaller() { this->caller_ = nullptr;};
      inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
      inline Details& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    protected:
      // The called number.
      // 
      // This parameter is required.
      shared_ptr<string> called_ {};
      // The calling number.
      shared_ptr<string> caller_ {};
    };

    virtual bool empty() const override { return this->calledRouteMode_ == nullptr
        && this->details_ == nullptr && this->ownerId_ == nullptr && this->phoneNumber_ == nullptr && this->qualificationId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // calledRouteMode Field Functions 
    bool hasCalledRouteMode() const { return this->calledRouteMode_ != nullptr;};
    void deleteCalledRouteMode() { this->calledRouteMode_ = nullptr;};
    inline string getCalledRouteMode() const { DARABONBA_PTR_GET_DEFAULT(calledRouteMode_, "") };
    inline SetTransferCalleePoolConfigRequest& setCalledRouteMode(string calledRouteMode) { DARABONBA_PTR_SET_VALUE(calledRouteMode_, calledRouteMode) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<SetTransferCalleePoolConfigRequest::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<SetTransferCalleePoolConfigRequest::Details>) };
    inline vector<SetTransferCalleePoolConfigRequest::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<SetTransferCalleePoolConfigRequest::Details>) };
    inline SetTransferCalleePoolConfigRequest& setDetails(const vector<SetTransferCalleePoolConfigRequest::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline SetTransferCalleePoolConfigRequest& setDetails(vector<SetTransferCalleePoolConfigRequest::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetTransferCalleePoolConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline SetTransferCalleePoolConfigRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline string getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, "") };
    inline SetTransferCalleePoolConfigRequest& setQualificationId(string qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetTransferCalleePoolConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SetTransferCalleePoolConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The call mode. Valid values:
    // 
    // *   **roundRobin**
    // *   **random**
    // 
    // This parameter is required.
    shared_ptr<string> calledRouteMode_ {};
    // The information about the phone numbers for transferring the call.
    // 
    // This parameter is required.
    shared_ptr<vector<SetTransferCalleePoolConfigRequest::Details>> details_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The phone number used for transferring the call.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    // The qualification ID. You can call the [GetHotlineQualificationByOrder](https://help.aliyun.com/document_detail/393548.html) operation to obtain the qualification ID.
    // 
    // This parameter is required.
    shared_ptr<string> qualificationId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
