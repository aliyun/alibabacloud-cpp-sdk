// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRICEENTITYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRICEENTITYLISTRESPONSEBODY_HPP_
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
  class QueryPriceEntityListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPriceEntityListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPriceEntityListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPriceEntityListResponseBody() = default ;
    QueryPriceEntityListResponseBody(const QueryPriceEntityListResponseBody &) = default ;
    QueryPriceEntityListResponseBody(QueryPriceEntityListResponseBody &&) = default ;
    QueryPriceEntityListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPriceEntityListResponseBody() = default ;
    QueryPriceEntityListResponseBody& operator=(const QueryPriceEntityListResponseBody &) = default ;
    QueryPriceEntityListResponseBody& operator=(QueryPriceEntityListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PriceEntityInfoList, priceEntityInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PriceEntityInfoList, priceEntityInfoList_);
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
      class PriceEntityInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PriceEntityInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(PriceEntityCode, priceEntityCode_);
          DARABONBA_PTR_TO_JSON(PriceEntityName, priceEntityName_);
          DARABONBA_PTR_TO_JSON(PriceFactorList, priceFactorList_);
        };
        friend void from_json(const Darabonba::Json& j, PriceEntityInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(PriceEntityCode, priceEntityCode_);
          DARABONBA_PTR_FROM_JSON(PriceEntityName, priceEntityName_);
          DARABONBA_PTR_FROM_JSON(PriceFactorList, priceFactorList_);
        };
        PriceEntityInfoList() = default ;
        PriceEntityInfoList(const PriceEntityInfoList &) = default ;
        PriceEntityInfoList(PriceEntityInfoList &&) = default ;
        PriceEntityInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PriceEntityInfoList() = default ;
        PriceEntityInfoList& operator=(const PriceEntityInfoList &) = default ;
        PriceEntityInfoList& operator=(PriceEntityInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PriceFactorList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PriceFactorList& obj) { 
            DARABONBA_PTR_TO_JSON(PriceFactorCode, priceFactorCode_);
            DARABONBA_PTR_TO_JSON(PriceFactorName, priceFactorName_);
            DARABONBA_PTR_TO_JSON(PriceFactorValueList, priceFactorValueList_);
          };
          friend void from_json(const Darabonba::Json& j, PriceFactorList& obj) { 
            DARABONBA_PTR_FROM_JSON(PriceFactorCode, priceFactorCode_);
            DARABONBA_PTR_FROM_JSON(PriceFactorName, priceFactorName_);
            DARABONBA_PTR_FROM_JSON(PriceFactorValueList, priceFactorValueList_);
          };
          PriceFactorList() = default ;
          PriceFactorList(const PriceFactorList &) = default ;
          PriceFactorList(PriceFactorList &&) = default ;
          PriceFactorList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PriceFactorList() = default ;
          PriceFactorList& operator=(const PriceFactorList &) = default ;
          PriceFactorList& operator=(PriceFactorList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->priceFactorCode_ == nullptr
        && this->priceFactorName_ == nullptr && this->priceFactorValueList_ == nullptr; };
          // priceFactorCode Field Functions 
          bool hasPriceFactorCode() const { return this->priceFactorCode_ != nullptr;};
          void deletePriceFactorCode() { this->priceFactorCode_ = nullptr;};
          inline string getPriceFactorCode() const { DARABONBA_PTR_GET_DEFAULT(priceFactorCode_, "") };
          inline PriceFactorList& setPriceFactorCode(string priceFactorCode) { DARABONBA_PTR_SET_VALUE(priceFactorCode_, priceFactorCode) };


          // priceFactorName Field Functions 
          bool hasPriceFactorName() const { return this->priceFactorName_ != nullptr;};
          void deletePriceFactorName() { this->priceFactorName_ = nullptr;};
          inline string getPriceFactorName() const { DARABONBA_PTR_GET_DEFAULT(priceFactorName_, "") };
          inline PriceFactorList& setPriceFactorName(string priceFactorName) { DARABONBA_PTR_SET_VALUE(priceFactorName_, priceFactorName) };


          // priceFactorValueList Field Functions 
          bool hasPriceFactorValueList() const { return this->priceFactorValueList_ != nullptr;};
          void deletePriceFactorValueList() { this->priceFactorValueList_ = nullptr;};
          inline const vector<string> & getPriceFactorValueList() const { DARABONBA_PTR_GET_CONST(priceFactorValueList_, vector<string>) };
          inline vector<string> getPriceFactorValueList() { DARABONBA_PTR_GET(priceFactorValueList_, vector<string>) };
          inline PriceFactorList& setPriceFactorValueList(const vector<string> & priceFactorValueList) { DARABONBA_PTR_SET_VALUE(priceFactorValueList_, priceFactorValueList) };
          inline PriceFactorList& setPriceFactorValueList(vector<string> && priceFactorValueList) { DARABONBA_PTR_SET_RVALUE(priceFactorValueList_, priceFactorValueList) };


        protected:
          // The code of the factor.
          shared_ptr<string> priceFactorCode_ {};
          // The name of the factor.
          shared_ptr<string> priceFactorName_ {};
          // The values of the factor.
          shared_ptr<vector<string>> priceFactorValueList_ {};
        };

        virtual bool empty() const override { return this->priceEntityCode_ == nullptr
        && this->priceEntityName_ == nullptr && this->priceFactorList_ == nullptr; };
        // priceEntityCode Field Functions 
        bool hasPriceEntityCode() const { return this->priceEntityCode_ != nullptr;};
        void deletePriceEntityCode() { this->priceEntityCode_ = nullptr;};
        inline string getPriceEntityCode() const { DARABONBA_PTR_GET_DEFAULT(priceEntityCode_, "") };
        inline PriceEntityInfoList& setPriceEntityCode(string priceEntityCode) { DARABONBA_PTR_SET_VALUE(priceEntityCode_, priceEntityCode) };


        // priceEntityName Field Functions 
        bool hasPriceEntityName() const { return this->priceEntityName_ != nullptr;};
        void deletePriceEntityName() { this->priceEntityName_ = nullptr;};
        inline string getPriceEntityName() const { DARABONBA_PTR_GET_DEFAULT(priceEntityName_, "") };
        inline PriceEntityInfoList& setPriceEntityName(string priceEntityName) { DARABONBA_PTR_SET_VALUE(priceEntityName_, priceEntityName) };


        // priceFactorList Field Functions 
        bool hasPriceFactorList() const { return this->priceFactorList_ != nullptr;};
        void deletePriceFactorList() { this->priceFactorList_ = nullptr;};
        inline const vector<PriceEntityInfoList::PriceFactorList> & getPriceFactorList() const { DARABONBA_PTR_GET_CONST(priceFactorList_, vector<PriceEntityInfoList::PriceFactorList>) };
        inline vector<PriceEntityInfoList::PriceFactorList> getPriceFactorList() { DARABONBA_PTR_GET(priceFactorList_, vector<PriceEntityInfoList::PriceFactorList>) };
        inline PriceEntityInfoList& setPriceFactorList(const vector<PriceEntityInfoList::PriceFactorList> & priceFactorList) { DARABONBA_PTR_SET_VALUE(priceFactorList_, priceFactorList) };
        inline PriceEntityInfoList& setPriceFactorList(vector<PriceEntityInfoList::PriceFactorList> && priceFactorList) { DARABONBA_PTR_SET_RVALUE(priceFactorList_, priceFactorList) };


      protected:
        // The code of the billable item.
        shared_ptr<string> priceEntityCode_ {};
        // The name of the billable item.
        shared_ptr<string> priceEntityName_ {};
        // The factors of the billable item.
        shared_ptr<vector<PriceEntityInfoList::PriceFactorList>> priceFactorList_ {};
      };

      virtual bool empty() const override { return this->priceEntityInfoList_ == nullptr; };
      // priceEntityInfoList Field Functions 
      bool hasPriceEntityInfoList() const { return this->priceEntityInfoList_ != nullptr;};
      void deletePriceEntityInfoList() { this->priceEntityInfoList_ = nullptr;};
      inline const vector<Data::PriceEntityInfoList> & getPriceEntityInfoList() const { DARABONBA_PTR_GET_CONST(priceEntityInfoList_, vector<Data::PriceEntityInfoList>) };
      inline vector<Data::PriceEntityInfoList> getPriceEntityInfoList() { DARABONBA_PTR_GET(priceEntityInfoList_, vector<Data::PriceEntityInfoList>) };
      inline Data& setPriceEntityInfoList(const vector<Data::PriceEntityInfoList> & priceEntityInfoList) { DARABONBA_PTR_SET_VALUE(priceEntityInfoList_, priceEntityInfoList) };
      inline Data& setPriceEntityInfoList(vector<Data::PriceEntityInfoList> && priceEntityInfoList) { DARABONBA_PTR_SET_RVALUE(priceEntityInfoList_, priceEntityInfoList) };


    protected:
      // The information about the billable items.
      shared_ptr<vector<Data::PriceEntityInfoList>> priceEntityInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPriceEntityListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryPriceEntityListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryPriceEntityListResponseBody::Data) };
    inline QueryPriceEntityListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryPriceEntityListResponseBody::Data) };
    inline QueryPriceEntityListResponseBody& setData(const QueryPriceEntityListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPriceEntityListResponseBody& setData(QueryPriceEntityListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryPriceEntityListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPriceEntityListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPriceEntityListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The data that is returned.
    shared_ptr<QueryPriceEntityListResponseBody::Data> data_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
