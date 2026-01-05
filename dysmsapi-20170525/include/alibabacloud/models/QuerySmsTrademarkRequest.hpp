// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSTRADEMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSTRADEMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsTrademarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsTrademarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrademarkIdList, trademarkIdList_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsTrademarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrademarkIdList, trademarkIdList_);
    };
    QuerySmsTrademarkRequest() = default ;
    QuerySmsTrademarkRequest(const QuerySmsTrademarkRequest &) = default ;
    QuerySmsTrademarkRequest(QuerySmsTrademarkRequest &&) = default ;
    QuerySmsTrademarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsTrademarkRequest() = default ;
    QuerySmsTrademarkRequest& operator=(const QuerySmsTrademarkRequest &) = default ;
    QuerySmsTrademarkRequest& operator=(QuerySmsTrademarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->trademarkIdList_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySmsTrademarkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuerySmsTrademarkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuerySmsTrademarkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trademarkIdList Field Functions 
    bool hasTrademarkIdList() const { return this->trademarkIdList_ != nullptr;};
    void deleteTrademarkIdList() { this->trademarkIdList_ = nullptr;};
    inline const vector<int64_t> & getTrademarkIdList() const { DARABONBA_PTR_GET_CONST(trademarkIdList_, vector<int64_t>) };
    inline vector<int64_t> getTrademarkIdList() { DARABONBA_PTR_GET(trademarkIdList_, vector<int64_t>) };
    inline QuerySmsTrademarkRequest& setTrademarkIdList(const vector<int64_t> & trademarkIdList) { DARABONBA_PTR_SET_VALUE(trademarkIdList_, trademarkIdList) };
    inline QuerySmsTrademarkRequest& setTrademarkIdList(vector<int64_t> && trademarkIdList) { DARABONBA_PTR_SET_RVALUE(trademarkIdList_, trademarkIdList) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 商标实体id列表
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> trademarkIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
