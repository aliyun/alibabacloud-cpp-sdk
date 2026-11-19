// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPDISTRIBUTIONCHANNELCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_STOPDISTRIBUTIONCHANNELCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class StopDistributionChannelCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopDistributionChannelCommand& obj) { 
      DARABONBA_PTR_TO_JSON(channelCodes, channelCodes_);
      DARABONBA_PTR_TO_JSON(lmShopId, lmShopId_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(requestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(requestUser, requestUser_);
    };
    friend void from_json(const Darabonba::Json& j, StopDistributionChannelCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(channelCodes, channelCodes_);
      DARABONBA_PTR_FROM_JSON(lmShopId, lmShopId_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(requestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(requestUser, requestUser_);
    };
    StopDistributionChannelCommand() = default ;
    StopDistributionChannelCommand(const StopDistributionChannelCommand &) = default ;
    StopDistributionChannelCommand(StopDistributionChannelCommand &&) = default ;
    StopDistributionChannelCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopDistributionChannelCommand() = default ;
    StopDistributionChannelCommand& operator=(const StopDistributionChannelCommand &) = default ;
    StopDistributionChannelCommand& operator=(StopDistributionChannelCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelCodes_ == nullptr
        && this->lmShopId_ == nullptr && this->productId_ == nullptr && this->requestId_ == nullptr && this->requestTime_ == nullptr && this->requestUser_ == nullptr; };
    // channelCodes Field Functions 
    bool hasChannelCodes() const { return this->channelCodes_ != nullptr;};
    void deleteChannelCodes() { this->channelCodes_ = nullptr;};
    inline const vector<string> & getChannelCodes() const { DARABONBA_PTR_GET_CONST(channelCodes_, vector<string>) };
    inline vector<string> getChannelCodes() { DARABONBA_PTR_GET(channelCodes_, vector<string>) };
    inline StopDistributionChannelCommand& setChannelCodes(const vector<string> & channelCodes) { DARABONBA_PTR_SET_VALUE(channelCodes_, channelCodes) };
    inline StopDistributionChannelCommand& setChannelCodes(vector<string> && channelCodes) { DARABONBA_PTR_SET_RVALUE(channelCodes_, channelCodes) };


    // lmShopId Field Functions 
    bool hasLmShopId() const { return this->lmShopId_ != nullptr;};
    void deleteLmShopId() { this->lmShopId_ = nullptr;};
    inline string getLmShopId() const { DARABONBA_PTR_GET_DEFAULT(lmShopId_, "") };
    inline StopDistributionChannelCommand& setLmShopId(string lmShopId) { DARABONBA_PTR_SET_VALUE(lmShopId_, lmShopId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline StopDistributionChannelCommand& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopDistributionChannelCommand& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline string getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
    inline StopDistributionChannelCommand& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // requestUser Field Functions 
    bool hasRequestUser() const { return this->requestUser_ != nullptr;};
    void deleteRequestUser() { this->requestUser_ = nullptr;};
    inline string getRequestUser() const { DARABONBA_PTR_GET_DEFAULT(requestUser_, "") };
    inline StopDistributionChannelCommand& setRequestUser(string requestUser) { DARABONBA_PTR_SET_VALUE(requestUser_, requestUser) };


  protected:
    // The set of channel IDs.
    shared_ptr<vector<string>> channelCodes_ {};
    // The store ID.
    shared_ptr<string> lmShopId_ {};
    // The commodity ID.
    shared_ptr<string> productId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The request time. Format: YYYY-MM-DD HH:mm:ss.
    shared_ptr<string> requestTime_ {};
    // The requesting user.
    shared_ptr<string> requestUser_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
