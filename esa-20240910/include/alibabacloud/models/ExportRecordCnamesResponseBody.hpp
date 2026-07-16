// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTRECORDCNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTRECORDCNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ExportRecordCnamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportRecordCnamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportRecordCnamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportRecordCnamesResponseBody() = default ;
    ExportRecordCnamesResponseBody(const ExportRecordCnamesResponseBody &) = default ;
    ExportRecordCnamesResponseBody(ExportRecordCnamesResponseBody &&) = default ;
    ExportRecordCnamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportRecordCnamesResponseBody() = default ;
    ExportRecordCnamesResponseBody& operator=(const ExportRecordCnamesResponseBody &) = default ;
    ExportRecordCnamesResponseBody& operator=(ExportRecordCnamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ExportRecordCnamesResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportRecordCnamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The exported CNAME content.
    shared_ptr<string> content_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
