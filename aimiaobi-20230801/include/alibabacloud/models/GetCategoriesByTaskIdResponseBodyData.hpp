// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATEGORIESBYTASKIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCATEGORIESBYTASKIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCategoriesByTaskIdResponseBodyDataChildren.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetCategoriesByTaskIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCategoriesByTaskIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, GetCategoriesByTaskIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    GetCategoriesByTaskIdResponseBodyData() = default ;
    GetCategoriesByTaskIdResponseBodyData(const GetCategoriesByTaskIdResponseBodyData &) = default ;
    GetCategoriesByTaskIdResponseBodyData(GetCategoriesByTaskIdResponseBodyData &&) = default ;
    GetCategoriesByTaskIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCategoriesByTaskIdResponseBodyData() = default ;
    GetCategoriesByTaskIdResponseBodyData& operator=(const GetCategoriesByTaskIdResponseBodyData &) = default ;
    GetCategoriesByTaskIdResponseBodyData& operator=(GetCategoriesByTaskIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->children_ != nullptr && this->count_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetCategoriesByTaskIdResponseBodyData& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<Models::GetCategoriesByTaskIdResponseBodyDataChildren> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<Models::GetCategoriesByTaskIdResponseBodyDataChildren>) };
    inline vector<Models::GetCategoriesByTaskIdResponseBodyDataChildren> children() { DARABONBA_PTR_GET(children_, vector<Models::GetCategoriesByTaskIdResponseBodyDataChildren>) };
    inline GetCategoriesByTaskIdResponseBodyData& setChildren(const vector<Models::GetCategoriesByTaskIdResponseBodyDataChildren> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline GetCategoriesByTaskIdResponseBodyData& setChildren(vector<Models::GetCategoriesByTaskIdResponseBodyDataChildren> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetCategoriesByTaskIdResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<vector<Models::GetCategoriesByTaskIdResponseBodyDataChildren>> children_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
