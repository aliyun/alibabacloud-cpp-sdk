// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITETRAFFICSEQUENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSITETRAFFICSEQUENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSiteTrafficSequenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteTrafficSequenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficSequences, trafficSequences_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteTrafficSequenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficSequences, trafficSequences_);
    };
    GetSiteTrafficSequenceResponseBody() = default ;
    GetSiteTrafficSequenceResponseBody(const GetSiteTrafficSequenceResponseBody &) = default ;
    GetSiteTrafficSequenceResponseBody(GetSiteTrafficSequenceResponseBody &&) = default ;
    GetSiteTrafficSequenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteTrafficSequenceResponseBody() = default ;
    GetSiteTrafficSequenceResponseBody& operator=(const GetSiteTrafficSequenceResponseBody &) = default ;
    GetSiteTrafficSequenceResponseBody& operator=(GetSiteTrafficSequenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficSequences : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficSequences& obj) { 
        DARABONBA_PTR_TO_JSON(FunctionList, functionList_);
        DARABONBA_PTR_TO_JSON(Order, order_);
        DARABONBA_PTR_TO_JSON(Router, router_);
        DARABONBA_PTR_TO_JSON(SequenceCode, sequenceCode_);
        DARABONBA_PTR_TO_JSON(SequenceName, sequenceName_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficSequences& obj) { 
        DARABONBA_PTR_FROM_JSON(FunctionList, functionList_);
        DARABONBA_PTR_FROM_JSON(Order, order_);
        DARABONBA_PTR_FROM_JSON(Router, router_);
        DARABONBA_PTR_FROM_JSON(SequenceCode, sequenceCode_);
        DARABONBA_PTR_FROM_JSON(SequenceName, sequenceName_);
      };
      TrafficSequences() = default ;
      TrafficSequences(const TrafficSequences &) = default ;
      TrafficSequences(TrafficSequences &&) = default ;
      TrafficSequences(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficSequences() = default ;
      TrafficSequences& operator=(const TrafficSequences &) = default ;
      TrafficSequences& operator=(TrafficSequences &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FunctionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FunctionList& obj) { 
          DARABONBA_PTR_TO_JSON(Configs, configs_);
          DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
          DARABONBA_PTR_TO_JSON(HasConfig, hasConfig_);
        };
        friend void from_json(const Darabonba::Json& j, FunctionList& obj) { 
          DARABONBA_PTR_FROM_JSON(Configs, configs_);
          DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
          DARABONBA_PTR_FROM_JSON(HasConfig, hasConfig_);
        };
        FunctionList() = default ;
        FunctionList(const FunctionList &) = default ;
        FunctionList(FunctionList &&) = default ;
        FunctionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FunctionList() = default ;
        FunctionList& operator=(const FunctionList &) = default ;
        FunctionList& operator=(FunctionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Configs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Configs& obj) { 
            DARABONBA_PTR_TO_JSON(ConfigId, configId_);
            DARABONBA_PTR_TO_JSON(ConfigType, configType_);
          };
          friend void from_json(const Darabonba::Json& j, Configs& obj) { 
            DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
            DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
          };
          Configs() = default ;
          Configs(const Configs &) = default ;
          Configs(Configs &&) = default ;
          Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Configs() = default ;
          Configs& operator=(const Configs &) = default ;
          Configs& operator=(Configs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->configId_ == nullptr
        && this->configType_ == nullptr; };
          // configId Field Functions 
          bool hasConfigId() const { return this->configId_ != nullptr;};
          void deleteConfigId() { this->configId_ = nullptr;};
          inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
          inline Configs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


          // configType Field Functions 
          bool hasConfigType() const { return this->configType_ != nullptr;};
          void deleteConfigType() { this->configType_ = nullptr;};
          inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
          inline Configs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


        protected:
          // The configuration ID.
          shared_ptr<int64_t> configId_ {};
          // The configuration type. Valid values:
          // - global: global configuration.
          // - rule: rule configuration.
          shared_ptr<string> configType_ {};
        };

        virtual bool empty() const override { return this->configs_ == nullptr
        && this->functionName_ == nullptr && this->hasConfig_ == nullptr; };
        // configs Field Functions 
        bool hasConfigs() const { return this->configs_ != nullptr;};
        void deleteConfigs() { this->configs_ = nullptr;};
        inline const vector<FunctionList::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<FunctionList::Configs>) };
        inline vector<FunctionList::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<FunctionList::Configs>) };
        inline FunctionList& setConfigs(const vector<FunctionList::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
        inline FunctionList& setConfigs(vector<FunctionList::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


        // functionName Field Functions 
        bool hasFunctionName() const { return this->functionName_ != nullptr;};
        void deleteFunctionName() { this->functionName_ = nullptr;};
        inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
        inline FunctionList& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


        // hasConfig Field Functions 
        bool hasHasConfig() const { return this->hasConfig_ != nullptr;};
        void deleteHasConfig() { this->hasConfig_ = nullptr;};
        inline bool getHasConfig() const { DARABONBA_PTR_GET_DEFAULT(hasConfig_, false) };
        inline FunctionList& setHasConfig(bool hasConfig) { DARABONBA_PTR_SET_VALUE(hasConfig_, hasConfig) };


      protected:
        // The list of configurations for the site feature associated with the traffic sequence.
        // 
        // This parameter is required.
        shared_ptr<vector<FunctionList::Configs>> configs_ {};
        // The feature name.
        shared_ptr<string> functionName_ {};
        // Indicates whether the site has a corresponding configuration. Valid values:
        // - true: The site has a corresponding configuration.
        // - false: The site does not have a corresponding configuration.
        shared_ptr<bool> hasConfig_ {};
      };

      virtual bool empty() const override { return this->functionList_ == nullptr
        && this->order_ == nullptr && this->router_ == nullptr && this->sequenceCode_ == nullptr && this->sequenceName_ == nullptr; };
      // functionList Field Functions 
      bool hasFunctionList() const { return this->functionList_ != nullptr;};
      void deleteFunctionList() { this->functionList_ = nullptr;};
      inline const vector<TrafficSequences::FunctionList> & getFunctionList() const { DARABONBA_PTR_GET_CONST(functionList_, vector<TrafficSequences::FunctionList>) };
      inline vector<TrafficSequences::FunctionList> getFunctionList() { DARABONBA_PTR_GET(functionList_, vector<TrafficSequences::FunctionList>) };
      inline TrafficSequences& setFunctionList(const vector<TrafficSequences::FunctionList> & functionList) { DARABONBA_PTR_SET_VALUE(functionList_, functionList) };
      inline TrafficSequences& setFunctionList(vector<TrafficSequences::FunctionList> && functionList) { DARABONBA_PTR_SET_RVALUE(functionList_, functionList) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
      inline TrafficSequences& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


      // router Field Functions 
      bool hasRouter() const { return this->router_ != nullptr;};
      void deleteRouter() { this->router_ = nullptr;};
      inline string getRouter() const { DARABONBA_PTR_GET_DEFAULT(router_, "") };
      inline TrafficSequences& setRouter(string router) { DARABONBA_PTR_SET_VALUE(router_, router) };


      // sequenceCode Field Functions 
      bool hasSequenceCode() const { return this->sequenceCode_ != nullptr;};
      void deleteSequenceCode() { this->sequenceCode_ = nullptr;};
      inline string getSequenceCode() const { DARABONBA_PTR_GET_DEFAULT(sequenceCode_, "") };
      inline TrafficSequences& setSequenceCode(string sequenceCode) { DARABONBA_PTR_SET_VALUE(sequenceCode_, sequenceCode) };


      // sequenceName Field Functions 
      bool hasSequenceName() const { return this->sequenceName_ != nullptr;};
      void deleteSequenceName() { this->sequenceName_ = nullptr;};
      inline string getSequenceName() const { DARABONBA_PTR_GET_DEFAULT(sequenceName_, "") };
      inline TrafficSequences& setSequenceName(string sequenceName) { DARABONBA_PTR_SET_VALUE(sequenceName_, sequenceName) };


    protected:
      // The list of site features associated with the traffic sequence.
      shared_ptr<vector<TrafficSequences::FunctionList>> functionList_ {};
      // The order of the current sequence in the entire traffic sequence.
      shared_ptr<string> order_ {};
      // The traffic sequence routing.
      shared_ptr<string> router_ {};
      // The sequence code.
      shared_ptr<string> sequenceCode_ {};
      // The sequence name.
      shared_ptr<string> sequenceName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trafficSequences_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSiteTrafficSequenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficSequences Field Functions 
    bool hasTrafficSequences() const { return this->trafficSequences_ != nullptr;};
    void deleteTrafficSequences() { this->trafficSequences_ = nullptr;};
    inline const vector<GetSiteTrafficSequenceResponseBody::TrafficSequences> & getTrafficSequences() const { DARABONBA_PTR_GET_CONST(trafficSequences_, vector<GetSiteTrafficSequenceResponseBody::TrafficSequences>) };
    inline vector<GetSiteTrafficSequenceResponseBody::TrafficSequences> getTrafficSequences() { DARABONBA_PTR_GET(trafficSequences_, vector<GetSiteTrafficSequenceResponseBody::TrafficSequences>) };
    inline GetSiteTrafficSequenceResponseBody& setTrafficSequences(const vector<GetSiteTrafficSequenceResponseBody::TrafficSequences> & trafficSequences) { DARABONBA_PTR_SET_VALUE(trafficSequences_, trafficSequences) };
    inline GetSiteTrafficSequenceResponseBody& setTrafficSequences(vector<GetSiteTrafficSequenceResponseBody::TrafficSequences> && trafficSequences) { DARABONBA_PTR_SET_RVALUE(trafficSequences_, trafficSequences) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The traffic sequences of the site.
    shared_ptr<vector<GetSiteTrafficSequenceResponseBody::TrafficSequences>> trafficSequences_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
