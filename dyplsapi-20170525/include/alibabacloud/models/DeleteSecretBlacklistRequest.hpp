// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECRETBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECRETBLACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class DeleteSecretBlacklistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecretBlacklistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlackNo, blackNo_);
      DARABONBA_PTR_TO_JSON(BlackType, blackType_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(WayControl, wayControl_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecretBlacklistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackNo, blackNo_);
      DARABONBA_PTR_FROM_JSON(BlackType, blackType_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(WayControl, wayControl_);
    };
    DeleteSecretBlacklistRequest() = default ;
    DeleteSecretBlacklistRequest(const DeleteSecretBlacklistRequest &) = default ;
    DeleteSecretBlacklistRequest(DeleteSecretBlacklistRequest &&) = default ;
    DeleteSecretBlacklistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecretBlacklistRequest() = default ;
    DeleteSecretBlacklistRequest& operator=(const DeleteSecretBlacklistRequest &) = default ;
    DeleteSecretBlacklistRequest& operator=(DeleteSecretBlacklistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blackNo_ == nullptr
        && this->blackType_ == nullptr && this->poolKey_ == nullptr && this->remark_ == nullptr && this->wayControl_ == nullptr; };
    // blackNo Field Functions 
    bool hasBlackNo() const { return this->blackNo_ != nullptr;};
    void deleteBlackNo() { this->blackNo_ = nullptr;};
    inline string getBlackNo() const { DARABONBA_PTR_GET_DEFAULT(blackNo_, "") };
    inline DeleteSecretBlacklistRequest& setBlackNo(string blackNo) { DARABONBA_PTR_SET_VALUE(blackNo_, blackNo) };


    // blackType Field Functions 
    bool hasBlackType() const { return this->blackType_ != nullptr;};
    void deleteBlackType() { this->blackType_ = nullptr;};
    inline string getBlackType() const { DARABONBA_PTR_GET_DEFAULT(blackType_, "") };
    inline DeleteSecretBlacklistRequest& setBlackType(string blackType) { DARABONBA_PTR_SET_VALUE(blackType_, blackType) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string getPoolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline DeleteSecretBlacklistRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DeleteSecretBlacklistRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // wayControl Field Functions 
    bool hasWayControl() const { return this->wayControl_ != nullptr;};
    void deleteWayControl() { this->wayControl_ = nullptr;};
    inline string getWayControl() const { DARABONBA_PTR_GET_DEFAULT(wayControl_, "") };
    inline DeleteSecretBlacklistRequest& setWayControl(string wayControl) { DARABONBA_PTR_SET_VALUE(wayControl_, wayControl) };


  protected:
    // The blacklisted number. The value type is determined by the **BlackType** parameter:
    // 
    // - **Point-to-point blacklist**: a pair of numbers separated by a colon (:)
    // - **Number pool blacklist**: a single number
    // 
    // This parameter is required.
    shared_ptr<string> blackNo_ {};
    // The type of the blacklist. Valid values:
    // 
    // - **POINT_TO_POINT_BLACK**: point-to-point blacklist
    // - **PARTNER_GLOBAL_NUMBER_BLACK**: number pool blacklist
    // 
    // This parameter is required.
    shared_ptr<string> blackType_ {};
    // The key of the number pool.
    // 
    // You can obtain the **number pool key** on the [Number Pool Management](https://dyplsnext.console.aliyun.com/number-pool) page in the Phone Number Privacy Protection console.
    // 
    // This parameter is required.
    shared_ptr<string> poolKey_ {};
    // The remark for the blacklist.
    shared_ptr<string> remark_ {};
    // The call direction control. Valid values:
    // 
    // - **PHONEA_REJECT**: The first number in BlackNo can call the second number, but the second number cannot call the first number.
    // 
    // - **PHONEB_REJECT**: The first number in BlackNo cannot call the second number, but the second number can call the first number.
    // 
    // - **Leave empty**: The two numbers in BlackNo cannot call each other.
    shared_ptr<string> wayControl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
