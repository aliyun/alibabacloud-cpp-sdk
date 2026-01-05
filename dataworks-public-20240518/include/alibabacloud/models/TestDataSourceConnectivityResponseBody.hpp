// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTDATASOURCECONNECTIVITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TESTDATASOURCECONNECTIVITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class TestDataSourceConnectivityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestDataSourceConnectivityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Connectivity, connectivity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TestDataSourceConnectivityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Connectivity, connectivity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TestDataSourceConnectivityResponseBody() = default ;
    TestDataSourceConnectivityResponseBody(const TestDataSourceConnectivityResponseBody &) = default ;
    TestDataSourceConnectivityResponseBody(TestDataSourceConnectivityResponseBody &&) = default ;
    TestDataSourceConnectivityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestDataSourceConnectivityResponseBody() = default ;
    TestDataSourceConnectivityResponseBody& operator=(const TestDataSourceConnectivityResponseBody &) = default ;
    TestDataSourceConnectivityResponseBody& operator=(TestDataSourceConnectivityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Connectivity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Connectivity& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectMessage, connectMessage_);
        DARABONBA_PTR_TO_JSON(ConnectState, connectState_);
        DARABONBA_PTR_TO_JSON(DetailLogs, detailLogs_);
      };
      friend void from_json(const Darabonba::Json& j, Connectivity& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectMessage, connectMessage_);
        DARABONBA_PTR_FROM_JSON(ConnectState, connectState_);
        DARABONBA_PTR_FROM_JSON(DetailLogs, detailLogs_);
      };
      Connectivity() = default ;
      Connectivity(const Connectivity &) = default ;
      Connectivity(Connectivity &&) = default ;
      Connectivity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Connectivity() = default ;
      Connectivity& operator=(const Connectivity &) = default ;
      Connectivity& operator=(Connectivity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DetailLogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetailLogs& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, DetailLogs& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        DetailLogs() = default ;
        DetailLogs(const DetailLogs &) = default ;
        DetailLogs(DetailLogs &&) = default ;
        DetailLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DetailLogs() = default ;
        DetailLogs& operator=(const DetailLogs &) = default ;
        DetailLogs& operator=(DetailLogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->endTime_ == nullptr && this->message_ == nullptr && this->startTime_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline DetailLogs& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline DetailLogs& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline DetailLogs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline DetailLogs& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The code of the test item.
        shared_ptr<string> code_ {};
        // The end time of a step.
        shared_ptr<int64_t> endTime_ {};
        // The name of the step.
        shared_ptr<string> message_ {};
        // The start time of a step.
        shared_ptr<int64_t> startTime_ {};
      };

      virtual bool empty() const override { return this->connectMessage_ == nullptr
        && this->connectState_ == nullptr && this->detailLogs_ == nullptr; };
      // connectMessage Field Functions 
      bool hasConnectMessage() const { return this->connectMessage_ != nullptr;};
      void deleteConnectMessage() { this->connectMessage_ = nullptr;};
      inline string getConnectMessage() const { DARABONBA_PTR_GET_DEFAULT(connectMessage_, "") };
      inline Connectivity& setConnectMessage(string connectMessage) { DARABONBA_PTR_SET_VALUE(connectMessage_, connectMessage) };


      // connectState Field Functions 
      bool hasConnectState() const { return this->connectState_ != nullptr;};
      void deleteConnectState() { this->connectState_ = nullptr;};
      inline string getConnectState() const { DARABONBA_PTR_GET_DEFAULT(connectState_, "") };
      inline Connectivity& setConnectState(string connectState) { DARABONBA_PTR_SET_VALUE(connectState_, connectState) };


      // detailLogs Field Functions 
      bool hasDetailLogs() const { return this->detailLogs_ != nullptr;};
      void deleteDetailLogs() { this->detailLogs_ = nullptr;};
      inline const vector<Connectivity::DetailLogs> & getDetailLogs() const { DARABONBA_PTR_GET_CONST(detailLogs_, vector<Connectivity::DetailLogs>) };
      inline vector<Connectivity::DetailLogs> getDetailLogs() { DARABONBA_PTR_GET(detailLogs_, vector<Connectivity::DetailLogs>) };
      inline Connectivity& setDetailLogs(const vector<Connectivity::DetailLogs> & detailLogs) { DARABONBA_PTR_SET_VALUE(detailLogs_, detailLogs) };
      inline Connectivity& setDetailLogs(vector<Connectivity::DetailLogs> && detailLogs) { DARABONBA_PTR_SET_RVALUE(detailLogs_, detailLogs) };


    protected:
      // The error message returned if the connectivity test fails. No such a message is returned if the connectivity test is successful.
      shared_ptr<string> connectMessage_ {};
      // The result of the connectivity test. Valid values: Connectable: The network can be connected. ConfigError: The network can be connected, but the configurations are incorrect. Unreachable: The network cannot be connected. Unsupport: An error is reported due to other causes. For example, the desired resource group is being initialized.
      shared_ptr<string> connectState_ {};
      // The detailed logs of each step in the connectivity test.
      shared_ptr<vector<Connectivity::DetailLogs>> detailLogs_ {};
    };

    virtual bool empty() const override { return this->connectivity_ == nullptr
        && this->requestId_ == nullptr; };
    // connectivity Field Functions 
    bool hasConnectivity() const { return this->connectivity_ != nullptr;};
    void deleteConnectivity() { this->connectivity_ = nullptr;};
    inline const TestDataSourceConnectivityResponseBody::Connectivity & getConnectivity() const { DARABONBA_PTR_GET_CONST(connectivity_, TestDataSourceConnectivityResponseBody::Connectivity) };
    inline TestDataSourceConnectivityResponseBody::Connectivity getConnectivity() { DARABONBA_PTR_GET(connectivity_, TestDataSourceConnectivityResponseBody::Connectivity) };
    inline TestDataSourceConnectivityResponseBody& setConnectivity(const TestDataSourceConnectivityResponseBody::Connectivity & connectivity) { DARABONBA_PTR_SET_VALUE(connectivity_, connectivity) };
    inline TestDataSourceConnectivityResponseBody& setConnectivity(TestDataSourceConnectivityResponseBody::Connectivity && connectivity) { DARABONBA_PTR_SET_RVALUE(connectivity_, connectivity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TestDataSourceConnectivityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the connectivity test.
    shared_ptr<TestDataSourceConnectivityResponseBody::Connectivity> connectivity_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
