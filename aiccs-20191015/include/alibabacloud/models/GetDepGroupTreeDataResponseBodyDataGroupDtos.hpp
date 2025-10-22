// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPGROUPTREEDATARESPONSEBODYDATAGROUPDTOS_HPP_
#define ALIBABACLOUD_MODELS_GETDEPGROUPTREEDATARESPONSEBODYDATAGROUPDTOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetDepGroupTreeDataResponseBodyDataGroupDTOS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDepGroupTreeDataResponseBodyDataGroupDTOS& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDepGroupTreeDataResponseBodyDataGroupDTOS& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
    };
    GetDepGroupTreeDataResponseBodyDataGroupDTOS() = default ;
    GetDepGroupTreeDataResponseBodyDataGroupDTOS(const GetDepGroupTreeDataResponseBodyDataGroupDTOS &) = default ;
    GetDepGroupTreeDataResponseBodyDataGroupDTOS(GetDepGroupTreeDataResponseBodyDataGroupDTOS &&) = default ;
    GetDepGroupTreeDataResponseBodyDataGroupDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDepGroupTreeDataResponseBodyDataGroupDTOS() = default ;
    GetDepGroupTreeDataResponseBodyDataGroupDTOS& operator=(const GetDepGroupTreeDataResponseBodyDataGroupDTOS &) = default ;
    GetDepGroupTreeDataResponseBodyDataGroupDTOS& operator=(GetDepGroupTreeDataResponseBodyDataGroupDTOS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->skillGroupId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDepGroupTreeDataResponseBodyDataGroupDTOS& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline int64_t skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, 0L) };
    inline GetDepGroupTreeDataResponseBodyDataGroupDTOS& setSkillGroupId(int64_t skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> skillGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
