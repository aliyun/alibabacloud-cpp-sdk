// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUNIONCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUNIONCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UniMkt20181212
{
namespace Models
{
  class QueryUnionChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUnionChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUnionChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
    };
    QueryUnionChannelRequest() = default ;
    QueryUnionChannelRequest(const QueryUnionChannelRequest &) = default ;
    QueryUnionChannelRequest(QueryUnionChannelRequest &&) = default ;
    QueryUnionChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUnionChannelRequest() = default ;
    QueryUnionChannelRequest& operator=(const QueryUnionChannelRequest &) = default ;
    QueryUnionChannelRequest& operator=(QueryUnionChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline QueryUnionChannelRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


  protected:
    // This parameter is required.
    shared_ptr<string> channelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UniMkt20181212
#endif
