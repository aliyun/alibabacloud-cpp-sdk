// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLAYOUTSRESPONSEBODYLAYOUTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLAYOUTSRESPONSEBODYLAYOUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppLayoutsResponseBodyLayoutsPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppLayoutsResponseBodyLayouts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppLayoutsResponseBodyLayouts& obj) { 
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Panes, panes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppLayoutsResponseBodyLayouts& obj) { 
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
    };
    DescribeAppLayoutsResponseBodyLayouts() = default ;
    DescribeAppLayoutsResponseBodyLayouts(const DescribeAppLayoutsResponseBodyLayouts &) = default ;
    DescribeAppLayoutsResponseBodyLayouts(DescribeAppLayoutsResponseBodyLayouts &&) = default ;
    DescribeAppLayoutsResponseBodyLayouts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppLayoutsResponseBodyLayouts() = default ;
    DescribeAppLayoutsResponseBodyLayouts& operator=(const DescribeAppLayoutsResponseBodyLayouts &) = default ;
    DescribeAppLayoutsResponseBodyLayouts& operator=(DescribeAppLayoutsResponseBodyLayouts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layoutId_ == nullptr
        && return this->name_ == nullptr && return this->panes_ == nullptr; };
    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline DescribeAppLayoutsResponseBodyLayouts& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppLayoutsResponseBodyLayouts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<Models::DescribeAppLayoutsResponseBodyLayoutsPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<Models::DescribeAppLayoutsResponseBodyLayoutsPanes>) };
    inline vector<Models::DescribeAppLayoutsResponseBodyLayoutsPanes> panes() { DARABONBA_PTR_GET(panes_, vector<Models::DescribeAppLayoutsResponseBodyLayoutsPanes>) };
    inline DescribeAppLayoutsResponseBodyLayouts& setPanes(const vector<Models::DescribeAppLayoutsResponseBodyLayoutsPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline DescribeAppLayoutsResponseBodyLayouts& setPanes(vector<Models::DescribeAppLayoutsResponseBodyLayoutsPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


  protected:
    std::shared_ptr<string> layoutId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAppLayoutsResponseBodyLayoutsPanes>> panes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
