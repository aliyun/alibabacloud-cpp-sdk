// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYDETAILRESPONSEBODYSTRATEGYRISKTYPEWHITELISTQUERYRESULTLISTSUBTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYDETAILRESPONSEBODYSTRATEGYRISKTYPEWHITELISTQUERYRESULTLISTSUBTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(CheckDetails, checkDetails_);
      DARABONBA_PTR_TO_JSON(On, on_);
      DARABONBA_PTR_TO_JSON(SupportedOs, supportedOs_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(CheckDetails, checkDetails_);
      DARABONBA_PTR_FROM_JSON(On, on_);
      DARABONBA_PTR_FROM_JSON(SupportedOs, supportedOs_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes() = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes(const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes &) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes(DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes &&) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes() = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes& operator=(const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes &) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes& operator=(DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->checkDetails_ != nullptr && this->on_ != nullptr && this->supportedOs_ != nullptr && this->typeName_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // checkDetails Field Functions 
    bool hasCheckDetails() const { return this->checkDetails_ != nullptr;};
    void deleteCheckDetails() { this->checkDetails_ = nullptr;};
    inline const vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails> & checkDetails() const { DARABONBA_PTR_GET_CONST(checkDetails_, vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails>) };
    inline vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails> checkDetails() { DARABONBA_PTR_GET(checkDetails_, vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails>) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes& setCheckDetails(const vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails> & checkDetails) { DARABONBA_PTR_SET_VALUE(checkDetails_, checkDetails) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes& setCheckDetails(vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails> && checkDetails) { DARABONBA_PTR_SET_RVALUE(checkDetails_, checkDetails) };


    // on Field Functions 
    bool hasOn() const { return this->on_ != nullptr;};
    void deleteOn() { this->on_ = nullptr;};
    inline bool on() const { DARABONBA_PTR_GET_DEFAULT(on_, false) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes& setOn(bool on) { DARABONBA_PTR_SET_VALUE(on_, on) };


    // supportedOs Field Functions 
    bool hasSupportedOs() const { return this->supportedOs_ != nullptr;};
    void deleteSupportedOs() { this->supportedOs_ = nullptr;};
    inline string supportedOs() const { DARABONBA_PTR_GET_DEFAULT(supportedOs_, "") };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes& setSupportedOs(string supportedOs) { DARABONBA_PTR_SET_VALUE(supportedOs_, supportedOs) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string _typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes& setTypeName(string _typeName) { DARABONBA_PTR_SET_VALUE(typeName_, _typeName) };


  protected:
    // The alias of the check item.
    std::shared_ptr<string> alias_ = nullptr;
    // The details of custom check items.
    std::shared_ptr<vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails>> checkDetails_ = nullptr;
    // Indicates whether the sub-check item is selected. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> on_ = nullptr;
    // The operating system type of the server. Valid values:
    // *   **windows**
    // *   **linux**
    std::shared_ptr<string> supportedOs_ = nullptr;
    // The type of the sub-check item.
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
