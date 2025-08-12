// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterLayoutsResponseBodyLayoutsLayout.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterLayoutsResponseBodyLayouts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterLayoutsResponseBodyLayouts& obj) { 
      DARABONBA_PTR_TO_JSON(Layout, layout_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterLayoutsResponseBodyLayouts& obj) { 
      DARABONBA_PTR_FROM_JSON(Layout, layout_);
    };
    DescribeCasterLayoutsResponseBodyLayouts() = default ;
    DescribeCasterLayoutsResponseBodyLayouts(const DescribeCasterLayoutsResponseBodyLayouts &) = default ;
    DescribeCasterLayoutsResponseBodyLayouts(DescribeCasterLayoutsResponseBodyLayouts &&) = default ;
    DescribeCasterLayoutsResponseBodyLayouts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterLayoutsResponseBodyLayouts() = default ;
    DescribeCasterLayoutsResponseBodyLayouts& operator=(const DescribeCasterLayoutsResponseBodyLayouts &) = default ;
    DescribeCasterLayoutsResponseBodyLayouts& operator=(DescribeCasterLayoutsResponseBodyLayouts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->layout_ != nullptr; };
    // layout Field Functions 
    bool hasLayout() const { return this->layout_ != nullptr;};
    void deleteLayout() { this->layout_ = nullptr;};
    inline const vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayout> & layout() const { DARABONBA_PTR_GET_CONST(layout_, vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayout>) };
    inline vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayout> layout() { DARABONBA_PTR_GET(layout_, vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayout>) };
    inline DescribeCasterLayoutsResponseBodyLayouts& setLayout(const vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayout> & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
    inline DescribeCasterLayoutsResponseBodyLayouts& setLayout(vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayout> && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterLayoutsResponseBodyLayoutsLayout>> layout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
