// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVAILABLEBALANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVAILABLEBALANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UniMkt20181212
{
namespace Models
{
  class QueryAvailableBalanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvailableBalanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvailableBalanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
    };
    QueryAvailableBalanceRequest() = default ;
    QueryAvailableBalanceRequest(const QueryAvailableBalanceRequest &) = default ;
    QueryAvailableBalanceRequest(QueryAvailableBalanceRequest &&) = default ;
    QueryAvailableBalanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvailableBalanceRequest() = default ;
    QueryAvailableBalanceRequest& operator=(const QueryAvailableBalanceRequest &) = default ;
    QueryAvailableBalanceRequest& operator=(QueryAvailableBalanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && this->proxyUserId_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline QueryAvailableBalanceRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline int64_t getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, 0L) };
    inline QueryAvailableBalanceRequest& setProxyUserId(int64_t proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<int64_t> proxyUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UniMkt20181212
#endif
