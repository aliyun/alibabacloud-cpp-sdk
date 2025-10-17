// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLAYOUTREQUESTLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLAYOUTREQUESTLAYOUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppLayoutRequestLayoutPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppLayoutRequestLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppLayoutRequestLayout& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Panes, panes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppLayoutRequestLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
    };
    CreateAppLayoutRequestLayout() = default ;
    CreateAppLayoutRequestLayout(const CreateAppLayoutRequestLayout &) = default ;
    CreateAppLayoutRequestLayout(CreateAppLayoutRequestLayout &&) = default ;
    CreateAppLayoutRequestLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppLayoutRequestLayout() = default ;
    CreateAppLayoutRequestLayout& operator=(const CreateAppLayoutRequestLayout &) = default ;
    CreateAppLayoutRequestLayout& operator=(CreateAppLayoutRequestLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->panes_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppLayoutRequestLayout& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<Models::CreateAppLayoutRequestLayoutPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<Models::CreateAppLayoutRequestLayoutPanes>) };
    inline vector<Models::CreateAppLayoutRequestLayoutPanes> panes() { DARABONBA_PTR_GET(panes_, vector<Models::CreateAppLayoutRequestLayoutPanes>) };
    inline CreateAppLayoutRequestLayout& setPanes(const vector<Models::CreateAppLayoutRequestLayoutPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline CreateAppLayoutRequestLayout& setPanes(vector<Models::CreateAppLayoutRequestLayoutPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateAppLayoutRequestLayoutPanes>> panes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
