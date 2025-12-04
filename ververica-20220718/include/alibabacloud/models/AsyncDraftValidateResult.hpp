// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCDRAFTVALIDATERESULT_HPP_
#define ALIBABACLOUD_MODELS_ASYNCDRAFTVALIDATERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DraftValidationDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class AsyncDraftValidateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncDraftValidateResult& obj) { 
      DARABONBA_PTR_TO_JSON(draftValidationDetail, draftValidationDetail_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(ticketStatus, ticketStatus_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncDraftValidateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(draftValidationDetail, draftValidationDetail_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(ticketStatus, ticketStatus_);
    };
    AsyncDraftValidateResult() = default ;
    AsyncDraftValidateResult(const AsyncDraftValidateResult &) = default ;
    AsyncDraftValidateResult(AsyncDraftValidateResult &&) = default ;
    AsyncDraftValidateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncDraftValidateResult() = default ;
    AsyncDraftValidateResult& operator=(const AsyncDraftValidateResult &) = default ;
    AsyncDraftValidateResult& operator=(AsyncDraftValidateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draftValidationDetail_ == nullptr
        && return this->message_ == nullptr && return this->success_ == nullptr && return this->ticketStatus_ == nullptr; };
    // draftValidationDetail Field Functions 
    bool hasDraftValidationDetail() const { return this->draftValidationDetail_ != nullptr;};
    void deleteDraftValidationDetail() { this->draftValidationDetail_ = nullptr;};
    inline const DraftValidationDetail & draftValidationDetail() const { DARABONBA_PTR_GET_CONST(draftValidationDetail_, DraftValidationDetail) };
    inline DraftValidationDetail draftValidationDetail() { DARABONBA_PTR_GET(draftValidationDetail_, DraftValidationDetail) };
    inline AsyncDraftValidateResult& setDraftValidationDetail(const DraftValidationDetail & draftValidationDetail) { DARABONBA_PTR_SET_VALUE(draftValidationDetail_, draftValidationDetail) };
    inline AsyncDraftValidateResult& setDraftValidationDetail(DraftValidationDetail && draftValidationDetail) { DARABONBA_PTR_SET_RVALUE(draftValidationDetail_, draftValidationDetail) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AsyncDraftValidateResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AsyncDraftValidateResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline string ticketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
    inline AsyncDraftValidateResult& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


  protected:
    std::shared_ptr<DraftValidationDetail> draftValidationDetail_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> ticketStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
