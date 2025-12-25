// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETNOTESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETNOTESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTicketNotesResponseBodyDataAttachments.hpp>
#include <alibabacloud/models/ListTicketNotesResponseBodyDataDialog.hpp>
#include <alibabacloud/models/ListTicketNotesResponseBodyDataUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListTicketNotesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketNotesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Attachments, attachments_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Dialog, dialog_);
      DARABONBA_PTR_TO_JSON(DialogId, dialogId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tip, tip_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketNotesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Dialog, dialog_);
      DARABONBA_PTR_FROM_JSON(DialogId, dialogId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tip, tip_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListTicketNotesResponseBodyData() = default ;
    ListTicketNotesResponseBodyData(const ListTicketNotesResponseBodyData &) = default ;
    ListTicketNotesResponseBodyData(ListTicketNotesResponseBodyData &&) = default ;
    ListTicketNotesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketNotesResponseBodyData() = default ;
    ListTicketNotesResponseBodyData& operator=(const ListTicketNotesResponseBodyData &) = default ;
    ListTicketNotesResponseBodyData& operator=(ListTicketNotesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachments_ == nullptr
        && return this->createTime_ == nullptr && return this->dialog_ == nullptr && return this->dialogId_ == nullptr && return this->status_ == nullptr && return this->tip_ == nullptr
        && return this->type_ == nullptr && return this->user_ == nullptr; };
    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<Models::ListTicketNotesResponseBodyDataAttachments> & attachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Models::ListTicketNotesResponseBodyDataAttachments>) };
    inline vector<Models::ListTicketNotesResponseBodyDataAttachments> attachments() { DARABONBA_PTR_GET(attachments_, vector<Models::ListTicketNotesResponseBodyDataAttachments>) };
    inline ListTicketNotesResponseBodyData& setAttachments(const vector<Models::ListTicketNotesResponseBodyDataAttachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline ListTicketNotesResponseBodyData& setAttachments(vector<Models::ListTicketNotesResponseBodyDataAttachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListTicketNotesResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dialog Field Functions 
    bool hasDialog() const { return this->dialog_ != nullptr;};
    void deleteDialog() { this->dialog_ = nullptr;};
    inline const Models::ListTicketNotesResponseBodyDataDialog & dialog() const { DARABONBA_PTR_GET_CONST(dialog_, Models::ListTicketNotesResponseBodyDataDialog) };
    inline Models::ListTicketNotesResponseBodyDataDialog dialog() { DARABONBA_PTR_GET(dialog_, Models::ListTicketNotesResponseBodyDataDialog) };
    inline ListTicketNotesResponseBodyData& setDialog(const Models::ListTicketNotesResponseBodyDataDialog & dialog) { DARABONBA_PTR_SET_VALUE(dialog_, dialog) };
    inline ListTicketNotesResponseBodyData& setDialog(Models::ListTicketNotesResponseBodyDataDialog && dialog) { DARABONBA_PTR_SET_RVALUE(dialog_, dialog) };


    // dialogId Field Functions 
    bool hasDialogId() const { return this->dialogId_ != nullptr;};
    void deleteDialogId() { this->dialogId_ = nullptr;};
    inline int64_t dialogId() const { DARABONBA_PTR_GET_DEFAULT(dialogId_, 0L) };
    inline ListTicketNotesResponseBodyData& setDialogId(int64_t dialogId) { DARABONBA_PTR_SET_VALUE(dialogId_, dialogId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListTicketNotesResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tip Field Functions 
    bool hasTip() const { return this->tip_ != nullptr;};
    void deleteTip() { this->tip_ = nullptr;};
    inline string tip() const { DARABONBA_PTR_GET_DEFAULT(tip_, "") };
    inline ListTicketNotesResponseBodyData& setTip(string tip) { DARABONBA_PTR_SET_VALUE(tip_, tip) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListTicketNotesResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const Models::ListTicketNotesResponseBodyDataUser & user() const { DARABONBA_PTR_GET_CONST(user_, Models::ListTicketNotesResponseBodyDataUser) };
    inline Models::ListTicketNotesResponseBodyDataUser user() { DARABONBA_PTR_GET(user_, Models::ListTicketNotesResponseBodyDataUser) };
    inline ListTicketNotesResponseBodyData& setUser(const Models::ListTicketNotesResponseBodyDataUser & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline ListTicketNotesResponseBodyData& setUser(Models::ListTicketNotesResponseBodyDataUser && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // Attachment List
    std::shared_ptr<vector<Models::ListTicketNotesResponseBodyDataAttachments>> attachments_ = nullptr;
    // The timestamp when the communication message was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Work order communication record object
    std::shared_ptr<Models::ListTicketNotesResponseBodyDataDialog> dialog_ = nullptr;
    // The unique ID of the conversation record.
    std::shared_ptr<int64_t> dialogId_ = nullptr;
    // Communication message status field, reference value Unread=1, Read=2
    std::shared_ptr<int32_t> status_ = nullptr;
    // Fields Not Used
    std::shared_ptr<string> tip_ = nullptr;
    // Conversation Type 1 card, that is, schema 2 Text, that is, content
    std::shared_ptr<int32_t> type_ = nullptr;
    // Conversation of users
    std::shared_ptr<Models::ListTicketNotesResponseBodyDataUser> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
