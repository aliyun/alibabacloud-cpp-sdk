// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECRITERIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCriteriaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCriteriaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_TO_JSON(SupportAutoTag, supportAutoTag_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_FROM_JSON(SupportAutoTag, supportAutoTag_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeCriteriaRequest() = default ;
    DescribeCriteriaRequest(const DescribeCriteriaRequest &) = default ;
    DescribeCriteriaRequest(DescribeCriteriaRequest &&) = default ;
    DescribeCriteriaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCriteriaRequest() = default ;
    DescribeCriteriaRequest& operator=(const DescribeCriteriaRequest &) = default ;
    DescribeCriteriaRequest& operator=(DescribeCriteriaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->machineTypes_ == nullptr
        && this->supportAutoTag_ == nullptr && this->value_ == nullptr; };
    // machineTypes Field Functions 
    bool hasMachineTypes() const { return this->machineTypes_ != nullptr;};
    void deleteMachineTypes() { this->machineTypes_ = nullptr;};
    inline string getMachineTypes() const { DARABONBA_PTR_GET_DEFAULT(machineTypes_, "") };
    inline DescribeCriteriaRequest& setMachineTypes(string machineTypes) { DARABONBA_PTR_SET_VALUE(machineTypes_, machineTypes) };


    // supportAutoTag Field Functions 
    bool hasSupportAutoTag() const { return this->supportAutoTag_ != nullptr;};
    void deleteSupportAutoTag() { this->supportAutoTag_ = nullptr;};
    inline bool getSupportAutoTag() const { DARABONBA_PTR_GET_DEFAULT(supportAutoTag_, false) };
    inline DescribeCriteriaRequest& setSupportAutoTag(bool supportAutoTag) { DARABONBA_PTR_SET_VALUE(supportAutoTag_, supportAutoTag) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeCriteriaRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The type of the asset. Valid values:
    // 
    // *   Set the value to **ecs**, which specifies to query all Elastic Compute Service (ECS) instances.
    shared_ptr<string> machineTypes_ {};
    // Specifies whether the keyword that you specify for fuzzy search can be automatically matched. Default value: **false**. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> supportAutoTag_ {};
    // The keyword that you specify for fuzzy search when you query the asset.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
