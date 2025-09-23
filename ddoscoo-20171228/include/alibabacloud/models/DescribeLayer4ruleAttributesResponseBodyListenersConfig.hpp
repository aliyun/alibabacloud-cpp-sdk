// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLayer4RuleAttributesResponseBodyListenersConfigCc.hpp>
#include <alibabacloud/models/DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen.hpp>
#include <alibabacloud/models/DescribeLayer4RuleAttributesResponseBodyListenersConfigSla.hpp>
#include <alibabacloud/models/DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RuleAttributesResponseBodyListenersConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RuleAttributesResponseBodyListenersConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Cc, cc_);
      DARABONBA_PTR_TO_JSON(NodataConn, nodataConn_);
      DARABONBA_PTR_TO_JSON(PayloadLen, payloadLen_);
      DARABONBA_PTR_TO_JSON(PersistenceTimeout, persistenceTimeout_);
      DARABONBA_PTR_TO_JSON(Sla, sla_);
      DARABONBA_PTR_TO_JSON(Slimit, slimit_);
      DARABONBA_PTR_TO_JSON(Synproxy, synproxy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RuleAttributesResponseBodyListenersConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Cc, cc_);
      DARABONBA_PTR_FROM_JSON(NodataConn, nodataConn_);
      DARABONBA_PTR_FROM_JSON(PayloadLen, payloadLen_);
      DARABONBA_PTR_FROM_JSON(PersistenceTimeout, persistenceTimeout_);
      DARABONBA_PTR_FROM_JSON(Sla, sla_);
      DARABONBA_PTR_FROM_JSON(Slimit, slimit_);
      DARABONBA_PTR_FROM_JSON(Synproxy, synproxy_);
    };
    DescribeLayer4RuleAttributesResponseBodyListenersConfig() = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfig(const DescribeLayer4RuleAttributesResponseBodyListenersConfig &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfig(DescribeLayer4RuleAttributesResponseBodyListenersConfig &&) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RuleAttributesResponseBodyListenersConfig() = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfig& operator=(const DescribeLayer4RuleAttributesResponseBodyListenersConfig &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListenersConfig& operator=(DescribeLayer4RuleAttributesResponseBodyListenersConfig &&) = default ;
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
    inline const Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCc & cc() const { DARABONBA_PTR_GET_CONST(cc_, Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCc) };
    inline Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCc cc() { DARABONBA_PTR_GET(cc_, Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCc) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfig& setCc(const Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCc & cc) { DARABONBA_PTR_SET_VALUE(cc_, cc) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfig& setCc(Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCc && cc) { DARABONBA_PTR_SET_RVALUE(cc_, cc) };


    // nodataConn Field Functions 
    bool hasNodataConn() const { return this->nodataConn_ != nullptr;};
    void deleteNodataConn() { this->nodataConn_ = nullptr;};
    inline string nodataConn() const { DARABONBA_PTR_GET_DEFAULT(nodataConn_, "") };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfig& setNodataConn(string nodataConn) { DARABONBA_PTR_SET_VALUE(nodataConn_, nodataConn) };


    // payloadLen Field Functions 
    bool hasPayloadLen() const { return this->payloadLen_ != nullptr;};
    void deletePayloadLen() { this->payloadLen_ = nullptr;};
    inline const Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen & payloadLen() const { DARABONBA_PTR_GET_CONST(payloadLen_, Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen) };
    inline Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen payloadLen() { DARABONBA_PTR_GET(payloadLen_, Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfig& setPayloadLen(const Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen & payloadLen) { DARABONBA_PTR_SET_VALUE(payloadLen_, payloadLen) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfig& setPayloadLen(Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen && payloadLen) { DARABONBA_PTR_SET_RVALUE(payloadLen_, payloadLen) };


    // persistenceTimeout Field Functions 
    bool hasPersistenceTimeout() const { return this->persistenceTimeout_ != nullptr;};
    void deletePersistenceTimeout() { this->persistenceTimeout_ = nullptr;};
    inline int32_t persistenceTimeout() const { DARABONBA_PTR_GET_DEFAULT(persistenceTimeout_, 0) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfig& setPersistenceTimeout(int32_t persistenceTimeout) { DARABONBA_PTR_SET_VALUE(persistenceTimeout_, persistenceTimeout) };


    // sla Field Functions 
    bool hasSla() const { return this->sla_ != nullptr;};
    void deleteSla() { this->sla_ = nullptr;};
    inline const Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSla & sla() const { DARABONBA_PTR_GET_CONST(sla_, Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSla) };
    inline Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSla sla() { DARABONBA_PTR_GET(sla_, Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSla) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfig& setSla(const Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSla & sla) { DARABONBA_PTR_SET_VALUE(sla_, sla) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfig& setSla(Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSla && sla) { DARABONBA_PTR_SET_RVALUE(sla_, sla) };


    // slimit Field Functions 
    bool hasSlimit() const { return this->slimit_ != nullptr;};
    void deleteSlimit() { this->slimit_ = nullptr;};
    inline const Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit & slimit() const { DARABONBA_PTR_GET_CONST(slimit_, Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit) };
    inline Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit slimit() { DARABONBA_PTR_GET(slimit_, Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfig& setSlimit(const Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit & slimit) { DARABONBA_PTR_SET_VALUE(slimit_, slimit) };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfig& setSlimit(Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit && slimit) { DARABONBA_PTR_SET_RVALUE(slimit_, slimit) };


    // synproxy Field Functions 
    bool hasSynproxy() const { return this->synproxy_ != nullptr;};
    void deleteSynproxy() { this->synproxy_ = nullptr;};
    inline string synproxy() const { DARABONBA_PTR_GET_DEFAULT(synproxy_, "") };
    inline DescribeLayer4RuleAttributesResponseBodyListenersConfig& setSynproxy(string synproxy) { DARABONBA_PTR_SET_VALUE(synproxy_, synproxy) };


  protected:
    std::shared_ptr<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigCc> cc_ = nullptr;
    std::shared_ptr<string> nodataConn_ = nullptr;
    std::shared_ptr<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigPayloadLen> payloadLen_ = nullptr;
    std::shared_ptr<int32_t> persistenceTimeout_ = nullptr;
    std::shared_ptr<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSla> sla_ = nullptr;
    std::shared_ptr<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfigSlimit> slimit_ = nullptr;
    std::shared_ptr<string> synproxy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
