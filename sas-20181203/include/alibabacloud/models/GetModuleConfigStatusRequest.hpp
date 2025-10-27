// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULECONFIGSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMODULECONFIGSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetModuleConfigStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleConfigStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleNames, moduleNames_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleConfigStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleNames, moduleNames_);
    };
    GetModuleConfigStatusRequest() = default ;
    GetModuleConfigStatusRequest(const GetModuleConfigStatusRequest &) = default ;
    GetModuleConfigStatusRequest(GetModuleConfigStatusRequest &&) = default ;
    GetModuleConfigStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleConfigStatusRequest() = default ;
    GetModuleConfigStatusRequest& operator=(const GetModuleConfigStatusRequest &) = default ;
    GetModuleConfigStatusRequest& operator=(GetModuleConfigStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleNames_ == nullptr; };
    // moduleNames Field Functions 
    bool hasModuleNames() const { return this->moduleNames_ != nullptr;};
    void deleteModuleNames() { this->moduleNames_ = nullptr;};
    inline const vector<string> & moduleNames() const { DARABONBA_PTR_GET_CONST(moduleNames_, vector<string>) };
    inline vector<string> moduleNames() { DARABONBA_PTR_GET(moduleNames_, vector<string>) };
    inline GetModuleConfigStatusRequest& setModuleNames(const vector<string> & moduleNames) { DARABONBA_PTR_SET_VALUE(moduleNames_, moduleNames) };
    inline GetModuleConfigStatusRequest& setModuleNames(vector<string> && moduleNames) { DARABONBA_PTR_SET_RVALUE(moduleNames_, moduleNames) };


  protected:
    // The service modules that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> moduleNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
