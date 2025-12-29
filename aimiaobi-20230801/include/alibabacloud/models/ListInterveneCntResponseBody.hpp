// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENECNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENECNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListInterveneCntResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterveneCntResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterveneCntResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInterveneCntResponseBody() = default ;
    ListInterveneCntResponseBody(const ListInterveneCntResponseBody &) = default ;
    ListInterveneCntResponseBody(ListInterveneCntResponseBody &&) = default ;
    ListInterveneCntResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterveneCntResponseBody() = default ;
    ListInterveneCntResponseBody& operator=(const ListInterveneCntResponseBody &) = default ;
    ListInterveneCntResponseBody& operator=(ListInterveneCntResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CntList, cntList_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(PageCnt, pageCnt_);
        DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CntList, cntList_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(PageCnt, pageCnt_);
        DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      virtual bool empty() const override { return this->cntList_ == nullptr
        && this->code_ == nullptr && this->pageCnt_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr; };
      // cntList Field Functions 
      bool hasCntList() const { return this->cntList_ != nullptr;};
      void deleteCntList() { this->cntList_ = nullptr;};
      inline const vector<Darabonba::Json> & getCntList() const { DARABONBA_PTR_GET_CONST(cntList_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getCntList() { DARABONBA_PTR_GET(cntList_, vector<Darabonba::Json>) };
      inline Data& setCntList(const vector<Darabonba::Json> & cntList) { DARABONBA_PTR_SET_VALUE(cntList_, cntList) };
      inline Data& setCntList(vector<Darabonba::Json> && cntList) { DARABONBA_PTR_SET_RVALUE(cntList_, cntList) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Data& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // pageCnt Field Functions 
      bool hasPageCnt() const { return this->pageCnt_ != nullptr;};
      void deletePageCnt() { this->pageCnt_ = nullptr;};
      inline int32_t getPageCnt() const { DARABONBA_PTR_GET_DEFAULT(pageCnt_, 0) };
      inline Data& setPageCnt(int32_t pageCnt) { DARABONBA_PTR_SET_VALUE(pageCnt_, pageCnt) };


      // pageIndex Field Functions 
      bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
      void deletePageIndex() { this->pageIndex_ = nullptr;};
      inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
      inline Data& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    protected:
      shared_ptr<vector<Darabonba::Json>> cntList_ {};
      shared_ptr<int32_t> code_ {};
      shared_ptr<int32_t> pageCnt_ {};
      shared_ptr<int32_t> pageIndex_ {};
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInterveneCntResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListInterveneCntResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListInterveneCntResponseBody::Data) };
    inline ListInterveneCntResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListInterveneCntResponseBody::Data) };
    inline ListInterveneCntResponseBody& setData(const ListInterveneCntResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInterveneCntResponseBody& setData(ListInterveneCntResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListInterveneCntResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInterveneCntResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInterveneCntResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInterveneCntResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListInterveneCntResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
