// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKET4COPILOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKET4COPILOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CreateTicket4CopilotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicket4CopilotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicket4CopilotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateTicket4CopilotResponseBody() = default ;
    CreateTicket4CopilotResponseBody(const CreateTicket4CopilotResponseBody &) = default ;
    CreateTicket4CopilotResponseBody(CreateTicket4CopilotResponseBody &&) = default ;
    CreateTicket4CopilotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicket4CopilotResponseBody() = default ;
    CreateTicket4CopilotResponseBody& operator=(const CreateTicket4CopilotResponseBody &) = default ;
    CreateTicket4CopilotResponseBody& operator=(CreateTicket4CopilotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTicket4CopilotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline CreateTicket4CopilotResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateTicket4CopilotResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // ID of the Smart Q module to be embedded.
    shared_ptr<string> result_ {};
    // Indicates whether the request was successful. Possible values:
    // - true: The request succeeded
    // - false: The request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
