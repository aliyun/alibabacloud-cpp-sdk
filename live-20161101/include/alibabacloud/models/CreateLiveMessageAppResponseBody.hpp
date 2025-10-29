// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEMESSAGEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEMESSAGEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateLiveMessageAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveMessageAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppSign, appSign_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveMessageAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppSign, appSign_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLiveMessageAppResponseBody() = default ;
    CreateLiveMessageAppResponseBody(const CreateLiveMessageAppResponseBody &) = default ;
    CreateLiveMessageAppResponseBody(CreateLiveMessageAppResponseBody &&) = default ;
    CreateLiveMessageAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveMessageAppResponseBody() = default ;
    CreateLiveMessageAppResponseBody& operator=(const CreateLiveMessageAppResponseBody &) = default ;
    CreateLiveMessageAppResponseBody& operator=(CreateLiveMessageAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appKey_ == nullptr && return this->appSign_ == nullptr && return this->dataCenter_ == nullptr && return this->requestId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateLiveMessageAppResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline CreateLiveMessageAppResponseBody& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appSign Field Functions 
    bool hasAppSign() const { return this->appSign_ != nullptr;};
    void deleteAppSign() { this->appSign_ = nullptr;};
    inline string appSign() const { DARABONBA_PTR_GET_DEFAULT(appSign_, "") };
    inline CreateLiveMessageAppResponseBody& setAppSign(string appSign) { DARABONBA_PTR_SET_VALUE(appSign_, appSign) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline CreateLiveMessageAppResponseBody& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLiveMessageAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The application ID. The ID is used in subsequent operations, such as joining a group.
    std::shared_ptr<string> appId_ = nullptr;
    // The AppKey for authentication of this application.
    std::shared_ptr<string> appKey_ = nullptr;
    // The application signature. The signature is required when you use the interactive messaging SDK.
    std::shared_ptr<string> appSign_ = nullptr;
    // The data center in which the interactive messaging application was created.
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
