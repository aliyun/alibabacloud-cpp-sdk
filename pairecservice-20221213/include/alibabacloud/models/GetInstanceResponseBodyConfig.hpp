// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceResponseBodyConfigDataManagements.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyConfigEngines.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyConfigMonitors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetInstanceResponseBodyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DataManagements, dataManagements_);
      DARABONBA_PTR_TO_JSON(Engines, engines_);
      DARABONBA_PTR_TO_JSON(Monitors, monitors_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DataManagements, dataManagements_);
      DARABONBA_PTR_FROM_JSON(Engines, engines_);
      DARABONBA_PTR_FROM_JSON(Monitors, monitors_);
    };
    GetInstanceResponseBodyConfig() = default ;
    GetInstanceResponseBodyConfig(const GetInstanceResponseBodyConfig &) = default ;
    GetInstanceResponseBodyConfig(GetInstanceResponseBodyConfig &&) = default ;
    GetInstanceResponseBodyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyConfig() = default ;
    GetInstanceResponseBodyConfig& operator=(const GetInstanceResponseBodyConfig &) = default ;
    GetInstanceResponseBodyConfig& operator=(GetInstanceResponseBodyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataManagements_ != nullptr
        && this->engines_ != nullptr && this->monitors_ != nullptr; };
    // dataManagements Field Functions 
    bool hasDataManagements() const { return this->dataManagements_ != nullptr;};
    void deleteDataManagements() { this->dataManagements_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyConfigDataManagements> & dataManagements() const { DARABONBA_PTR_GET_CONST(dataManagements_, vector<Models::GetInstanceResponseBodyConfigDataManagements>) };
    inline vector<Models::GetInstanceResponseBodyConfigDataManagements> dataManagements() { DARABONBA_PTR_GET(dataManagements_, vector<Models::GetInstanceResponseBodyConfigDataManagements>) };
    inline GetInstanceResponseBodyConfig& setDataManagements(const vector<Models::GetInstanceResponseBodyConfigDataManagements> & dataManagements) { DARABONBA_PTR_SET_VALUE(dataManagements_, dataManagements) };
    inline GetInstanceResponseBodyConfig& setDataManagements(vector<Models::GetInstanceResponseBodyConfigDataManagements> && dataManagements) { DARABONBA_PTR_SET_RVALUE(dataManagements_, dataManagements) };


    // engines Field Functions 
    bool hasEngines() const { return this->engines_ != nullptr;};
    void deleteEngines() { this->engines_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyConfigEngines> & engines() const { DARABONBA_PTR_GET_CONST(engines_, vector<Models::GetInstanceResponseBodyConfigEngines>) };
    inline vector<Models::GetInstanceResponseBodyConfigEngines> engines() { DARABONBA_PTR_GET(engines_, vector<Models::GetInstanceResponseBodyConfigEngines>) };
    inline GetInstanceResponseBodyConfig& setEngines(const vector<Models::GetInstanceResponseBodyConfigEngines> & engines) { DARABONBA_PTR_SET_VALUE(engines_, engines) };
    inline GetInstanceResponseBodyConfig& setEngines(vector<Models::GetInstanceResponseBodyConfigEngines> && engines) { DARABONBA_PTR_SET_RVALUE(engines_, engines) };


    // monitors Field Functions 
    bool hasMonitors() const { return this->monitors_ != nullptr;};
    void deleteMonitors() { this->monitors_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyConfigMonitors> & monitors() const { DARABONBA_PTR_GET_CONST(monitors_, vector<Models::GetInstanceResponseBodyConfigMonitors>) };
    inline vector<Models::GetInstanceResponseBodyConfigMonitors> monitors() { DARABONBA_PTR_GET(monitors_, vector<Models::GetInstanceResponseBodyConfigMonitors>) };
    inline GetInstanceResponseBodyConfig& setMonitors(const vector<Models::GetInstanceResponseBodyConfigMonitors> & monitors) { DARABONBA_PTR_SET_VALUE(monitors_, monitors) };
    inline GetInstanceResponseBodyConfig& setMonitors(vector<Models::GetInstanceResponseBodyConfigMonitors> && monitors) { DARABONBA_PTR_SET_RVALUE(monitors_, monitors) };


  protected:
    std::shared_ptr<vector<Models::GetInstanceResponseBodyConfigDataManagements>> dataManagements_ = nullptr;
    std::shared_ptr<vector<Models::GetInstanceResponseBodyConfigEngines>> engines_ = nullptr;
    std::shared_ptr<vector<Models::GetInstanceResponseBodyConfigMonitors>> monitors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
