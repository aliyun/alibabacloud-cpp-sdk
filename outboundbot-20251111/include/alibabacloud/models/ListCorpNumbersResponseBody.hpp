// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCORPNUMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCORPNUMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListCorpNumbersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCorpNumbersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCorpNumbersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCorpNumbersResponseBody() = default ;
    ListCorpNumbersResponseBody(const ListCorpNumbersResponseBody &) = default ;
    ListCorpNumbersResponseBody(ListCorpNumbersResponseBody &&) = default ;
    ListCorpNumbersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCorpNumbersResponseBody() = default ;
    ListCorpNumbersResponseBody& operator=(const ListCorpNumbersResponseBody &) = default ;
    ListCorpNumbersResponseBody& operator=(ListCorpNumbersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CorpNumbers, corpNumbers_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CorpNumbers, corpNumbers_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class CorpNumbers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CorpNumbers& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceNames, instanceNames_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(SipTrunkId, sipTrunkId_);
          DARABONBA_PTR_TO_JSON(SipTrunkName, sipTrunkName_);
        };
        friend void from_json(const Darabonba::Json& j, CorpNumbers& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceNames, instanceNames_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(SipTrunkId, sipTrunkId_);
          DARABONBA_PTR_FROM_JSON(SipTrunkName, sipTrunkName_);
        };
        CorpNumbers() = default ;
        CorpNumbers(const CorpNumbers &) = default ;
        CorpNumbers(CorpNumbers &&) = default ;
        CorpNumbers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CorpNumbers() = default ;
        CorpNumbers& operator=(const CorpNumbers &) = default ;
        CorpNumbers& operator=(CorpNumbers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceNames_ == nullptr
        && this->number_ == nullptr && this->sipTrunkId_ == nullptr && this->sipTrunkName_ == nullptr; };
        // instanceNames Field Functions 
        bool hasInstanceNames() const { return this->instanceNames_ != nullptr;};
        void deleteInstanceNames() { this->instanceNames_ = nullptr;};
        inline const vector<string> & getInstanceNames() const { DARABONBA_PTR_GET_CONST(instanceNames_, vector<string>) };
        inline vector<string> getInstanceNames() { DARABONBA_PTR_GET(instanceNames_, vector<string>) };
        inline CorpNumbers& setInstanceNames(const vector<string> & instanceNames) { DARABONBA_PTR_SET_VALUE(instanceNames_, instanceNames) };
        inline CorpNumbers& setInstanceNames(vector<string> && instanceNames) { DARABONBA_PTR_SET_RVALUE(instanceNames_, instanceNames) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline CorpNumbers& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // sipTrunkId Field Functions 
        bool hasSipTrunkId() const { return this->sipTrunkId_ != nullptr;};
        void deleteSipTrunkId() { this->sipTrunkId_ = nullptr;};
        inline string getSipTrunkId() const { DARABONBA_PTR_GET_DEFAULT(sipTrunkId_, "") };
        inline CorpNumbers& setSipTrunkId(string sipTrunkId) { DARABONBA_PTR_SET_VALUE(sipTrunkId_, sipTrunkId) };


        // sipTrunkName Field Functions 
        bool hasSipTrunkName() const { return this->sipTrunkName_ != nullptr;};
        void deleteSipTrunkName() { this->sipTrunkName_ = nullptr;};
        inline string getSipTrunkName() const { DARABONBA_PTR_GET_DEFAULT(sipTrunkName_, "") };
        inline CorpNumbers& setSipTrunkName(string sipTrunkName) { DARABONBA_PTR_SET_VALUE(sipTrunkName_, sipTrunkName) };


      protected:
        // The list of instance names associated with the number.
        shared_ptr<vector<string>> instanceNames_ {};
        // The phone number.
        shared_ptr<string> number_ {};
        // The SIP trunk ID.
        shared_ptr<string> sipTrunkId_ {};
        // The SIP trunk name.
        shared_ptr<string> sipTrunkName_ {};
      };

      virtual bool empty() const override { return this->corpNumbers_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // corpNumbers Field Functions 
      bool hasCorpNumbers() const { return this->corpNumbers_ != nullptr;};
      void deleteCorpNumbers() { this->corpNumbers_ = nullptr;};
      inline const vector<Data::CorpNumbers> & getCorpNumbers() const { DARABONBA_PTR_GET_CONST(corpNumbers_, vector<Data::CorpNumbers>) };
      inline vector<Data::CorpNumbers> getCorpNumbers() { DARABONBA_PTR_GET(corpNumbers_, vector<Data::CorpNumbers>) };
      inline Data& setCorpNumbers(const vector<Data::CorpNumbers> & corpNumbers) { DARABONBA_PTR_SET_VALUE(corpNumbers_, corpNumbers) };
      inline Data& setCorpNumbers(vector<Data::CorpNumbers> && corpNumbers) { DARABONBA_PTR_SET_RVALUE(corpNumbers_, corpNumbers) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of tenant numbers.
      shared_ptr<vector<Data::CorpNumbers>> corpNumbers_ {};
      // The current page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCorpNumbersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCorpNumbersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCorpNumbersResponseBody::Data) };
    inline ListCorpNumbersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCorpNumbersResponseBody::Data) };
    inline ListCorpNumbersResponseBody& setData(const ListCorpNumbersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCorpNumbersResponseBody& setData(ListCorpNumbersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCorpNumbersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCorpNumbersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListCorpNumbersResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListCorpNumbersResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCorpNumbersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCorpNumbersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListCorpNumbersResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned by the API.
    shared_ptr<string> message_ {};
    // The list of variable values in the error message.
    shared_ptr<vector<string>> params_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
