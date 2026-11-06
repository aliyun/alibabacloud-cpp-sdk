// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESCENEKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATESCENEKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GenerateSceneKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateSceneKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SceneUrl, sceneUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateSceneKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SceneUrl, sceneUrl_);
    };
    GenerateSceneKeyResponseBody() = default ;
    GenerateSceneKeyResponseBody(const GenerateSceneKeyResponseBody &) = default ;
    GenerateSceneKeyResponseBody(GenerateSceneKeyResponseBody &&) = default ;
    GenerateSceneKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateSceneKeyResponseBody() = default ;
    GenerateSceneKeyResponseBody& operator=(const GenerateSceneKeyResponseBody &) = default ;
    GenerateSceneKeyResponseBody& operator=(GenerateSceneKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseUrl_ == nullptr
        && this->expireTime_ == nullptr && this->key_ == nullptr && this->requestId_ == nullptr && this->sceneUrl_ == nullptr; };
    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline GenerateSceneKeyResponseBody& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GenerateSceneKeyResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GenerateSceneKeyResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateSceneKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneUrl Field Functions 
    bool hasSceneUrl() const { return this->sceneUrl_ != nullptr;};
    void deleteSceneUrl() { this->sceneUrl_ = nullptr;};
    inline string getSceneUrl() const { DARABONBA_PTR_GET_DEFAULT(sceneUrl_, "") };
    inline GenerateSceneKeyResponseBody& setSceneUrl(string sceneUrl) { DARABONBA_PTR_SET_VALUE(sceneUrl_, sceneUrl) };


  protected:
    // The Agent Gateway endpoint, which includes the cluster offset mapping port. This parameter is returned only for desktop scenarios.
    shared_ptr<string> baseUrl_ {};
    // The expiration time of the key.
    shared_ptr<string> expireTime_ {};
    // The scenario access key.
    shared_ptr<string> key_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scenario access URL.
    shared_ptr<string> sceneUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
