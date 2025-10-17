// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMPULAYOUTINFOLISTRESPONSEBODYLAYOUTSLAYOUTPANES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMPULAYOUTINFOLISTRESPONSEBODYLAYOUTSLAYOUTPANES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes& obj) { 
      DARABONBA_PTR_TO_JSON(Panes, panes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
    };
    DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes() = default ;
    DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes(const DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes &) = default ;
    DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes(DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes &&) = default ;
    DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes() = default ;
    DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes& operator=(const DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes &) = default ;
    DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes& operator=(DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->panes_ == nullptr; };
    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes>) };
    inline vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes> panes() { DARABONBA_PTR_GET(panes_, vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes>) };
    inline DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes& setPanes(const vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes& setPanes(vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


  protected:
    std::shared_ptr<vector<Models::DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes>> panes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
