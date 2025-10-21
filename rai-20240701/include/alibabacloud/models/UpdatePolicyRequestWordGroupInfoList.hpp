// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYREQUESTWORDGROUPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYREQUESTWORDGROUPINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdatePolicyRequestWordGroupInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyRequestWordGroupInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InputOutputType, inputOutputType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyRequestWordGroupInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InputOutputType, inputOutputType_);
    };
    UpdatePolicyRequestWordGroupInfoList() = default ;
    UpdatePolicyRequestWordGroupInfoList(const UpdatePolicyRequestWordGroupInfoList &) = default ;
    UpdatePolicyRequestWordGroupInfoList(UpdatePolicyRequestWordGroupInfoList &&) = default ;
    UpdatePolicyRequestWordGroupInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyRequestWordGroupInfoList() = default ;
    UpdatePolicyRequestWordGroupInfoList& operator=(const UpdatePolicyRequestWordGroupInfoList &) = default ;
    UpdatePolicyRequestWordGroupInfoList& operator=(UpdatePolicyRequestWordGroupInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->groupName_ == nullptr && return this->inputOutputType_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline UpdatePolicyRequestWordGroupInfoList& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdatePolicyRequestWordGroupInfoList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // inputOutputType Field Functions 
    bool hasInputOutputType() const { return this->inputOutputType_ != nullptr;};
    void deleteInputOutputType() { this->inputOutputType_ = nullptr;};
    inline int32_t inputOutputType() const { DARABONBA_PTR_GET_DEFAULT(inputOutputType_, 0) };
    inline UpdatePolicyRequestWordGroupInfoList& setInputOutputType(int32_t inputOutputType) { DARABONBA_PTR_SET_VALUE(inputOutputType_, inputOutputType) };


  protected:
    // Keyword group ID.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // Keyword group name
    std::shared_ptr<string> groupName_ = nullptr;
    // Model input/output type
    // 0: Input
    // 1: Output
    std::shared_ptr<int32_t> inputOutputType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
