// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRELATEDRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRELATEDRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListRelatedResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRelatedResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListRelatedResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListRelatedResourceResponseBody() = default ;
    ListRelatedResourceResponseBody(const ListRelatedResourceResponseBody &) = default ;
    ListRelatedResourceResponseBody(ListRelatedResourceResponseBody &&) = default ;
    ListRelatedResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRelatedResourceResponseBody() = default ;
    ListRelatedResourceResponseBody& operator=(const ListRelatedResourceResponseBody &) = default ;
    ListRelatedResourceResponseBody& operator=(ListRelatedResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_TO_JSON(DesktopGroupCount, desktopGroupCount_);
        DARABONBA_PTR_TO_JSON(TemplateCount, templateCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupCount, desktopGroupCount_);
        DARABONBA_PTR_FROM_JSON(TemplateCount, templateCount_);
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
      virtual bool empty() const override { return this->desktopCount_ == nullptr
        && this->desktopGroupCount_ == nullptr && this->templateCount_ == nullptr; };
      // desktopCount Field Functions 
      bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
      void deleteDesktopCount() { this->desktopCount_ = nullptr;};
      inline int32_t getDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0) };
      inline Data& setDesktopCount(int32_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


      // desktopGroupCount Field Functions 
      bool hasDesktopGroupCount() const { return this->desktopGroupCount_ != nullptr;};
      void deleteDesktopGroupCount() { this->desktopGroupCount_ = nullptr;};
      inline int32_t getDesktopGroupCount() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupCount_, 0) };
      inline Data& setDesktopGroupCount(int32_t desktopGroupCount) { DARABONBA_PTR_SET_VALUE(desktopGroupCount_, desktopGroupCount) };


      // templateCount Field Functions 
      bool hasTemplateCount() const { return this->templateCount_ != nullptr;};
      void deleteTemplateCount() { this->templateCount_ = nullptr;};
      inline int32_t getTemplateCount() const { DARABONBA_PTR_GET_DEFAULT(templateCount_, 0) };
      inline Data& setTemplateCount(int32_t templateCount) { DARABONBA_PTR_SET_VALUE(templateCount_, templateCount) };


    protected:
      // The number of cloud desktops associated with the image.
      shared_ptr<int32_t> desktopCount_ {};
      // The number of cloud desktop pools associated with the image.
      shared_ptr<int32_t> desktopGroupCount_ {};
      // The number of associated templates.
      shared_ptr<int32_t> templateCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRelatedResourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRelatedResourceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListRelatedResourceResponseBody::Data) };
    inline ListRelatedResourceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListRelatedResourceResponseBody::Data) };
    inline ListRelatedResourceResponseBody& setData(const ListRelatedResourceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRelatedResourceResponseBody& setData(ListRelatedResourceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRelatedResourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRelatedResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRelatedResourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. This field is returned when the request fails. A successful response may not contain this field.
    shared_ptr<string> code_ {};
    // The returned data object.
    shared_ptr<ListRelatedResourceResponseBody::Data> data_ {};
    // The description of the request processing result. The value `success` is typically returned when the request is successful.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. A value of true indicates that the request is successful, and a value of false indicates that the request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
