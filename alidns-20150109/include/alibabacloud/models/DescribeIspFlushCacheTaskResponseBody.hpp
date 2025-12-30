// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeIspFlushCacheTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspFlushCacheTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FlushCacheResults, flushCacheResults_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspFlushCacheTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FlushCacheResults, flushCacheResults_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    DescribeIspFlushCacheTaskResponseBody() = default ;
    DescribeIspFlushCacheTaskResponseBody(const DescribeIspFlushCacheTaskResponseBody &) = default ;
    DescribeIspFlushCacheTaskResponseBody(DescribeIspFlushCacheTaskResponseBody &&) = default ;
    DescribeIspFlushCacheTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspFlushCacheTaskResponseBody() = default ;
    DescribeIspFlushCacheTaskResponseBody& operator=(const DescribeIspFlushCacheTaskResponseBody &) = default ;
    DescribeIspFlushCacheTaskResponseBody& operator=(DescribeIspFlushCacheTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlushCacheResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlushCacheResults& obj) { 
        DARABONBA_PTR_TO_JSON(DnsNodes, dnsNodes_);
        DARABONBA_PTR_TO_JSON(Province, province_);
      };
      friend void from_json(const Darabonba::Json& j, FlushCacheResults& obj) { 
        DARABONBA_PTR_FROM_JSON(DnsNodes, dnsNodes_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
      };
      FlushCacheResults() = default ;
      FlushCacheResults(const FlushCacheResults &) = default ;
      FlushCacheResults(FlushCacheResults &&) = default ;
      FlushCacheResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlushCacheResults() = default ;
      FlushCacheResults& operator=(const FlushCacheResults &) = default ;
      FlushCacheResults& operator=(FlushCacheResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DnsNodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DnsNodes& obj) { 
          DARABONBA_PTR_TO_JSON(Answers, answers_);
          DARABONBA_PTR_TO_JSON(NodeIp, nodeIp_);
          DARABONBA_PTR_TO_JSON(SpName, spName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DnsNodes& obj) { 
          DARABONBA_PTR_FROM_JSON(Answers, answers_);
          DARABONBA_PTR_FROM_JSON(NodeIp, nodeIp_);
          DARABONBA_PTR_FROM_JSON(SpName, spName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DnsNodes() = default ;
        DnsNodes(const DnsNodes &) = default ;
        DnsNodes(DnsNodes &&) = default ;
        DnsNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DnsNodes() = default ;
        DnsNodes& operator=(const DnsNodes &) = default ;
        DnsNodes& operator=(DnsNodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Answers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Answers& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Record, record_);
            DARABONBA_PTR_TO_JSON(Ttl, ttl_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Answers& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Record, record_);
            DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Answers() = default ;
          Answers(const Answers &) = default ;
          Answers(Answers &&) = default ;
          Answers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Answers() = default ;
          Answers& operator=(const Answers &) = default ;
          Answers& operator=(Answers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->record_ == nullptr && this->ttl_ == nullptr && this->type_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Answers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // record Field Functions 
          bool hasRecord() const { return this->record_ != nullptr;};
          void deleteRecord() { this->record_ = nullptr;};
          inline string getRecord() const { DARABONBA_PTR_GET_DEFAULT(record_, "") };
          inline Answers& setRecord(string record) { DARABONBA_PTR_SET_VALUE(record_, record) };


          // ttl Field Functions 
          bool hasTtl() const { return this->ttl_ != nullptr;};
          void deleteTtl() { this->ttl_ = nullptr;};
          inline int64_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
          inline Answers& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Answers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> record_ {};
          shared_ptr<int64_t> ttl_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->answers_ == nullptr
        && this->nodeIp_ == nullptr && this->spName_ == nullptr && this->status_ == nullptr; };
        // answers Field Functions 
        bool hasAnswers() const { return this->answers_ != nullptr;};
        void deleteAnswers() { this->answers_ = nullptr;};
        inline const vector<DnsNodes::Answers> & getAnswers() const { DARABONBA_PTR_GET_CONST(answers_, vector<DnsNodes::Answers>) };
        inline vector<DnsNodes::Answers> getAnswers() { DARABONBA_PTR_GET(answers_, vector<DnsNodes::Answers>) };
        inline DnsNodes& setAnswers(const vector<DnsNodes::Answers> & answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };
        inline DnsNodes& setAnswers(vector<DnsNodes::Answers> && answers) { DARABONBA_PTR_SET_RVALUE(answers_, answers) };


        // nodeIp Field Functions 
        bool hasNodeIp() const { return this->nodeIp_ != nullptr;};
        void deleteNodeIp() { this->nodeIp_ = nullptr;};
        inline string getNodeIp() const { DARABONBA_PTR_GET_DEFAULT(nodeIp_, "") };
        inline DnsNodes& setNodeIp(string nodeIp) { DARABONBA_PTR_SET_VALUE(nodeIp_, nodeIp) };


        // spName Field Functions 
        bool hasSpName() const { return this->spName_ != nullptr;};
        void deleteSpName() { this->spName_ = nullptr;};
        inline string getSpName() const { DARABONBA_PTR_GET_DEFAULT(spName_, "") };
        inline DnsNodes& setSpName(string spName) { DARABONBA_PTR_SET_VALUE(spName_, spName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DnsNodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<vector<DnsNodes::Answers>> answers_ {};
        shared_ptr<string> nodeIp_ {};
        shared_ptr<string> spName_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->dnsNodes_ == nullptr
        && this->province_ == nullptr; };
      // dnsNodes Field Functions 
      bool hasDnsNodes() const { return this->dnsNodes_ != nullptr;};
      void deleteDnsNodes() { this->dnsNodes_ = nullptr;};
      inline const vector<FlushCacheResults::DnsNodes> & getDnsNodes() const { DARABONBA_PTR_GET_CONST(dnsNodes_, vector<FlushCacheResults::DnsNodes>) };
      inline vector<FlushCacheResults::DnsNodes> getDnsNodes() { DARABONBA_PTR_GET(dnsNodes_, vector<FlushCacheResults::DnsNodes>) };
      inline FlushCacheResults& setDnsNodes(const vector<FlushCacheResults::DnsNodes> & dnsNodes) { DARABONBA_PTR_SET_VALUE(dnsNodes_, dnsNodes) };
      inline FlushCacheResults& setDnsNodes(vector<FlushCacheResults::DnsNodes> && dnsNodes) { DARABONBA_PTR_SET_RVALUE(dnsNodes_, dnsNodes) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline FlushCacheResults& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    protected:
      shared_ptr<vector<FlushCacheResults::DnsNodes>> dnsNodes_ {};
      shared_ptr<string> province_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->domainName_ == nullptr && this->flushCacheResults_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->isp_ == nullptr && this->requestId_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeIspFlushCacheTaskResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeIspFlushCacheTaskResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeIspFlushCacheTaskResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // flushCacheResults Field Functions 
    bool hasFlushCacheResults() const { return this->flushCacheResults_ != nullptr;};
    void deleteFlushCacheResults() { this->flushCacheResults_ = nullptr;};
    inline const vector<DescribeIspFlushCacheTaskResponseBody::FlushCacheResults> & getFlushCacheResults() const { DARABONBA_PTR_GET_CONST(flushCacheResults_, vector<DescribeIspFlushCacheTaskResponseBody::FlushCacheResults>) };
    inline vector<DescribeIspFlushCacheTaskResponseBody::FlushCacheResults> getFlushCacheResults() { DARABONBA_PTR_GET(flushCacheResults_, vector<DescribeIspFlushCacheTaskResponseBody::FlushCacheResults>) };
    inline DescribeIspFlushCacheTaskResponseBody& setFlushCacheResults(const vector<DescribeIspFlushCacheTaskResponseBody::FlushCacheResults> & flushCacheResults) { DARABONBA_PTR_SET_VALUE(flushCacheResults_, flushCacheResults) };
    inline DescribeIspFlushCacheTaskResponseBody& setFlushCacheResults(vector<DescribeIspFlushCacheTaskResponseBody::FlushCacheResults> && flushCacheResults) { DARABONBA_PTR_SET_RVALUE(flushCacheResults_, flushCacheResults) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeIspFlushCacheTaskResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeIspFlushCacheTaskResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeIspFlushCacheTaskResponseBody& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIspFlushCacheTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeIspFlushCacheTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeIspFlushCacheTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<int64_t> createTimestamp_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<vector<DescribeIspFlushCacheTaskResponseBody::FlushCacheResults>> flushCacheResults_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> isp_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> taskStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
