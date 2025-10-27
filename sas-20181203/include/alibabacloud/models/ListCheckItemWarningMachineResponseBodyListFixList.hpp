// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGMACHINERESPONSEBODYLISTFIXLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMWARNINGMACHINERESPONSEBODYLISTFIXLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemWarningMachineResponseBodyListFixList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemWarningMachineResponseBodyListFixList& obj) { 
      DARABONBA_PTR_TO_JSON(RiskId, riskId_);
      DARABONBA_PTR_TO_JSON(RiskName, riskName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemWarningMachineResponseBodyListFixList& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
      DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
    };
    ListCheckItemWarningMachineResponseBodyListFixList() = default ;
    ListCheckItemWarningMachineResponseBodyListFixList(const ListCheckItemWarningMachineResponseBodyListFixList &) = default ;
    ListCheckItemWarningMachineResponseBodyListFixList(ListCheckItemWarningMachineResponseBodyListFixList &&) = default ;
    ListCheckItemWarningMachineResponseBodyListFixList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemWarningMachineResponseBodyListFixList() = default ;
    ListCheckItemWarningMachineResponseBodyListFixList& operator=(const ListCheckItemWarningMachineResponseBodyListFixList &) = default ;
    ListCheckItemWarningMachineResponseBodyListFixList& operator=(ListCheckItemWarningMachineResponseBodyListFixList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskId_ == nullptr
        && return this->riskName_ == nullptr; };
    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline int64_t riskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
    inline ListCheckItemWarningMachineResponseBodyListFixList& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


    // riskName Field Functions 
    bool hasRiskName() const { return this->riskName_ != nullptr;};
    void deleteRiskName() { this->riskName_ = nullptr;};
    inline string riskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
    inline ListCheckItemWarningMachineResponseBodyListFixList& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


  protected:
    // The ID of the baseline.
    std::shared_ptr<int64_t> riskId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> riskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
