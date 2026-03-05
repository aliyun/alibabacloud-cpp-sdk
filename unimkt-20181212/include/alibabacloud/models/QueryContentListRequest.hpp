// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UniMkt20181212
{
namespace Models
{
  class QueryContentListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrandUserId, brandUserId_);
      DARABONBA_PTR_TO_JSON(BrandUserNick, brandUserNick_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_TO_JSON(TaskBizType, taskBizType_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandUserId, brandUserId_);
      DARABONBA_PTR_FROM_JSON(BrandUserNick, brandUserNick_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_FROM_JSON(TaskBizType, taskBizType_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    QueryContentListRequest() = default ;
    QueryContentListRequest(const QueryContentListRequest &) = default ;
    QueryContentListRequest(QueryContentListRequest &&) = default ;
    QueryContentListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentListRequest() = default ;
    QueryContentListRequest& operator=(const QueryContentListRequest &) = default ;
    QueryContentListRequest& operator=(QueryContentListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandUserId_ == nullptr
        && this->brandUserNick_ == nullptr && this->channelId_ == nullptr && this->proxyUserId_ == nullptr && this->taskBizType_ == nullptr && this->taskType_ == nullptr; };
    // brandUserId Field Functions 
    bool hasBrandUserId() const { return this->brandUserId_ != nullptr;};
    void deleteBrandUserId() { this->brandUserId_ = nullptr;};
    inline int64_t getBrandUserId() const { DARABONBA_PTR_GET_DEFAULT(brandUserId_, 0L) };
    inline QueryContentListRequest& setBrandUserId(int64_t brandUserId) { DARABONBA_PTR_SET_VALUE(brandUserId_, brandUserId) };


    // brandUserNick Field Functions 
    bool hasBrandUserNick() const { return this->brandUserNick_ != nullptr;};
    void deleteBrandUserNick() { this->brandUserNick_ = nullptr;};
    inline string getBrandUserNick() const { DARABONBA_PTR_GET_DEFAULT(brandUserNick_, "") };
    inline QueryContentListRequest& setBrandUserNick(string brandUserNick) { DARABONBA_PTR_SET_VALUE(brandUserNick_, brandUserNick) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline QueryContentListRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline int64_t getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, 0L) };
    inline QueryContentListRequest& setProxyUserId(int64_t proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


    // taskBizType Field Functions 
    bool hasTaskBizType() const { return this->taskBizType_ != nullptr;};
    void deleteTaskBizType() { this->taskBizType_ = nullptr;};
    inline string getTaskBizType() const { DARABONBA_PTR_GET_DEFAULT(taskBizType_, "") };
    inline QueryContentListRequest& setTaskBizType(string taskBizType) { DARABONBA_PTR_SET_VALUE(taskBizType_, taskBizType) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline QueryContentListRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    shared_ptr<int64_t> brandUserId_ {};
    shared_ptr<string> brandUserNick_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // This parameter is required.
    shared_ptr<int64_t> proxyUserId_ {};
    // This parameter is required.
    shared_ptr<string> taskBizType_ {};
    // This parameter is required.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UniMkt20181212
#endif
