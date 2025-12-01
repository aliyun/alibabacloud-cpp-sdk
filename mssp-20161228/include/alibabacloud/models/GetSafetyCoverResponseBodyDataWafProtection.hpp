// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAFETYCOVERRESPONSEBODYDATAWAFPROTECTION_HPP_
#define ALIBABACLOUD_MODELS_GETSAFETYCOVERRESPONSEBODYDATAWAFPROTECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSafetyCoverResponseBodyDataWafProtection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSafetyCoverResponseBodyDataWafProtection& obj) { 
      DARABONBA_PTR_TO_JSON(NoProtectionCount, noProtectionCount_);
      DARABONBA_PTR_TO_JSON(ProtectionCount, protectionCount_);
      DARABONBA_PTR_TO_JSON(ProtectionGrowthRate, protectionGrowthRate_);
      DARABONBA_PTR_TO_JSON(ProtectionRate, protectionRate_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSafetyCoverResponseBodyDataWafProtection& obj) { 
      DARABONBA_PTR_FROM_JSON(NoProtectionCount, noProtectionCount_);
      DARABONBA_PTR_FROM_JSON(ProtectionCount, protectionCount_);
      DARABONBA_PTR_FROM_JSON(ProtectionGrowthRate, protectionGrowthRate_);
      DARABONBA_PTR_FROM_JSON(ProtectionRate, protectionRate_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetSafetyCoverResponseBodyDataWafProtection() = default ;
    GetSafetyCoverResponseBodyDataWafProtection(const GetSafetyCoverResponseBodyDataWafProtection &) = default ;
    GetSafetyCoverResponseBodyDataWafProtection(GetSafetyCoverResponseBodyDataWafProtection &&) = default ;
    GetSafetyCoverResponseBodyDataWafProtection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSafetyCoverResponseBodyDataWafProtection() = default ;
    GetSafetyCoverResponseBodyDataWafProtection& operator=(const GetSafetyCoverResponseBodyDataWafProtection &) = default ;
    GetSafetyCoverResponseBodyDataWafProtection& operator=(GetSafetyCoverResponseBodyDataWafProtection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->noProtectionCount_ == nullptr
        && return this->protectionCount_ == nullptr && return this->protectionGrowthRate_ == nullptr && return this->protectionRate_ == nullptr && return this->totalCount_ == nullptr; };
    // noProtectionCount Field Functions 
    bool hasNoProtectionCount() const { return this->noProtectionCount_ != nullptr;};
    void deleteNoProtectionCount() { this->noProtectionCount_ = nullptr;};
    inline int64_t noProtectionCount() const { DARABONBA_PTR_GET_DEFAULT(noProtectionCount_, 0L) };
    inline GetSafetyCoverResponseBodyDataWafProtection& setNoProtectionCount(int64_t noProtectionCount) { DARABONBA_PTR_SET_VALUE(noProtectionCount_, noProtectionCount) };


    // protectionCount Field Functions 
    bool hasProtectionCount() const { return this->protectionCount_ != nullptr;};
    void deleteProtectionCount() { this->protectionCount_ = nullptr;};
    inline int64_t protectionCount() const { DARABONBA_PTR_GET_DEFAULT(protectionCount_, 0L) };
    inline GetSafetyCoverResponseBodyDataWafProtection& setProtectionCount(int64_t protectionCount) { DARABONBA_PTR_SET_VALUE(protectionCount_, protectionCount) };


    // protectionGrowthRate Field Functions 
    bool hasProtectionGrowthRate() const { return this->protectionGrowthRate_ != nullptr;};
    void deleteProtectionGrowthRate() { this->protectionGrowthRate_ = nullptr;};
    inline string protectionGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(protectionGrowthRate_, "") };
    inline GetSafetyCoverResponseBodyDataWafProtection& setProtectionGrowthRate(string protectionGrowthRate) { DARABONBA_PTR_SET_VALUE(protectionGrowthRate_, protectionGrowthRate) };


    // protectionRate Field Functions 
    bool hasProtectionRate() const { return this->protectionRate_ != nullptr;};
    void deleteProtectionRate() { this->protectionRate_ = nullptr;};
    inline string protectionRate() const { DARABONBA_PTR_GET_DEFAULT(protectionRate_, "") };
    inline GetSafetyCoverResponseBodyDataWafProtection& setProtectionRate(string protectionRate) { DARABONBA_PTR_SET_VALUE(protectionRate_, protectionRate) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetSafetyCoverResponseBodyDataWafProtection& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of unprotected items.
    std::shared_ptr<int64_t> noProtectionCount_ = nullptr;
    // Number of protected items.
    std::shared_ptr<int64_t> protectionCount_ = nullptr;
    // Year-over-year growth in protection rate.
    std::shared_ptr<string> protectionGrowthRate_ = nullptr;
    // Protection rate.
    std::shared_ptr<string> protectionRate_ = nullptr;
    // Total number of items.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
