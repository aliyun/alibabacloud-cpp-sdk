// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMPULAYOUTINFOLISTRESPONSEBODYLAYOUTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMPULAYOUTINFOLISTRESPONSEBODYLAYOUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMPULayoutInfoListResponseBodyLayoutsLayout.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeMPULayoutInfoListResponseBodyLayouts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMPULayoutInfoListResponseBodyLayouts& obj) { 
      DARABONBA_PTR_TO_JSON(Layout, layout_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMPULayoutInfoListResponseBodyLayouts& obj) { 
      DARABONBA_PTR_FROM_JSON(Layout, layout_);
    };
    DescribeMPULayoutInfoListResponseBodyLayouts() = default ;
    DescribeMPULayoutInfoListResponseBodyLayouts(const DescribeMPULayoutInfoListResponseBodyLayouts &) = default ;
    DescribeMPULayoutInfoListResponseBodyLayouts(DescribeMPULayoutInfoListResponseBodyLayouts &&) = default ;
    DescribeMPULayoutInfoListResponseBodyLayouts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMPULayoutInfoListResponseBodyLayouts() = default ;
    DescribeMPULayoutInfoListResponseBodyLayouts& operator=(const DescribeMPULayoutInfoListResponseBodyLayouts &) = default ;
    DescribeMPULayoutInfoListResponseBodyLayouts& operator=(DescribeMPULayoutInfoListResponseBodyLayouts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layout_ == nullptr; };
    // layout Field Functions 
    bool hasLayout() const { return this->layout_ != nullptr;};
    void deleteLayout() { this->layout_ = nullptr;};
    inline const vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayout> & layout() const { DARABONBA_PTR_GET_CONST(layout_, vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayout>) };
    inline vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayout> layout() { DARABONBA_PTR_GET(layout_, vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayout>) };
    inline DescribeMPULayoutInfoListResponseBodyLayouts& setLayout(const vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayout> & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
    inline DescribeMPULayoutInfoListResponseBodyLayouts& setLayout(vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayout> && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


  protected:
    std::shared_ptr<vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayout>> layout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
