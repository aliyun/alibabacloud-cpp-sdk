// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERTICKETREQUESTTICKETMEMO_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERTICKETREQUESTTICKETMEMO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TransferTicketRequestTicketMemoAttachments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class TransferTicketRequestTicketMemo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferTicketRequestTicketMemo& obj) { 
      DARABONBA_PTR_TO_JSON(Attachments, attachments_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
    };
    friend void from_json(const Darabonba::Json& j, TransferTicketRequestTicketMemo& obj) { 
      DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
    };
    TransferTicketRequestTicketMemo() = default ;
    TransferTicketRequestTicketMemo(const TransferTicketRequestTicketMemo &) = default ;
    TransferTicketRequestTicketMemo(TransferTicketRequestTicketMemo &&) = default ;
    TransferTicketRequestTicketMemo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferTicketRequestTicketMemo() = default ;
    TransferTicketRequestTicketMemo& operator=(const TransferTicketRequestTicketMemo &) = default ;
    TransferTicketRequestTicketMemo& operator=(TransferTicketRequestTicketMemo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachments_ == nullptr
        && return this->memo_ == nullptr; };
    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<Models::TransferTicketRequestTicketMemoAttachments> & attachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Models::TransferTicketRequestTicketMemoAttachments>) };
    inline vector<Models::TransferTicketRequestTicketMemoAttachments> attachments() { DARABONBA_PTR_GET(attachments_, vector<Models::TransferTicketRequestTicketMemoAttachments>) };
    inline TransferTicketRequestTicketMemo& setAttachments(const vector<Models::TransferTicketRequestTicketMemoAttachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline TransferTicketRequestTicketMemo& setAttachments(vector<Models::TransferTicketRequestTicketMemoAttachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline TransferTicketRequestTicketMemo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


  protected:
    std::shared_ptr<vector<Models::TransferTicketRequestTicketMemoAttachments>> attachments_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
