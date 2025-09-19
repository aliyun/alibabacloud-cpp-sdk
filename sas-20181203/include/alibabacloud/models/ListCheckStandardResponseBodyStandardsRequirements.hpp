// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKSTANDARDRESPONSEBODYSTANDARDSREQUIREMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKSTANDARDRESPONSEBODYSTANDARDSREQUIREMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckStandardResponseBodyStandardsRequirements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckStandardResponseBodyStandardsRequirements& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RiskCheckCount, riskCheckCount_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(ShowPriorityLevel, showPriorityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckStandardResponseBodyStandardsRequirements& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RiskCheckCount, riskCheckCount_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(ShowPriorityLevel, showPriorityLevel_);
    };
    ListCheckStandardResponseBodyStandardsRequirements() = default ;
    ListCheckStandardResponseBodyStandardsRequirements(const ListCheckStandardResponseBodyStandardsRequirements &) = default ;
    ListCheckStandardResponseBodyStandardsRequirements(ListCheckStandardResponseBodyStandardsRequirements &&) = default ;
    ListCheckStandardResponseBodyStandardsRequirements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckStandardResponseBodyStandardsRequirements() = default ;
    ListCheckStandardResponseBodyStandardsRequirements& operator=(const ListCheckStandardResponseBodyStandardsRequirements &) = default ;
    ListCheckStandardResponseBodyStandardsRequirements& operator=(ListCheckStandardResponseBodyStandardsRequirements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->riskCheckCount_ != nullptr && this->showName_ != nullptr && this->showPriorityLevel_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCheckStandardResponseBodyStandardsRequirements& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // riskCheckCount Field Functions 
    bool hasRiskCheckCount() const { return this->riskCheckCount_ != nullptr;};
    void deleteRiskCheckCount() { this->riskCheckCount_ = nullptr;};
    inline int64_t riskCheckCount() const { DARABONBA_PTR_GET_DEFAULT(riskCheckCount_, 0L) };
    inline ListCheckStandardResponseBodyStandardsRequirements& setRiskCheckCount(int64_t riskCheckCount) { DARABONBA_PTR_SET_VALUE(riskCheckCount_, riskCheckCount) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListCheckStandardResponseBodyStandardsRequirements& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // showPriorityLevel Field Functions 
    bool hasShowPriorityLevel() const { return this->showPriorityLevel_ != nullptr;};
    void deleteShowPriorityLevel() { this->showPriorityLevel_ = nullptr;};
    inline int32_t showPriorityLevel() const { DARABONBA_PTR_GET_DEFAULT(showPriorityLevel_, 0) };
    inline ListCheckStandardResponseBodyStandardsRequirements& setShowPriorityLevel(int32_t showPriorityLevel) { DARABONBA_PTR_SET_VALUE(showPriorityLevel_, showPriorityLevel) };


  protected:
    // The ID of the requirement.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The number of check items in the requirement.
    std::shared_ptr<int64_t> riskCheckCount_ = nullptr;
    // The display name of the search condition.
    std::shared_ptr<string> showName_ = nullptr;
    // The priority for display.
    std::shared_ptr<int32_t> showPriorityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
