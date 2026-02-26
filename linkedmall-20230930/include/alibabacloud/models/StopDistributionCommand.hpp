// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPDISTRIBUTIONCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_STOPDISTRIBUTIONCOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class StopDistributionCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopDistributionCommand& obj) { 
      DARABONBA_PTR_TO_JSON(lmShopId, lmShopId_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(requestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(requestUser, requestUser_);
    };
    friend void from_json(const Darabonba::Json& j, StopDistributionCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(lmShopId, lmShopId_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(requestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(requestUser, requestUser_);
    };
    StopDistributionCommand() = default ;
    StopDistributionCommand(const StopDistributionCommand &) = default ;
    StopDistributionCommand(StopDistributionCommand &&) = default ;
    StopDistributionCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopDistributionCommand() = default ;
    StopDistributionCommand& operator=(const StopDistributionCommand &) = default ;
    StopDistributionCommand& operator=(StopDistributionCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lmShopId_ == nullptr
        && this->productId_ == nullptr && this->requestId_ == nullptr && this->requestTime_ == nullptr && this->requestUser_ == nullptr; };
    // lmShopId Field Functions 
    bool hasLmShopId() const { return this->lmShopId_ != nullptr;};
    void deleteLmShopId() { this->lmShopId_ = nullptr;};
    inline string getLmShopId() const { DARABONBA_PTR_GET_DEFAULT(lmShopId_, "") };
    inline StopDistributionCommand& setLmShopId(string lmShopId) { DARABONBA_PTR_SET_VALUE(lmShopId_, lmShopId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline StopDistributionCommand& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopDistributionCommand& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline string getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
    inline StopDistributionCommand& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // requestUser Field Functions 
    bool hasRequestUser() const { return this->requestUser_ != nullptr;};
    void deleteRequestUser() { this->requestUser_ = nullptr;};
    inline string getRequestUser() const { DARABONBA_PTR_GET_DEFAULT(requestUser_, "") };
    inline StopDistributionCommand& setRequestUser(string requestUser) { DARABONBA_PTR_SET_VALUE(requestUser_, requestUser) };


  protected:
    shared_ptr<string> lmShopId_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> requestTime_ {};
    shared_ptr<string> requestUser_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
