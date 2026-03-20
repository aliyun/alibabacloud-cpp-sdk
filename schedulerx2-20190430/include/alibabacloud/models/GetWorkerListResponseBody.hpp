// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkerListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkerListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkerListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetWorkerListResponseBody() = default ;
    GetWorkerListResponseBody(const GetWorkerListResponseBody &) = default ;
    GetWorkerListResponseBody(GetWorkerListResponseBody &&) = default ;
    GetWorkerListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkerListResponseBody() = default ;
    GetWorkerListResponseBody& operator=(const GetWorkerListResponseBody &) = default ;
    GetWorkerListResponseBody& operator=(GetWorkerListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(WorkerInfos, workerInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(WorkerInfos, workerInfos_);
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
      class WorkerInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkerInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Starter, starter_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(WorkerAddress, workerAddress_);
        };
        friend void from_json(const Darabonba::Json& j, WorkerInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Starter, starter_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(WorkerAddress, workerAddress_);
        };
        WorkerInfos() = default ;
        WorkerInfos(const WorkerInfos &) = default ;
        WorkerInfos(WorkerInfos &&) = default ;
        WorkerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkerInfos() = default ;
        WorkerInfos& operator=(const WorkerInfos &) = default ;
        WorkerInfos& operator=(WorkerInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ip_ == nullptr
        && this->label_ == nullptr && this->port_ == nullptr && this->starter_ == nullptr && this->version_ == nullptr && this->workerAddress_ == nullptr; };
        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline WorkerInfos& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline WorkerInfos& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline WorkerInfos& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // starter Field Functions 
        bool hasStarter() const { return this->starter_ != nullptr;};
        void deleteStarter() { this->starter_ = nullptr;};
        inline string getStarter() const { DARABONBA_PTR_GET_DEFAULT(starter_, "") };
        inline WorkerInfos& setStarter(string starter) { DARABONBA_PTR_SET_VALUE(starter_, starter) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline WorkerInfos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // workerAddress Field Functions 
        bool hasWorkerAddress() const { return this->workerAddress_ != nullptr;};
        void deleteWorkerAddress() { this->workerAddress_ = nullptr;};
        inline string getWorkerAddress() const { DARABONBA_PTR_GET_DEFAULT(workerAddress_, "") };
        inline WorkerInfos& setWorkerAddress(string workerAddress) { DARABONBA_PTR_SET_VALUE(workerAddress_, workerAddress) };


      protected:
        // The IP address of the worker.
        shared_ptr<string> ip_ {};
        // The label of the worker.
        shared_ptr<string> label_ {};
        // The port number of the worker.
        shared_ptr<int32_t> port_ {};
        // The startup method of the worker.
        shared_ptr<string> starter_ {};
        // The version of the worker.
        shared_ptr<string> version_ {};
        // The address of the worker. The address is in the format of ${worker_id}@${worker_ip}:${worker_port}.
        shared_ptr<string> workerAddress_ {};
      };

      virtual bool empty() const override { return this->workerInfos_ == nullptr; };
      // workerInfos Field Functions 
      bool hasWorkerInfos() const { return this->workerInfos_ != nullptr;};
      void deleteWorkerInfos() { this->workerInfos_ = nullptr;};
      inline const vector<Data::WorkerInfos> & getWorkerInfos() const { DARABONBA_PTR_GET_CONST(workerInfos_, vector<Data::WorkerInfos>) };
      inline vector<Data::WorkerInfos> getWorkerInfos() { DARABONBA_PTR_GET(workerInfos_, vector<Data::WorkerInfos>) };
      inline Data& setWorkerInfos(const vector<Data::WorkerInfos> & workerInfos) { DARABONBA_PTR_SET_VALUE(workerInfos_, workerInfos) };
      inline Data& setWorkerInfos(vector<Data::WorkerInfos> && workerInfos) { DARABONBA_PTR_SET_RVALUE(workerInfos_, workerInfos) };


    protected:
      // The worker information.
      shared_ptr<vector<Data::WorkerInfos>> workerInfos_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetWorkerListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWorkerListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWorkerListResponseBody::Data) };
    inline GetWorkerListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWorkerListResponseBody::Data) };
    inline GetWorkerListResponseBody& setData(const GetWorkerListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWorkerListResponseBody& setData(GetWorkerListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkerListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkerListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkerListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The job information.
    shared_ptr<GetWorkerListResponseBody::Data> data_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   **true**: The call is successful.
    // *   **false**: The call fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
