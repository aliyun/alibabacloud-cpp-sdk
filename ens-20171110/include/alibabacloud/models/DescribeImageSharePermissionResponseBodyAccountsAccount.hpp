// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODYACCOUNTSACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODYACCOUNTSACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeImageSharePermissionResponseBodyAccountsAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSharePermissionResponseBodyAccountsAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSharePermissionResponseBodyAccountsAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
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
    virtual bool empty() const override { return this->aliyunUid_ == nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline DescribeImageSharePermissionResponseBodyAccountsAccount& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


  protected:
    // The Alibaba Cloud account with which you share the image.
    std::shared_ptr<string> aliyunUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
