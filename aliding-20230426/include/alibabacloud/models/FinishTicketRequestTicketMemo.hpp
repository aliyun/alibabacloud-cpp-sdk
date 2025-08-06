// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINISHTICKETREQUESTTICKETMEMO_HPP_
#define ALIBABACLOUD_MODELS_FINISHTICKETREQUESTTICKETMEMO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FinishTicketRequestTicketMemoAttachments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class FinishTicketRequestTicketMemo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FinishTicketRequestTicketMemo& obj) { 
      DARABONBA_PTR_TO_JSON(Attachments, attachments_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
    };
    friend void from_json(const Darabonba::Json& j, FinishTicketRequestTicketMemo& obj) { 
      DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
    };
    FinishTicketRequestTicketMemo() = default ;
    FinishTicketRequestTicketMemo(const FinishTicketRequestTicketMemo &) = default ;
    FinishTicketRequestTicketMemo(FinishTicketRequestTicketMemo &&) = default ;
    FinishTicketRequestTicketMemo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FinishTicketRequestTicketMemo() = default ;
    FinishTicketRequestTicketMemo& operator=(const FinishTicketRequestTicketMemo &) = default ;
    FinishTicketRequestTicketMemo& operator=(FinishTicketRequestTicketMemo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachments_ != nullptr
        && this->memo_ != nullptr; };
    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<Models::FinishTicketRequestTicketMemoAttachments> & attachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Models::FinishTicketRequestTicketMemoAttachments>) };
    inline vector<Models::FinishTicketRequestTicketMemoAttachments> attachments() { DARABONBA_PTR_GET(attachments_, vector<Models::FinishTicketRequestTicketMemoAttachments>) };
    inline FinishTicketRequestTicketMemo& setAttachments(const vector<Models::FinishTicketRequestTicketMemoAttachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline FinishTicketRequestTicketMemo& setAttachments(vector<Models::FinishTicketRequestTicketMemoAttachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline FinishTicketRequestTicketMemo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


  protected:
    std::shared_ptr<vector<Models::FinishTicketRequestTicketMemoAttachments>> attachments_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
