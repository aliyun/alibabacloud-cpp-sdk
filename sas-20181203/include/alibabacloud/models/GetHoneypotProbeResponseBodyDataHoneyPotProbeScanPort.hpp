// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODYDATAHONEYPOTPROBESCANPORT_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODYDATAHONEYPOTPROBESCANPORT_HPP_
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
  class GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
      DARABONBA_PTR_TO_JSON(ServiceIpList, serviceIpList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
      DARABONBA_PTR_FROM_JSON(ServiceIpList, serviceIpList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort() = default ;
    GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort(const GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort &) = default ;
    GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort(GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort &&) = default ;
    GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort() = default ;
    GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort& operator=(const GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort &) = default ;
    GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort& operator=(GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->ports_ != nullptr && this->probeId_ != nullptr && this->serviceIpList_ != nullptr && this->status_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline string ports() const { DARABONBA_PTR_GET_DEFAULT(ports_, "") };
    inline GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort& setPorts(string ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };


    // probeId Field Functions 
    bool hasProbeId() const { return this->probeId_ != nullptr;};
    void deleteProbeId() { this->probeId_ = nullptr;};
    inline string probeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
    inline GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


    // serviceIpList Field Functions 
    bool hasServiceIpList() const { return this->serviceIpList_ != nullptr;};
    void deleteServiceIpList() { this->serviceIpList_ = nullptr;};
    inline const vector<string> & serviceIpList() const { DARABONBA_PTR_GET_CONST(serviceIpList_, vector<string>) };
    inline vector<string> serviceIpList() { DARABONBA_PTR_GET(serviceIpList_, vector<string>) };
    inline GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort& setServiceIpList(const vector<string> & serviceIpList) { DARABONBA_PTR_SET_VALUE(serviceIpList_, serviceIpList) };
    inline GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort& setServiceIpList(vector<string> && serviceIpList) { DARABONBA_PTR_SET_RVALUE(serviceIpList_, serviceIpList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The unique ID of the service that is monitored.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ports that are monitored.
    std::shared_ptr<string> ports_ = nullptr;
    // The ID of the probe.
    std::shared_ptr<string> probeId_ = nullptr;
    // The IP addresses that are monitored.
    std::shared_ptr<vector<string>> serviceIpList_ = nullptr;
    // The monitoring status. Valid values:
    // 
    // *   **1**: abnormal
    // *   **3**: normal
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
