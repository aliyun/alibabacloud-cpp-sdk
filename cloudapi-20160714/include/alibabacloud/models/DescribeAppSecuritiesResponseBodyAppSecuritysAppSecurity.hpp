// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSECURITIESRESPONSEBODYAPPSECURITYSAPPSECURITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSECURITIESRESPONSEBODYAPPSECURITYSAPPSECURITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
    };
    DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity() = default ;
    DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity(const DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity &) = default ;
    DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity(DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity &&) = default ;
    DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity() = default ;
    DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity& operator=(const DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity &) = default ;
    DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity& operator=(DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->appKey_ == nullptr && return this->appSecret_ == nullptr && return this->createdTime_ == nullptr && return this->modifiedTime_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


  protected:
    // The application AppCode.
    std::shared_ptr<string> appCode_ = nullptr;
    // The application AppKey.
    std::shared_ptr<string> appKey_ = nullptr;
    // The application AppSecret.
    std::shared_ptr<string> appSecret_ = nullptr;
    // The time when the AppKey was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The time when the AppSecret was last modified. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
