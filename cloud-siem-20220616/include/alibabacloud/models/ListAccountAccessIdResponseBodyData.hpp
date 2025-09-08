// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTACCESSIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTACCESSIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAccountAccessIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountAccessIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(AccessIdMd5, accessIdMd5_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountStr, accountStr_);
      DARABONBA_PTR_TO_JSON(Bound, bound_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountAccessIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(AccessIdMd5, accessIdMd5_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountStr, accountStr_);
      DARABONBA_PTR_FROM_JSON(Bound, bound_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
    };
    ListAccountAccessIdResponseBodyData() = default ;
    ListAccountAccessIdResponseBodyData(const ListAccountAccessIdResponseBodyData &) = default ;
    ListAccountAccessIdResponseBodyData(ListAccountAccessIdResponseBodyData &&) = default ;
    ListAccountAccessIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountAccessIdResponseBodyData() = default ;
    ListAccountAccessIdResponseBodyData& operator=(const ListAccountAccessIdResponseBodyData &) = default ;
    ListAccountAccessIdResponseBodyData& operator=(ListAccountAccessIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessId_ != nullptr
        && this->accessIdMd5_ != nullptr && this->accountId_ != nullptr && this->accountStr_ != nullptr && this->bound_ != nullptr && this->cloudCode_ != nullptr
        && this->subUserId_ != nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline ListAccountAccessIdResponseBodyData& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // accessIdMd5 Field Functions 
    bool hasAccessIdMd5() const { return this->accessIdMd5_ != nullptr;};
    void deleteAccessIdMd5() { this->accessIdMd5_ = nullptr;};
    inline string accessIdMd5() const { DARABONBA_PTR_GET_DEFAULT(accessIdMd5_, "") };
    inline ListAccountAccessIdResponseBodyData& setAccessIdMd5(string accessIdMd5) { DARABONBA_PTR_SET_VALUE(accessIdMd5_, accessIdMd5) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListAccountAccessIdResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountStr Field Functions 
    bool hasAccountStr() const { return this->accountStr_ != nullptr;};
    void deleteAccountStr() { this->accountStr_ = nullptr;};
    inline string accountStr() const { DARABONBA_PTR_GET_DEFAULT(accountStr_, "") };
    inline ListAccountAccessIdResponseBodyData& setAccountStr(string accountStr) { DARABONBA_PTR_SET_VALUE(accountStr_, accountStr) };


    // bound Field Functions 
    bool hasBound() const { return this->bound_ != nullptr;};
    void deleteBound() { this->bound_ = nullptr;};
    inline int32_t bound() const { DARABONBA_PTR_GET_DEFAULT(bound_, 0) };
    inline ListAccountAccessIdResponseBodyData& setBound(int32_t bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ListAccountAccessIdResponseBodyData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline ListAccountAccessIdResponseBodyData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    // The AccessKey ID of the cloud account that is added to the threat analysis feature.
    std::shared_ptr<string> accessId_ = nullptr;
    // The MD5 hash value of the AccessKey ID.
    std::shared_ptr<string> accessIdMd5_ = nullptr;
    // The ID of the cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The information about the cloud account to which the AccessKey ID belongs. The value is in the following format: Alibaba Cloud account ID|Alibaba Cloud account username|AccessKey ID.
    std::shared_ptr<string> accountStr_ = nullptr;
    // Indicates whether the cloud account to which the AccessKey ID belongs is added to the threat analysis feature. Valid values:
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int32_t> bound_ = nullptr;
    // The code of the cloud service provider.
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to add the third-party cloud account.
    std::shared_ptr<int64_t> subUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
