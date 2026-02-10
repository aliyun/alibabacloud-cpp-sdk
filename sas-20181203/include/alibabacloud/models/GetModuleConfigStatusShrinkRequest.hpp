// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULECONFIGSTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMODULECONFIGSTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetModuleConfigStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleConfigStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleNames, moduleNamesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleConfigStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleNames, moduleNamesShrink_);
    };
    GetModuleConfigStatusShrinkRequest() = default ;
    GetModuleConfigStatusShrinkRequest(const GetModuleConfigStatusShrinkRequest &) = default ;
    GetModuleConfigStatusShrinkRequest(GetModuleConfigStatusShrinkRequest &&) = default ;
    GetModuleConfigStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleConfigStatusShrinkRequest() = default ;
    GetModuleConfigStatusShrinkRequest& operator=(const GetModuleConfigStatusShrinkRequest &) = default ;
    GetModuleConfigStatusShrinkRequest& operator=(GetModuleConfigStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleNamesShrink_ == nullptr; };
    // moduleNamesShrink Field Functions 
    bool hasModuleNamesShrink() const { return this->moduleNamesShrink_ != nullptr;};
    void deleteModuleNamesShrink() { this->moduleNamesShrink_ = nullptr;};
    inline string getModuleNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(moduleNamesShrink_, "") };
    inline GetModuleConfigStatusShrinkRequest& setModuleNamesShrink(string moduleNamesShrink) { DARABONBA_PTR_SET_VALUE(moduleNamesShrink_, moduleNamesShrink) };


  protected:
    // The service modules that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> moduleNamesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
