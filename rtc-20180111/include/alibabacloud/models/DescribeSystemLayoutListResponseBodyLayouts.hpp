// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMLAYOUTLISTRESPONSEBODYLAYOUTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMLAYOUTLISTRESPONSEBODYLAYOUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSystemLayoutListResponseBodyLayoutsLayout.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeSystemLayoutListResponseBodyLayouts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemLayoutListResponseBodyLayouts& obj) { 
      DARABONBA_PTR_TO_JSON(Layout, layout_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemLayoutListResponseBodyLayouts& obj) { 
      DARABONBA_PTR_FROM_JSON(Layout, layout_);
    };
    DescribeSystemLayoutListResponseBodyLayouts() = default ;
    DescribeSystemLayoutListResponseBodyLayouts(const DescribeSystemLayoutListResponseBodyLayouts &) = default ;
    DescribeSystemLayoutListResponseBodyLayouts(DescribeSystemLayoutListResponseBodyLayouts &&) = default ;
    DescribeSystemLayoutListResponseBodyLayouts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemLayoutListResponseBodyLayouts() = default ;
    DescribeSystemLayoutListResponseBodyLayouts& operator=(const DescribeSystemLayoutListResponseBodyLayouts &) = default ;
    DescribeSystemLayoutListResponseBodyLayouts& operator=(DescribeSystemLayoutListResponseBodyLayouts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layout_ == nullptr; };
    // layout Field Functions 
    bool hasLayout() const { return this->layout_ != nullptr;};
    void deleteLayout() { this->layout_ = nullptr;};
    inline const vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayout> & layout() const { DARABONBA_PTR_GET_CONST(layout_, vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayout>) };
    inline vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayout> layout() { DARABONBA_PTR_GET(layout_, vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayout>) };
    inline DescribeSystemLayoutListResponseBodyLayouts& setLayout(const vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayout> & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
    inline DescribeSystemLayoutListResponseBodyLayouts& setLayout(vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayout> && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


  protected:
    std::shared_ptr<vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayout>> layout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
