// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPPLAYKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPPLAYKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAppPlayKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppPlayKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppPlayKey, appPlayKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppPlayKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPlayKey, appPlayKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAppPlayKeyResponseBody() = default ;
    GetAppPlayKeyResponseBody(const GetAppPlayKeyResponseBody &) = default ;
    GetAppPlayKeyResponseBody(GetAppPlayKeyResponseBody &&) = default ;
    GetAppPlayKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppPlayKeyResponseBody() = default ;
    GetAppPlayKeyResponseBody& operator=(const GetAppPlayKeyResponseBody &) = default ;
    GetAppPlayKeyResponseBody& operator=(GetAppPlayKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppPlayKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppPlayKey& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(PlayKey, playKey_);
      };
      friend void from_json(const Darabonba::Json& j, AppPlayKey& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(PlayKey, playKey_);
      };
      AppPlayKey() = default ;
      AppPlayKey(const AppPlayKey &) = default ;
      AppPlayKey(AppPlayKey &&) = default ;
      AppPlayKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppPlayKey() = default ;
      AppPlayKey& operator=(const AppPlayKey &) = default ;
      AppPlayKey& operator=(AppPlayKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->creationTime_ == nullptr && this->modificationTime_ == nullptr && this->playKey_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AppPlayKey& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline AppPlayKey& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline AppPlayKey& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // playKey Field Functions 
      bool hasPlayKey() const { return this->playKey_ != nullptr;};
      void deletePlayKey() { this->playKey_ = nullptr;};
      inline string getPlayKey() const { DARABONBA_PTR_GET_DEFAULT(playKey_, "") };
      inline AppPlayKey& setPlayKey(string playKey) { DARABONBA_PTR_SET_VALUE(playKey_, playKey) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> modificationTime_ {};
      shared_ptr<string> playKey_ {};
    };

    virtual bool empty() const override { return this->appPlayKey_ == nullptr
        && this->requestId_ == nullptr; };
    // appPlayKey Field Functions 
    bool hasAppPlayKey() const { return this->appPlayKey_ != nullptr;};
    void deleteAppPlayKey() { this->appPlayKey_ = nullptr;};
    inline const GetAppPlayKeyResponseBody::AppPlayKey & getAppPlayKey() const { DARABONBA_PTR_GET_CONST(appPlayKey_, GetAppPlayKeyResponseBody::AppPlayKey) };
    inline GetAppPlayKeyResponseBody::AppPlayKey getAppPlayKey() { DARABONBA_PTR_GET(appPlayKey_, GetAppPlayKeyResponseBody::AppPlayKey) };
    inline GetAppPlayKeyResponseBody& setAppPlayKey(const GetAppPlayKeyResponseBody::AppPlayKey & appPlayKey) { DARABONBA_PTR_SET_VALUE(appPlayKey_, appPlayKey) };
    inline GetAppPlayKeyResponseBody& setAppPlayKey(GetAppPlayKeyResponseBody::AppPlayKey && appPlayKey) { DARABONBA_PTR_SET_RVALUE(appPlayKey_, appPlayKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppPlayKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAppPlayKeyResponseBody::AppPlayKey> appPlayKey_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
