// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXCHANGERATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXCHANGERATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetExchangeRateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExchangeRateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetExchangeRateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetExchangeRateResponseBody() = default ;
    GetExchangeRateResponseBody(const GetExchangeRateResponseBody &) = default ;
    GetExchangeRateResponseBody(GetExchangeRateResponseBody &&) = default ;
    GetExchangeRateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExchangeRateResponseBody() = default ;
    GetExchangeRateResponseBody& operator=(const GetExchangeRateResponseBody &) = default ;
    GetExchangeRateResponseBody& operator=(GetExchangeRateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExchangeQuotaVO, exchangeQuotaVO_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExchangeQuotaVO, exchangeQuotaVO_);
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
      class ExchangeQuotaVO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExchangeQuotaVO& obj) { 
          DARABONBA_PTR_TO_JSON(ExchangeName, exchangeName_);
          DARABONBA_PTR_TO_JSON(InQps, inQps_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(OutQps, outQps_);
          DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
        };
        friend void from_json(const Darabonba::Json& j, ExchangeQuotaVO& obj) { 
          DARABONBA_PTR_FROM_JSON(ExchangeName, exchangeName_);
          DARABONBA_PTR_FROM_JSON(InQps, inQps_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(OutQps, outQps_);
          DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
        };
        ExchangeQuotaVO() = default ;
        ExchangeQuotaVO(const ExchangeQuotaVO &) = default ;
        ExchangeQuotaVO(ExchangeQuotaVO &&) = default ;
        ExchangeQuotaVO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExchangeQuotaVO() = default ;
        ExchangeQuotaVO& operator=(const ExchangeQuotaVO &) = default ;
        ExchangeQuotaVO& operator=(ExchangeQuotaVO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->exchangeName_ == nullptr
        && this->inQps_ == nullptr && this->instanceId_ == nullptr && this->outQps_ == nullptr && this->vhostName_ == nullptr; };
        // exchangeName Field Functions 
        bool hasExchangeName() const { return this->exchangeName_ != nullptr;};
        void deleteExchangeName() { this->exchangeName_ = nullptr;};
        inline string getExchangeName() const { DARABONBA_PTR_GET_DEFAULT(exchangeName_, "") };
        inline ExchangeQuotaVO& setExchangeName(string exchangeName) { DARABONBA_PTR_SET_VALUE(exchangeName_, exchangeName) };


        // inQps Field Functions 
        bool hasInQps() const { return this->inQps_ != nullptr;};
        void deleteInQps() { this->inQps_ = nullptr;};
        inline int64_t getInQps() const { DARABONBA_PTR_GET_DEFAULT(inQps_, 0L) };
        inline ExchangeQuotaVO& setInQps(int64_t inQps) { DARABONBA_PTR_SET_VALUE(inQps_, inQps) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ExchangeQuotaVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // outQps Field Functions 
        bool hasOutQps() const { return this->outQps_ != nullptr;};
        void deleteOutQps() { this->outQps_ = nullptr;};
        inline int64_t getOutQps() const { DARABONBA_PTR_GET_DEFAULT(outQps_, 0L) };
        inline ExchangeQuotaVO& setOutQps(int64_t outQps) { DARABONBA_PTR_SET_VALUE(outQps_, outQps) };


        // vhostName Field Functions 
        bool hasVhostName() const { return this->vhostName_ != nullptr;};
        void deleteVhostName() { this->vhostName_ = nullptr;};
        inline string getVhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
        inline ExchangeQuotaVO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


      protected:
        shared_ptr<string> exchangeName_ {};
        shared_ptr<int64_t> inQps_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int64_t> outQps_ {};
        shared_ptr<string> vhostName_ {};
      };

      virtual bool empty() const override { return this->exchangeQuotaVO_ == nullptr; };
      // exchangeQuotaVO Field Functions 
      bool hasExchangeQuotaVO() const { return this->exchangeQuotaVO_ != nullptr;};
      void deleteExchangeQuotaVO() { this->exchangeQuotaVO_ = nullptr;};
      inline const vector<Data::ExchangeQuotaVO> & getExchangeQuotaVO() const { DARABONBA_PTR_GET_CONST(exchangeQuotaVO_, vector<Data::ExchangeQuotaVO>) };
      inline vector<Data::ExchangeQuotaVO> getExchangeQuotaVO() { DARABONBA_PTR_GET(exchangeQuotaVO_, vector<Data::ExchangeQuotaVO>) };
      inline Data& setExchangeQuotaVO(const vector<Data::ExchangeQuotaVO> & exchangeQuotaVO) { DARABONBA_PTR_SET_VALUE(exchangeQuotaVO_, exchangeQuotaVO) };
      inline Data& setExchangeQuotaVO(vector<Data::ExchangeQuotaVO> && exchangeQuotaVO) { DARABONBA_PTR_SET_RVALUE(exchangeQuotaVO_, exchangeQuotaVO) };


    protected:
      shared_ptr<vector<Data::ExchangeQuotaVO>> exchangeQuotaVO_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetExchangeRateResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetExchangeRateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetExchangeRateResponseBody::Data) };
    inline GetExchangeRateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetExchangeRateResponseBody::Data) };
    inline GetExchangeRateResponseBody& setData(const GetExchangeRateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetExchangeRateResponseBody& setData(GetExchangeRateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetExchangeRateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExchangeRateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetExchangeRateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetExchangeRateResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
