// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWREQUESTALARMDETAILVULRISKCLASS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWREQUESTALARMDETAILVULRISKCLASS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass() = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass(const UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass &) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass(UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass &&) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass() = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass& operator=(const UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass &) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass& operator=(UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass &&) = default ;
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
    inline UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the vulnerability types. Valid values:
    // 
    // *   **cve**: system vulnerability
    // *   **app**: application vulnerability
    std::shared_ptr<string> id_ = nullptr;
    // The name of the vulnerability. Valid values:
    // 
    // *   **system vulnerability**
    // *   **application vulnerability**
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
