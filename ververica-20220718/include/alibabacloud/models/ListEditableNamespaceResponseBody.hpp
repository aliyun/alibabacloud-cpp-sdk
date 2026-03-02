// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDITABLENAMESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEDITABLENAMESPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EditableNamespace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ListEditableNamespaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEditableNamespaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEditableNamespaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListEditableNamespaceResponseBody() = default ;
    ListEditableNamespaceResponseBody(const ListEditableNamespaceResponseBody &) = default ;
    ListEditableNamespaceResponseBody(ListEditableNamespaceResponseBody &&) = default ;
    ListEditableNamespaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEditableNamespaceResponseBody() = default ;
    ListEditableNamespaceResponseBody& operator=(const ListEditableNamespaceResponseBody &) = default ;
    ListEditableNamespaceResponseBody& operator=(ListEditableNamespaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(editableNamespaces, editableNamespaces_);
        DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(editableNamespaces, editableNamespaces_);
        DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
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
      virtual bool empty() const override { return this->editableNamespaces_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // editableNamespaces Field Functions 
      bool hasEditableNamespaces() const { return this->editableNamespaces_ != nullptr;};
      void deleteEditableNamespaces() { this->editableNamespaces_ = nullptr;};
      inline const vector<EditableNamespace> & getEditableNamespaces() const { DARABONBA_PTR_GET_CONST(editableNamespaces_, vector<EditableNamespace>) };
      inline vector<EditableNamespace> getEditableNamespaces() { DARABONBA_PTR_GET(editableNamespaces_, vector<EditableNamespace>) };
      inline Data& setEditableNamespaces(const vector<EditableNamespace> & editableNamespaces) { DARABONBA_PTR_SET_VALUE(editableNamespaces_, editableNamespaces) };
      inline Data& setEditableNamespaces(vector<EditableNamespace> && editableNamespaces) { DARABONBA_PTR_SET_RVALUE(editableNamespaces_, editableNamespaces) };


      // pageIndex Field Functions 
      bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
      void deletePageIndex() { this->pageIndex_ = nullptr;};
      inline string getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, "") };
      inline Data& setPageIndex(string pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Data& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
      inline Data& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<EditableNamespace>> editableNamespaces_ {};
      shared_ptr<string> pageIndex_ {};
      shared_ptr<string> pageSize_ {};
      shared_ptr<string> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpCode_ == nullptr && this->message_ == nullptr && this->reason_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListEditableNamespaceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListEditableNamespaceResponseBody::Data) };
    inline ListEditableNamespaceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListEditableNamespaceResponseBody::Data) };
    inline ListEditableNamespaceResponseBody& setData(const ListEditableNamespaceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEditableNamespaceResponseBody& setData(ListEditableNamespaceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListEditableNamespaceResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEditableNamespaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListEditableNamespaceResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEditableNamespaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEditableNamespaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ListEditableNamespaceResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> reason_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
