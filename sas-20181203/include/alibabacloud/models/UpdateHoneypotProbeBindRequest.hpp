// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHONEYPOTPROBEBINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHONEYPOTPROBEBINDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateHoneypotProbeBindRequestBindPortList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateHoneypotProbeBindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHoneypotProbeBindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindId, bindId_);
      DARABONBA_PTR_TO_JSON(BindPortList, bindPortList_);
      DARABONBA_PTR_TO_JSON(BindType, bindType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
      DARABONBA_PTR_TO_JSON(ServiceIpList, serviceIpList_);
      DARABONBA_PTR_TO_JSON(SetStatus, setStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHoneypotProbeBindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindId, bindId_);
      DARABONBA_PTR_FROM_JSON(BindPortList, bindPortList_);
      DARABONBA_PTR_FROM_JSON(BindType, bindType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
      DARABONBA_PTR_FROM_JSON(ServiceIpList, serviceIpList_);
      DARABONBA_PTR_FROM_JSON(SetStatus, setStatus_);
    };
    UpdateHoneypotProbeBindRequest() = default ;
    UpdateHoneypotProbeBindRequest(const UpdateHoneypotProbeBindRequest &) = default ;
    UpdateHoneypotProbeBindRequest(UpdateHoneypotProbeBindRequest &&) = default ;
    UpdateHoneypotProbeBindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHoneypotProbeBindRequest() = default ;
    UpdateHoneypotProbeBindRequest& operator=(const UpdateHoneypotProbeBindRequest &) = default ;
    UpdateHoneypotProbeBindRequest& operator=(UpdateHoneypotProbeBindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindId_ != nullptr
        && this->bindPortList_ != nullptr && this->bindType_ != nullptr && this->currentPage_ != nullptr && this->honeypotId_ != nullptr && this->id_ != nullptr
        && this->lang_ != nullptr && this->pageSize_ != nullptr && this->ports_ != nullptr && this->probeId_ != nullptr && this->serviceIpList_ != nullptr
        && this->setStatus_ != nullptr; };
    // bindId Field Functions 
    bool hasBindId() const { return this->bindId_ != nullptr;};
    void deleteBindId() { this->bindId_ = nullptr;};
    inline string bindId() const { DARABONBA_PTR_GET_DEFAULT(bindId_, "") };
    inline UpdateHoneypotProbeBindRequest& setBindId(string bindId) { DARABONBA_PTR_SET_VALUE(bindId_, bindId) };


    // bindPortList Field Functions 
    bool hasBindPortList() const { return this->bindPortList_ != nullptr;};
    void deleteBindPortList() { this->bindPortList_ = nullptr;};
    inline const vector<UpdateHoneypotProbeBindRequestBindPortList> & bindPortList() const { DARABONBA_PTR_GET_CONST(bindPortList_, vector<UpdateHoneypotProbeBindRequestBindPortList>) };
    inline vector<UpdateHoneypotProbeBindRequestBindPortList> bindPortList() { DARABONBA_PTR_GET(bindPortList_, vector<UpdateHoneypotProbeBindRequestBindPortList>) };
    inline UpdateHoneypotProbeBindRequest& setBindPortList(const vector<UpdateHoneypotProbeBindRequestBindPortList> & bindPortList) { DARABONBA_PTR_SET_VALUE(bindPortList_, bindPortList) };
    inline UpdateHoneypotProbeBindRequest& setBindPortList(vector<UpdateHoneypotProbeBindRequestBindPortList> && bindPortList) { DARABONBA_PTR_SET_RVALUE(bindPortList_, bindPortList) };


    // bindType Field Functions 
    bool hasBindType() const { return this->bindType_ != nullptr;};
    void deleteBindType() { this->bindType_ = nullptr;};
    inline string bindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, "") };
    inline UpdateHoneypotProbeBindRequest& setBindType(string bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline UpdateHoneypotProbeBindRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // honeypotId Field Functions 
    bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
    void deleteHoneypotId() { this->honeypotId_ = nullptr;};
    inline string honeypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
    inline UpdateHoneypotProbeBindRequest& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateHoneypotProbeBindRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateHoneypotProbeBindRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline UpdateHoneypotProbeBindRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline string ports() const { DARABONBA_PTR_GET_DEFAULT(ports_, "") };
    inline UpdateHoneypotProbeBindRequest& setPorts(string ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };


    // probeId Field Functions 
    bool hasProbeId() const { return this->probeId_ != nullptr;};
    void deleteProbeId() { this->probeId_ = nullptr;};
    inline string probeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
    inline UpdateHoneypotProbeBindRequest& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


    // serviceIpList Field Functions 
    bool hasServiceIpList() const { return this->serviceIpList_ != nullptr;};
    void deleteServiceIpList() { this->serviceIpList_ = nullptr;};
    inline const vector<string> & serviceIpList() const { DARABONBA_PTR_GET_CONST(serviceIpList_, vector<string>) };
    inline vector<string> serviceIpList() { DARABONBA_PTR_GET(serviceIpList_, vector<string>) };
    inline UpdateHoneypotProbeBindRequest& setServiceIpList(const vector<string> & serviceIpList) { DARABONBA_PTR_SET_VALUE(serviceIpList_, serviceIpList) };
    inline UpdateHoneypotProbeBindRequest& setServiceIpList(vector<string> && serviceIpList) { DARABONBA_PTR_SET_RVALUE(serviceIpList_, serviceIpList) };


    // setStatus Field Functions 
    bool hasSetStatus() const { return this->setStatus_ != nullptr;};
    void deleteSetStatus() { this->setStatus_ = nullptr;};
    inline int32_t setStatus() const { DARABONBA_PTR_GET_DEFAULT(setStatus_, 0) };
    inline UpdateHoneypotProbeBindRequest& setSetStatus(int32_t setStatus) { DARABONBA_PTR_SET_VALUE(setStatus_, setStatus) };


  protected:
    // The unique ID of the honeypot to which the probe is bound.
    std::shared_ptr<string> bindId_ = nullptr;
    // The ports that are bound to the probe.
    std::shared_ptr<vector<UpdateHoneypotProbeBindRequestBindPortList>> bindPortList_ = nullptr;
    // The operation that the probe performs. Valid values:
    // 
    // *   **forward_honey**: forward traffic to a honeypot
    // *   **scan_port**: monitor and scan
    std::shared_ptr<string> bindType_ = nullptr;
    // The page number. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The honeypot ID.
    // 
    // >  You can call the [ListHoneypot](~~ListHoneypot~~) operation to obtain the IDs of honeypots.
    std::shared_ptr<string> honeypotId_ = nullptr;
    // The port ID of the probe service.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned per page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ports that are monitored.
    std::shared_ptr<string> ports_ = nullptr;
    // The probe ID.
    // 
    // >  You can call the [ListHoneypotProbe](~~ListHoneypotProbe~~) operation to query the IDs of probes.
    std::shared_ptr<string> probeId_ = nullptr;
    // The IP addresses that are monitored.
    std::shared_ptr<vector<string>> serviceIpList_ = nullptr;
    // The status of the port.
    std::shared_ptr<int32_t> setStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
