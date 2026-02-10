// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTATTACKSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTATTACKSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotAttackStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotAttackStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotAttackStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHoneypotAttackStatisticsResponseBody() = default ;
    GetHoneypotAttackStatisticsResponseBody(const GetHoneypotAttackStatisticsResponseBody &) = default ;
    GetHoneypotAttackStatisticsResponseBody(GetHoneypotAttackStatisticsResponseBody &&) = default ;
    GetHoneypotAttackStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotAttackStatisticsResponseBody() = default ;
    GetHoneypotAttackStatisticsResponseBody& operator=(const GetHoneypotAttackStatisticsResponseBody &) = default ;
    GetHoneypotAttackStatisticsResponseBody& operator=(GetHoneypotAttackStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(HoneypotAttackStatistics, honeypotAttackStatistics_);
        DARABONBA_PTR_TO_JSON(StatisticsType, statisticsType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(HoneypotAttackStatistics, honeypotAttackStatistics_);
        DARABONBA_PTR_FROM_JSON(StatisticsType, statisticsType_);
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
      class HoneypotAttackStatistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HoneypotAttackStatistics& obj) { 
          DARABONBA_PTR_TO_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_TO_JSON(StatisticsValue, statisticsValue_);
        };
        friend void from_json(const Darabonba::Json& j, HoneypotAttackStatistics& obj) { 
          DARABONBA_PTR_FROM_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_FROM_JSON(StatisticsValue, statisticsValue_);
        };
        HoneypotAttackStatistics() = default ;
        HoneypotAttackStatistics(const HoneypotAttackStatistics &) = default ;
        HoneypotAttackStatistics(HoneypotAttackStatistics &&) = default ;
        HoneypotAttackStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HoneypotAttackStatistics() = default ;
        HoneypotAttackStatistics& operator=(const HoneypotAttackStatistics &) = default ;
        HoneypotAttackStatistics& operator=(HoneypotAttackStatistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->statisticsCount_ == nullptr
        && this->statisticsValue_ == nullptr; };
        // statisticsCount Field Functions 
        bool hasStatisticsCount() const { return this->statisticsCount_ != nullptr;};
        void deleteStatisticsCount() { this->statisticsCount_ = nullptr;};
        inline int32_t getStatisticsCount() const { DARABONBA_PTR_GET_DEFAULT(statisticsCount_, 0) };
        inline HoneypotAttackStatistics& setStatisticsCount(int32_t statisticsCount) { DARABONBA_PTR_SET_VALUE(statisticsCount_, statisticsCount) };


        // statisticsValue Field Functions 
        bool hasStatisticsValue() const { return this->statisticsValue_ != nullptr;};
        void deleteStatisticsValue() { this->statisticsValue_ = nullptr;};
        inline string getStatisticsValue() const { DARABONBA_PTR_GET_DEFAULT(statisticsValue_, "") };
        inline HoneypotAttackStatistics& setStatisticsValue(string statisticsValue) { DARABONBA_PTR_SET_VALUE(statisticsValue_, statisticsValue) };


      protected:
        // The number of times the value is counted.
        shared_ptr<int32_t> statisticsCount_ {};
        // The statistical value.
        shared_ptr<string> statisticsValue_ {};
      };

      virtual bool empty() const override { return this->count_ == nullptr
        && this->honeypotAttackStatistics_ == nullptr && this->statisticsType_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // honeypotAttackStatistics Field Functions 
      bool hasHoneypotAttackStatistics() const { return this->honeypotAttackStatistics_ != nullptr;};
      void deleteHoneypotAttackStatistics() { this->honeypotAttackStatistics_ = nullptr;};
      inline const vector<Data::HoneypotAttackStatistics> & getHoneypotAttackStatistics() const { DARABONBA_PTR_GET_CONST(honeypotAttackStatistics_, vector<Data::HoneypotAttackStatistics>) };
      inline vector<Data::HoneypotAttackStatistics> getHoneypotAttackStatistics() { DARABONBA_PTR_GET(honeypotAttackStatistics_, vector<Data::HoneypotAttackStatistics>) };
      inline Data& setHoneypotAttackStatistics(const vector<Data::HoneypotAttackStatistics> & honeypotAttackStatistics) { DARABONBA_PTR_SET_VALUE(honeypotAttackStatistics_, honeypotAttackStatistics) };
      inline Data& setHoneypotAttackStatistics(vector<Data::HoneypotAttackStatistics> && honeypotAttackStatistics) { DARABONBA_PTR_SET_RVALUE(honeypotAttackStatistics_, honeypotAttackStatistics) };


      // statisticsType Field Functions 
      bool hasStatisticsType() const { return this->statisticsType_ != nullptr;};
      void deleteStatisticsType() { this->statisticsType_ = nullptr;};
      inline string getStatisticsType() const { DARABONBA_PTR_GET_DEFAULT(statisticsType_, "") };
      inline Data& setStatisticsType(string statisticsType) { DARABONBA_PTR_SET_VALUE(statisticsType_, statisticsType) };


    protected:
      // The number of entries on the current page.
      shared_ptr<int32_t> count_ {};
      // The statistics details.
      shared_ptr<vector<Data::HoneypotAttackStatistics>> honeypotAttackStatistics_ {};
      // The type of the attack source statistics. Valid values:
      // 
      // *   **TOP_ATTACKED_AGENT**: the top five probes that are attacked the most frequently.
      // *   **TOP_ATTACKED_IP**: the top five IP addresses that are attacked the most frequently.
      // *   **ATTACK_EVENT_TYPE**: the type of the intrusion event.
      // *   **ATTACK_HONEYPOT_TYPE**: the type of the attacked honeypot.
      shared_ptr<string> statisticsType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHoneypotAttackStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHoneypotAttackStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHoneypotAttackStatisticsResponseBody::Data) };
    inline GetHoneypotAttackStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHoneypotAttackStatisticsResponseBody::Data) };
    inline GetHoneypotAttackStatisticsResponseBody& setData(const GetHoneypotAttackStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHoneypotAttackStatisticsResponseBody& setData(GetHoneypotAttackStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetHoneypotAttackStatisticsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHoneypotAttackStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHoneypotAttackStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHoneypotAttackStatisticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code that is returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The statistics.
    shared_ptr<GetHoneypotAttackStatisticsResponseBody::Data> data_ {};
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
