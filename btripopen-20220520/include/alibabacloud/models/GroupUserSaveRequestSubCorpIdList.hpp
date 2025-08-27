// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GROUPUSERSAVEREQUESTSUBCORPIDLIST_HPP_
#define ALIBABACLOUD_MODELS_GROUPUSERSAVEREQUESTSUBCORPIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class GroupUserSaveRequestSubCorpIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GroupUserSaveRequestSubCorpIdList& obj) { 
      DARABONBA_PTR_TO_JSON(depart_ids, departIds_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(leave_status, leaveStatus_);
      DARABONBA_PTR_TO_JSON(manager_user_id, managerUserId_);
      DARABONBA_PTR_TO_JSON(position_level, positionLevel_);
      DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
    };
    friend void from_json(const Darabonba::Json& j, GroupUserSaveRequestSubCorpIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(depart_ids, departIds_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(leave_status, leaveStatus_);
      DARABONBA_PTR_FROM_JSON(manager_user_id, managerUserId_);
      DARABONBA_PTR_FROM_JSON(position_level, positionLevel_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
    };
    GroupUserSaveRequestSubCorpIdList() = default ;
    GroupUserSaveRequestSubCorpIdList(const GroupUserSaveRequestSubCorpIdList &) = default ;
    GroupUserSaveRequestSubCorpIdList(GroupUserSaveRequestSubCorpIdList &&) = default ;
    GroupUserSaveRequestSubCorpIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GroupUserSaveRequestSubCorpIdList() = default ;
    GroupUserSaveRequestSubCorpIdList& operator=(const GroupUserSaveRequestSubCorpIdList &) = default ;
    GroupUserSaveRequestSubCorpIdList& operator=(GroupUserSaveRequestSubCorpIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->departIds_ != nullptr
        && this->email_ != nullptr && this->leaveStatus_ != nullptr && this->managerUserId_ != nullptr && this->positionLevel_ != nullptr && this->subCorpId_ != nullptr; };
    // departIds Field Functions 
    bool hasDepartIds() const { return this->departIds_ != nullptr;};
    void deleteDepartIds() { this->departIds_ = nullptr;};
    inline const vector<string> & departIds() const { DARABONBA_PTR_GET_CONST(departIds_, vector<string>) };
    inline vector<string> departIds() { DARABONBA_PTR_GET(departIds_, vector<string>) };
    inline GroupUserSaveRequestSubCorpIdList& setDepartIds(const vector<string> & departIds) { DARABONBA_PTR_SET_VALUE(departIds_, departIds) };
    inline GroupUserSaveRequestSubCorpIdList& setDepartIds(vector<string> && departIds) { DARABONBA_PTR_SET_RVALUE(departIds_, departIds) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GroupUserSaveRequestSubCorpIdList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // leaveStatus Field Functions 
    bool hasLeaveStatus() const { return this->leaveStatus_ != nullptr;};
    void deleteLeaveStatus() { this->leaveStatus_ = nullptr;};
    inline int32_t leaveStatus() const { DARABONBA_PTR_GET_DEFAULT(leaveStatus_, 0) };
    inline GroupUserSaveRequestSubCorpIdList& setLeaveStatus(int32_t leaveStatus) { DARABONBA_PTR_SET_VALUE(leaveStatus_, leaveStatus) };


    // managerUserId Field Functions 
    bool hasManagerUserId() const { return this->managerUserId_ != nullptr;};
    void deleteManagerUserId() { this->managerUserId_ = nullptr;};
    inline string managerUserId() const { DARABONBA_PTR_GET_DEFAULT(managerUserId_, "") };
    inline GroupUserSaveRequestSubCorpIdList& setManagerUserId(string managerUserId) { DARABONBA_PTR_SET_VALUE(managerUserId_, managerUserId) };


    // positionLevel Field Functions 
    bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
    void deletePositionLevel() { this->positionLevel_ = nullptr;};
    inline string positionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
    inline GroupUserSaveRequestSubCorpIdList& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline GroupUserSaveRequestSubCorpIdList& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


  protected:
    std::shared_ptr<vector<string>> departIds_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> leaveStatus_ = nullptr;
    std::shared_ptr<string> managerUserId_ = nullptr;
    std::shared_ptr<string> positionLevel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subCorpId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
