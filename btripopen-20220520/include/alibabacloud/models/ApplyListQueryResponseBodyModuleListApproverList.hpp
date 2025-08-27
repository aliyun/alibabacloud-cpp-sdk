// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYLISTQUERYRESPONSEBODYMODULELISTAPPROVERLIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYLISTQUERYRESPONSEBODYMODULELISTAPPROVERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyListQueryResponseBodyModuleListApproverList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyListQueryResponseBodyModuleListApproverList& obj) { 
      DARABONBA_PTR_TO_JSON(note, note_);
      DARABONBA_PTR_TO_JSON(operate_time, operateTime_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyListQueryResponseBodyModuleListApproverList& obj) { 
      DARABONBA_PTR_FROM_JSON(note, note_);
      DARABONBA_PTR_FROM_JSON(operate_time, operateTime_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    ApplyListQueryResponseBodyModuleListApproverList() = default ;
    ApplyListQueryResponseBodyModuleListApproverList(const ApplyListQueryResponseBodyModuleListApproverList &) = default ;
    ApplyListQueryResponseBodyModuleListApproverList(ApplyListQueryResponseBodyModuleListApproverList &&) = default ;
    ApplyListQueryResponseBodyModuleListApproverList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyListQueryResponseBodyModuleListApproverList() = default ;
    ApplyListQueryResponseBodyModuleListApproverList& operator=(const ApplyListQueryResponseBodyModuleListApproverList &) = default ;
    ApplyListQueryResponseBodyModuleListApproverList& operator=(ApplyListQueryResponseBodyModuleListApproverList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->note_ != nullptr
        && this->operateTime_ != nullptr && this->order_ != nullptr && this->status_ != nullptr && this->statusDesc_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline ApplyListQueryResponseBodyModuleListApproverList& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline string operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
    inline ApplyListQueryResponseBodyModuleListApproverList& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline ApplyListQueryResponseBodyModuleListApproverList& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ApplyListQueryResponseBodyModuleListApproverList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ApplyListQueryResponseBodyModuleListApproverList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ApplyListQueryResponseBodyModuleListApproverList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyListQueryResponseBodyModuleListApproverList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> note_ = nullptr;
    std::shared_ptr<string> operateTime_ = nullptr;
    std::shared_ptr<int32_t> order_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
