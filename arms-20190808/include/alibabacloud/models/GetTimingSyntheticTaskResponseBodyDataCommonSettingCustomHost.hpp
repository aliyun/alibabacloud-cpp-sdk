// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATACOMMONSETTINGCUSTOMHOST_HPP_
#define ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATACOMMONSETTINGCUSTOMHOST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHostHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost& obj) { 
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(SelectType, selectType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost& obj) { 
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
    };
    GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost() = default ;
    GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost(const GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost &) = default ;
    GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost(GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost &&) = default ;
    GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost() = default ;
    GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost& operator=(const GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost &) = default ;
    GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost& operator=(GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hosts_ != nullptr
        && this->selectType_ != nullptr; };
    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHostHosts> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHostHosts>) };
    inline vector<Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHostHosts> hosts() { DARABONBA_PTR_GET(hosts_, vector<Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHostHosts>) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost& setHosts(const vector<Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHostHosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost& setHosts(vector<Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHostHosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // selectType Field Functions 
    bool hasSelectType() const { return this->selectType_ != nullptr;};
    void deleteSelectType() { this->selectType_ = nullptr;};
    inline int32_t selectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, 0) };
    inline GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHost& setSelectType(int32_t selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


  protected:
    // The list of hosts.
    std::shared_ptr<vector<Models::GetTimingSyntheticTaskResponseBodyDataCommonSettingCustomHostHosts>> hosts_ = nullptr;
    // The selection mode. 0: Random. 1: Polling.
    std::shared_ptr<int32_t> selectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
