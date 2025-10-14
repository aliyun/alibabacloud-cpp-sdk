// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASRESPONSEBODYQUOTAS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASRESPONSEBODYQUOTAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListInstanceQuotasResponseBodyQuotas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceQuotasResponseBodyQuotas& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(QuotaValue, quotaValue_);
      DARABONBA_PTR_TO_JSON(QuotaValueType, quotaValueType_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceQuotasResponseBodyQuotas& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(QuotaValue, quotaValue_);
      DARABONBA_PTR_FROM_JSON(QuotaValueType, quotaValueType_);
    };
    ListInstanceQuotasResponseBodyQuotas() = default ;
    ListInstanceQuotasResponseBodyQuotas(const ListInstanceQuotasResponseBodyQuotas &) = default ;
    ListInstanceQuotasResponseBodyQuotas(ListInstanceQuotasResponseBodyQuotas &&) = default ;
    ListInstanceQuotasResponseBodyQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceQuotasResponseBodyQuotas() = default ;
    ListInstanceQuotasResponseBodyQuotas& operator=(const ListInstanceQuotasResponseBodyQuotas &) = default ;
    ListInstanceQuotasResponseBodyQuotas& operator=(ListInstanceQuotasResponseBodyQuotas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quotaName_ == nullptr
        && return this->quotaValue_ == nullptr && return this->quotaValueType_ == nullptr; };
    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline ListInstanceQuotasResponseBodyQuotas& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // quotaValue Field Functions 
    bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
    void deleteQuotaValue() { this->quotaValue_ = nullptr;};
    inline string quotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, "") };
    inline ListInstanceQuotasResponseBodyQuotas& setQuotaValue(string quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


    // quotaValueType Field Functions 
    bool hasQuotaValueType() const { return this->quotaValueType_ != nullptr;};
    void deleteQuotaValueType() { this->quotaValueType_ = nullptr;};
    inline string quotaValueType() const { DARABONBA_PTR_GET_DEFAULT(quotaValueType_, "") };
    inline ListInstanceQuotasResponseBodyQuotas& setQuotaValueType(string quotaValueType) { DARABONBA_PTR_SET_VALUE(quotaValueType_, quotaValueType) };


  protected:
    // The quota name.
    std::shared_ptr<string> quotaName_ = nullptr;
    // The quota value.
    std::shared_ptr<string> quotaValue_ = nullptr;
    // The threshold type of the quota. Valid values:
    // 
    // *   value: enumerates the values of the quota.
    // *   bool: specifies whether the quota is available.
    // *   num: the upper limit of the quota.
    // *   range: the value range for the quota.
    // *   custom: other types than the preceding four quota threshold types.
    std::shared_ptr<string> quotaValueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
