// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTCONFIGINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTCONFIGINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class GetAccountConfigInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountConfigInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(availableTime, availableTime_);
      DARABONBA_PTR_TO_JSON(billQps, billQps_);
      DARABONBA_PTR_TO_JSON(ladderType, ladderType_);
      DARABONBA_PTR_TO_JSON(mainAccountId, mainAccountId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountConfigInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(availableTime, availableTime_);
      DARABONBA_PTR_FROM_JSON(billQps, billQps_);
      DARABONBA_PTR_FROM_JSON(ladderType, ladderType_);
      DARABONBA_PTR_FROM_JSON(mainAccountId, mainAccountId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAccountConfigInfoResponseBody() = default ;
    GetAccountConfigInfoResponseBody(const GetAccountConfigInfoResponseBody &) = default ;
    GetAccountConfigInfoResponseBody(GetAccountConfigInfoResponseBody &&) = default ;
    GetAccountConfigInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountConfigInfoResponseBody() = default ;
    GetAccountConfigInfoResponseBody& operator=(const GetAccountConfigInfoResponseBody &) = default ;
    GetAccountConfigInfoResponseBody& operator=(GetAccountConfigInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountStatus_ == nullptr
        && this->availableTime_ == nullptr && this->billQps_ == nullptr && this->ladderType_ == nullptr && this->mainAccountId_ == nullptr && this->requestId_ == nullptr; };
    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline GetAccountConfigInfoResponseBody& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // availableTime Field Functions 
    bool hasAvailableTime() const { return this->availableTime_ != nullptr;};
    void deleteAvailableTime() { this->availableTime_ = nullptr;};
    inline string getAvailableTime() const { DARABONBA_PTR_GET_DEFAULT(availableTime_, "") };
    inline GetAccountConfigInfoResponseBody& setAvailableTime(string availableTime) { DARABONBA_PTR_SET_VALUE(availableTime_, availableTime) };


    // billQps Field Functions 
    bool hasBillQps() const { return this->billQps_ != nullptr;};
    void deleteBillQps() { this->billQps_ = nullptr;};
    inline string getBillQps() const { DARABONBA_PTR_GET_DEFAULT(billQps_, "") };
    inline GetAccountConfigInfoResponseBody& setBillQps(string billQps) { DARABONBA_PTR_SET_VALUE(billQps_, billQps) };


    // ladderType Field Functions 
    bool hasLadderType() const { return this->ladderType_ != nullptr;};
    void deleteLadderType() { this->ladderType_ = nullptr;};
    inline string getLadderType() const { DARABONBA_PTR_GET_DEFAULT(ladderType_, "") };
    inline GetAccountConfigInfoResponseBody& setLadderType(string ladderType) { DARABONBA_PTR_SET_VALUE(ladderType_, ladderType) };


    // mainAccountId Field Functions 
    bool hasMainAccountId() const { return this->mainAccountId_ != nullptr;};
    void deleteMainAccountId() { this->mainAccountId_ = nullptr;};
    inline string getMainAccountId() const { DARABONBA_PTR_GET_DEFAULT(mainAccountId_, "") };
    inline GetAccountConfigInfoResponseBody& setMainAccountId(string mainAccountId) { DARABONBA_PTR_SET_VALUE(mainAccountId_, mainAccountId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountConfigInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accountStatus_ {};
    shared_ptr<string> availableTime_ {};
    shared_ptr<string> billQps_ {};
    shared_ptr<string> ladderType_ {};
    shared_ptr<string> mainAccountId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
