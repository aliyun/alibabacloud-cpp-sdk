// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETSFORPOLICYRESPONSEBODYTARGETS_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETSFORPOLICYRESPONSEBODYTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTargetsForPolicyResponseBodyTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTargetsForPolicyResponseBodyTargets& obj) { 
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTargetsForPolicyResponseBodyTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListTargetsForPolicyResponseBodyTargets() = default ;
    ListTargetsForPolicyResponseBodyTargets(const ListTargetsForPolicyResponseBodyTargets &) = default ;
    ListTargetsForPolicyResponseBodyTargets(ListTargetsForPolicyResponseBodyTargets &&) = default ;
    ListTargetsForPolicyResponseBodyTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTargetsForPolicyResponseBodyTargets() = default ;
    ListTargetsForPolicyResponseBodyTargets& operator=(const ListTargetsForPolicyResponseBodyTargets &) = default ;
    ListTargetsForPolicyResponseBodyTargets& operator=(ListTargetsForPolicyResponseBodyTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetId_ != nullptr
        && this->targetType_ != nullptr; };
    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListTargetsForPolicyResponseBodyTargets& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline ListTargetsForPolicyResponseBodyTargets& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the object.
    std::shared_ptr<string> targetId_ = nullptr;
    // The type of the object. Valid values:
    // 
    // *   USER: the current logon account. This value is available if you use the Tag Policy feature in single-account mode.
    // *   ROOT: the Root folder in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   FOLDER: a folder other than the Root folder in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    // *   ACCOUNT: a member in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
    std::shared_ptr<int32_t> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
