// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IGNORECHECKITEMSREQUESTCHECKANDRISKTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_IGNORECHECKITEMSREQUESTCHECKANDRISKTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class IgnoreCheckItemsRequestCheckAndRiskTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IgnoreCheckItemsRequestCheckAndRiskTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(RiskType, riskType_);
    };
    friend void from_json(const Darabonba::Json& j, IgnoreCheckItemsRequestCheckAndRiskTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
    };
    IgnoreCheckItemsRequestCheckAndRiskTypeList() = default ;
    IgnoreCheckItemsRequestCheckAndRiskTypeList(const IgnoreCheckItemsRequestCheckAndRiskTypeList &) = default ;
    IgnoreCheckItemsRequestCheckAndRiskTypeList(IgnoreCheckItemsRequestCheckAndRiskTypeList &&) = default ;
    IgnoreCheckItemsRequestCheckAndRiskTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IgnoreCheckItemsRequestCheckAndRiskTypeList() = default ;
    IgnoreCheckItemsRequestCheckAndRiskTypeList& operator=(const IgnoreCheckItemsRequestCheckAndRiskTypeList &) = default ;
    IgnoreCheckItemsRequestCheckAndRiskTypeList& operator=(IgnoreCheckItemsRequestCheckAndRiskTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->riskType_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline IgnoreCheckItemsRequestCheckAndRiskTypeList& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // riskType Field Functions 
    bool hasRiskType() const { return this->riskType_ != nullptr;};
    void deleteRiskType() { this->riskType_ = nullptr;};
    inline string riskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
    inline IgnoreCheckItemsRequestCheckAndRiskTypeList& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


  protected:
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The baseline type of the check item.
    std::shared_ptr<string> riskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
