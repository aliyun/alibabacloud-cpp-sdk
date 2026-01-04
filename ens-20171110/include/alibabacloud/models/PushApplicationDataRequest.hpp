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
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The data files that you want to push. The value must be a JSON string.
    // 
    // This parameter is required.
    shared_ptr<string> data_ {};
    // The push policy in the canary release environment. The value must be a JSON string. You can specify multiple push policies. By default, all data files are pushed.
    shared_ptr<string> pushStrategy_ {};
    // This parameter does not take effect.
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
