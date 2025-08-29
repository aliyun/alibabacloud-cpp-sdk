// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesConfigDataManagements.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesConfigEngines.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesConfigMonitors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListInstancesResponseBodyInstancesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstancesConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DataManagements, dataManagements_);
      DARABONBA_PTR_TO_JSON(Engines, engines_);
      DARABONBA_PTR_TO_JSON(Monitors, monitors_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstancesConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DataManagements, dataManagements_);
      DARABONBA_PTR_FROM_JSON(Engines, engines_);
      DARABONBA_PTR_FROM_JSON(Monitors, monitors_);
    };
    ListInstancesResponseBodyInstancesConfig() = default ;
    ListInstancesResponseBodyInstancesConfig(const ListInstancesResponseBodyInstancesConfig &) = default ;
    ListInstancesResponseBodyInstancesConfig(ListInstancesResponseBodyInstancesConfig &&) = default ;
    ListInstancesResponseBodyInstancesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstancesConfig() = default ;
    ListInstancesResponseBodyInstancesConfig& operator=(const ListInstancesResponseBodyInstancesConfig &) = default ;
    ListInstancesResponseBodyInstancesConfig& operator=(ListInstancesResponseBodyInstancesConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataManagements_ != nullptr
        && this->engines_ != nullptr && this->monitors_ != nullptr; };
    // dataManagements Field Functions 
    bool hasDataManagements() const { return this->dataManagements_ != nullptr;};
    void deleteDataManagements() { this->dataManagements_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyInstancesConfigDataManagements> & dataManagements() const { DARABONBA_PTR_GET_CONST(dataManagements_, vector<Models::ListInstancesResponseBodyInstancesConfigDataManagements>) };
    inline vector<Models::ListInstancesResponseBodyInstancesConfigDataManagements> dataManagements() { DARABONBA_PTR_GET(dataManagements_, vector<Models::ListInstancesResponseBodyInstancesConfigDataManagements>) };
    inline ListInstancesResponseBodyInstancesConfig& setDataManagements(const vector<Models::ListInstancesResponseBodyInstancesConfigDataManagements> & dataManagements) { DARABONBA_PTR_SET_VALUE(dataManagements_, dataManagements) };
    inline ListInstancesResponseBodyInstancesConfig& setDataManagements(vector<Models::ListInstancesResponseBodyInstancesConfigDataManagements> && dataManagements) { DARABONBA_PTR_SET_RVALUE(dataManagements_, dataManagements) };


    // engines Field Functions 
    bool hasEngines() const { return this->engines_ != nullptr;};
    void deleteEngines() { this->engines_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyInstancesConfigEngines> & engines() const { DARABONBA_PTR_GET_CONST(engines_, vector<Models::ListInstancesResponseBodyInstancesConfigEngines>) };
    inline vector<Models::ListInstancesResponseBodyInstancesConfigEngines> engines() { DARABONBA_PTR_GET(engines_, vector<Models::ListInstancesResponseBodyInstancesConfigEngines>) };
    inline ListInstancesResponseBodyInstancesConfig& setEngines(const vector<Models::ListInstancesResponseBodyInstancesConfigEngines> & engines) { DARABONBA_PTR_SET_VALUE(engines_, engines) };
    inline ListInstancesResponseBodyInstancesConfig& setEngines(vector<Models::ListInstancesResponseBodyInstancesConfigEngines> && engines) { DARABONBA_PTR_SET_RVALUE(engines_, engines) };


    // monitors Field Functions 
    bool hasMonitors() const { return this->monitors_ != nullptr;};
    void deleteMonitors() { this->monitors_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyInstancesConfigMonitors> & monitors() const { DARABONBA_PTR_GET_CONST(monitors_, vector<Models::ListInstancesResponseBodyInstancesConfigMonitors>) };
    inline vector<Models::ListInstancesResponseBodyInstancesConfigMonitors> monitors() { DARABONBA_PTR_GET(monitors_, vector<Models::ListInstancesResponseBodyInstancesConfigMonitors>) };
    inline ListInstancesResponseBodyInstancesConfig& setMonitors(const vector<Models::ListInstancesResponseBodyInstancesConfigMonitors> & monitors) { DARABONBA_PTR_SET_VALUE(monitors_, monitors) };
    inline ListInstancesResponseBodyInstancesConfig& setMonitors(vector<Models::ListInstancesResponseBodyInstancesConfigMonitors> && monitors) { DARABONBA_PTR_SET_RVALUE(monitors_, monitors) };


  protected:
    std::shared_ptr<vector<Models::ListInstancesResponseBodyInstancesConfigDataManagements>> dataManagements_ = nullptr;
    std::shared_ptr<vector<Models::ListInstancesResponseBodyInstancesConfigEngines>> engines_ = nullptr;
    std::shared_ptr<vector<Models::ListInstancesResponseBodyInstancesConfigMonitors>> monitors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
