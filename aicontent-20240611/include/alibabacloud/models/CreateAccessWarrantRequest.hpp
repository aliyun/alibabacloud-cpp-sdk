// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSWARRANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSWARRANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class CreateAccessWarrantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessWarrantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(requestSign, requestSign_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(userClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(warrantAvailable, warrantAvailable_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessWarrantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(requestSign, requestSign_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(userClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(warrantAvailable, warrantAvailable_);
    };
    CreateAccessWarrantRequest() = default ;
    CreateAccessWarrantRequest(const CreateAccessWarrantRequest &) = default ;
    CreateAccessWarrantRequest(CreateAccessWarrantRequest &&) = default ;
    CreateAccessWarrantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessWarrantRequest() = default ;
    CreateAccessWarrantRequest& operator=(const CreateAccessWarrantRequest &) = default ;
    CreateAccessWarrantRequest& operator=(CreateAccessWarrantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->requestSign_ == nullptr && this->timestamp_ == nullptr && this->userClientIp_ == nullptr && this->userId_ == nullptr && this->warrantAvailable_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAccessWarrantRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // requestSign Field Functions 
    bool hasRequestSign() const { return this->requestSign_ != nullptr;};
    void deleteRequestSign() { this->requestSign_ = nullptr;};
    inline string getRequestSign() const { DARABONBA_PTR_GET_DEFAULT(requestSign_, "") };
    inline CreateAccessWarrantRequest& setRequestSign(string requestSign) { DARABONBA_PTR_SET_VALUE(requestSign_, requestSign) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline CreateAccessWarrantRequest& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline CreateAccessWarrantRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateAccessWarrantRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // warrantAvailable Field Functions 
    bool hasWarrantAvailable() const { return this->warrantAvailable_ != nullptr;};
    void deleteWarrantAvailable() { this->warrantAvailable_ = nullptr;};
    inline int32_t getWarrantAvailable() const { DARABONBA_PTR_GET_DEFAULT(warrantAvailable_, 0) };
    inline CreateAccessWarrantRequest& setWarrantAvailable(int32_t warrantAvailable) { DARABONBA_PTR_SET_VALUE(warrantAvailable_, warrantAvailable) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<string> requestSign_ {};
    shared_ptr<string> timestamp_ {};
    shared_ptr<string> userClientIp_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<int32_t> warrantAvailable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
