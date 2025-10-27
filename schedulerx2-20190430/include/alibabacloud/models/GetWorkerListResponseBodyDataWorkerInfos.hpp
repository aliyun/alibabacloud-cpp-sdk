// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKERLISTRESPONSEBODYDATAWORKERINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETWORKERLISTRESPONSEBODYDATAWORKERINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkerListResponseBodyDataWorkerInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkerListResponseBodyDataWorkerInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Starter, starter_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WorkerAddress, workerAddress_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkerListResponseBodyDataWorkerInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Starter, starter_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WorkerAddress, workerAddress_);
    };
    GetWorkerListResponseBodyDataWorkerInfos() = default ;
    GetWorkerListResponseBodyDataWorkerInfos(const GetWorkerListResponseBodyDataWorkerInfos &) = default ;
    GetWorkerListResponseBodyDataWorkerInfos(GetWorkerListResponseBodyDataWorkerInfos &&) = default ;
    GetWorkerListResponseBodyDataWorkerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkerListResponseBodyDataWorkerInfos() = default ;
    GetWorkerListResponseBodyDataWorkerInfos& operator=(const GetWorkerListResponseBodyDataWorkerInfos &) = default ;
    GetWorkerListResponseBodyDataWorkerInfos& operator=(GetWorkerListResponseBodyDataWorkerInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && return this->label_ == nullptr && return this->port_ == nullptr && return this->starter_ == nullptr && return this->version_ == nullptr && return this->workerAddress_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetWorkerListResponseBodyDataWorkerInfos& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetWorkerListResponseBodyDataWorkerInfos& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetWorkerListResponseBodyDataWorkerInfos& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // starter Field Functions 
    bool hasStarter() const { return this->starter_ != nullptr;};
    void deleteStarter() { this->starter_ = nullptr;};
    inline string starter() const { DARABONBA_PTR_GET_DEFAULT(starter_, "") };
    inline GetWorkerListResponseBodyDataWorkerInfos& setStarter(string starter) { DARABONBA_PTR_SET_VALUE(starter_, starter) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetWorkerListResponseBodyDataWorkerInfos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workerAddress Field Functions 
    bool hasWorkerAddress() const { return this->workerAddress_ != nullptr;};
    void deleteWorkerAddress() { this->workerAddress_ = nullptr;};
    inline string workerAddress() const { DARABONBA_PTR_GET_DEFAULT(workerAddress_, "") };
    inline GetWorkerListResponseBodyDataWorkerInfos& setWorkerAddress(string workerAddress) { DARABONBA_PTR_SET_VALUE(workerAddress_, workerAddress) };


  protected:
    // The IP address of the worker.
    std::shared_ptr<string> ip_ = nullptr;
    // The label of the worker.
    std::shared_ptr<string> label_ = nullptr;
    // The port number of the worker.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The startup method of the worker.
    std::shared_ptr<string> starter_ = nullptr;
    // The version of the worker.
    std::shared_ptr<string> version_ = nullptr;
    // The address of the worker. The address is in the format of ${worker_id}@${worker_ip}:${worker_port}.
    std::shared_ptr<string> workerAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
