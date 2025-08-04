// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMLAYOUTLISTRESPONSEBODYLAYOUTSLAYOUTPANES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMLAYOUTLISTRESPONSEBODYLAYOUTSLAYOUTPANES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes& obj) { 
      DARABONBA_PTR_TO_JSON(Panes, panes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
    };
    DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes() = default ;
    DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes(const DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes &) = default ;
    DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes(DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes &&) = default ;
    DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes() = default ;
    DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes& operator=(const DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes &) = default ;
    DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes& operator=(DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->panes_ != nullptr; };
    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes>) };
    inline vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes> panes() { DARABONBA_PTR_GET(panes_, vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes>) };
    inline DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes& setPanes(const vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes& setPanes(vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


  protected:
    std::shared_ptr<vector<Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes>> panes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
