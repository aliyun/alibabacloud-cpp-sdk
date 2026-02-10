// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSETUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSETUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClientConfSetupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientConfSetupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientConf, clientConf_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientConfSetupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientConf, clientConf_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClientConfSetupResponseBody() = default ;
    DescribeClientConfSetupResponseBody(const DescribeClientConfSetupResponseBody &) = default ;
    DescribeClientConfSetupResponseBody(DescribeClientConfSetupResponseBody &&) = default ;
    DescribeClientConfSetupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientConfSetupResponseBody() = default ;
    DescribeClientConfSetupResponseBody& operator=(const DescribeClientConfSetupResponseBody &) = default ;
    DescribeClientConfSetupResponseBody& operator=(DescribeClientConfSetupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClientConf : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientConf& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(StrategyTag, strategyTag_);
        DARABONBA_PTR_TO_JSON(StrategyTagValue, strategyTagValue_);
      };
      friend void from_json(const Darabonba::Json& j, ClientConf& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(StrategyTag, strategyTag_);
        DARABONBA_PTR_FROM_JSON(StrategyTagValue, strategyTagValue_);
      };
      ClientConf() = default ;
      ClientConf(const ClientConf &) = default ;
      ClientConf(ClientConf &&) = default ;
      ClientConf(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientConf() = default ;
      ClientConf& operator=(const ClientConf &) = default ;
      ClientConf& operator=(ClientConf &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->strategyTag_ == nullptr && this->strategyTagValue_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline ClientConf& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // strategyTag Field Functions 
      bool hasStrategyTag() const { return this->strategyTag_ != nullptr;};
      void deleteStrategyTag() { this->strategyTag_ = nullptr;};
      inline string getStrategyTag() const { DARABONBA_PTR_GET_DEFAULT(strategyTag_, "") };
      inline ClientConf& setStrategyTag(string strategyTag) { DARABONBA_PTR_SET_VALUE(strategyTag_, strategyTag) };


      // strategyTagValue Field Functions 
      bool hasStrategyTagValue() const { return this->strategyTagValue_ != nullptr;};
      void deleteStrategyTagValue() { this->strategyTagValue_ = nullptr;};
      inline string getStrategyTagValue() const { DARABONBA_PTR_GET_DEFAULT(strategyTagValue_, "") };
      inline ClientConf& setStrategyTagValue(string strategyTagValue) { DARABONBA_PTR_SET_VALUE(strategyTagValue_, strategyTagValue) };


    protected:
      // The configurations of the usage for the Security Center agent.
      shared_ptr<string> config_ {};
      // The tag that is added to the configuration.
      shared_ptr<string> strategyTag_ {};
      // The value of the tag. Valid values:
      // 
      // *   major
      // *   advanced
      // *   basic
      shared_ptr<string> strategyTagValue_ {};
    };

    virtual bool empty() const override { return this->clientConf_ == nullptr
        && this->requestId_ == nullptr; };
    // clientConf Field Functions 
    bool hasClientConf() const { return this->clientConf_ != nullptr;};
    void deleteClientConf() { this->clientConf_ = nullptr;};
    inline const DescribeClientConfSetupResponseBody::ClientConf & getClientConf() const { DARABONBA_PTR_GET_CONST(clientConf_, DescribeClientConfSetupResponseBody::ClientConf) };
    inline DescribeClientConfSetupResponseBody::ClientConf getClientConf() { DARABONBA_PTR_GET(clientConf_, DescribeClientConfSetupResponseBody::ClientConf) };
    inline DescribeClientConfSetupResponseBody& setClientConf(const DescribeClientConfSetupResponseBody::ClientConf & clientConf) { DARABONBA_PTR_SET_VALUE(clientConf_, clientConf) };
    inline DescribeClientConfSetupResponseBody& setClientConf(DescribeClientConfSetupResponseBody::ClientConf && clientConf) { DARABONBA_PTR_SET_RVALUE(clientConf_, clientConf) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientConfSetupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of the Security Center agent.
    shared_ptr<DescribeClientConfSetupResponseBody::ClientConf> clientConf_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
