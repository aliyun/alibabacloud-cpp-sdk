// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUESTCONTACTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUESTCONTACTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsRequestContactParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsRequestContactParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsRequestContactParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    PutEventRuleTargetsRequestContactParameters() = default ;
    PutEventRuleTargetsRequestContactParameters(const PutEventRuleTargetsRequestContactParameters &) = default ;
    PutEventRuleTargetsRequestContactParameters(PutEventRuleTargetsRequestContactParameters &&) = default ;
    PutEventRuleTargetsRequestContactParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsRequestContactParameters() = default ;
    PutEventRuleTargetsRequestContactParameters& operator=(const PutEventRuleTargetsRequestContactParameters &) = default ;
    PutEventRuleTargetsRequestContactParameters& operator=(PutEventRuleTargetsRequestContactParameters &&) = default ;
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
    inline PutEventRuleTargetsRequestContactParameters& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PutEventRuleTargetsRequestContactParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline PutEventRuleTargetsRequestContactParameters& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    // The name of the alert contact group. Valid values of N: 1 to 5.
    std::shared_ptr<string> contactGroupName_ = nullptr;
    // The ID of the recipient that receives alert notifications. Valid values of N: 1 to 5.
    std::shared_ptr<string> id_ = nullptr;
    // The alert notification methods. Valid values of N: 1 to 5. Valid values:
    // 
    // 4: Alert notifications are sent by using DingTalk and emails.
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
