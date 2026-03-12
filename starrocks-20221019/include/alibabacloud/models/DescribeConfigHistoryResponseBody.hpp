// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeConfigHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeConfigHistoryResponseBody() = default ;
    DescribeConfigHistoryResponseBody(const DescribeConfigHistoryResponseBody &) = default ;
    DescribeConfigHistoryResponseBody(DescribeConfigHistoryResponseBody &&) = default ;
    DescribeConfigHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigHistoryResponseBody() = default ;
    DescribeConfigHistoryResponseBody& operator=(const DescribeConfigHistoryResponseBody &) = default ;
    DescribeConfigHistoryResponseBody& operator=(DescribeConfigHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigHistoryEffectDetails, configHistoryEffectDetails_);
        DARABONBA_PTR_TO_JSON(ConfigHistoryId, configHistoryId_);
        DARABONBA_PTR_TO_JSON(ConfigMementos, configMementos_);
        DARABONBA_PTR_TO_JSON(EffectStatus, effectStatus_);
        DARABONBA_PTR_TO_JSON(Effected, effected_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Rollback, rollback_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigHistoryEffectDetails, configHistoryEffectDetails_);
        DARABONBA_PTR_FROM_JSON(ConfigHistoryId, configHistoryId_);
        DARABONBA_PTR_FROM_JSON(ConfigMementos, configMementos_);
        DARABONBA_PTR_FROM_JSON(EffectStatus, effectStatus_);
        DARABONBA_PTR_FROM_JSON(Effected, effected_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Rollback, rollback_);
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
      class ConfigMementos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigMementos& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(After, after_);
          DARABONBA_PTR_TO_JSON(Before, before_);
          DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
          DARABONBA_PTR_TO_JSON(ConfigType, configType_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigMementos& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(After, after_);
          DARABONBA_PTR_FROM_JSON(Before, before_);
          DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
          DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
        };
        ConfigMementos() = default ;
        ConfigMementos(const ConfigMementos &) = default ;
        ConfigMementos(ConfigMementos &&) = default ;
        ConfigMementos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigMementos() = default ;
        ConfigMementos& operator=(const ConfigMementos &) = default ;
        ConfigMementos& operator=(ConfigMementos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->after_ == nullptr && this->before_ == nullptr && this->configKey_ == nullptr && this->configType_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline ConfigMementos& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // after Field Functions 
        bool hasAfter() const { return this->after_ != nullptr;};
        void deleteAfter() { this->after_ = nullptr;};
        inline string getAfter() const { DARABONBA_PTR_GET_DEFAULT(after_, "") };
        inline ConfigMementos& setAfter(string after) { DARABONBA_PTR_SET_VALUE(after_, after) };


        // before Field Functions 
        bool hasBefore() const { return this->before_ != nullptr;};
        void deleteBefore() { this->before_ = nullptr;};
        inline string getBefore() const { DARABONBA_PTR_GET_DEFAULT(before_, "") };
        inline ConfigMementos& setBefore(string before) { DARABONBA_PTR_SET_VALUE(before_, before) };


        // configKey Field Functions 
        bool hasConfigKey() const { return this->configKey_ != nullptr;};
        void deleteConfigKey() { this->configKey_ = nullptr;};
        inline string getConfigKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
        inline ConfigMementos& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


        // configType Field Functions 
        bool hasConfigType() const { return this->configType_ != nullptr;};
        void deleteConfigType() { this->configType_ = nullptr;};
        inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
        inline ConfigMementos& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<string> after_ {};
        shared_ptr<string> before_ {};
        shared_ptr<string> configKey_ {};
        shared_ptr<string> configType_ {};
      };

      class ConfigHistoryEffectDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigHistoryEffectDetails& obj) { 
          DARABONBA_PTR_TO_JSON(EffectStatus, effectStatus_);
          DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigHistoryEffectDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(EffectStatus, effectStatus_);
          DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        };
        ConfigHistoryEffectDetails() = default ;
        ConfigHistoryEffectDetails(const ConfigHistoryEffectDetails &) = default ;
        ConfigHistoryEffectDetails(ConfigHistoryEffectDetails &&) = default ;
        ConfigHistoryEffectDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigHistoryEffectDetails() = default ;
        ConfigHistoryEffectDetails& operator=(const ConfigHistoryEffectDetails &) = default ;
        ConfigHistoryEffectDetails& operator=(ConfigHistoryEffectDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->effectStatus_ == nullptr
        && this->nodeGroupId_ == nullptr && this->nodeId_ == nullptr; };
        // effectStatus Field Functions 
        bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
        void deleteEffectStatus() { this->effectStatus_ = nullptr;};
        inline string getEffectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, "") };
        inline ConfigHistoryEffectDetails& setEffectStatus(string effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


        // nodeGroupId Field Functions 
        bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
        void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
        inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
        inline ConfigHistoryEffectDetails& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline ConfigHistoryEffectDetails& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      protected:
        shared_ptr<string> effectStatus_ {};
        shared_ptr<string> nodeGroupId_ {};
        shared_ptr<string> nodeId_ {};
      };

      virtual bool empty() const override { return this->configHistoryEffectDetails_ == nullptr
        && this->configHistoryId_ == nullptr && this->configMementos_ == nullptr && this->effectStatus_ == nullptr && this->effected_ == nullptr && this->gmtCreate_ == nullptr
        && this->operatorId_ == nullptr && this->reason_ == nullptr && this->rollback_ == nullptr; };
      // configHistoryEffectDetails Field Functions 
      bool hasConfigHistoryEffectDetails() const { return this->configHistoryEffectDetails_ != nullptr;};
      void deleteConfigHistoryEffectDetails() { this->configHistoryEffectDetails_ = nullptr;};
      inline const vector<Data::ConfigHistoryEffectDetails> & getConfigHistoryEffectDetails() const { DARABONBA_PTR_GET_CONST(configHistoryEffectDetails_, vector<Data::ConfigHistoryEffectDetails>) };
      inline vector<Data::ConfigHistoryEffectDetails> getConfigHistoryEffectDetails() { DARABONBA_PTR_GET(configHistoryEffectDetails_, vector<Data::ConfigHistoryEffectDetails>) };
      inline Data& setConfigHistoryEffectDetails(const vector<Data::ConfigHistoryEffectDetails> & configHistoryEffectDetails) { DARABONBA_PTR_SET_VALUE(configHistoryEffectDetails_, configHistoryEffectDetails) };
      inline Data& setConfigHistoryEffectDetails(vector<Data::ConfigHistoryEffectDetails> && configHistoryEffectDetails) { DARABONBA_PTR_SET_RVALUE(configHistoryEffectDetails_, configHistoryEffectDetails) };


      // configHistoryId Field Functions 
      bool hasConfigHistoryId() const { return this->configHistoryId_ != nullptr;};
      void deleteConfigHistoryId() { this->configHistoryId_ = nullptr;};
      inline string getConfigHistoryId() const { DARABONBA_PTR_GET_DEFAULT(configHistoryId_, "") };
      inline Data& setConfigHistoryId(string configHistoryId) { DARABONBA_PTR_SET_VALUE(configHistoryId_, configHistoryId) };


      // configMementos Field Functions 
      bool hasConfigMementos() const { return this->configMementos_ != nullptr;};
      void deleteConfigMementos() { this->configMementos_ = nullptr;};
      inline const vector<Data::ConfigMementos> & getConfigMementos() const { DARABONBA_PTR_GET_CONST(configMementos_, vector<Data::ConfigMementos>) };
      inline vector<Data::ConfigMementos> getConfigMementos() { DARABONBA_PTR_GET(configMementos_, vector<Data::ConfigMementos>) };
      inline Data& setConfigMementos(const vector<Data::ConfigMementos> & configMementos) { DARABONBA_PTR_SET_VALUE(configMementos_, configMementos) };
      inline Data& setConfigMementos(vector<Data::ConfigMementos> && configMementos) { DARABONBA_PTR_SET_RVALUE(configMementos_, configMementos) };


      // effectStatus Field Functions 
      bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
      void deleteEffectStatus() { this->effectStatus_ = nullptr;};
      inline string getEffectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, "") };
      inline Data& setEffectStatus(string effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


      // effected Field Functions 
      bool hasEffected() const { return this->effected_ != nullptr;};
      void deleteEffected() { this->effected_ = nullptr;};
      inline bool getEffected() const { DARABONBA_PTR_GET_DEFAULT(effected_, false) };
      inline Data& setEffected(bool effected) { DARABONBA_PTR_SET_VALUE(effected_, effected) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // operatorId Field Functions 
      bool hasOperatorId() const { return this->operatorId_ != nullptr;};
      void deleteOperatorId() { this->operatorId_ = nullptr;};
      inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
      inline Data& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // rollback Field Functions 
      bool hasRollback() const { return this->rollback_ != nullptr;};
      void deleteRollback() { this->rollback_ = nullptr;};
      inline bool getRollback() const { DARABONBA_PTR_GET_DEFAULT(rollback_, false) };
      inline Data& setRollback(bool rollback) { DARABONBA_PTR_SET_VALUE(rollback_, rollback) };


    protected:
      shared_ptr<vector<Data::ConfigHistoryEffectDetails>> configHistoryEffectDetails_ {};
      shared_ptr<string> configHistoryId_ {};
      shared_ptr<vector<Data::ConfigMementos>> configMementos_ {};
      shared_ptr<string> effectStatus_ {};
      shared_ptr<bool> effected_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<string> operatorId_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<bool> rollback_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeConfigHistoryResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeConfigHistoryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeConfigHistoryResponseBody::Data>) };
    inline vector<DescribeConfigHistoryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeConfigHistoryResponseBody::Data>) };
    inline DescribeConfigHistoryResponseBody& setData(const vector<DescribeConfigHistoryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeConfigHistoryResponseBody& setData(vector<DescribeConfigHistoryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeConfigHistoryResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeConfigHistoryResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeConfigHistoryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfigHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeConfigHistoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeConfigHistoryResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<DescribeConfigHistoryResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
