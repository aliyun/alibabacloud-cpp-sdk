// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTASVALUE_HPP_
#define ALIBABACLOUD_MODELS_QUOTASVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class QuotasValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotasValue& obj) { 
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(operation_code, operationCode_);
      DARABONBA_PTR_TO_JSON(adjustable, adjustable_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, QuotasValue& obj) { 
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(operation_code, operationCode_);
      DARABONBA_PTR_FROM_JSON(adjustable, adjustable_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    QuotasValue() = default ;
    QuotasValue(const QuotasValue &) = default ;
    QuotasValue(QuotasValue &&) = default ;
    QuotasValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotasValue() = default ;
    QuotasValue& operator=(const QuotasValue &) = default ;
    QuotasValue& operator=(QuotasValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quota_ != nullptr
        && this->operationCode_ != nullptr && this->adjustable_ != nullptr && this->unit_ != nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline string quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, "") };
    inline QuotasValue& setQuota(string quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string operationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline QuotasValue& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // adjustable Field Functions 
    bool hasAdjustable() const { return this->adjustable_ != nullptr;};
    void deleteAdjustable() { this->adjustable_ = nullptr;};
    inline bool adjustable() const { DARABONBA_PTR_GET_DEFAULT(adjustable_, false) };
    inline QuotasValue& setAdjustable(bool adjustable) { DARABONBA_PTR_SET_VALUE(adjustable_, adjustable) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline QuotasValue& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The value of the quota. If the quota limit is reached, submit an application in the [Quota Center console](https://quotas.console.aliyun.com/products/csk/quotas) to increase the quota.
    std::shared_ptr<string> quota_ = nullptr;
    // The quota code.
    std::shared_ptr<string> operationCode_ = nullptr;
    // Indicates whether the quota is adjustable.
    std::shared_ptr<bool> adjustable_ = nullptr;
    // The unit.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
