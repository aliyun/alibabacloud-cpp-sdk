// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLAYOUTREQUESTLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLAYOUTREQUESTLAYOUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAppLayoutRequestLayoutPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppLayoutRequestLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppLayoutRequestLayout& obj) { 
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Panes, panes_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppLayoutRequestLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
    };
    ModifyAppLayoutRequestLayout() = default ;
    ModifyAppLayoutRequestLayout(const ModifyAppLayoutRequestLayout &) = default ;
    ModifyAppLayoutRequestLayout(ModifyAppLayoutRequestLayout &&) = default ;
    ModifyAppLayoutRequestLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppLayoutRequestLayout() = default ;
    ModifyAppLayoutRequestLayout& operator=(const ModifyAppLayoutRequestLayout &) = default ;
    ModifyAppLayoutRequestLayout& operator=(ModifyAppLayoutRequestLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->layoutId_ != nullptr
        && this->name_ != nullptr && this->panes_ != nullptr; };
    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline ModifyAppLayoutRequestLayout& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAppLayoutRequestLayout& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<Models::ModifyAppLayoutRequestLayoutPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<Models::ModifyAppLayoutRequestLayoutPanes>) };
    inline vector<Models::ModifyAppLayoutRequestLayoutPanes> panes() { DARABONBA_PTR_GET(panes_, vector<Models::ModifyAppLayoutRequestLayoutPanes>) };
    inline ModifyAppLayoutRequestLayout& setPanes(const vector<Models::ModifyAppLayoutRequestLayoutPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline ModifyAppLayoutRequestLayout& setPanes(vector<Models::ModifyAppLayoutRequestLayoutPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> layoutId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::ModifyAppLayoutRequestLayoutPanes>> panes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
