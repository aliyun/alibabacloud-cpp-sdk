// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUESTNOTIFY_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUESTNOTIFY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTicketRequestNotify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketRequestNotify& obj) { 
      DARABONBA_PTR_TO_JSON(GroupNoticeReceiverUserIds, groupNoticeReceiverUserIds_);
      DARABONBA_PTR_TO_JSON(NoticeAllGroupMember, noticeAllGroupMember_);
      DARABONBA_PTR_TO_JSON(WorkNoticeReceiverUserIds, workNoticeReceiverUserIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketRequestNotify& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupNoticeReceiverUserIds, groupNoticeReceiverUserIds_);
      DARABONBA_PTR_FROM_JSON(NoticeAllGroupMember, noticeAllGroupMember_);
      DARABONBA_PTR_FROM_JSON(WorkNoticeReceiverUserIds, workNoticeReceiverUserIds_);
    };
    CreateTicketRequestNotify() = default ;
    CreateTicketRequestNotify(const CreateTicketRequestNotify &) = default ;
    CreateTicketRequestNotify(CreateTicketRequestNotify &&) = default ;
    CreateTicketRequestNotify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketRequestNotify() = default ;
    CreateTicketRequestNotify& operator=(const CreateTicketRequestNotify &) = default ;
    CreateTicketRequestNotify& operator=(CreateTicketRequestNotify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupNoticeReceiverUserIds_ != nullptr
        && this->noticeAllGroupMember_ != nullptr && this->workNoticeReceiverUserIds_ != nullptr; };
    // groupNoticeReceiverUserIds Field Functions 
    bool hasGroupNoticeReceiverUserIds() const { return this->groupNoticeReceiverUserIds_ != nullptr;};
    void deleteGroupNoticeReceiverUserIds() { this->groupNoticeReceiverUserIds_ = nullptr;};
    inline const vector<string> & groupNoticeReceiverUserIds() const { DARABONBA_PTR_GET_CONST(groupNoticeReceiverUserIds_, vector<string>) };
    inline vector<string> groupNoticeReceiverUserIds() { DARABONBA_PTR_GET(groupNoticeReceiverUserIds_, vector<string>) };
    inline CreateTicketRequestNotify& setGroupNoticeReceiverUserIds(const vector<string> & groupNoticeReceiverUserIds) { DARABONBA_PTR_SET_VALUE(groupNoticeReceiverUserIds_, groupNoticeReceiverUserIds) };
    inline CreateTicketRequestNotify& setGroupNoticeReceiverUserIds(vector<string> && groupNoticeReceiverUserIds) { DARABONBA_PTR_SET_RVALUE(groupNoticeReceiverUserIds_, groupNoticeReceiverUserIds) };


    // noticeAllGroupMember Field Functions 
    bool hasNoticeAllGroupMember() const { return this->noticeAllGroupMember_ != nullptr;};
    void deleteNoticeAllGroupMember() { this->noticeAllGroupMember_ = nullptr;};
    inline bool noticeAllGroupMember() const { DARABONBA_PTR_GET_DEFAULT(noticeAllGroupMember_, false) };
    inline CreateTicketRequestNotify& setNoticeAllGroupMember(bool noticeAllGroupMember) { DARABONBA_PTR_SET_VALUE(noticeAllGroupMember_, noticeAllGroupMember) };


    // workNoticeReceiverUserIds Field Functions 
    bool hasWorkNoticeReceiverUserIds() const { return this->workNoticeReceiverUserIds_ != nullptr;};
    void deleteWorkNoticeReceiverUserIds() { this->workNoticeReceiverUserIds_ = nullptr;};
    inline const vector<string> & workNoticeReceiverUserIds() const { DARABONBA_PTR_GET_CONST(workNoticeReceiverUserIds_, vector<string>) };
    inline vector<string> workNoticeReceiverUserIds() { DARABONBA_PTR_GET(workNoticeReceiverUserIds_, vector<string>) };
    inline CreateTicketRequestNotify& setWorkNoticeReceiverUserIds(const vector<string> & workNoticeReceiverUserIds) { DARABONBA_PTR_SET_VALUE(workNoticeReceiverUserIds_, workNoticeReceiverUserIds) };
    inline CreateTicketRequestNotify& setWorkNoticeReceiverUserIds(vector<string> && workNoticeReceiverUserIds) { DARABONBA_PTR_SET_RVALUE(workNoticeReceiverUserIds_, workNoticeReceiverUserIds) };


  protected:
    std::shared_ptr<vector<string>> groupNoticeReceiverUserIds_ = nullptr;
    std::shared_ptr<bool> noticeAllGroupMember_ = nullptr;
    std::shared_ptr<vector<string>> workNoticeReceiverUserIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
