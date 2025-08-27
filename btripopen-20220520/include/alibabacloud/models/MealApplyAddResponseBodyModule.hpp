// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALAPPLYADDRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_MEALAPPLYADDRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealApplyAddResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealApplyAddResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
    };
    friend void from_json(const Darabonba::Json& j, MealApplyAddResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
    };
    MealApplyAddResponseBodyModule() = default ;
    MealApplyAddResponseBodyModule(const MealApplyAddResponseBodyModule &) = default ;
    MealApplyAddResponseBodyModule(MealApplyAddResponseBodyModule &&) = default ;
    MealApplyAddResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealApplyAddResponseBodyModule() = default ;
    MealApplyAddResponseBodyModule& operator=(const MealApplyAddResponseBodyModule &) = default ;
    MealApplyAddResponseBodyModule& operator=(MealApplyAddResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->thirdPartApplyId_ != nullptr; };
    // thirdPartApplyId Field Functions 
    bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
    void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
    inline string thirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
    inline MealApplyAddResponseBodyModule& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


  protected:
    std::shared_ptr<string> thirdPartApplyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
