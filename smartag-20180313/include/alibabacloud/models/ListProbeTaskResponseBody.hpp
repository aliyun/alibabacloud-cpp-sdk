// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROBETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROBETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListProbeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProbeTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProbeTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProbeTaskResponseBody() = default ;
    ListProbeTaskResponseBody(const ListProbeTaskResponseBody &) = default ;
    ListProbeTaskResponseBody(ListProbeTaskResponseBody &&) = default ;
    ListProbeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProbeTaskResponseBody() = default ;
    ListProbeTaskResponseBody& operator=(const ListProbeTaskResponseBody &) = default ;
    ListProbeTaskResponseBody& operator=(ListProbeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModify, gmtModify_);
        DARABONBA_PTR_TO_JSON(PacketNumber, packetNumber_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ProbeTaskId, probeTaskId_);
        DARABONBA_PTR_TO_JSON(ProbeTaskSourceAddress, probeTaskSourceAddress_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(SagId, sagId_);
        DARABONBA_PTR_TO_JSON(Sn, sn_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModify, gmtModify_);
        DARABONBA_PTR_FROM_JSON(PacketNumber, packetNumber_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ProbeTaskId, probeTaskId_);
        DARABONBA_PTR_FROM_JSON(ProbeTaskSourceAddress, probeTaskSourceAddress_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(SagId, sagId_);
        DARABONBA_PTR_FROM_JSON(Sn, sn_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->enable_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModify_ == nullptr && this->packetNumber_ == nullptr && this->port_ == nullptr
        && this->probeTaskId_ == nullptr && this->probeTaskSourceAddress_ == nullptr && this->protocol_ == nullptr && this->sagId_ == nullptr && this->sn_ == nullptr
        && this->taskName_ == nullptr && this->type_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Data& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModify Field Functions 
      bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
      void deleteGmtModify() { this->gmtModify_ = nullptr;};
      inline string getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
      inline Data& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


      // packetNumber Field Functions 
      bool hasPacketNumber() const { return this->packetNumber_ != nullptr;};
      void deletePacketNumber() { this->packetNumber_ = nullptr;};
      inline int32_t getPacketNumber() const { DARABONBA_PTR_GET_DEFAULT(packetNumber_, 0) };
      inline Data& setPacketNumber(int32_t packetNumber) { DARABONBA_PTR_SET_VALUE(packetNumber_, packetNumber) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Data& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // probeTaskId Field Functions 
      bool hasProbeTaskId() const { return this->probeTaskId_ != nullptr;};
      void deleteProbeTaskId() { this->probeTaskId_ = nullptr;};
      inline string getProbeTaskId() const { DARABONBA_PTR_GET_DEFAULT(probeTaskId_, "") };
      inline Data& setProbeTaskId(string probeTaskId) { DARABONBA_PTR_SET_VALUE(probeTaskId_, probeTaskId) };


      // probeTaskSourceAddress Field Functions 
      bool hasProbeTaskSourceAddress() const { return this->probeTaskSourceAddress_ != nullptr;};
      void deleteProbeTaskSourceAddress() { this->probeTaskSourceAddress_ = nullptr;};
      inline string getProbeTaskSourceAddress() const { DARABONBA_PTR_GET_DEFAULT(probeTaskSourceAddress_, "") };
      inline Data& setProbeTaskSourceAddress(string probeTaskSourceAddress) { DARABONBA_PTR_SET_VALUE(probeTaskSourceAddress_, probeTaskSourceAddress) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // sagId Field Functions 
      bool hasSagId() const { return this->sagId_ != nullptr;};
      void deleteSagId() { this->sagId_ = nullptr;};
      inline string getSagId() const { DARABONBA_PTR_GET_DEFAULT(sagId_, "") };
      inline Data& setSagId(string sagId) { DARABONBA_PTR_SET_VALUE(sagId_, sagId) };


      // sn Field Functions 
      bool hasSn() const { return this->sn_ != nullptr;};
      void deleteSn() { this->sn_ = nullptr;};
      inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
      inline Data& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Data& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The domain name that is probed by the task.
      shared_ptr<string> domain_ {};
      // Indicates whether the probe task is enabled. Valid values:
      // 
      // *   **true**: enabled
      // *   **false**: disabled
      shared_ptr<bool> enable_ {};
      // The time when the probe task was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the probe task was modified.
      shared_ptr<string> gmtModify_ {};
      // The number of probe packets transmitted by the probe task per minute.
      shared_ptr<int32_t> packetNumber_ {};
      // The port that is probed by the task.
      shared_ptr<int32_t> port_ {};
      // The ID of the probe task.
      shared_ptr<string> probeTaskId_ {};
      // The source address of the probe task.
      shared_ptr<string> probeTaskSourceAddress_ {};
      // The protocol of the probe task. Valid values:
      // 
      // *   **ICMP**
      // *   **TCP**
      // *   **HTTP**
      // 
      // > Tasks that probe private networks support only ICMP and TCP.
      shared_ptr<string> protocol_ {};
      // The ID of the SAG instance.
      shared_ptr<string> sagId_ {};
      // The serial number of the SAG device.
      shared_ptr<string> sn_ {};
      // The name of the probe task.
      shared_ptr<string> taskName_ {};
      // The type of the probe task. Valid values:
      // 
      // *   **Internet**: probes a public network.
      // *   **Intranet**: probes a private network.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListProbeTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListProbeTaskResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListProbeTaskResponseBody::Data>) };
    inline vector<ListProbeTaskResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListProbeTaskResponseBody::Data>) };
    inline ListProbeTaskResponseBody& setData(const vector<ListProbeTaskResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProbeTaskResponseBody& setData(vector<ListProbeTaskResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListProbeTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProbeTaskResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProbeTaskResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProbeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProbeTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The information about the probe task.
    shared_ptr<vector<ListProbeTaskResponseBody::Data>> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
