// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    DeleteApplicationRequest() = default ;
    DeleteApplicationRequest(const DeleteApplicationRequest &) = default ;
    DeleteApplicationRequest(DeleteApplicationRequest &&) = default ;
    DeleteApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApplicationRequest() = default ;
    DeleteApplicationRequest& operator=(const DeleteApplicationRequest &) = default ;
    DeleteApplicationRequest& operator=(DeleteApplicationRequest &&) = default ;
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
    inline DeleteApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DeleteApplicationRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The ID of the application. To obtain the application ID, call the ListApplication operation.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The timeout period for the asynchronous release. Unit: seconds. Default value: 300.
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
