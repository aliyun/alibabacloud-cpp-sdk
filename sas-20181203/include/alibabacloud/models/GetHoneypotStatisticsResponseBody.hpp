// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHoneypotStatisticsResponseBody() = default ;
    GetHoneypotStatisticsResponseBody(const GetHoneypotStatisticsResponseBody &) = default ;
    GetHoneypotStatisticsResponseBody(GetHoneypotStatisticsResponseBody &&) = default ;
    GetHoneypotStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotStatisticsResponseBody() = default ;
    GetHoneypotStatisticsResponseBody& operator=(const GetHoneypotStatisticsResponseBody &) = default ;
    GetHoneypotStatisticsResponseBody& operator=(GetHoneypotStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TotalHoneypotCount, totalHoneypotCount_);
        DARABONBA_PTR_TO_JSON(TotalNodeStatus, totalNodeStatus_);
        DARABONBA_PTR_TO_JSON(TotalProbeCount, totalProbeCount_);
        DARABONBA_PTR_TO_JSON(UsedHoneypotCount, usedHoneypotCount_);
        DARABONBA_PTR_TO_JSON(UsedHostProbeCount, usedHostProbeCount_);
        DARABONBA_PTR_TO_JSON(UsedProbeCount, usedProbeCount_);
        DARABONBA_PTR_TO_JSON(UsedVpcProbeCount, usedVpcProbeCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TotalHoneypotCount, totalHoneypotCount_);
        DARABONBA_PTR_FROM_JSON(TotalNodeStatus, totalNodeStatus_);
        DARABONBA_PTR_FROM_JSON(TotalProbeCount, totalProbeCount_);
        DARABONBA_PTR_FROM_JSON(UsedHoneypotCount, usedHoneypotCount_);
        DARABONBA_PTR_FROM_JSON(UsedHostProbeCount, usedHostProbeCount_);
        DARABONBA_PTR_FROM_JSON(UsedProbeCount, usedProbeCount_);
        DARABONBA_PTR_FROM_JSON(UsedVpcProbeCount, usedVpcProbeCount_);
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
      virtual bool empty() const override { return this->totalHoneypotCount_ == nullptr
        && this->totalNodeStatus_ == nullptr && this->totalProbeCount_ == nullptr && this->usedHoneypotCount_ == nullptr && this->usedHostProbeCount_ == nullptr && this->usedProbeCount_ == nullptr
        && this->usedVpcProbeCount_ == nullptr; };
      // totalHoneypotCount Field Functions 
      bool hasTotalHoneypotCount() const { return this->totalHoneypotCount_ != nullptr;};
      void deleteTotalHoneypotCount() { this->totalHoneypotCount_ = nullptr;};
      inline int32_t getTotalHoneypotCount() const { DARABONBA_PTR_GET_DEFAULT(totalHoneypotCount_, 0) };
      inline Data& setTotalHoneypotCount(int32_t totalHoneypotCount) { DARABONBA_PTR_SET_VALUE(totalHoneypotCount_, totalHoneypotCount) };


      // totalNodeStatus Field Functions 
      bool hasTotalNodeStatus() const { return this->totalNodeStatus_ != nullptr;};
      void deleteTotalNodeStatus() { this->totalNodeStatus_ = nullptr;};
      inline int32_t getTotalNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(totalNodeStatus_, 0) };
      inline Data& setTotalNodeStatus(int32_t totalNodeStatus) { DARABONBA_PTR_SET_VALUE(totalNodeStatus_, totalNodeStatus) };


      // totalProbeCount Field Functions 
      bool hasTotalProbeCount() const { return this->totalProbeCount_ != nullptr;};
      void deleteTotalProbeCount() { this->totalProbeCount_ = nullptr;};
      inline int32_t getTotalProbeCount() const { DARABONBA_PTR_GET_DEFAULT(totalProbeCount_, 0) };
      inline Data& setTotalProbeCount(int32_t totalProbeCount) { DARABONBA_PTR_SET_VALUE(totalProbeCount_, totalProbeCount) };


      // usedHoneypotCount Field Functions 
      bool hasUsedHoneypotCount() const { return this->usedHoneypotCount_ != nullptr;};
      void deleteUsedHoneypotCount() { this->usedHoneypotCount_ = nullptr;};
      inline int32_t getUsedHoneypotCount() const { DARABONBA_PTR_GET_DEFAULT(usedHoneypotCount_, 0) };
      inline Data& setUsedHoneypotCount(int32_t usedHoneypotCount) { DARABONBA_PTR_SET_VALUE(usedHoneypotCount_, usedHoneypotCount) };


      // usedHostProbeCount Field Functions 
      bool hasUsedHostProbeCount() const { return this->usedHostProbeCount_ != nullptr;};
      void deleteUsedHostProbeCount() { this->usedHostProbeCount_ = nullptr;};
      inline int32_t getUsedHostProbeCount() const { DARABONBA_PTR_GET_DEFAULT(usedHostProbeCount_, 0) };
      inline Data& setUsedHostProbeCount(int32_t usedHostProbeCount) { DARABONBA_PTR_SET_VALUE(usedHostProbeCount_, usedHostProbeCount) };


      // usedProbeCount Field Functions 
      bool hasUsedProbeCount() const { return this->usedProbeCount_ != nullptr;};
      void deleteUsedProbeCount() { this->usedProbeCount_ = nullptr;};
      inline int32_t getUsedProbeCount() const { DARABONBA_PTR_GET_DEFAULT(usedProbeCount_, 0) };
      inline Data& setUsedProbeCount(int32_t usedProbeCount) { DARABONBA_PTR_SET_VALUE(usedProbeCount_, usedProbeCount) };


      // usedVpcProbeCount Field Functions 
      bool hasUsedVpcProbeCount() const { return this->usedVpcProbeCount_ != nullptr;};
      void deleteUsedVpcProbeCount() { this->usedVpcProbeCount_ = nullptr;};
      inline int32_t getUsedVpcProbeCount() const { DARABONBA_PTR_GET_DEFAULT(usedVpcProbeCount_, 0) };
      inline Data& setUsedVpcProbeCount(int32_t usedVpcProbeCount) { DARABONBA_PTR_SET_VALUE(usedVpcProbeCount_, usedVpcProbeCount) };


    protected:
      // The total number of honeypots.
      shared_ptr<int32_t> totalHoneypotCount_ {};
      // The health status of the management node. Valid values:
      // 
      // *   1: normal
      // *   2: abnormal
      shared_ptr<int32_t> totalNodeStatus_ {};
      // The total number of authorized probes.
      shared_ptr<int32_t> totalProbeCount_ {};
      // The number of deployed honeypots.
      shared_ptr<int32_t> usedHoneypotCount_ {};
      // The number of deployed host probes.
      shared_ptr<int32_t> usedHostProbeCount_ {};
      // The number of deployed probes.
      shared_ptr<int32_t> usedProbeCount_ {};
      // The number of deployed VPC probes.
      shared_ptr<int32_t> usedVpcProbeCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHoneypotStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHoneypotStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHoneypotStatisticsResponseBody::Data) };
    inline GetHoneypotStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHoneypotStatisticsResponseBody::Data) };
    inline GetHoneypotStatisticsResponseBody& setData(const GetHoneypotStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHoneypotStatisticsResponseBody& setData(GetHoneypotStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetHoneypotStatisticsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHoneypotStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHoneypotStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHoneypotStatisticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code that is returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The honeypot usage statistics.
    shared_ptr<GetHoneypotStatisticsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
