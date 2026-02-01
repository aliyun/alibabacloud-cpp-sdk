// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANTSCORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANTSCORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetInstantScoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstantScoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstantScoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetInstantScoreResponseBody() = default ;
    GetInstantScoreResponseBody(const GetInstantScoreResponseBody &) = default ;
    GetInstantScoreResponseBody(GetInstantScoreResponseBody &&) = default ;
    GetInstantScoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstantScoreResponseBody() = default ;
    GetInstantScoreResponseBody& operator=(const GetInstantScoreResponseBody &) = default ;
    GetInstantScoreResponseBody& operator=(GetInstantScoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(error, error_);
        DARABONBA_PTR_TO_JSON(latency, latency_);
        DARABONBA_PTR_TO_JSON(load, load_);
        DARABONBA_PTR_TO_JSON(saturation, saturation_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(error, error_);
        DARABONBA_PTR_FROM_JSON(latency, latency_);
        DARABONBA_PTR_FROM_JSON(load, load_);
        DARABONBA_PTR_FROM_JSON(saturation, saturation_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
      virtual bool empty() const override { return this->error_ == nullptr
        && this->latency_ == nullptr && this->load_ == nullptr && this->saturation_ == nullptr && this->total_ == nullptr; };
      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline float getError() const { DARABONBA_PTR_GET_DEFAULT(error_, 0.0) };
      inline Data& setError(float error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // latency Field Functions 
      bool hasLatency() const { return this->latency_ != nullptr;};
      void deleteLatency() { this->latency_ = nullptr;};
      inline float getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0.0) };
      inline Data& setLatency(float latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


      // load Field Functions 
      bool hasLoad() const { return this->load_ != nullptr;};
      void deleteLoad() { this->load_ = nullptr;};
      inline float getLoad() const { DARABONBA_PTR_GET_DEFAULT(load_, 0.0) };
      inline Data& setLoad(float load) { DARABONBA_PTR_SET_VALUE(load_, load) };


      // saturation Field Functions 
      bool hasSaturation() const { return this->saturation_ != nullptr;};
      void deleteSaturation() { this->saturation_ = nullptr;};
      inline float getSaturation() const { DARABONBA_PTR_GET_DEFAULT(saturation_, 0.0) };
      inline Data& setSaturation(float saturation) { DARABONBA_PTR_SET_VALUE(saturation_, saturation) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline float getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0.0) };
      inline Data& setTotal(float total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<float> error_ {};
      shared_ptr<float> latency_ {};
      shared_ptr<float> load_ {};
      shared_ptr<float> saturation_ {};
      shared_ptr<float> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstantScoreResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstantScoreResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstantScoreResponseBody::Data) };
    inline GetInstantScoreResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstantScoreResponseBody::Data) };
    inline GetInstantScoreResponseBody& setData(const GetInstantScoreResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstantScoreResponseBody& setData(GetInstantScoreResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstantScoreResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstantScoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 集群ID
    shared_ptr<string> code_ {};
    shared_ptr<GetInstantScoreResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
