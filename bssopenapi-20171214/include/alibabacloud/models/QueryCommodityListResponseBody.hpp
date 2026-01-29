// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOMMODITYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOMMODITYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCommodityListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCommodityListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCommodityListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCommodityListResponseBody() = default ;
    QueryCommodityListResponseBody(const QueryCommodityListResponseBody &) = default ;
    QueryCommodityListResponseBody(QueryCommodityListResponseBody &&) = default ;
    QueryCommodityListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCommodityListResponseBody() = default ;
    QueryCommodityListResponseBody& operator=(const QueryCommodityListResponseBody &) = default ;
    QueryCommodityListResponseBody& operator=(QueryCommodityListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityList, commodityList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityList, commodityList_);
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
      class CommodityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CommodityList& obj) { 
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
        };
        friend void from_json(const Darabonba::Json& j, CommodityList& obj) { 
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
        };
        CommodityList() = default ;
        CommodityList(const CommodityList &) = default ;
        CommodityList(CommodityList &&) = default ;
        CommodityList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CommodityList() = default ;
        CommodityList& operator=(const CommodityList &) = default ;
        CommodityList& operator=(CommodityList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->commodityCode_ == nullptr && this->commodityName_ == nullptr; };
        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline CommodityList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline CommodityList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // commodityName Field Functions 
        bool hasCommodityName() const { return this->commodityName_ != nullptr;};
        void deleteCommodityName() { this->commodityName_ = nullptr;};
        inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
        inline CommodityList& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


      protected:
        // The payment type. Valid values: POSTPAY (pay-as-you-go) and PREPAY (subscription).
        shared_ptr<string> chargeType_ {};
        // The code of the service, which is the same as that on the Billing Management page.
        shared_ptr<string> commodityCode_ {};
        // The name of the service.
        shared_ptr<string> commodityName_ {};
      };

      virtual bool empty() const override { return this->commodityList_ == nullptr; };
      // commodityList Field Functions 
      bool hasCommodityList() const { return this->commodityList_ != nullptr;};
      void deleteCommodityList() { this->commodityList_ = nullptr;};
      inline const vector<Data::CommodityList> & getCommodityList() const { DARABONBA_PTR_GET_CONST(commodityList_, vector<Data::CommodityList>) };
      inline vector<Data::CommodityList> getCommodityList() { DARABONBA_PTR_GET(commodityList_, vector<Data::CommodityList>) };
      inline Data& setCommodityList(const vector<Data::CommodityList> & commodityList) { DARABONBA_PTR_SET_VALUE(commodityList_, commodityList) };
      inline Data& setCommodityList(vector<Data::CommodityList> && commodityList) { DARABONBA_PTR_SET_RVALUE(commodityList_, commodityList) };


    protected:
      // The information about the service.
      shared_ptr<vector<Data::CommodityList>> commodityList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCommodityListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCommodityListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryCommodityListResponseBody::Data) };
    inline QueryCommodityListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryCommodityListResponseBody::Data) };
    inline QueryCommodityListResponseBody& setData(const QueryCommodityListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCommodityListResponseBody& setData(QueryCommodityListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCommodityListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCommodityListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCommodityListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<QueryCommodityListResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the information about the service was queried.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
