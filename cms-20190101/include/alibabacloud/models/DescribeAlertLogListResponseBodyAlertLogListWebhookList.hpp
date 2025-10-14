// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTWEBHOOKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTWEBHOOKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogListResponseBodyAlertLogListWebhookList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogListResponseBodyAlertLogListWebhookList& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogListResponseBodyAlertLogListWebhookList& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    DescribeAlertLogListResponseBodyAlertLogListWebhookList() = default ;
    DescribeAlertLogListResponseBodyAlertLogListWebhookList(const DescribeAlertLogListResponseBodyAlertLogListWebhookList &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListWebhookList(DescribeAlertLogListResponseBodyAlertLogListWebhookList &&) = default ;
    DescribeAlertLogListResponseBodyAlertLogListWebhookList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogListResponseBodyAlertLogListWebhookList() = default ;
    DescribeAlertLogListResponseBodyAlertLogListWebhookList& operator=(const DescribeAlertLogListResponseBodyAlertLogListWebhookList &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListWebhookList& operator=(DescribeAlertLogListResponseBodyAlertLogListWebhookList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->url_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogListWebhookList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogListWebhookList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogListWebhookList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The status code of the alert callback.
    std::shared_ptr<string> code_ = nullptr;
    // The message returned for the alert callback.
    std::shared_ptr<string> message_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
