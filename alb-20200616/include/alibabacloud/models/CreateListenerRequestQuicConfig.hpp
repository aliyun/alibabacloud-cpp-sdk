// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTENERREQUESTQUICCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTENERREQUESTQUICCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateListenerRequestQuicConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListenerRequestQuicConfig& obj) { 
      DARABONBA_PTR_TO_JSON(QuicListenerId, quicListenerId_);
      DARABONBA_PTR_TO_JSON(QuicUpgradeEnabled, quicUpgradeEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListenerRequestQuicConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(QuicListenerId, quicListenerId_);
      DARABONBA_PTR_FROM_JSON(QuicUpgradeEnabled, quicUpgradeEnabled_);
    };
    CreateListenerRequestQuicConfig() = default ;
    CreateListenerRequestQuicConfig(const CreateListenerRequestQuicConfig &) = default ;
    CreateListenerRequestQuicConfig(CreateListenerRequestQuicConfig &&) = default ;
    CreateListenerRequestQuicConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateListenerRequestQuicConfig() = default ;
    CreateListenerRequestQuicConfig& operator=(const CreateListenerRequestQuicConfig &) = default ;
    CreateListenerRequestQuicConfig& operator=(CreateListenerRequestQuicConfig &&) = default ;
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
    inline CreateListenerRequestQuicConfig& setQuicListenerId(string quicListenerId) { DARABONBA_PTR_SET_VALUE(quicListenerId_, quicListenerId) };


    // quicUpgradeEnabled Field Functions 
    bool hasQuicUpgradeEnabled() const { return this->quicUpgradeEnabled_ != nullptr;};
    void deleteQuicUpgradeEnabled() { this->quicUpgradeEnabled_ = nullptr;};
    inline bool quicUpgradeEnabled() const { DARABONBA_PTR_GET_DEFAULT(quicUpgradeEnabled_, false) };
    inline CreateListenerRequestQuicConfig& setQuicUpgradeEnabled(bool quicUpgradeEnabled) { DARABONBA_PTR_SET_VALUE(quicUpgradeEnabled_, quicUpgradeEnabled) };


  protected:
    // The ID of the QUIC listener that you want to associate with the HTTPS listener. Only HTTPS listeners support this parameter. This parameter is required when **QuicUpgradeEnabled** is set to **true**.
    // 
    // >  The HTTPS listener and the QUIC listener must be added to the same ALB instance. Make sure that the QUIC listener is not associated with any other listeners.
    std::shared_ptr<string> quicListenerId_ = nullptr;
    // Specifies whether to enable QUIC upgrade. Valid values:
    // 
    // *   **true**: enables QUIC upgrade.
    // *   **false** (default): disables QUIC upgrade.
    // 
    // >  Only HTTPS listeners support this parameter.
    std::shared_ptr<bool> quicUpgradeEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
