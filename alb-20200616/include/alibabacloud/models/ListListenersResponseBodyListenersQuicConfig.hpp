// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSQUICCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSQUICCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListListenersResponseBodyListenersQuicConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBodyListenersQuicConfig& obj) { 
      DARABONBA_PTR_TO_JSON(QuicListenerId, quicListenerId_);
      DARABONBA_PTR_TO_JSON(QuicUpgradeEnabled, quicUpgradeEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBodyListenersQuicConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(QuicListenerId, quicListenerId_);
      DARABONBA_PTR_FROM_JSON(QuicUpgradeEnabled, quicUpgradeEnabled_);
    };
    ListListenersResponseBodyListenersQuicConfig() = default ;
    ListListenersResponseBodyListenersQuicConfig(const ListListenersResponseBodyListenersQuicConfig &) = default ;
    ListListenersResponseBodyListenersQuicConfig(ListListenersResponseBodyListenersQuicConfig &&) = default ;
    ListListenersResponseBodyListenersQuicConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBodyListenersQuicConfig() = default ;
    ListListenersResponseBodyListenersQuicConfig& operator=(const ListListenersResponseBodyListenersQuicConfig &) = default ;
    ListListenersResponseBodyListenersQuicConfig& operator=(ListListenersResponseBodyListenersQuicConfig &&) = default ;
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
    inline ListListenersResponseBodyListenersQuicConfig& setQuicListenerId(string quicListenerId) { DARABONBA_PTR_SET_VALUE(quicListenerId_, quicListenerId) };


    // quicUpgradeEnabled Field Functions 
    bool hasQuicUpgradeEnabled() const { return this->quicUpgradeEnabled_ != nullptr;};
    void deleteQuicUpgradeEnabled() { this->quicUpgradeEnabled_ = nullptr;};
    inline bool quicUpgradeEnabled() const { DARABONBA_PTR_GET_DEFAULT(quicUpgradeEnabled_, false) };
    inline ListListenersResponseBodyListenersQuicConfig& setQuicUpgradeEnabled(bool quicUpgradeEnabled) { DARABONBA_PTR_SET_VALUE(quicUpgradeEnabled_, quicUpgradeEnabled) };


  protected:
    // The ID of the QUIC listener associated with the ALB instance. This parameter is required if the **QuicUpgradeEnabled** parameter is set to **true**. Only HTTPS listeners support this parameter.
    // 
    // >  The existing listener and QUIC listener must be to the same ALB instance, and the QUIC listener has not been associated with an ALB instance.
    std::shared_ptr<string> quicListenerId_ = nullptr;
    // Indicates whether QUIC upgrade is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  Only HTTPS listeners support this parameter.
    std::shared_ptr<bool> quicUpgradeEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
