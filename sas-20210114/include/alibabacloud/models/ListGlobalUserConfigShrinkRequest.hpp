// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGLOBALUSERCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGLOBALUSERCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class ListGlobalUserConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGlobalUserConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleList, moduleListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListGlobalUserConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleList, moduleListShrink_);
    };
    ListGlobalUserConfigShrinkRequest() = default ;
    ListGlobalUserConfigShrinkRequest(const ListGlobalUserConfigShrinkRequest &) = default ;
    ListGlobalUserConfigShrinkRequest(ListGlobalUserConfigShrinkRequest &&) = default ;
    ListGlobalUserConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGlobalUserConfigShrinkRequest() = default ;
    ListGlobalUserConfigShrinkRequest& operator=(const ListGlobalUserConfigShrinkRequest &) = default ;
    ListGlobalUserConfigShrinkRequest& operator=(ListGlobalUserConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleListShrink_ == nullptr; };
    // moduleListShrink Field Functions 
    bool hasModuleListShrink() const { return this->moduleListShrink_ != nullptr;};
    void deleteModuleListShrink() { this->moduleListShrink_ = nullptr;};
    inline string moduleListShrink() const { DARABONBA_PTR_GET_DEFAULT(moduleListShrink_, "") };
    inline ListGlobalUserConfigShrinkRequest& setModuleListShrink(string moduleListShrink) { DARABONBA_PTR_SET_VALUE(moduleListShrink_, moduleListShrink) };


  protected:
    std::shared_ptr<string> moduleListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
