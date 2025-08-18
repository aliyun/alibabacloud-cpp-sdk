// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDATASOURCECONNECTIVITYREQUESTCHECKCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CHECKDATASOURCECONNECTIVITYREQUESTCHECKCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckDataSourceConnectivityRequestCheckCommandConfigItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CheckDataSourceConnectivityRequestCheckCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDataSourceConnectivityRequestCheckCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigItemList, configItemList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDataSourceConnectivityRequestCheckCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigItemList, configItemList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CheckDataSourceConnectivityRequestCheckCommand() = default ;
    CheckDataSourceConnectivityRequestCheckCommand(const CheckDataSourceConnectivityRequestCheckCommand &) = default ;
    CheckDataSourceConnectivityRequestCheckCommand(CheckDataSourceConnectivityRequestCheckCommand &&) = default ;
    CheckDataSourceConnectivityRequestCheckCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDataSourceConnectivityRequestCheckCommand() = default ;
    CheckDataSourceConnectivityRequestCheckCommand& operator=(const CheckDataSourceConnectivityRequestCheckCommand &) = default ;
    CheckDataSourceConnectivityRequestCheckCommand& operator=(CheckDataSourceConnectivityRequestCheckCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configItemList_ != nullptr
        && this->type_ != nullptr; };
    // configItemList Field Functions 
    bool hasConfigItemList() const { return this->configItemList_ != nullptr;};
    void deleteConfigItemList() { this->configItemList_ = nullptr;};
    inline const vector<Models::CheckDataSourceConnectivityRequestCheckCommandConfigItemList> & configItemList() const { DARABONBA_PTR_GET_CONST(configItemList_, vector<Models::CheckDataSourceConnectivityRequestCheckCommandConfigItemList>) };
    inline vector<Models::CheckDataSourceConnectivityRequestCheckCommandConfigItemList> configItemList() { DARABONBA_PTR_GET(configItemList_, vector<Models::CheckDataSourceConnectivityRequestCheckCommandConfigItemList>) };
    inline CheckDataSourceConnectivityRequestCheckCommand& setConfigItemList(const vector<Models::CheckDataSourceConnectivityRequestCheckCommandConfigItemList> & configItemList) { DARABONBA_PTR_SET_VALUE(configItemList_, configItemList) };
    inline CheckDataSourceConnectivityRequestCheckCommand& setConfigItemList(vector<Models::CheckDataSourceConnectivityRequestCheckCommandConfigItemList> && configItemList) { DARABONBA_PTR_SET_RVALUE(configItemList_, configItemList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CheckDataSourceConnectivityRequestCheckCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::CheckDataSourceConnectivityRequestCheckCommandConfigItemList>> configItemList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
