// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUNIONCONTENTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUNIONCONTENTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UniMkt20181212
{
namespace Models
{
  class QueryUnionContentInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUnionContentInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ContentId, contentId_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUnionContentInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ContentId, contentId_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
    };
    QueryUnionContentInfoRequest() = default ;
    QueryUnionContentInfoRequest(const QueryUnionContentInfoRequest &) = default ;
    QueryUnionContentInfoRequest(QueryUnionContentInfoRequest &&) = default ;
    QueryUnionContentInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUnionContentInfoRequest() = default ;
    QueryUnionContentInfoRequest& operator=(const QueryUnionContentInfoRequest &) = default ;
    QueryUnionContentInfoRequest& operator=(QueryUnionContentInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && this->contentId_ == nullptr && this->proxyUserId_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline QueryUnionContentInfoRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // contentId Field Functions 
    bool hasContentId() const { return this->contentId_ != nullptr;};
    void deleteContentId() { this->contentId_ = nullptr;};
    inline string getContentId() const { DARABONBA_PTR_GET_DEFAULT(contentId_, "") };
    inline QueryUnionContentInfoRequest& setContentId(string contentId) { DARABONBA_PTR_SET_VALUE(contentId_, contentId) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline int64_t getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, 0L) };
    inline QueryUnionContentInfoRequest& setProxyUserId(int64_t proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // This parameter is required.
    shared_ptr<string> contentId_ {};
    // This parameter is required.
    shared_ptr<int64_t> proxyUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UniMkt20181212
#endif
