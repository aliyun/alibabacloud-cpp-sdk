// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGLOBALUSERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGLOBALUSERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class ListGlobalUserConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGlobalUserConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleList, moduleList_);
    };
    friend void from_json(const Darabonba::Json& j, ListGlobalUserConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleList, moduleList_);
    };
    ListGlobalUserConfigRequest() = default ;
    ListGlobalUserConfigRequest(const ListGlobalUserConfigRequest &) = default ;
    ListGlobalUserConfigRequest(ListGlobalUserConfigRequest &&) = default ;
    ListGlobalUserConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGlobalUserConfigRequest() = default ;
    ListGlobalUserConfigRequest& operator=(const ListGlobalUserConfigRequest &) = default ;
    ListGlobalUserConfigRequest& operator=(ListGlobalUserConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleList_ == nullptr; };
    // moduleList Field Functions 
    bool hasModuleList() const { return this->moduleList_ != nullptr;};
    void deleteModuleList() { this->moduleList_ = nullptr;};
    inline const vector<string> & moduleList() const { DARABONBA_PTR_GET_CONST(moduleList_, vector<string>) };
    inline vector<string> moduleList() { DARABONBA_PTR_GET(moduleList_, vector<string>) };
    inline ListGlobalUserConfigRequest& setModuleList(const vector<string> & moduleList) { DARABONBA_PTR_SET_VALUE(moduleList_, moduleList) };
    inline ListGlobalUserConfigRequest& setModuleList(vector<string> && moduleList) { DARABONBA_PTR_SET_RVALUE(moduleList_, moduleList) };


  protected:
    std::shared_ptr<vector<string>> moduleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
