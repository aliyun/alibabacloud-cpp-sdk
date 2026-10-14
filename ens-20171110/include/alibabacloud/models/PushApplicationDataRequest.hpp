// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHAPPLICATIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHAPPLICATIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PushApplicationDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushApplicationDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PushStrategy, pushStrategy_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, PushApplicationDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PushStrategy, pushStrategy_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    PushApplicationDataRequest() = default ;
    PushApplicationDataRequest(const PushApplicationDataRequest &) = default ;
    PushApplicationDataRequest(PushApplicationDataRequest &&) = default ;
    PushApplicationDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushApplicationDataRequest() = default ;
    PushApplicationDataRequest& operator=(const PushApplicationDataRequest &) = default ;
    PushApplicationDataRequest& operator=(PushApplicationDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->data_ == nullptr && this->pushStrategy_ == nullptr && this->timeout_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PushApplicationDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline PushApplicationDataRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // pushStrategy Field Functions 
    bool hasPushStrategy() const { return this->pushStrategy_ != nullptr;};
    void deletePushStrategy() { this->pushStrategy_ = nullptr;};
    inline string getPushStrategy() const { DARABONBA_PTR_GET_DEFAULT(pushStrategy_, "") };
    inline PushApplicationDataRequest& setPushStrategy(string pushStrategy) { DARABONBA_PTR_SET_VALUE(pushStrategy_, pushStrategy) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline PushApplicationDataRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The application ID.
    // 
    // Before calling this operation, activate the Edge Application Hosting service and create an application by calling CreateApplication. Obtain the AppId from the response of the CreateApplication operation.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The list of data files to be pre-pushed, in the string format of a JSON array.
    // 
    // This parameter is required.
    shared_ptr<string> data_ {};
    // The canary pre-push policy in JSON string format. Multiple distribution policies are supported. By default, all data is pre-pushed.
    shared_ptr<string> pushStrategy_ {};
    // This parameter is invalid.
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
