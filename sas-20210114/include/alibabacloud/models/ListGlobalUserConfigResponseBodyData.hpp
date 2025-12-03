// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGLOBALUSERCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGLOBALUSERCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class ListGlobalUserConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGlobalUserConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalConfigSwitch, globalConfigSwitch_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListGlobalUserConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalConfigSwitch, globalConfigSwitch_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    ListGlobalUserConfigResponseBodyData() = default ;
    ListGlobalUserConfigResponseBodyData(const ListGlobalUserConfigResponseBodyData &) = default ;
    ListGlobalUserConfigResponseBodyData(ListGlobalUserConfigResponseBodyData &&) = default ;
    ListGlobalUserConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGlobalUserConfigResponseBodyData() = default ;
    ListGlobalUserConfigResponseBodyData& operator=(const ListGlobalUserConfigResponseBodyData &) = default ;
    ListGlobalUserConfigResponseBodyData& operator=(ListGlobalUserConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalConfigSwitch_ == nullptr
        && return this->moduleName_ == nullptr; };
    // globalConfigSwitch Field Functions 
    bool hasGlobalConfigSwitch() const { return this->globalConfigSwitch_ != nullptr;};
    void deleteGlobalConfigSwitch() { this->globalConfigSwitch_ = nullptr;};
    inline bool globalConfigSwitch() const { DARABONBA_PTR_GET_DEFAULT(globalConfigSwitch_, false) };
    inline ListGlobalUserConfigResponseBodyData& setGlobalConfigSwitch(bool globalConfigSwitch) { DARABONBA_PTR_SET_VALUE(globalConfigSwitch_, globalConfigSwitch) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline ListGlobalUserConfigResponseBodyData& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    std::shared_ptr<bool> globalConfigSwitch_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
