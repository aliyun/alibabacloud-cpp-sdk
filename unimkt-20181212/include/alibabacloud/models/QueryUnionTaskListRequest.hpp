// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUNIONTASKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUNIONTASKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UniMkt20181212
{
namespace Models
{
  class QueryUnionTaskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUnionTaskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrandUserId, brandUserId_);
      DARABONBA_PTR_TO_JSON(BrandUserNick, brandUserNick_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUnionTaskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandUserId, brandUserId_);
      DARABONBA_PTR_FROM_JSON(BrandUserNick, brandUserNick_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
    };
    QueryUnionTaskListRequest() = default ;
    QueryUnionTaskListRequest(const QueryUnionTaskListRequest &) = default ;
    QueryUnionTaskListRequest(QueryUnionTaskListRequest &&) = default ;
    QueryUnionTaskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUnionTaskListRequest() = default ;
    QueryUnionTaskListRequest& operator=(const QueryUnionTaskListRequest &) = default ;
    QueryUnionTaskListRequest& operator=(QueryUnionTaskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandUserId_ == nullptr
        && this->brandUserNick_ == nullptr && this->channelId_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->proxyUserId_ == nullptr; };
    // brandUserId Field Functions 
    bool hasBrandUserId() const { return this->brandUserId_ != nullptr;};
    void deleteBrandUserId() { this->brandUserId_ = nullptr;};
    inline int64_t getBrandUserId() const { DARABONBA_PTR_GET_DEFAULT(brandUserId_, 0L) };
    inline QueryUnionTaskListRequest& setBrandUserId(int64_t brandUserId) { DARABONBA_PTR_SET_VALUE(brandUserId_, brandUserId) };


    // brandUserNick Field Functions 
    bool hasBrandUserNick() const { return this->brandUserNick_ != nullptr;};
    void deleteBrandUserNick() { this->brandUserNick_ = nullptr;};
    inline string getBrandUserNick() const { DARABONBA_PTR_GET_DEFAULT(brandUserNick_, "") };
    inline QueryUnionTaskListRequest& setBrandUserNick(string brandUserNick) { DARABONBA_PTR_SET_VALUE(brandUserNick_, brandUserNick) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline QueryUnionTaskListRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline QueryUnionTaskListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryUnionTaskListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline int64_t getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, 0L) };
    inline QueryUnionTaskListRequest& setProxyUserId(int64_t proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


  protected:
    shared_ptr<int64_t> brandUserId_ {};
    shared_ptr<string> brandUserNick_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageIndex_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<int64_t> proxyUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UniMkt20181212
#endif
