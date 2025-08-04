// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATEGORIESBYTASKIDRESPONSEBODYDATACHILDREN_HPP_
#define ALIBABACLOUD_MODELS_GETCATEGORIESBYTASKIDRESPONSEBODYDATACHILDREN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetCategoriesByTaskIdResponseBodyDataChildren : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCategoriesByTaskIdResponseBodyDataChildren& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
    };
    friend void from_json(const Darabonba::Json& j, GetCategoriesByTaskIdResponseBodyDataChildren& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
    };
    GetCategoriesByTaskIdResponseBodyDataChildren() = default ;
    GetCategoriesByTaskIdResponseBodyDataChildren(const GetCategoriesByTaskIdResponseBodyDataChildren &) = default ;
    GetCategoriesByTaskIdResponseBodyDataChildren(GetCategoriesByTaskIdResponseBodyDataChildren &&) = default ;
    GetCategoriesByTaskIdResponseBodyDataChildren(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCategoriesByTaskIdResponseBodyDataChildren() = default ;
    GetCategoriesByTaskIdResponseBodyDataChildren& operator=(const GetCategoriesByTaskIdResponseBodyDataChildren &) = default ;
    GetCategoriesByTaskIdResponseBodyDataChildren& operator=(GetCategoriesByTaskIdResponseBodyDataChildren &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetCategoriesByTaskIdResponseBodyDataChildren& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
