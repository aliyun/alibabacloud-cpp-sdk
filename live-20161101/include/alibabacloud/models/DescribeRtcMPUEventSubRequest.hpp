// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCMPUEVENTSUBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCMPUEVENTSUBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRtcMPUEventSubRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcMPUEventSubRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcMPUEventSubRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    DescribeRtcMPUEventSubRequest() = default ;
    DescribeRtcMPUEventSubRequest(const DescribeRtcMPUEventSubRequest &) = default ;
    DescribeRtcMPUEventSubRequest(DescribeRtcMPUEventSubRequest &&) = default ;
    DescribeRtcMPUEventSubRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcMPUEventSubRequest() = default ;
    DescribeRtcMPUEventSubRequest& operator=(const DescribeRtcMPUEventSubRequest &) = default ;
    DescribeRtcMPUEventSubRequest& operator=(DescribeRtcMPUEventSubRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeRtcMPUEventSubRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The ID of your application.
    // 
    // > The ID can be up to 64 characters in length and can contain letters, digits, underscores, and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
