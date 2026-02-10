// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMMONSWITCHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMMONSWITCHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateCommonSwitchConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCommonSwitchConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TargetDefault, targetDefault_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCommonSwitchConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetDefault, targetDefault_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateCommonSwitchConfigRequest() = default ;
    UpdateCommonSwitchConfigRequest(const UpdateCommonSwitchConfigRequest &) = default ;
    UpdateCommonSwitchConfigRequest(UpdateCommonSwitchConfigRequest &&) = default ;
    UpdateCommonSwitchConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCommonSwitchConfigRequest() = default ;
    UpdateCommonSwitchConfigRequest& operator=(const UpdateCommonSwitchConfigRequest &) = default ;
    UpdateCommonSwitchConfigRequest& operator=(UpdateCommonSwitchConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetDefault_ == nullptr
        && this->type_ == nullptr; };
    // targetDefault Field Functions 
    bool hasTargetDefault() const { return this->targetDefault_ != nullptr;};
    void deleteTargetDefault() { this->targetDefault_ = nullptr;};
    inline string getTargetDefault() const { DARABONBA_PTR_GET_DEFAULT(targetDefault_, "") };
    inline UpdateCommonSwitchConfigRequest& setTargetDefault(string targetDefault) { DARABONBA_PTR_SET_VALUE(targetDefault_, targetDefault) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateCommonSwitchConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to turn on the switch for newly added servers. Valid values:
    // 
    // *   **add**: yes
    // *   **del**: no
    shared_ptr<string> targetDefault_ {};
    // The type of the switch.
    // 
    // >  You can call the [ListClientUserDefineRules](~~ListClientUserDefineRules~~) or [ListSystemClientRules](~~ListSystemClientRules~~) operation to obtain the type from the response parameter SwitchId.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
