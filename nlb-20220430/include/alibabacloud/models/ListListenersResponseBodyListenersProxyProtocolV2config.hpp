// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSPROXYPROTOCOLV2CONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSPROXYPROTOCOLV2CONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListListenersResponseBodyListenersProxyProtocolV2Config : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBodyListenersProxyProtocolV2Config& obj) { 
      DARABONBA_PTR_TO_JSON(Ppv2PrivateLinkEpIdEnabled, ppv2PrivateLinkEpIdEnabled_);
      DARABONBA_PTR_TO_JSON(Ppv2PrivateLinkEpsIdEnabled, ppv2PrivateLinkEpsIdEnabled_);
      DARABONBA_PTR_TO_JSON(Ppv2VpcIdEnabled, ppv2VpcIdEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBodyListenersProxyProtocolV2Config& obj) { 
      DARABONBA_PTR_FROM_JSON(Ppv2PrivateLinkEpIdEnabled, ppv2PrivateLinkEpIdEnabled_);
      DARABONBA_PTR_FROM_JSON(Ppv2PrivateLinkEpsIdEnabled, ppv2PrivateLinkEpsIdEnabled_);
      DARABONBA_PTR_FROM_JSON(Ppv2VpcIdEnabled, ppv2VpcIdEnabled_);
    };
    ListListenersResponseBodyListenersProxyProtocolV2Config() = default ;
    ListListenersResponseBodyListenersProxyProtocolV2Config(const ListListenersResponseBodyListenersProxyProtocolV2Config &) = default ;
    ListListenersResponseBodyListenersProxyProtocolV2Config(ListListenersResponseBodyListenersProxyProtocolV2Config &&) = default ;
    ListListenersResponseBodyListenersProxyProtocolV2Config(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBodyListenersProxyProtocolV2Config() = default ;
    ListListenersResponseBodyListenersProxyProtocolV2Config& operator=(const ListListenersResponseBodyListenersProxyProtocolV2Config &) = default ;
    ListListenersResponseBodyListenersProxyProtocolV2Config& operator=(ListListenersResponseBodyListenersProxyProtocolV2Config &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ppv2PrivateLinkEpIdEnabled_ != nullptr
        && this->ppv2PrivateLinkEpsIdEnabled_ != nullptr && this->ppv2VpcIdEnabled_ != nullptr; };
    // ppv2PrivateLinkEpIdEnabled Field Functions 
    bool hasPpv2PrivateLinkEpIdEnabled() const { return this->ppv2PrivateLinkEpIdEnabled_ != nullptr;};
    void deletePpv2PrivateLinkEpIdEnabled() { this->ppv2PrivateLinkEpIdEnabled_ = nullptr;};
    inline bool ppv2PrivateLinkEpIdEnabled() const { DARABONBA_PTR_GET_DEFAULT(ppv2PrivateLinkEpIdEnabled_, false) };
    inline ListListenersResponseBodyListenersProxyProtocolV2Config& setPpv2PrivateLinkEpIdEnabled(bool ppv2PrivateLinkEpIdEnabled) { DARABONBA_PTR_SET_VALUE(ppv2PrivateLinkEpIdEnabled_, ppv2PrivateLinkEpIdEnabled) };


    // ppv2PrivateLinkEpsIdEnabled Field Functions 
    bool hasPpv2PrivateLinkEpsIdEnabled() const { return this->ppv2PrivateLinkEpsIdEnabled_ != nullptr;};
    void deletePpv2PrivateLinkEpsIdEnabled() { this->ppv2PrivateLinkEpsIdEnabled_ = nullptr;};
    inline bool ppv2PrivateLinkEpsIdEnabled() const { DARABONBA_PTR_GET_DEFAULT(ppv2PrivateLinkEpsIdEnabled_, false) };
    inline ListListenersResponseBodyListenersProxyProtocolV2Config& setPpv2PrivateLinkEpsIdEnabled(bool ppv2PrivateLinkEpsIdEnabled) { DARABONBA_PTR_SET_VALUE(ppv2PrivateLinkEpsIdEnabled_, ppv2PrivateLinkEpsIdEnabled) };


    // ppv2VpcIdEnabled Field Functions 
    bool hasPpv2VpcIdEnabled() const { return this->ppv2VpcIdEnabled_ != nullptr;};
    void deletePpv2VpcIdEnabled() { this->ppv2VpcIdEnabled_ = nullptr;};
    inline bool ppv2VpcIdEnabled() const { DARABONBA_PTR_GET_DEFAULT(ppv2VpcIdEnabled_, false) };
    inline ListListenersResponseBodyListenersProxyProtocolV2Config& setPpv2VpcIdEnabled(bool ppv2VpcIdEnabled) { DARABONBA_PTR_SET_VALUE(ppv2VpcIdEnabled_, ppv2VpcIdEnabled) };


  protected:
    // Indicates whether the Proxy protocol passes the PrivateLinkEpId parameter to backend servers. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ppv2PrivateLinkEpIdEnabled_ = nullptr;
    // Indicates whether the Proxy protocol passes the PrivateLinkEpsId parameter to backend servers. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ppv2PrivateLinkEpsIdEnabled_ = nullptr;
    // Indicates whether the Proxy protocol passes the VpcId parameter to backend servers. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ppv2VpcIdEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
