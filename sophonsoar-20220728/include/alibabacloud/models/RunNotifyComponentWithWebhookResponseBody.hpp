// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHWEBHOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHWEBHOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunNotifyComponentWithWebhookResponseBodyPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class RunNotifyComponentWithWebhookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunNotifyComponentWithWebhookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunNotifyComponentWithWebhookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunNotifyComponentWithWebhookResponseBody() = default ;
    RunNotifyComponentWithWebhookResponseBody(const RunNotifyComponentWithWebhookResponseBody &) = default ;
    RunNotifyComponentWithWebhookResponseBody(RunNotifyComponentWithWebhookResponseBody &&) = default ;
    RunNotifyComponentWithWebhookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunNotifyComponentWithWebhookResponseBody() = default ;
    RunNotifyComponentWithWebhookResponseBody& operator=(const RunNotifyComponentWithWebhookResponseBody &) = default ;
    RunNotifyComponentWithWebhookResponseBody& operator=(RunNotifyComponentWithWebhookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->page_ == nullptr && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline RunNotifyComponentWithWebhookResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const RunNotifyComponentWithWebhookResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, RunNotifyComponentWithWebhookResponseBodyPage) };
    inline RunNotifyComponentWithWebhookResponseBodyPage page() { DARABONBA_PTR_GET(page_, RunNotifyComponentWithWebhookResponseBodyPage) };
    inline RunNotifyComponentWithWebhookResponseBody& setPage(const RunNotifyComponentWithWebhookResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline RunNotifyComponentWithWebhookResponseBody& setPage(RunNotifyComponentWithWebhookResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunNotifyComponentWithWebhookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<string> data_ = nullptr;
    // The pagination information.
    std::shared_ptr<RunNotifyComponentWithWebhookResponseBodyPage> page_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
