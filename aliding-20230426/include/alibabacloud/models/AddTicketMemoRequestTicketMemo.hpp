// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTICKETMEMOREQUESTTICKETMEMO_HPP_
#define ALIBABACLOUD_MODELS_ADDTICKETMEMOREQUESTTICKETMEMO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddTicketMemoRequestTicketMemoAttachments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddTicketMemoRequestTicketMemo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTicketMemoRequestTicketMemo& obj) { 
      DARABONBA_PTR_TO_JSON(Attachments, attachments_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
    };
    friend void from_json(const Darabonba::Json& j, AddTicketMemoRequestTicketMemo& obj) { 
      DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
    };
    AddTicketMemoRequestTicketMemo() = default ;
    AddTicketMemoRequestTicketMemo(const AddTicketMemoRequestTicketMemo &) = default ;
    AddTicketMemoRequestTicketMemo(AddTicketMemoRequestTicketMemo &&) = default ;
    AddTicketMemoRequestTicketMemo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTicketMemoRequestTicketMemo() = default ;
    AddTicketMemoRequestTicketMemo& operator=(const AddTicketMemoRequestTicketMemo &) = default ;
    AddTicketMemoRequestTicketMemo& operator=(AddTicketMemoRequestTicketMemo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachments_ == nullptr
        && return this->memo_ == nullptr; };
    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<Models::AddTicketMemoRequestTicketMemoAttachments> & attachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Models::AddTicketMemoRequestTicketMemoAttachments>) };
    inline vector<Models::AddTicketMemoRequestTicketMemoAttachments> attachments() { DARABONBA_PTR_GET(attachments_, vector<Models::AddTicketMemoRequestTicketMemoAttachments>) };
    inline AddTicketMemoRequestTicketMemo& setAttachments(const vector<Models::AddTicketMemoRequestTicketMemoAttachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline AddTicketMemoRequestTicketMemo& setAttachments(vector<Models::AddTicketMemoRequestTicketMemoAttachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline AddTicketMemoRequestTicketMemo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


  protected:
    std::shared_ptr<vector<Models::AddTicketMemoRequestTicketMemoAttachments>> attachments_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
