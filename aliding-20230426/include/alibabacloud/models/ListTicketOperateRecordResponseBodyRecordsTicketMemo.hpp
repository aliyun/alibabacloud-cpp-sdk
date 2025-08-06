// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDRESPONSEBODYRECORDSTICKETMEMO_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDRESPONSEBODYRECORDSTICKETMEMO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTicketOperateRecordResponseBodyRecordsTicketMemoAttachments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTicketOperateRecordResponseBodyRecordsTicketMemo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketOperateRecordResponseBodyRecordsTicketMemo& obj) { 
      DARABONBA_PTR_TO_JSON(Attachments, attachments_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketOperateRecordResponseBodyRecordsTicketMemo& obj) { 
      DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
    };
    ListTicketOperateRecordResponseBodyRecordsTicketMemo() = default ;
    ListTicketOperateRecordResponseBodyRecordsTicketMemo(const ListTicketOperateRecordResponseBodyRecordsTicketMemo &) = default ;
    ListTicketOperateRecordResponseBodyRecordsTicketMemo(ListTicketOperateRecordResponseBodyRecordsTicketMemo &&) = default ;
    ListTicketOperateRecordResponseBodyRecordsTicketMemo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketOperateRecordResponseBodyRecordsTicketMemo() = default ;
    ListTicketOperateRecordResponseBodyRecordsTicketMemo& operator=(const ListTicketOperateRecordResponseBodyRecordsTicketMemo &) = default ;
    ListTicketOperateRecordResponseBodyRecordsTicketMemo& operator=(ListTicketOperateRecordResponseBodyRecordsTicketMemo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachments_ != nullptr
        && this->memo_ != nullptr; };
    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<Models::ListTicketOperateRecordResponseBodyRecordsTicketMemoAttachments> & attachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Models::ListTicketOperateRecordResponseBodyRecordsTicketMemoAttachments>) };
    inline vector<Models::ListTicketOperateRecordResponseBodyRecordsTicketMemoAttachments> attachments() { DARABONBA_PTR_GET(attachments_, vector<Models::ListTicketOperateRecordResponseBodyRecordsTicketMemoAttachments>) };
    inline ListTicketOperateRecordResponseBodyRecordsTicketMemo& setAttachments(const vector<Models::ListTicketOperateRecordResponseBodyRecordsTicketMemoAttachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline ListTicketOperateRecordResponseBodyRecordsTicketMemo& setAttachments(vector<Models::ListTicketOperateRecordResponseBodyRecordsTicketMemoAttachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline ListTicketOperateRecordResponseBodyRecordsTicketMemo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


  protected:
    std::shared_ptr<vector<Models::ListTicketOperateRecordResponseBodyRecordsTicketMemoAttachments>> attachments_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
