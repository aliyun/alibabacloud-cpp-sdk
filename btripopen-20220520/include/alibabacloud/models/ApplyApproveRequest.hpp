// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYAPPROVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYAPPROVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyApproveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyApproveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(note, note_);
      DARABONBA_PTR_TO_JSON(operate_time, operateTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyApproveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(note, note_);
      DARABONBA_PTR_FROM_JSON(operate_time, operateTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    ApplyApproveRequest() = default ;
    ApplyApproveRequest(const ApplyApproveRequest &) = default ;
    ApplyApproveRequest(ApplyApproveRequest &&) = default ;
    ApplyApproveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyApproveRequest() = default ;
    ApplyApproveRequest& operator=(const ApplyApproveRequest &) = default ;
    ApplyApproveRequest& operator=(ApplyApproveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->note_ != nullptr && this->operateTime_ != nullptr && this->status_ != nullptr && this->subCorpId_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline ApplyApproveRequest& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline ApplyApproveRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline string operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
    inline ApplyApproveRequest& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ApplyApproveRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline ApplyApproveRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ApplyApproveRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyApproveRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> note_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operateTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> subCorpId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
