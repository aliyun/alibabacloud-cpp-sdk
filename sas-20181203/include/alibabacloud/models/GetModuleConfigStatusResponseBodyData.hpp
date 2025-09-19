// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULECONFIGSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMODULECONFIGSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModuleConfigStatusResponseBodyDataModuleConfigResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetModuleConfigStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleConfigStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleConfigResults, moduleConfigResults_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleConfigStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleConfigResults, moduleConfigResults_);
    };
    GetModuleConfigStatusResponseBodyData() = default ;
    GetModuleConfigStatusResponseBodyData(const GetModuleConfigStatusResponseBodyData &) = default ;
    GetModuleConfigStatusResponseBodyData(GetModuleConfigStatusResponseBodyData &&) = default ;
    GetModuleConfigStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleConfigStatusResponseBodyData() = default ;
    GetModuleConfigStatusResponseBodyData& operator=(const GetModuleConfigStatusResponseBodyData &) = default ;
    GetModuleConfigStatusResponseBodyData& operator=(GetModuleConfigStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleConfigResults_ != nullptr; };
    // moduleConfigResults Field Functions 
    bool hasModuleConfigResults() const { return this->moduleConfigResults_ != nullptr;};
    void deleteModuleConfigResults() { this->moduleConfigResults_ = nullptr;};
    inline const vector<Models::GetModuleConfigStatusResponseBodyDataModuleConfigResults> & moduleConfigResults() const { DARABONBA_PTR_GET_CONST(moduleConfigResults_, vector<Models::GetModuleConfigStatusResponseBodyDataModuleConfigResults>) };
    inline vector<Models::GetModuleConfigStatusResponseBodyDataModuleConfigResults> moduleConfigResults() { DARABONBA_PTR_GET(moduleConfigResults_, vector<Models::GetModuleConfigStatusResponseBodyDataModuleConfigResults>) };
    inline GetModuleConfigStatusResponseBodyData& setModuleConfigResults(const vector<Models::GetModuleConfigStatusResponseBodyDataModuleConfigResults> & moduleConfigResults) { DARABONBA_PTR_SET_VALUE(moduleConfigResults_, moduleConfigResults) };
    inline GetModuleConfigStatusResponseBodyData& setModuleConfigResults(vector<Models::GetModuleConfigStatusResponseBodyDataModuleConfigResults> && moduleConfigResults) { DARABONBA_PTR_SET_RVALUE(moduleConfigResults_, moduleConfigResults) };


  protected:
    // The check results of the service modules.
    std::shared_ptr<vector<Models::GetModuleConfigStatusResponseBodyDataModuleConfigResults>> moduleConfigResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
