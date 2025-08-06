// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTUPLOADPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REPORTUPLOADPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ReportUploadProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportUploadProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ReportUploadProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ReportUploadProgressResponseBody() = default ;
    ReportUploadProgressResponseBody(const ReportUploadProgressResponseBody &) = default ;
    ReportUploadProgressResponseBody(ReportUploadProgressResponseBody &&) = default ;
    ReportUploadProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportUploadProgressResponseBody() = default ;
    ReportUploadProgressResponseBody& operator=(const ReportUploadProgressResponseBody &) = default ;
    ReportUploadProgressResponseBody& operator=(ReportUploadProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->requestId_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReportUploadProgressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReportUploadProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
