// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSGLOBALVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSGLOBALVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdatePrometheusGlobalViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusGlobalViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusGlobalViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdatePrometheusGlobalViewResponseBody() = default ;
    UpdatePrometheusGlobalViewResponseBody(const UpdatePrometheusGlobalViewResponseBody &) = default ;
    UpdatePrometheusGlobalViewResponseBody(UpdatePrometheusGlobalViewResponseBody &&) = default ;
    UpdatePrometheusGlobalViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusGlobalViewResponseBody() = default ;
    UpdatePrometheusGlobalViewResponseBody& operator=(const UpdatePrometheusGlobalViewResponseBody &) = default ;
    UpdatePrometheusGlobalViewResponseBody& operator=(UpdatePrometheusGlobalViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailedInstances, failedInstances_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedInstances, failedInstances_);
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
      class FailedInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedInstances& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, FailedInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        FailedInstances() = default ;
        FailedInstances(const FailedInstances &) = default ;
        FailedInstances(FailedInstances &&) = default ;
        FailedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailedInstances() = default ;
        FailedInstances& operator=(const FailedInstances &) = default ;
        FailedInstances& operator=(FailedInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->sourceName_ == nullptr && this->sourceType_ == nullptr && this->userId_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline FailedInstances& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // sourceName Field Functions 
        bool hasSourceName() const { return this->sourceName_ != nullptr;};
        void deleteSourceName() { this->sourceName_ = nullptr;};
        inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
        inline FailedInstances& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline FailedInstances& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline FailedInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The ID of the Prometheus instance.
        shared_ptr<string> clusterId_ {};
        // The name of the data source.
        shared_ptr<string> sourceName_ {};
        // The type of the data source. AlibabaPrometheus MetricStore CustomPrometheus
        shared_ptr<string> sourceType_ {};
        // The user ID.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->failedInstances_ == nullptr
        && this->success_ == nullptr; };
      // failedInstances Field Functions 
      bool hasFailedInstances() const { return this->failedInstances_ != nullptr;};
      void deleteFailedInstances() { this->failedInstances_ = nullptr;};
      inline const vector<Data::FailedInstances> & getFailedInstances() const { DARABONBA_PTR_GET_CONST(failedInstances_, vector<Data::FailedInstances>) };
      inline vector<Data::FailedInstances> getFailedInstances() { DARABONBA_PTR_GET(failedInstances_, vector<Data::FailedInstances>) };
      inline Data& setFailedInstances(const vector<Data::FailedInstances> & failedInstances) { DARABONBA_PTR_SET_VALUE(failedInstances_, failedInstances) };
      inline Data& setFailedInstances(vector<Data::FailedInstances> && failedInstances) { DARABONBA_PTR_SET_RVALUE(failedInstances_, failedInstances) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The data sources that failed to be updated.
      shared_ptr<vector<Data::FailedInstances>> failedInstances_ {};
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
    inline UpdatePrometheusGlobalViewResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdatePrometheusGlobalViewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdatePrometheusGlobalViewResponseBody::Data) };
    inline UpdatePrometheusGlobalViewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdatePrometheusGlobalViewResponseBody::Data) };
    inline UpdatePrometheusGlobalViewResponseBody& setData(const UpdatePrometheusGlobalViewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdatePrometheusGlobalViewResponseBody& setData(UpdatePrometheusGlobalViewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdatePrometheusGlobalViewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePrometheusGlobalViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<UpdatePrometheusGlobalViewResponseBody::Data> data_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> message_ {};
    // The ID of the request. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
