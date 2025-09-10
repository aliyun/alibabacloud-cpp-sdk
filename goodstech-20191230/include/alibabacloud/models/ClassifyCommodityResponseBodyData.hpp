// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLASSIFYCOMMODITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CLASSIFYCOMMODITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ClassifyCommodityResponseBodyDataCategories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Goodstech20191230
{
namespace Models
{
  class ClassifyCommodityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClassifyCommodityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
    };
    friend void from_json(const Darabonba::Json& j, ClassifyCommodityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
    };
    ClassifyCommodityResponseBodyData() = default ;
    ClassifyCommodityResponseBodyData(const ClassifyCommodityResponseBodyData &) = default ;
    ClassifyCommodityResponseBodyData(ClassifyCommodityResponseBodyData &&) = default ;
    ClassifyCommodityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClassifyCommodityResponseBodyData() = default ;
    ClassifyCommodityResponseBodyData& operator=(const ClassifyCommodityResponseBodyData &) = default ;
    ClassifyCommodityResponseBodyData& operator=(ClassifyCommodityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categories_ != nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<Models::ClassifyCommodityResponseBodyDataCategories> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<Models::ClassifyCommodityResponseBodyDataCategories>) };
    inline vector<Models::ClassifyCommodityResponseBodyDataCategories> categories() { DARABONBA_PTR_GET(categories_, vector<Models::ClassifyCommodityResponseBodyDataCategories>) };
    inline ClassifyCommodityResponseBodyData& setCategories(const vector<Models::ClassifyCommodityResponseBodyDataCategories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ClassifyCommodityResponseBodyData& setCategories(vector<Models::ClassifyCommodityResponseBodyDataCategories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


  protected:
    std::shared_ptr<vector<Models::ClassifyCommodityResponseBodyDataCategories>> categories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Goodstech20191230
#endif
