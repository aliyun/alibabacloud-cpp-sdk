// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPPLAYKEYRESPONSEBODYAPPPLAYKEY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPPLAYKEYRESPONSEBODYAPPPLAYKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAppPlayKeyResponseBodyAppPlayKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppPlayKeyResponseBodyAppPlayKey& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(PlayKey, playKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppPlayKeyResponseBodyAppPlayKey& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(PlayKey, playKey_);
    };
    GetAppPlayKeyResponseBodyAppPlayKey() = default ;
    GetAppPlayKeyResponseBodyAppPlayKey(const GetAppPlayKeyResponseBodyAppPlayKey &) = default ;
    GetAppPlayKeyResponseBodyAppPlayKey(GetAppPlayKeyResponseBodyAppPlayKey &&) = default ;
    GetAppPlayKeyResponseBodyAppPlayKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppPlayKeyResponseBodyAppPlayKey() = default ;
    GetAppPlayKeyResponseBodyAppPlayKey& operator=(const GetAppPlayKeyResponseBodyAppPlayKey &) = default ;
    GetAppPlayKeyResponseBodyAppPlayKey& operator=(GetAppPlayKeyResponseBodyAppPlayKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->creationTime_ == nullptr && return this->modificationTime_ == nullptr && return this->playKey_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAppPlayKeyResponseBodyAppPlayKey& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetAppPlayKeyResponseBodyAppPlayKey& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline GetAppPlayKeyResponseBodyAppPlayKey& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // playKey Field Functions 
    bool hasPlayKey() const { return this->playKey_ != nullptr;};
    void deletePlayKey() { this->playKey_ = nullptr;};
    inline string playKey() const { DARABONBA_PTR_GET_DEFAULT(playKey_, "") };
    inline GetAppPlayKeyResponseBodyAppPlayKey& setPlayKey(string playKey) { DARABONBA_PTR_SET_VALUE(playKey_, playKey) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> modificationTime_ = nullptr;
    std::shared_ptr<string> playKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
