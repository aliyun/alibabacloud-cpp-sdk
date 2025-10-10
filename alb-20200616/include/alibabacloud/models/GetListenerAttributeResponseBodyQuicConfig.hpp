// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYQUICCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYQUICCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerAttributeResponseBodyQuicConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerAttributeResponseBodyQuicConfig& obj) { 
      DARABONBA_PTR_TO_JSON(QuicListenerId, quicListenerId_);
      DARABONBA_PTR_TO_JSON(QuicUpgradeEnabled, quicUpgradeEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerAttributeResponseBodyQuicConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(QuicListenerId, quicListenerId_);
      DARABONBA_PTR_FROM_JSON(QuicUpgradeEnabled, quicUpgradeEnabled_);
    };
    GetListenerAttributeResponseBodyQuicConfig() = default ;
    GetListenerAttributeResponseBodyQuicConfig(const GetListenerAttributeResponseBodyQuicConfig &) = default ;
    GetListenerAttributeResponseBodyQuicConfig(GetListenerAttributeResponseBodyQuicConfig &&) = default ;
    GetListenerAttributeResponseBodyQuicConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerAttributeResponseBodyQuicConfig() = default ;
    GetListenerAttributeResponseBodyQuicConfig& operator=(const GetListenerAttributeResponseBodyQuicConfig &) = default ;
    GetListenerAttributeResponseBodyQuicConfig& operator=(GetListenerAttributeResponseBodyQuicConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quicListenerId_ != nullptr
        && this->quicUpgradeEnabled_ != nullptr; };
    // quicListenerId Field Functions 
    bool hasQuicListenerId() const { return this->quicListenerId_ != nullptr;};
    void deleteQuicListenerId() { this->quicListenerId_ = nullptr;};
    inline string quicListenerId() const { DARABONBA_PTR_GET_DEFAULT(quicListenerId_, "") };
    inline GetListenerAttributeResponseBodyQuicConfig& setQuicListenerId(string quicListenerId) { DARABONBA_PTR_SET_VALUE(quicListenerId_, quicListenerId) };


    // quicUpgradeEnabled Field Functions 
    bool hasQuicUpgradeEnabled() const { return this->quicUpgradeEnabled_ != nullptr;};
    void deleteQuicUpgradeEnabled() { this->quicUpgradeEnabled_ = nullptr;};
    inline bool quicUpgradeEnabled() const { DARABONBA_PTR_GET_DEFAULT(quicUpgradeEnabled_, false) };
    inline GetListenerAttributeResponseBodyQuicConfig& setQuicUpgradeEnabled(bool quicUpgradeEnabled) { DARABONBA_PTR_SET_VALUE(quicUpgradeEnabled_, quicUpgradeEnabled) };


  protected:
    // The ID of the QUIC listener. This parameter is returned when **QuicUpgradeEnabled** is set to **true**. Only HTTPS listeners support this parameter.
    // 
    // > You must associate the HTTPS listener and the QUIC listener with the same ALB instance. In addition, make sure that the QUIC listener has never been associated with another listener.
    std::shared_ptr<string> quicListenerId_ = nullptr;
    // Indicates whether QUIC upgrade is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > Only HTTPS listeners support this parameter.
    std::shared_ptr<bool> quicUpgradeEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
