// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEUSERINFORESPONSEBODYSUCCESSLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEUSERINFORESPONSEBODYSUCCESSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageUserInfoResponseBodySuccessList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageUserInfoResponseBodySuccessList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageUserInfoResponseBodySuccessList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyLiveMessageUserInfoResponseBodySuccessList() = default ;
    ModifyLiveMessageUserInfoResponseBodySuccessList(const ModifyLiveMessageUserInfoResponseBodySuccessList &) = default ;
    ModifyLiveMessageUserInfoResponseBodySuccessList(ModifyLiveMessageUserInfoResponseBodySuccessList &&) = default ;
    ModifyLiveMessageUserInfoResponseBodySuccessList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageUserInfoResponseBodySuccessList() = default ;
    ModifyLiveMessageUserInfoResponseBodySuccessList& operator=(const ModifyLiveMessageUserInfoResponseBodySuccessList &) = default ;
    ModifyLiveMessageUserInfoResponseBodySuccessList& operator=(ModifyLiveMessageUserInfoResponseBodySuccessList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->success_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyLiveMessageUserInfoResponseBodySuccessList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyLiveMessageUserInfoResponseBodySuccessList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the group to which the user belongs. For successful modification, the information of the user is updated when you query the users in the group.
    std::shared_ptr<string> groupId_ = nullptr;
    // Indicates whether the group to which the user belongs is modified. In this case, the group is modified.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
