// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYCONTACTPARAMETERSCONTACTPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYCONTACTPARAMETERSCONTACTPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBodyContactParametersContactParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBodyContactParametersContactParameter& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBodyContactParametersContactParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    DescribeEventRuleTargetListResponseBodyContactParametersContactParameter() = default ;
    DescribeEventRuleTargetListResponseBodyContactParametersContactParameter(const DescribeEventRuleTargetListResponseBodyContactParametersContactParameter &) = default ;
    DescribeEventRuleTargetListResponseBodyContactParametersContactParameter(DescribeEventRuleTargetListResponseBodyContactParametersContactParameter &&) = default ;
    DescribeEventRuleTargetListResponseBodyContactParametersContactParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBodyContactParametersContactParameter() = default ;
    DescribeEventRuleTargetListResponseBodyContactParametersContactParameter& operator=(const DescribeEventRuleTargetListResponseBodyContactParametersContactParameter &) = default ;
    DescribeEventRuleTargetListResponseBodyContactParametersContactParameter& operator=(DescribeEventRuleTargetListResponseBodyContactParametersContactParameter &&) = default ;
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
    inline DescribeEventRuleTargetListResponseBodyContactParametersContactParameter& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeEventRuleTargetListResponseBodyContactParametersContactParameter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeEventRuleTargetListResponseBodyContactParametersContactParameter& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    // The name of the alert group.
    std::shared_ptr<string> contactGroupName_ = nullptr;
    // The ID of the recipient.
    std::shared_ptr<string> id_ = nullptr;
    // The alert notification methods. Valid values:
    // 
    // 4: Alert notifications are sent by using DingTalk chatbots and emails.
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
