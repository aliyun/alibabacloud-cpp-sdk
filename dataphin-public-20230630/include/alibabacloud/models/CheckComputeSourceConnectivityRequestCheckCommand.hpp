// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOMPUTESOURCECONNECTIVITYREQUESTCHECKCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOMPUTESOURCECONNECTIVITYREQUESTCHECKCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckComputeSourceConnectivityRequestCheckCommandConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CheckComputeSourceConnectivityRequestCheckCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckComputeSourceConnectivityRequestCheckCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CheckComputeSourceConnectivityRequestCheckCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CheckComputeSourceConnectivityRequestCheckCommand() = default ;
    CheckComputeSourceConnectivityRequestCheckCommand(const CheckComputeSourceConnectivityRequestCheckCommand &) = default ;
    CheckComputeSourceConnectivityRequestCheckCommand(CheckComputeSourceConnectivityRequestCheckCommand &&) = default ;
    CheckComputeSourceConnectivityRequestCheckCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckComputeSourceConnectivityRequestCheckCommand() = default ;
    CheckComputeSourceConnectivityRequestCheckCommand& operator=(const CheckComputeSourceConnectivityRequestCheckCommand &) = default ;
    CheckComputeSourceConnectivityRequestCheckCommand& operator=(CheckComputeSourceConnectivityRequestCheckCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configList_ == nullptr
        && return this->type_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<Models::CheckComputeSourceConnectivityRequestCheckCommandConfigList> & configList() const { DARABONBA_PTR_GET_CONST(configList_, vector<Models::CheckComputeSourceConnectivityRequestCheckCommandConfigList>) };
    inline vector<Models::CheckComputeSourceConnectivityRequestCheckCommandConfigList> configList() { DARABONBA_PTR_GET(configList_, vector<Models::CheckComputeSourceConnectivityRequestCheckCommandConfigList>) };
    inline CheckComputeSourceConnectivityRequestCheckCommand& setConfigList(const vector<Models::CheckComputeSourceConnectivityRequestCheckCommandConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline CheckComputeSourceConnectivityRequestCheckCommand& setConfigList(vector<Models::CheckComputeSourceConnectivityRequestCheckCommandConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CheckComputeSourceConnectivityRequestCheckCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::CheckComputeSourceConnectivityRequestCheckCommandConfigList>> configList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
