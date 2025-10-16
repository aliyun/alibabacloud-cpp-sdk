// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCECENTERPOLICYRESPONSEBODYMODIFYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCECENTERPOLICYRESPONSEBODYMODIFYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyResourceCenterPolicyResponseBodyModifyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourceCenterPolicyResponseBodyModifyResults& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourceCenterPolicyResponseBodyModifyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    ModifyResourceCenterPolicyResponseBodyModifyResults() = default ;
    ModifyResourceCenterPolicyResponseBodyModifyResults(const ModifyResourceCenterPolicyResponseBodyModifyResults &) = default ;
    ModifyResourceCenterPolicyResponseBodyModifyResults(ModifyResourceCenterPolicyResponseBodyModifyResults &&) = default ;
    ModifyResourceCenterPolicyResponseBodyModifyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourceCenterPolicyResponseBodyModifyResults() = default ;
    ModifyResourceCenterPolicyResponseBodyModifyResults& operator=(const ModifyResourceCenterPolicyResponseBodyModifyResults &) = default ;
    ModifyResourceCenterPolicyResponseBodyModifyResults& operator=(ModifyResourceCenterPolicyResponseBodyModifyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkResult_ == nullptr
        && return this->resourceId_ == nullptr; };
    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline bool checkResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, false) };
    inline ModifyResourceCenterPolicyResponseBodyModifyResults& setCheckResult(bool checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ModifyResourceCenterPolicyResponseBodyModifyResults& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // The verification result.
    std::shared_ptr<bool> checkResult_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
