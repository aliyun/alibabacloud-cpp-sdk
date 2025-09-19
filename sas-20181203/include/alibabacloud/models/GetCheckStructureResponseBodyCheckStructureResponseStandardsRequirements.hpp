// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODYCHECKSTRUCTURERESPONSESTANDARDSREQUIREMENTS_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODYCHECKSTRUCTURERESPONSESTANDARDSREQUIREMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Sections, sections_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(TotalCheckCount, totalCheckCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Sections, sections_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(TotalCheckCount, totalCheckCount_);
    };
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements() = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements(const GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements &) = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements(GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements &&) = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements() = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements& operator=(const GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements &) = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements& operator=(GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->sections_ != nullptr && this->showName_ != nullptr && this->totalCheckCount_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sections Field Functions 
    bool hasSections() const { return this->sections_ != nullptr;};
    void deleteSections() { this->sections_ = nullptr;};
    inline const vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections> & sections() const { DARABONBA_PTR_GET_CONST(sections_, vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections>) };
    inline vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections> sections() { DARABONBA_PTR_GET(sections_, vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections>) };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements& setSections(const vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections> & sections) { DARABONBA_PTR_SET_VALUE(sections_, sections) };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements& setSections(vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections> && sections) { DARABONBA_PTR_SET_RVALUE(sections_, sections) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // totalCheckCount Field Functions 
    bool hasTotalCheckCount() const { return this->totalCheckCount_ != nullptr;};
    void deleteTotalCheckCount() { this->totalCheckCount_ = nullptr;};
    inline int32_t totalCheckCount() const { DARABONBA_PTR_GET_DEFAULT(totalCheckCount_, 0) };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements& setTotalCheckCount(int32_t totalCheckCount) { DARABONBA_PTR_SET_VALUE(totalCheckCount_, totalCheckCount) };


  protected:
    // The ID of the requirement item for the check item.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The information about the sections of check items.
    std::shared_ptr<vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections>> sections_ = nullptr;
    // The display name of the requirement item for the check item.
    std::shared_ptr<string> showName_ = nullptr;
    // The total number of check items for the requirement.
    std::shared_ptr<int32_t> totalCheckCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
