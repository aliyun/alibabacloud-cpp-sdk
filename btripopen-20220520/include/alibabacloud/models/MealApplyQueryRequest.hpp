// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALAPPLYQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MEALAPPLYQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealApplyQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealApplyQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
    };
    friend void from_json(const Darabonba::Json& j, MealApplyQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
    };
    MealApplyQueryRequest() = default ;
    MealApplyQueryRequest(const MealApplyQueryRequest &) = default ;
    MealApplyQueryRequest(MealApplyQueryRequest &&) = default ;
    MealApplyQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealApplyQueryRequest() = default ;
    MealApplyQueryRequest& operator=(const MealApplyQueryRequest &) = default ;
    MealApplyQueryRequest& operator=(MealApplyQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->thirdPartApplyId_ != nullptr; };
    // thirdPartApplyId Field Functions 
    bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
    void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
    inline string thirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
    inline MealApplyQueryRequest& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> thirdPartApplyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
