// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODYDATAHONEYPOTPROBEBINDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODYDATAHONEYPOTPROBEBINDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotProbeResponseBodyDataHoneypotProbeBindList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotProbeResponseBodyDataHoneypotProbeBindList& obj) { 
      DARABONBA_PTR_TO_JSON(BindId, bindId_);
      DARABONBA_PTR_TO_JSON(BindPortList, bindPortList_);
      DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_TO_JSON(ServiceIpList, serviceIpList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotProbeResponseBodyDataHoneypotProbeBindList& obj) { 
      DARABONBA_PTR_FROM_JSON(BindId, bindId_);
      DARABONBA_PTR_FROM_JSON(BindPortList, bindPortList_);
      DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_FROM_JSON(ServiceIpList, serviceIpList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindList() = default ;
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindList(const GetHoneypotProbeResponseBodyDataHoneypotProbeBindList &) = default ;
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindList(GetHoneypotProbeResponseBodyDataHoneypotProbeBindList &&) = default ;
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotProbeResponseBodyDataHoneypotProbeBindList() = default ;
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindList& operator=(const GetHoneypotProbeResponseBodyDataHoneypotProbeBindList &) = default ;
    GetHoneypotProbeResponseBodyDataHoneypotProbeBindList& operator=(GetHoneypotProbeResponseBodyDataHoneypotProbeBindList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindId_ != nullptr
        && this->bindPortList_ != nullptr && this->honeypotId_ != nullptr && this->serviceIpList_ != nullptr && this->status_ != nullptr; };
    // bindId Field Functions 
    bool hasBindId() const { return this->bindId_ != nullptr;};
    void deleteBindId() { this->bindId_ = nullptr;};
    inline string bindId() const { DARABONBA_PTR_GET_DEFAULT(bindId_, "") };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindList& setBindId(string bindId) { DARABONBA_PTR_SET_VALUE(bindId_, bindId) };


    // bindPortList Field Functions 
    bool hasBindPortList() const { return this->bindPortList_ != nullptr;};
    void deleteBindPortList() { this->bindPortList_ = nullptr;};
    inline const vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList> & bindPortList() const { DARABONBA_PTR_GET_CONST(bindPortList_, vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList>) };
    inline vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList> bindPortList() { DARABONBA_PTR_GET(bindPortList_, vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList>) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindList& setBindPortList(const vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList> & bindPortList) { DARABONBA_PTR_SET_VALUE(bindPortList_, bindPortList) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindList& setBindPortList(vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList> && bindPortList) { DARABONBA_PTR_SET_RVALUE(bindPortList_, bindPortList) };


    // honeypotId Field Functions 
    bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
    void deleteHoneypotId() { this->honeypotId_ = nullptr;};
    inline string honeypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindList& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


    // serviceIpList Field Functions 
    bool hasServiceIpList() const { return this->serviceIpList_ != nullptr;};
    void deleteServiceIpList() { this->serviceIpList_ = nullptr;};
    inline const vector<string> & serviceIpList() const { DARABONBA_PTR_GET_CONST(serviceIpList_, vector<string>) };
    inline vector<string> serviceIpList() { DARABONBA_PTR_GET(serviceIpList_, vector<string>) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindList& setServiceIpList(const vector<string> & serviceIpList) { DARABONBA_PTR_SET_VALUE(serviceIpList_, serviceIpList) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindList& setServiceIpList(vector<string> && serviceIpList) { DARABONBA_PTR_SET_RVALUE(serviceIpList_, serviceIpList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetHoneypotProbeResponseBodyDataHoneypotProbeBindList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The unique ID of the honeypot that is bound to the probe.
    std::shared_ptr<string> bindId_ = nullptr;
    // The ports that are bound to the probe.
    std::shared_ptr<vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindListBindPortList>> bindPortList_ = nullptr;
    // The honeypot ID.
    std::shared_ptr<string> honeypotId_ = nullptr;
    // The IP addresses that are monitored.
    std::shared_ptr<vector<string>> serviceIpList_ = nullptr;
    // The status of the honeypot that is bound to the probe. Valid values:
    // 
    // *   **1**: abnormal
    // *   **3**: normal
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
