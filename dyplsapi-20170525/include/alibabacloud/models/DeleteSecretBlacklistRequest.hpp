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
        && return this->blackType_ == nullptr && return this->poolKey_ == nullptr && return this->remark_ == nullptr && return this->wayControl_ == nullptr; };
    // blackNo Field Functions 
    bool hasBlackNo() const { return this->blackNo_ != nullptr;};
    void deleteBlackNo() { this->blackNo_ = nullptr;};
    inline string blackNo() const { DARABONBA_PTR_GET_DEFAULT(blackNo_, "") };
    inline DeleteSecretBlacklistRequest& setBlackNo(string blackNo) { DARABONBA_PTR_SET_VALUE(blackNo_, blackNo) };


    // blackType Field Functions 
    bool hasBlackType() const { return this->blackType_ != nullptr;};
    void deleteBlackType() { this->blackType_ = nullptr;};
    inline string blackType() const { DARABONBA_PTR_GET_DEFAULT(blackType_, "") };
    inline DeleteSecretBlacklistRequest& setBlackType(string blackType) { DARABONBA_PTR_SET_VALUE(blackType_, blackType) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string poolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline DeleteSecretBlacklistRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DeleteSecretBlacklistRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // wayControl Field Functions 
    bool hasWayControl() const { return this->wayControl_ != nullptr;};
    void deleteWayControl() { this->wayControl_ = nullptr;};
    inline string wayControl() const { DARABONBA_PTR_GET_DEFAULT(wayControl_, "") };
    inline DeleteSecretBlacklistRequest& setWayControl(string wayControl) { DARABONBA_PTR_SET_VALUE(wayControl_, wayControl) };


  protected:
    // The phone numbers in the blacklist. A point-to-point blacklist has a pair of numbers separated by a colon (":"). A number pool blacklist or a platform blacklist has only one single number.
    // 
    // This parameter is required.
    std::shared_ptr<string> blackNo_ = nullptr;
    // The blacklist type. Valid values:
    // 
    // *   **POINT_TO_POINT_BLACK**: point-to-point blacklist
    // *   **PARTNER_GLOBAL_NUMBER_BLACK**: number pool blacklist
    // 
    // This parameter is required.
    std::shared_ptr<string> blackType_ = nullptr;
    // The key of the phone number pool. Log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) and view the key of the phone number pool on the **Number Pool Management** page.
    // 
    // This parameter is required.
    std::shared_ptr<string> poolKey_ = nullptr;
    // The remarks for the blacklist.
    std::shared_ptr<string> remark_ = nullptr;
    // The control on the call direction.
    // 
    // *   **PHONEA_REJECT**: The first phone number in the blacklist can be used to call the second phone number, but the second phone number in the blacklist cannot be used to call the first phone number.
    // *   **PHONEB_REJECT**: The first phone number in the blacklist cannot be used to call the second phone number, but the second phone number in the blacklist can be used to call the first phone number.
    // *   If this parameter is not specified, the two phone numbers in the blacklist cannot be used to call each other.
    // 
    // Valid values:
    // 
    // *   DUPLEX_REJECT
    // *   PHONEA_REJECT
    // *   PHONEB_REJECT
    std::shared_ptr<string> wayControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
