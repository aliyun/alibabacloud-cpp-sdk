// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKTYPELISTRESPONSEBODYATTACKTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKTYPELISTRESPONSEBODYATTACKTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackTypeListResponseBodyAttackTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackTypeListResponseBodyAttackTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Status_Type, statusType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackTypeListResponseBodyAttackTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Status_Type, statusType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetAttackTypeListResponseBodyAttackTypeList() = default ;
    GetAttackTypeListResponseBodyAttackTypeList(const GetAttackTypeListResponseBodyAttackTypeList &) = default ;
    GetAttackTypeListResponseBodyAttackTypeList(GetAttackTypeListResponseBodyAttackTypeList &&) = default ;
    GetAttackTypeListResponseBodyAttackTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackTypeListResponseBodyAttackTypeList() = default ;
    GetAttackTypeListResponseBodyAttackTypeList& operator=(const GetAttackTypeListResponseBodyAttackTypeList &) = default ;
    GetAttackTypeListResponseBodyAttackTypeList& operator=(GetAttackTypeListResponseBodyAttackTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->statusType_ == nullptr && return this->value_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAttackTypeListResponseBodyAttackTypeList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // statusType Field Functions 
    bool hasStatusType() const { return this->statusType_ != nullptr;};
    void deleteStatusType() { this->statusType_ = nullptr;};
    inline string statusType() const { DARABONBA_PTR_GET_DEFAULT(statusType_, "") };
    inline GetAttackTypeListResponseBodyAttackTypeList& setStatusType(string statusType) { DARABONBA_PTR_SET_VALUE(statusType_, statusType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetAttackTypeListResponseBodyAttackTypeList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The description of the attack type.
    std::shared_ptr<string> label_ = nullptr;
    // The attack source. Valid values:
    // 
    // *   **cfw**: Cloud Firewall
    // *   **alinet**: network defense plug-in
    // *   **waf**: Web Application Firewall (WAF)
    std::shared_ptr<string> statusType_ = nullptr;
    // The value of the attack type.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
