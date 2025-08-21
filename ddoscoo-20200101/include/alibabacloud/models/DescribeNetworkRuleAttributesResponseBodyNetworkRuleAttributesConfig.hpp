// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTESCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc.hpp>
#include <alibabacloud/models/DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen.hpp>
#include <alibabacloud/models/DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSla.hpp>
#include <alibabacloud/models/DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Cc, cc_);
      DARABONBA_PTR_TO_JSON(NodataConn, nodataConn_);
      DARABONBA_PTR_TO_JSON(PayloadLen, payloadLen_);
      DARABONBA_PTR_TO_JSON(PersistenceTimeout, persistenceTimeout_);
      DARABONBA_PTR_TO_JSON(Sla, sla_);
      DARABONBA_PTR_TO_JSON(Slimit, slimit_);
      DARABONBA_PTR_TO_JSON(Synproxy, synproxy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Cc, cc_);
      DARABONBA_PTR_FROM_JSON(NodataConn, nodataConn_);
      DARABONBA_PTR_FROM_JSON(PayloadLen, payloadLen_);
      DARABONBA_PTR_FROM_JSON(PersistenceTimeout, persistenceTimeout_);
      DARABONBA_PTR_FROM_JSON(Sla, sla_);
      DARABONBA_PTR_FROM_JSON(Slimit, slimit_);
      DARABONBA_PTR_FROM_JSON(Synproxy, synproxy_);
    };
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig &&) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& operator=(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& operator=(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cc_ != nullptr
        && this->nodataConn_ != nullptr && this->payloadLen_ != nullptr && this->persistenceTimeout_ != nullptr && this->sla_ != nullptr && this->slimit_ != nullptr
        && this->synproxy_ != nullptr; };
    // cc Field Functions 
    bool hasCc() const { return this->cc_ != nullptr;};
    void deleteCc() { this->cc_ = nullptr;};
    inline const Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc & cc() const { DARABONBA_PTR_GET_CONST(cc_, Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc) };
    inline Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc cc() { DARABONBA_PTR_GET(cc_, Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& setCc(const Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc & cc) { DARABONBA_PTR_SET_VALUE(cc_, cc) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& setCc(Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc && cc) { DARABONBA_PTR_SET_RVALUE(cc_, cc) };


    // nodataConn Field Functions 
    bool hasNodataConn() const { return this->nodataConn_ != nullptr;};
    void deleteNodataConn() { this->nodataConn_ = nullptr;};
    inline string nodataConn() const { DARABONBA_PTR_GET_DEFAULT(nodataConn_, "") };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& setNodataConn(string nodataConn) { DARABONBA_PTR_SET_VALUE(nodataConn_, nodataConn) };


    // payloadLen Field Functions 
    bool hasPayloadLen() const { return this->payloadLen_ != nullptr;};
    void deletePayloadLen() { this->payloadLen_ = nullptr;};
    inline const Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen & payloadLen() const { DARABONBA_PTR_GET_CONST(payloadLen_, Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen) };
    inline Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen payloadLen() { DARABONBA_PTR_GET(payloadLen_, Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& setPayloadLen(const Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen & payloadLen) { DARABONBA_PTR_SET_VALUE(payloadLen_, payloadLen) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& setPayloadLen(Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen && payloadLen) { DARABONBA_PTR_SET_RVALUE(payloadLen_, payloadLen) };


    // persistenceTimeout Field Functions 
    bool hasPersistenceTimeout() const { return this->persistenceTimeout_ != nullptr;};
    void deletePersistenceTimeout() { this->persistenceTimeout_ = nullptr;};
    inline int32_t persistenceTimeout() const { DARABONBA_PTR_GET_DEFAULT(persistenceTimeout_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& setPersistenceTimeout(int32_t persistenceTimeout) { DARABONBA_PTR_SET_VALUE(persistenceTimeout_, persistenceTimeout) };


    // sla Field Functions 
    bool hasSla() const { return this->sla_ != nullptr;};
    void deleteSla() { this->sla_ = nullptr;};
    inline const Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSla & sla() const { DARABONBA_PTR_GET_CONST(sla_, Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSla) };
    inline Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSla sla() { DARABONBA_PTR_GET(sla_, Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSla) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& setSla(const Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSla & sla) { DARABONBA_PTR_SET_VALUE(sla_, sla) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& setSla(Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSla && sla) { DARABONBA_PTR_SET_RVALUE(sla_, sla) };


    // slimit Field Functions 
    bool hasSlimit() const { return this->slimit_ != nullptr;};
    void deleteSlimit() { this->slimit_ = nullptr;};
    inline const Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit & slimit() const { DARABONBA_PTR_GET_CONST(slimit_, Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit) };
    inline Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit slimit() { DARABONBA_PTR_GET(slimit_, Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& setSlimit(const Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit & slimit) { DARABONBA_PTR_SET_VALUE(slimit_, slimit) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& setSlimit(Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit && slimit) { DARABONBA_PTR_SET_RVALUE(slimit_, slimit) };


    // synproxy Field Functions 
    bool hasSynproxy() const { return this->synproxy_ != nullptr;};
    void deleteSynproxy() { this->synproxy_ = nullptr;};
    inline string synproxy() const { DARABONBA_PTR_GET_DEFAULT(synproxy_, "") };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig& setSynproxy(string synproxy) { DARABONBA_PTR_SET_VALUE(synproxy_, synproxy) };


  protected:
    // The protection policy applied when the number of connections initiated from a source IP address frequently exceeds the limit.
    std::shared_ptr<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigCc> cc_ = nullptr;
    // The status of the Empty Connection switch. Valid values:
    // 
    // *   **on**: The switch is turned on.
    // *   **off**: The switch is turned off.
    std::shared_ptr<string> nodataConn_ = nullptr;
    // The settings of the Packet Length Limit policy.
    std::shared_ptr<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigPayloadLen> payloadLen_ = nullptr;
    // The timeout period of session persistence. Valid values: **30** to **3600**. Unit: seconds. Default value: **0**, which indicates that session persistence is disabled.
    std::shared_ptr<int32_t> persistenceTimeout_ = nullptr;
    // The settings of the Speed Limit for Destination policy.
    std::shared_ptr<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSla> sla_ = nullptr;
    // The settings of the Speed Limit for Source policy.
    std::shared_ptr<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfigSlimit> slimit_ = nullptr;
    // The status of the False Source switch. Valid values:
    // 
    // *   **on**: The switch is turned on.
    // *   **off**: The switch is turned off.
    std::shared_ptr<string> synproxy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
