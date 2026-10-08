// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPK8SAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPK8SAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class StopK8sApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopK8sApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, StopK8sApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    StopK8sApplicationRequest() = default ;
    StopK8sApplicationRequest(const StopK8sApplicationRequest &) = default ;
    StopK8sApplicationRequest(StopK8sApplicationRequest &&) = default ;
    StopK8sApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopK8sApplicationRequest() = default ;
    StopK8sApplicationRequest& operator=(const StopK8sApplicationRequest &) = default ;
    StopK8sApplicationRequest& operator=(StopK8sApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->timeout_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StopK8sApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline StopK8sApplicationRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The ID of the application. You can query the application ID by calling the ListApplication operation. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The timeout period of the change process. Unit: seconds.
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
