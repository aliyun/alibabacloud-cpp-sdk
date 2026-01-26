// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AddPrometheusGlobalViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrometheusGlobalViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPrometheusGlobalViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddPrometheusGlobalViewResponseBody() = default ;
    AddPrometheusGlobalViewResponseBody(const AddPrometheusGlobalViewResponseBody &) = default ;
    AddPrometheusGlobalViewResponseBody(AddPrometheusGlobalViewResponseBody &&) = default ;
    AddPrometheusGlobalViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrometheusGlobalViewResponseBody() = default ;
    AddPrometheusGlobalViewResponseBody& operator=(const AddPrometheusGlobalViewResponseBody &) = default ;
    AddPrometheusGlobalViewResponseBody& operator=(AddPrometheusGlobalViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Info, info_);
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Info, info_);
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      class Info : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Info& obj) { 
          DARABONBA_PTR_TO_JSON(FailedInstances, failedInstances_);
          DARABONBA_PTR_TO_JSON(GlobalViewClusterId, globalViewClusterId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, Info& obj) { 
          DARABONBA_PTR_FROM_JSON(FailedInstances, failedInstances_);
          DARABONBA_PTR_FROM_JSON(GlobalViewClusterId, globalViewClusterId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        Info() = default ;
        Info(const Info &) = default ;
        Info(Info &&) = default ;
        Info(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Info() = default ;
        Info& operator=(const Info &) = default ;
        Info& operator=(Info &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failedInstances_ == nullptr
        && this->globalViewClusterId_ == nullptr && this->regionId_ == nullptr; };
        // failedInstances Field Functions 
        bool hasFailedInstances() const { return this->failedInstances_ != nullptr;};
        void deleteFailedInstances() { this->failedInstances_ = nullptr;};
        inline string getFailedInstances() const { DARABONBA_PTR_GET_DEFAULT(failedInstances_, "") };
        inline Info& setFailedInstances(string failedInstances) { DARABONBA_PTR_SET_VALUE(failedInstances_, failedInstances) };


        // globalViewClusterId Field Functions 
        bool hasGlobalViewClusterId() const { return this->globalViewClusterId_ != nullptr;};
        void deleteGlobalViewClusterId() { this->globalViewClusterId_ = nullptr;};
        inline string getGlobalViewClusterId() const { DARABONBA_PTR_GET_DEFAULT(globalViewClusterId_, "") };
        inline Info& setGlobalViewClusterId(string globalViewClusterId) { DARABONBA_PTR_SET_VALUE(globalViewClusterId_, globalViewClusterId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Info& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The list of instances that failed to be added.
        shared_ptr<string> failedInstances_ {};
        // The ID of the global aggregation instance.
        shared_ptr<string> globalViewClusterId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->info_ == nullptr
        && this->msg_ == nullptr && this->success_ == nullptr; };
      // info Field Functions 
      bool hasInfo() const { return this->info_ != nullptr;};
      void deleteInfo() { this->info_ = nullptr;};
      inline const Data::Info & getInfo() const { DARABONBA_PTR_GET_CONST(info_, Data::Info) };
      inline Data::Info getInfo() { DARABONBA_PTR_GET(info_, Data::Info) };
      inline Data& setInfo(const Data::Info & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
      inline Data& setInfo(Data::Info && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline Data& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The Info-level information.
      shared_ptr<Data::Info> info_ {};
      // The additional information.
      shared_ptr<string> msg_ {};
      // Indicates whether the request was successful. Valid values:
      // 
      // *   `true`
      // *   `false`
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AddPrometheusGlobalViewResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddPrometheusGlobalViewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddPrometheusGlobalViewResponseBody::Data) };
    inline AddPrometheusGlobalViewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddPrometheusGlobalViewResponseBody::Data) };
    inline AddPrometheusGlobalViewResponseBody& setData(const AddPrometheusGlobalViewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddPrometheusGlobalViewResponseBody& setData(AddPrometheusGlobalViewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddPrometheusGlobalViewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddPrometheusGlobalViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 状态码。说明 200表示成功。
    shared_ptr<int32_t> code_ {};
    // The information about the array object.
    shared_ptr<AddPrometheusGlobalViewResponseBody::Data> data_ {};
    // 返回结果的提示信息。
    shared_ptr<string> message_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
