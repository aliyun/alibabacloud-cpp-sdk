// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMERCIALSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMERCIALSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetCommercialStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommercialStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserAndCommodityStatus, userAndCommodityStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommercialStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserAndCommodityStatus, userAndCommodityStatus_);
    };
    GetCommercialStatusResponseBody() = default ;
    GetCommercialStatusResponseBody(const GetCommercialStatusResponseBody &) = default ;
    GetCommercialStatusResponseBody(GetCommercialStatusResponseBody &&) = default ;
    GetCommercialStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommercialStatusResponseBody() = default ;
    GetCommercialStatusResponseBody& operator=(const GetCommercialStatusResponseBody &) = default ;
    GetCommercialStatusResponseBody& operator=(GetCommercialStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserAndCommodityStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserAndCommodityStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Basic, basic_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(FreeDays, freeDays_);
        DARABONBA_PTR_TO_JSON(Lable, lable_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, UserAndCommodityStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Basic, basic_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(FreeDays, freeDays_);
        DARABONBA_PTR_FROM_JSON(Lable, lable_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      UserAndCommodityStatus() = default ;
      UserAndCommodityStatus(const UserAndCommodityStatus &) = default ;
      UserAndCommodityStatus(UserAndCommodityStatus &&) = default ;
      UserAndCommodityStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserAndCommodityStatus() = default ;
      UserAndCommodityStatus& operator=(const UserAndCommodityStatus &) = default ;
      UserAndCommodityStatus& operator=(UserAndCommodityStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->basic_ == nullptr
        && this->chargeType_ == nullptr && this->enable_ == nullptr && this->extraInfo_ == nullptr && this->freeDays_ == nullptr && this->lable_ == nullptr
        && this->status_ == nullptr; };
      // basic Field Functions 
      bool hasBasic() const { return this->basic_ != nullptr;};
      void deleteBasic() { this->basic_ = nullptr;};
      inline bool getBasic() const { DARABONBA_PTR_GET_DEFAULT(basic_, false) };
      inline UserAndCommodityStatus& setBasic(bool basic) { DARABONBA_PTR_SET_VALUE(basic_, basic) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline UserAndCommodityStatus& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline UserAndCommodityStatus& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline       const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
      Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
      inline UserAndCommodityStatus& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
      inline UserAndCommodityStatus& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


      // freeDays Field Functions 
      bool hasFreeDays() const { return this->freeDays_ != nullptr;};
      void deleteFreeDays() { this->freeDays_ = nullptr;};
      inline int64_t getFreeDays() const { DARABONBA_PTR_GET_DEFAULT(freeDays_, 0L) };
      inline UserAndCommodityStatus& setFreeDays(int64_t freeDays) { DARABONBA_PTR_SET_VALUE(freeDays_, freeDays) };


      // lable Field Functions 
      bool hasLable() const { return this->lable_ != nullptr;};
      void deleteLable() { this->lable_ = nullptr;};
      inline string getLable() const { DARABONBA_PTR_GET_DEFAULT(lable_, "") };
      inline UserAndCommodityStatus& setLable(string lable) { DARABONBA_PTR_SET_VALUE(lable_, lable) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline UserAndCommodityStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Indicates whether you are using the Basic Edition.
      shared_ptr<bool> basic_ {};
      // The billing method.
      shared_ptr<string> chargeType_ {};
      // Indicates whether the service is activated.
      shared_ptr<bool> enable_ {};
      // The additional information.
      Darabonba::Json extraInfo_ {};
      // The number of days during which the service is free of charge.
      shared_ptr<int64_t> freeDays_ {};
      // The tags.
      shared_ptr<string> lable_ {};
      // The commercialization status.
      // 
      // Valid values:
      // 
      // *   Normal: The service is activated.
      // *   Abnormal: An exception occurs during activation.
      // *   Free: The service is not activated.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userAndCommodityStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCommercialStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userAndCommodityStatus Field Functions 
    bool hasUserAndCommodityStatus() const { return this->userAndCommodityStatus_ != nullptr;};
    void deleteUserAndCommodityStatus() { this->userAndCommodityStatus_ = nullptr;};
    inline const GetCommercialStatusResponseBody::UserAndCommodityStatus & getUserAndCommodityStatus() const { DARABONBA_PTR_GET_CONST(userAndCommodityStatus_, GetCommercialStatusResponseBody::UserAndCommodityStatus) };
    inline GetCommercialStatusResponseBody::UserAndCommodityStatus getUserAndCommodityStatus() { DARABONBA_PTR_GET(userAndCommodityStatus_, GetCommercialStatusResponseBody::UserAndCommodityStatus) };
    inline GetCommercialStatusResponseBody& setUserAndCommodityStatus(const GetCommercialStatusResponseBody::UserAndCommodityStatus & userAndCommodityStatus) { DARABONBA_PTR_SET_VALUE(userAndCommodityStatus_, userAndCommodityStatus) };
    inline GetCommercialStatusResponseBody& setUserAndCommodityStatus(GetCommercialStatusResponseBody::UserAndCommodityStatus && userAndCommodityStatus) { DARABONBA_PTR_SET_RVALUE(userAndCommodityStatus_, userAndCommodityStatus) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The commercialization status of the service.
    shared_ptr<GetCommercialStatusResponseBody::UserAndCommodityStatus> userAndCommodityStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
