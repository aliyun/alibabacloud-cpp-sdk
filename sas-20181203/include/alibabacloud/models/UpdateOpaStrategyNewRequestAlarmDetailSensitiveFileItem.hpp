// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWREQUESTALARMDETAILSENSITIVEFILEITEM_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWREQUESTALARMDETAILSENSITIVEFILEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem() = default ;
    UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem(const UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem &) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem(UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem &&) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem() = default ;
    UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem& operator=(const UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem &) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem& operator=(UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateOpaStrategyNewRequestAlarmDetailSensitiveFileItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the sensitive files.
    // 
    // >  You can call the [GetSensitiveDefineRuleConfig](~~GetSensitiveDefineRuleConfig~~) operation to query the ID of the malicious sample.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the sensitive files.
    // 
    // >  You can call the [GetSensitiveDefineRuleConfig](~~GetSensitiveDefineRuleConfig~~) operation to query the ID of the malicious sample.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
