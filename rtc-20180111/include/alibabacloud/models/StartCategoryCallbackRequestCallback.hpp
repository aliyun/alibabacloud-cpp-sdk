// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCATEGORYCALLBACKREQUESTCALLBACK_HPP_
#define ALIBABACLOUD_MODELS_STARTCATEGORYCALLBACKREQUESTCALLBACK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCategoryCallbackRequestCallback : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCategoryCallbackRequestCallback& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
    };
    friend void from_json(const Darabonba::Json& j, StartCategoryCallbackRequestCallback& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
    };
    StartCategoryCallbackRequestCallback() = default ;
    StartCategoryCallbackRequestCallback(const StartCategoryCallbackRequestCallback &) = default ;
    StartCategoryCallbackRequestCallback(StartCategoryCallbackRequestCallback &&) = default ;
    StartCategoryCallbackRequestCallback(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCategoryCallbackRequestCallback() = default ;
    StartCategoryCallbackRequestCallback& operator=(const StartCategoryCallbackRequestCallback &) = default ;
    StartCategoryCallbackRequestCallback& operator=(StartCategoryCallbackRequestCallback &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline StartCategoryCallbackRequestCallback& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
