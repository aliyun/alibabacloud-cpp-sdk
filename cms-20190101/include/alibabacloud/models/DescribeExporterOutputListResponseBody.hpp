// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTEROUTPUTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTEROUTPUTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeExporterOutputListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExporterOutputListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExporterOutputListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeExporterOutputListResponseBody() = default ;
    DescribeExporterOutputListResponseBody(const DescribeExporterOutputListResponseBody &) = default ;
    DescribeExporterOutputListResponseBody(DescribeExporterOutputListResponseBody &&) = default ;
    DescribeExporterOutputListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExporterOutputListResponseBody() = default ;
    DescribeExporterOutputListResponseBody& operator=(const DescribeExporterOutputListResponseBody &) = default ;
    DescribeExporterOutputListResponseBody& operator=(DescribeExporterOutputListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Datapoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datapoints& obj) { 
        DARABONBA_PTR_TO_JSON(Datapoint, datapoint_);
      };
      friend void from_json(const Darabonba::Json& j, Datapoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Datapoint, datapoint_);
      };
      Datapoints() = default ;
      Datapoints(const Datapoints &) = default ;
      Datapoints(Datapoints &&) = default ;
      Datapoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datapoints() = default ;
      Datapoints& operator=(const Datapoints &) = default ;
      Datapoints& operator=(Datapoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Datapoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Datapoint& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigJson, configJson_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DestName, destName_);
          DARABONBA_PTR_TO_JSON(DestType, destType_);
        };
        friend void from_json(const Darabonba::Json& j, Datapoint& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigJson, configJson_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DestName, destName_);
          DARABONBA_PTR_FROM_JSON(DestType, destType_);
        };
        Datapoint() = default ;
        Datapoint(const Datapoint &) = default ;
        Datapoint(Datapoint &&) = default ;
        Datapoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Datapoint() = default ;
        Datapoint& operator=(const Datapoint &) = default ;
        Datapoint& operator=(Datapoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConfigJson : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConfigJson& obj) { 
            DARABONBA_PTR_TO_JSON(ak, ak_);
            DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
            DARABONBA_PTR_TO_JSON(logstore, logstore_);
            DARABONBA_PTR_TO_JSON(project, project_);
          };
          friend void from_json(const Darabonba::Json& j, ConfigJson& obj) { 
            DARABONBA_PTR_FROM_JSON(ak, ak_);
            DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
            DARABONBA_PTR_FROM_JSON(logstore, logstore_);
            DARABONBA_PTR_FROM_JSON(project, project_);
          };
          ConfigJson() = default ;
          ConfigJson(const ConfigJson &) = default ;
          ConfigJson(ConfigJson &&) = default ;
          ConfigJson(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConfigJson() = default ;
          ConfigJson& operator=(const ConfigJson &) = default ;
          ConfigJson& operator=(ConfigJson &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ak_ == nullptr
        && this->endpoint_ == nullptr && this->logstore_ == nullptr && this->project_ == nullptr; };
          // ak Field Functions 
          bool hasAk() const { return this->ak_ != nullptr;};
          void deleteAk() { this->ak_ = nullptr;};
          inline string getAk() const { DARABONBA_PTR_GET_DEFAULT(ak_, "") };
          inline ConfigJson& setAk(string ak) { DARABONBA_PTR_SET_VALUE(ak_, ak) };


          // endpoint Field Functions 
          bool hasEndpoint() const { return this->endpoint_ != nullptr;};
          void deleteEndpoint() { this->endpoint_ = nullptr;};
          inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
          inline ConfigJson& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


          // logstore Field Functions 
          bool hasLogstore() const { return this->logstore_ != nullptr;};
          void deleteLogstore() { this->logstore_ = nullptr;};
          inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
          inline ConfigJson& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


          // project Field Functions 
          bool hasProject() const { return this->project_ != nullptr;};
          void deleteProject() { this->project_ = nullptr;};
          inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
          inline ConfigJson& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        protected:
          // The AccessKey ID.
          shared_ptr<string> ak_ {};
          // The Log Service endpoint to which the monitoring data is exported.
          shared_ptr<string> endpoint_ {};
          // The Logstore.
          shared_ptr<string> logstore_ {};
          // The Log Service project to which the monitoring data is exported.
          shared_ptr<string> project_ {};
        };

        virtual bool empty() const override { return this->configJson_ == nullptr
        && this->createTime_ == nullptr && this->destName_ == nullptr && this->destType_ == nullptr; };
        // configJson Field Functions 
        bool hasConfigJson() const { return this->configJson_ != nullptr;};
        void deleteConfigJson() { this->configJson_ = nullptr;};
        inline const Datapoint::ConfigJson & getConfigJson() const { DARABONBA_PTR_GET_CONST(configJson_, Datapoint::ConfigJson) };
        inline Datapoint::ConfigJson getConfigJson() { DARABONBA_PTR_GET(configJson_, Datapoint::ConfigJson) };
        inline Datapoint& setConfigJson(const Datapoint::ConfigJson & configJson) { DARABONBA_PTR_SET_VALUE(configJson_, configJson) };
        inline Datapoint& setConfigJson(Datapoint::ConfigJson && configJson) { DARABONBA_PTR_SET_RVALUE(configJson_, configJson) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Datapoint& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // destName Field Functions 
        bool hasDestName() const { return this->destName_ != nullptr;};
        void deleteDestName() { this->destName_ = nullptr;};
        inline string getDestName() const { DARABONBA_PTR_GET_DEFAULT(destName_, "") };
        inline Datapoint& setDestName(string destName) { DARABONBA_PTR_SET_VALUE(destName_, destName) };


        // destType Field Functions 
        bool hasDestType() const { return this->destType_ != nullptr;};
        void deleteDestType() { this->destType_ = nullptr;};
        inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
        inline Datapoint& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


      protected:
        // The JSON object that contains the details about the destination to which the monitoring data is exported.
        shared_ptr<Datapoint::ConfigJson> configJson_ {};
        // The time when the configuration set was created. The value is a UNIX timestamp.
        shared_ptr<int64_t> createTime_ {};
        // The name of the configuration set.
        shared_ptr<string> destName_ {};
        // The service to which the monitoring data is exported.
        // 
        // > Only Log Service is supported. More services will be supported in the future.
        shared_ptr<string> destType_ {};
      };

      virtual bool empty() const override { return this->datapoint_ == nullptr; };
      // datapoint Field Functions 
      bool hasDatapoint() const { return this->datapoint_ != nullptr;};
      void deleteDatapoint() { this->datapoint_ = nullptr;};
      inline const vector<Datapoints::Datapoint> & getDatapoint() const { DARABONBA_PTR_GET_CONST(datapoint_, vector<Datapoints::Datapoint>) };
      inline vector<Datapoints::Datapoint> getDatapoint() { DARABONBA_PTR_GET(datapoint_, vector<Datapoints::Datapoint>) };
      inline Datapoints& setDatapoint(const vector<Datapoints::Datapoint> & datapoint) { DARABONBA_PTR_SET_VALUE(datapoint_, datapoint) };
      inline Datapoints& setDatapoint(vector<Datapoints::Datapoint> && datapoint) { DARABONBA_PTR_SET_RVALUE(datapoint_, datapoint) };


    protected:
      shared_ptr<vector<Datapoints::Datapoint>> datapoint_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->datapoints_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeExporterOutputListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // datapoints Field Functions 
    bool hasDatapoints() const { return this->datapoints_ != nullptr;};
    void deleteDatapoints() { this->datapoints_ = nullptr;};
    inline const DescribeExporterOutputListResponseBody::Datapoints & getDatapoints() const { DARABONBA_PTR_GET_CONST(datapoints_, DescribeExporterOutputListResponseBody::Datapoints) };
    inline DescribeExporterOutputListResponseBody::Datapoints getDatapoints() { DARABONBA_PTR_GET(datapoints_, DescribeExporterOutputListResponseBody::Datapoints) };
    inline DescribeExporterOutputListResponseBody& setDatapoints(const DescribeExporterOutputListResponseBody::Datapoints & datapoints) { DARABONBA_PTR_SET_VALUE(datapoints_, datapoints) };
    inline DescribeExporterOutputListResponseBody& setDatapoints(DescribeExporterOutputListResponseBody::Datapoints && datapoints) { DARABONBA_PTR_SET_RVALUE(datapoints_, datapoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeExporterOutputListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeExporterOutputListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExporterOutputListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeExporterOutputListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeExporterOutputListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    shared_ptr<string> code_ {};
    // The configuration sets for exporting monitoring data.
    shared_ptr<DescribeExporterOutputListResponseBody::Datapoints> datapoints_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<bool> success_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
