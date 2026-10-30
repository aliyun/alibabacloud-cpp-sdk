// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEYAOCHIAGENTCONFIRMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEYAOCHIAGENTCONFIRMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateYaoChiAgentConfirmResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateYaoChiAgentConfirmResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Approved, approved_);
      DARABONBA_PTR_TO_JSON(ConfirmationId, confirmationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ToolArgsReceived, toolArgsReceived_);
    };
    friend void from_json(const Darabonba::Json& j, CreateYaoChiAgentConfirmResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Approved, approved_);
      DARABONBA_PTR_FROM_JSON(ConfirmationId, confirmationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ToolArgsReceived, toolArgsReceived_);
    };
    CreateYaoChiAgentConfirmResponseBody() = default ;
    CreateYaoChiAgentConfirmResponseBody(const CreateYaoChiAgentConfirmResponseBody &) = default ;
    CreateYaoChiAgentConfirmResponseBody(CreateYaoChiAgentConfirmResponseBody &&) = default ;
    CreateYaoChiAgentConfirmResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateYaoChiAgentConfirmResponseBody() = default ;
    CreateYaoChiAgentConfirmResponseBody& operator=(const CreateYaoChiAgentConfirmResponseBody &) = default ;
    CreateYaoChiAgentConfirmResponseBody& operator=(CreateYaoChiAgentConfirmResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approved_ == nullptr
        && this->confirmationId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->toolArgsReceived_ == nullptr; };
    // approved Field Functions 
    bool hasApproved() const { return this->approved_ != nullptr;};
    void deleteApproved() { this->approved_ = nullptr;};
    inline bool getApproved() const { DARABONBA_PTR_GET_DEFAULT(approved_, false) };
    inline CreateYaoChiAgentConfirmResponseBody& setApproved(bool approved) { DARABONBA_PTR_SET_VALUE(approved_, approved) };


    // confirmationId Field Functions 
    bool hasConfirmationId() const { return this->confirmationId_ != nullptr;};
    void deleteConfirmationId() { this->confirmationId_ = nullptr;};
    inline string getConfirmationId() const { DARABONBA_PTR_GET_DEFAULT(confirmationId_, "") };
    inline CreateYaoChiAgentConfirmResponseBody& setConfirmationId(string confirmationId) { DARABONBA_PTR_SET_VALUE(confirmationId_, confirmationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateYaoChiAgentConfirmResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateYaoChiAgentConfirmResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // toolArgsReceived Field Functions 
    bool hasToolArgsReceived() const { return this->toolArgsReceived_ != nullptr;};
    void deleteToolArgsReceived() { this->toolArgsReceived_ = nullptr;};
    inline bool getToolArgsReceived() const { DARABONBA_PTR_GET_DEFAULT(toolArgsReceived_, false) };
    inline CreateYaoChiAgentConfirmResponseBody& setToolArgsReceived(bool toolArgsReceived) { DARABONBA_PTR_SET_VALUE(toolArgsReceived_, toolArgsReceived) };


  protected:
    // The confirmation decision submitted in this request, which is the same as the Approved request parameter. A value of true indicates that the execution is approved, and false indicates that the execution is rejected. This does not indicate whether the tool operation is executed successfully.
    shared_ptr<bool> approved_ {};
    // The identifier of the operation for which the confirmation is submitted, which is the same as the ConfirmationId request parameter.
    shared_ptr<string> confirmationId_ {};
    // The unique identifier of the request, which is used for troubleshooting and log tracing.
    shared_ptr<string> requestId_ {};
    // The status string. The example value success refers to the outer success status of the downstream confirmation callback response and is provided only for format demonstration. It does not mean that the Status field of the current operation actually returns this value. In the current version, this field may be empty or not returned. Do not rely on this field to determine whether the execution is approved or whether the tool is executed successfully.
    shared_ptr<string> status_ {};
    // Specifies whether custom tool parameters are received. A value of true indicates that non-null parameters are provided, and false indicates that no parameters are provided. This does not indicate that the parameters are applied or that the tool is executed successfully. In the current version, omit the ToolArgs request parameter, and this field normally returns false.
    shared_ptr<bool> toolArgsReceived_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
