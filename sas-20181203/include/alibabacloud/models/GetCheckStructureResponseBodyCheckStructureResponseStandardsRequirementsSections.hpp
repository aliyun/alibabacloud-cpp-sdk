// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODYCHECKSTRUCTURERESPONSESTANDARDSREQUIREMENTSSECTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODYCHECKSTRUCTURERESPONSESTANDARDSREQUIREMENTSSECTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
    };
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections() = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections(const GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections &) = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections(GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections &&) = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections() = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections& operator=(const GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections &) = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections& operator=(GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->showName_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirementsSections& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


  protected:
    // The ID of the section for the check item.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The display name of the section for the check item.
    std::shared_ptr<string> showName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
