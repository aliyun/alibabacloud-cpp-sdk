// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODYACCOUNTSACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODYACCOUNTSACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageSharePermissionResponseBodyAccountsAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSharePermissionResponseBodyAccountsAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
      DARABONBA_PTR_TO_JSON(SharedTime, sharedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSharePermissionResponseBodyAccountsAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
      DARABONBA_PTR_FROM_JSON(SharedTime, sharedTime_);
    };
    DescribeImageSharePermissionResponseBodyAccountsAccount() = default ;
    DescribeImageSharePermissionResponseBodyAccountsAccount(const DescribeImageSharePermissionResponseBodyAccountsAccount &) = default ;
    DescribeImageSharePermissionResponseBodyAccountsAccount(DescribeImageSharePermissionResponseBodyAccountsAccount &&) = default ;
    DescribeImageSharePermissionResponseBodyAccountsAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSharePermissionResponseBodyAccountsAccount() = default ;
    DescribeImageSharePermissionResponseBodyAccountsAccount& operator=(const DescribeImageSharePermissionResponseBodyAccountsAccount &) = default ;
    DescribeImageSharePermissionResponseBodyAccountsAccount& operator=(DescribeImageSharePermissionResponseBodyAccountsAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunId_ == nullptr
        && return this->sharedTime_ == nullptr; };
    // aliyunId Field Functions 
    bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
    void deleteAliyunId() { this->aliyunId_ = nullptr;};
    inline string aliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
    inline DescribeImageSharePermissionResponseBodyAccountsAccount& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


    // sharedTime Field Functions 
    bool hasSharedTime() const { return this->sharedTime_ != nullptr;};
    void deleteSharedTime() { this->sharedTime_ = nullptr;};
    inline string sharedTime() const { DARABONBA_PTR_GET_DEFAULT(sharedTime_, "") };
    inline DescribeImageSharePermissionResponseBodyAccountsAccount& setSharedTime(string sharedTime) { DARABONBA_PTR_SET_VALUE(sharedTime_, sharedTime) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> aliyunId_ = nullptr;
    // The time when the image was shared. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> sharedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
