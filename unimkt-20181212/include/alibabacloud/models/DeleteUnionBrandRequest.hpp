// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUNIONBRANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUNIONBRANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UniMkt20181212
{
namespace Models
{
  class DeleteUnionBrandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUnionBrandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrandMainId, brandMainId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUnionBrandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandMainId, brandMainId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
    };
    DeleteUnionBrandRequest() = default ;
    DeleteUnionBrandRequest(const DeleteUnionBrandRequest &) = default ;
    DeleteUnionBrandRequest(DeleteUnionBrandRequest &&) = default ;
    DeleteUnionBrandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUnionBrandRequest() = default ;
    DeleteUnionBrandRequest& operator=(const DeleteUnionBrandRequest &) = default ;
    DeleteUnionBrandRequest& operator=(DeleteUnionBrandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandMainId_ == nullptr
        && this->channelId_ == nullptr && this->proxyUserId_ == nullptr; };
    // brandMainId Field Functions 
    bool hasBrandMainId() const { return this->brandMainId_ != nullptr;};
    void deleteBrandMainId() { this->brandMainId_ = nullptr;};
    inline int64_t getBrandMainId() const { DARABONBA_PTR_GET_DEFAULT(brandMainId_, 0L) };
    inline DeleteUnionBrandRequest& setBrandMainId(int64_t brandMainId) { DARABONBA_PTR_SET_VALUE(brandMainId_, brandMainId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DeleteUnionBrandRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline int64_t getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, 0L) };
    inline DeleteUnionBrandRequest& setProxyUserId(int64_t proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


  protected:
    shared_ptr<int64_t> brandMainId_ {};
    shared_ptr<string> channelId_ {};
    shared_ptr<int64_t> proxyUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UniMkt20181212
#endif
