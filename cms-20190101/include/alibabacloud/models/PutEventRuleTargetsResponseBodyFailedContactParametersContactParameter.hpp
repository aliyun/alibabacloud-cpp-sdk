// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDCONTACTPARAMETERSCONTACTPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDCONTACTPARAMETERSCONTACTPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter() = default ;
    PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter(const PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter &) = default ;
    PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter(PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter &&) = default ;
    PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter() = default ;
    PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter& operator=(const PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter &) = default ;
    PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter& operator=(PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupName_ == nullptr
        && return this->id_ == nullptr && return this->level_ == nullptr; };
    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string contactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline PutEventRuleTargetsResponseBodyFailedContactParametersContactParameter& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    // The name of the alert contact group.
    std::shared_ptr<string> contactGroupName_ = nullptr;
    // The ID of the recipient.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The alert notification methods. Valid values:
    // 
    // 4: Alert notifications are sent by using DingTalk and emails.
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
