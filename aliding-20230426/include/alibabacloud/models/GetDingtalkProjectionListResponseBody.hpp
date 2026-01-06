// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKPROJECTIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKPROJECTIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDingtalkProjectionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingtalkProjectionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingtalkProjectionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetDingtalkProjectionListResponseBody() = default ;
    GetDingtalkProjectionListResponseBody(const GetDingtalkProjectionListResponseBody &) = default ;
    GetDingtalkProjectionListResponseBody(GetDingtalkProjectionListResponseBody &&) = default ;
    GetDingtalkProjectionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingtalkProjectionListResponseBody() = default ;
    GetDingtalkProjectionListResponseBody& operator=(const GetDingtalkProjectionListResponseBody &) = default ;
    GetDingtalkProjectionListResponseBody& operator=(GetDingtalkProjectionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(callStatus, callStatus_);
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(devUid, devUid_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(endTs, endTs_);
        DARABONBA_PTR_TO_JSON(nickCode, nickCode_);
        DARABONBA_PTR_TO_JSON(orgId, orgId_);
        DARABONBA_PTR_TO_JSON(recvClientId, recvClientId_);
        DARABONBA_PTR_TO_JSON(recvClientName, recvClientName_);
        DARABONBA_PTR_TO_JSON(sendClientId, sendClientId_);
        DARABONBA_PTR_TO_JSON(sendClientName, sendClientName_);
        DARABONBA_PTR_TO_JSON(sendClientWorkNo, sendClientWorkNo_);
        DARABONBA_PTR_TO_JSON(startTs, startTs_);
        DARABONBA_PTR_TO_JSON(timeStr, timeStr_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(callStatus, callStatus_);
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(devUid, devUid_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(endTs, endTs_);
        DARABONBA_PTR_FROM_JSON(nickCode, nickCode_);
        DARABONBA_PTR_FROM_JSON(orgId, orgId_);
        DARABONBA_PTR_FROM_JSON(recvClientId, recvClientId_);
        DARABONBA_PTR_FROM_JSON(recvClientName, recvClientName_);
        DARABONBA_PTR_FROM_JSON(sendClientId, sendClientId_);
        DARABONBA_PTR_FROM_JSON(sendClientName, sendClientName_);
        DARABONBA_PTR_FROM_JSON(sendClientWorkNo, sendClientWorkNo_);
        DARABONBA_PTR_FROM_JSON(startTs, startTs_);
        DARABONBA_PTR_FROM_JSON(timeStr, timeStr_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callStatus_ == nullptr
        && this->code_ == nullptr && this->devUid_ == nullptr && this->duration_ == nullptr && this->endTs_ == nullptr && this->nickCode_ == nullptr
        && this->orgId_ == nullptr && this->recvClientId_ == nullptr && this->recvClientName_ == nullptr && this->sendClientId_ == nullptr && this->sendClientName_ == nullptr
        && this->sendClientWorkNo_ == nullptr && this->startTs_ == nullptr && this->timeStr_ == nullptr; };
      // callStatus Field Functions 
      bool hasCallStatus() const { return this->callStatus_ != nullptr;};
      void deleteCallStatus() { this->callStatus_ = nullptr;};
      inline string getCallStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, "") };
      inline Data& setCallStatus(string callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // devUid Field Functions 
      bool hasDevUid() const { return this->devUid_ != nullptr;};
      void deleteDevUid() { this->devUid_ = nullptr;};
      inline int64_t getDevUid() const { DARABONBA_PTR_GET_DEFAULT(devUid_, 0L) };
      inline Data& setDevUid(int64_t devUid) { DARABONBA_PTR_SET_VALUE(devUid_, devUid) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline Data& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endTs Field Functions 
      bool hasEndTs() const { return this->endTs_ != nullptr;};
      void deleteEndTs() { this->endTs_ = nullptr;};
      inline int64_t getEndTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
      inline Data& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


      // nickCode Field Functions 
      bool hasNickCode() const { return this->nickCode_ != nullptr;};
      void deleteNickCode() { this->nickCode_ = nullptr;};
      inline string getNickCode() const { DARABONBA_PTR_GET_DEFAULT(nickCode_, "") };
      inline Data& setNickCode(string nickCode) { DARABONBA_PTR_SET_VALUE(nickCode_, nickCode) };


      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline int64_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
      inline Data& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // recvClientId Field Functions 
      bool hasRecvClientId() const { return this->recvClientId_ != nullptr;};
      void deleteRecvClientId() { this->recvClientId_ = nullptr;};
      inline string getRecvClientId() const { DARABONBA_PTR_GET_DEFAULT(recvClientId_, "") };
      inline Data& setRecvClientId(string recvClientId) { DARABONBA_PTR_SET_VALUE(recvClientId_, recvClientId) };


      // recvClientName Field Functions 
      bool hasRecvClientName() const { return this->recvClientName_ != nullptr;};
      void deleteRecvClientName() { this->recvClientName_ = nullptr;};
      inline string getRecvClientName() const { DARABONBA_PTR_GET_DEFAULT(recvClientName_, "") };
      inline Data& setRecvClientName(string recvClientName) { DARABONBA_PTR_SET_VALUE(recvClientName_, recvClientName) };


      // sendClientId Field Functions 
      bool hasSendClientId() const { return this->sendClientId_ != nullptr;};
      void deleteSendClientId() { this->sendClientId_ = nullptr;};
      inline string getSendClientId() const { DARABONBA_PTR_GET_DEFAULT(sendClientId_, "") };
      inline Data& setSendClientId(string sendClientId) { DARABONBA_PTR_SET_VALUE(sendClientId_, sendClientId) };


      // sendClientName Field Functions 
      bool hasSendClientName() const { return this->sendClientName_ != nullptr;};
      void deleteSendClientName() { this->sendClientName_ = nullptr;};
      inline string getSendClientName() const { DARABONBA_PTR_GET_DEFAULT(sendClientName_, "") };
      inline Data& setSendClientName(string sendClientName) { DARABONBA_PTR_SET_VALUE(sendClientName_, sendClientName) };


      // sendClientWorkNo Field Functions 
      bool hasSendClientWorkNo() const { return this->sendClientWorkNo_ != nullptr;};
      void deleteSendClientWorkNo() { this->sendClientWorkNo_ = nullptr;};
      inline string getSendClientWorkNo() const { DARABONBA_PTR_GET_DEFAULT(sendClientWorkNo_, "") };
      inline Data& setSendClientWorkNo(string sendClientWorkNo) { DARABONBA_PTR_SET_VALUE(sendClientWorkNo_, sendClientWorkNo) };


      // startTs Field Functions 
      bool hasStartTs() const { return this->startTs_ != nullptr;};
      void deleteStartTs() { this->startTs_ = nullptr;};
      inline int64_t getStartTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
      inline Data& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


      // timeStr Field Functions 
      bool hasTimeStr() const { return this->timeStr_ != nullptr;};
      void deleteTimeStr() { this->timeStr_ = nullptr;};
      inline string getTimeStr() const { DARABONBA_PTR_GET_DEFAULT(timeStr_, "") };
      inline Data& setTimeStr(string timeStr) { DARABONBA_PTR_SET_VALUE(timeStr_, timeStr) };


    protected:
      shared_ptr<string> callStatus_ {};
      shared_ptr<string> code_ {};
      shared_ptr<int64_t> devUid_ {};
      shared_ptr<string> duration_ {};
      shared_ptr<int64_t> endTs_ {};
      shared_ptr<string> nickCode_ {};
      shared_ptr<int64_t> orgId_ {};
      shared_ptr<string> recvClientId_ {};
      shared_ptr<string> recvClientName_ {};
      shared_ptr<string> sendClientId_ {};
      shared_ptr<string> sendClientName_ {};
      shared_ptr<string> sendClientWorkNo_ {};
      shared_ptr<int64_t> startTs_ {};
      shared_ptr<string> timeStr_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetDingtalkProjectionListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetDingtalkProjectionListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetDingtalkProjectionListResponseBody::Data>) };
    inline vector<GetDingtalkProjectionListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetDingtalkProjectionListResponseBody::Data>) };
    inline GetDingtalkProjectionListResponseBody& setData(const vector<GetDingtalkProjectionListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDingtalkProjectionListResponseBody& setData(vector<GetDingtalkProjectionListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDingtalkProjectionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetDingtalkProjectionListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetDingtalkProjectionListResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetDingtalkProjectionListResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<GetDingtalkProjectionListResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
