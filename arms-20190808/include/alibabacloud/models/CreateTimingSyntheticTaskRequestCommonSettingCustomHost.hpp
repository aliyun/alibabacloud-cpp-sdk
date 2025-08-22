// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTCOMMONSETTINGCUSTOMHOST_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTCOMMONSETTINGCUSTOMHOST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestCommonSettingCustomHostHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequestCommonSettingCustomHost : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequestCommonSettingCustomHost& obj) { 
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(SelectType, selectType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequestCommonSettingCustomHost& obj) { 
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
    };
    CreateTimingSyntheticTaskRequestCommonSettingCustomHost() = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomHost(const CreateTimingSyntheticTaskRequestCommonSettingCustomHost &) = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomHost(CreateTimingSyntheticTaskRequestCommonSettingCustomHost &&) = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomHost(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequestCommonSettingCustomHost() = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomHost& operator=(const CreateTimingSyntheticTaskRequestCommonSettingCustomHost &) = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomHost& operator=(CreateTimingSyntheticTaskRequestCommonSettingCustomHost &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hosts_ != nullptr
        && this->selectType_ != nullptr; };
    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHostHosts> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHostHosts>) };
    inline vector<Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHostHosts> hosts() { DARABONBA_PTR_GET(hosts_, vector<Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHostHosts>) };
    inline CreateTimingSyntheticTaskRequestCommonSettingCustomHost& setHosts(const vector<Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHostHosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline CreateTimingSyntheticTaskRequestCommonSettingCustomHost& setHosts(vector<Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHostHosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // selectType Field Functions 
    bool hasSelectType() const { return this->selectType_ != nullptr;};
    void deleteSelectType() { this->selectType_ = nullptr;};
    inline int32_t selectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, 0) };
    inline CreateTimingSyntheticTaskRequestCommonSettingCustomHost& setSelectType(int32_t selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


  protected:
    // The list of hosts.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateTimingSyntheticTaskRequestCommonSettingCustomHostHosts>> hosts_ = nullptr;
    // The selection mode. Valid values:
    // 
    // *   0: random
    // *   1: polling
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> selectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
