// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPCALLBACKSECRETKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPCALLBACKSECRETKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppCallbackSecretKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppCallbackSecretKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppCallbackSecretKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    DescribeAppCallbackSecretKeyRequest() = default ;
    DescribeAppCallbackSecretKeyRequest(const DescribeAppCallbackSecretKeyRequest &) = default ;
    DescribeAppCallbackSecretKeyRequest(DescribeAppCallbackSecretKeyRequest &&) = default ;
    DescribeAppCallbackSecretKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppCallbackSecretKeyRequest() = default ;
    DescribeAppCallbackSecretKeyRequest& operator=(const DescribeAppCallbackSecretKeyRequest &) = default ;
    DescribeAppCallbackSecretKeyRequest& operator=(DescribeAppCallbackSecretKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeAppCallbackSecretKeyRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
