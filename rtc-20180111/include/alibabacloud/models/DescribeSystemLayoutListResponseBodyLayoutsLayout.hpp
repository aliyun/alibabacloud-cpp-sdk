// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMLAYOUTLISTRESPONSEBODYLAYOUTSLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMLAYOUTLISTRESPONSEBODYLAYOUTSLAYOUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeSystemLayoutListResponseBodyLayoutsLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemLayoutListResponseBodyLayoutsLayout& obj) { 
      DARABONBA_PTR_TO_JSON(AudioMixCount, audioMixCount_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Panes, panes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemLayoutListResponseBodyLayoutsLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioMixCount, audioMixCount_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
    };
    DescribeSystemLayoutListResponseBodyLayoutsLayout() = default ;
    DescribeSystemLayoutListResponseBodyLayoutsLayout(const DescribeSystemLayoutListResponseBodyLayoutsLayout &) = default ;
    DescribeSystemLayoutListResponseBodyLayoutsLayout(DescribeSystemLayoutListResponseBodyLayoutsLayout &&) = default ;
    DescribeSystemLayoutListResponseBodyLayoutsLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemLayoutListResponseBodyLayoutsLayout() = default ;
    DescribeSystemLayoutListResponseBodyLayoutsLayout& operator=(const DescribeSystemLayoutListResponseBodyLayoutsLayout &) = default ;
    DescribeSystemLayoutListResponseBodyLayoutsLayout& operator=(DescribeSystemLayoutListResponseBodyLayoutsLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioMixCount_ == nullptr
        && return this->layoutId_ == nullptr && return this->name_ == nullptr && return this->panes_ == nullptr; };
    // audioMixCount Field Functions 
    bool hasAudioMixCount() const { return this->audioMixCount_ != nullptr;};
    void deleteAudioMixCount() { this->audioMixCount_ = nullptr;};
    inline int32_t audioMixCount() const { DARABONBA_PTR_GET_DEFAULT(audioMixCount_, 0) };
    inline DescribeSystemLayoutListResponseBodyLayoutsLayout& setAudioMixCount(int32_t audioMixCount) { DARABONBA_PTR_SET_VALUE(audioMixCount_, audioMixCount) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline int64_t layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, 0L) };
    inline DescribeSystemLayoutListResponseBodyLayoutsLayout& setLayoutId(int64_t layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSystemLayoutListResponseBodyLayoutsLayout& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes & panes() const { DARABONBA_PTR_GET_CONST(panes_, Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes) };
    inline Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes panes() { DARABONBA_PTR_GET(panes_, Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes) };
    inline DescribeSystemLayoutListResponseBodyLayoutsLayout& setPanes(const Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline DescribeSystemLayoutListResponseBodyLayoutsLayout& setPanes(Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


  protected:
    // AudioMixCount。
    std::shared_ptr<int32_t> audioMixCount_ = nullptr;
    std::shared_ptr<int64_t> layoutId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes> panes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
