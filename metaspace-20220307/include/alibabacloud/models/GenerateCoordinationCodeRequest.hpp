// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECOORDINATIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECOORDINATIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20220307
{
namespace Models
{
  class GenerateCoordinationCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCoordinationCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCoordinationCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    GenerateCoordinationCodeRequest() = default ;
    GenerateCoordinationCodeRequest(const GenerateCoordinationCodeRequest &) = default ;
    GenerateCoordinationCodeRequest(GenerateCoordinationCodeRequest &&) = default ;
    GenerateCoordinationCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCoordinationCodeRequest() = default ;
    GenerateCoordinationCodeRequest& operator=(const GenerateCoordinationCodeRequest &) = default ;
    GenerateCoordinationCodeRequest& operator=(GenerateCoordinationCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loginRegionId_ == nullptr
        && return this->loginToken_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceRegionId_ == nullptr && return this->resourceType_ == nullptr
        && return this->sessionId_ == nullptr; };
    // loginRegionId Field Functions 
    bool hasLoginRegionId() const { return this->loginRegionId_ != nullptr;};
    void deleteLoginRegionId() { this->loginRegionId_ = nullptr;};
    inline string loginRegionId() const { DARABONBA_PTR_GET_DEFAULT(loginRegionId_, "") };
    inline GenerateCoordinationCodeRequest& setLoginRegionId(string loginRegionId) { DARABONBA_PTR_SET_VALUE(loginRegionId_, loginRegionId) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline GenerateCoordinationCodeRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GenerateCoordinationCodeRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GenerateCoordinationCodeRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline GenerateCoordinationCodeRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GenerateCoordinationCodeRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GenerateCoordinationCodeRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> loginRegionId_ = nullptr;
    std::shared_ptr<string> loginToken_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Metaspace20220307
#endif
