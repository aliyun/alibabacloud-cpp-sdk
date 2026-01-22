// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InProtocol, inProtocol_);
      DARABONBA_PTR_TO_JSON(LazyPull, lazyPull_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutProtocol, outProtocol_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlayDomain, playDomain_);
      DARABONBA_PTR_TO_JSON(PushDomain, pushDomain_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InProtocol, inProtocol_);
      DARABONBA_PTR_FROM_JSON(LazyPull, lazyPull_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutProtocol, outProtocol_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlayDomain, playDomain_);
      DARABONBA_PTR_FROM_JSON(PushDomain, pushDomain_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    CreateGroupRequest() = default ;
    CreateGroupRequest(const CreateGroupRequest &) = default ;
    CreateGroupRequest(CreateGroupRequest &&) = default ;
    CreateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupRequest() = default ;
    CreateGroupRequest& operator=(const CreateGroupRequest &) = default ;
    CreateGroupRequest& operator=(CreateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && this->callback_ == nullptr && this->description_ == nullptr && this->inProtocol_ == nullptr && this->lazyPull_ == nullptr && this->name_ == nullptr
        && this->outProtocol_ == nullptr && this->ownerId_ == nullptr && this->playDomain_ == nullptr && this->pushDomain_ == nullptr && this->region_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline CreateGroupRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline string getCallback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
    inline CreateGroupRequest& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inProtocol Field Functions 
    bool hasInProtocol() const { return this->inProtocol_ != nullptr;};
    void deleteInProtocol() { this->inProtocol_ = nullptr;};
    inline string getInProtocol() const { DARABONBA_PTR_GET_DEFAULT(inProtocol_, "") };
    inline CreateGroupRequest& setInProtocol(string inProtocol) { DARABONBA_PTR_SET_VALUE(inProtocol_, inProtocol) };


    // lazyPull Field Functions 
    bool hasLazyPull() const { return this->lazyPull_ != nullptr;};
    void deleteLazyPull() { this->lazyPull_ = nullptr;};
    inline bool getLazyPull() const { DARABONBA_PTR_GET_DEFAULT(lazyPull_, false) };
    inline CreateGroupRequest& setLazyPull(bool lazyPull) { DARABONBA_PTR_SET_VALUE(lazyPull_, lazyPull) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outProtocol Field Functions 
    bool hasOutProtocol() const { return this->outProtocol_ != nullptr;};
    void deleteOutProtocol() { this->outProtocol_ = nullptr;};
    inline string getOutProtocol() const { DARABONBA_PTR_GET_DEFAULT(outProtocol_, "") };
    inline CreateGroupRequest& setOutProtocol(string outProtocol) { DARABONBA_PTR_SET_VALUE(outProtocol_, outProtocol) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // playDomain Field Functions 
    bool hasPlayDomain() const { return this->playDomain_ != nullptr;};
    void deletePlayDomain() { this->playDomain_ = nullptr;};
    inline string getPlayDomain() const { DARABONBA_PTR_GET_DEFAULT(playDomain_, "") };
    inline CreateGroupRequest& setPlayDomain(string playDomain) { DARABONBA_PTR_SET_VALUE(playDomain_, playDomain) };


    // pushDomain Field Functions 
    bool hasPushDomain() const { return this->pushDomain_ != nullptr;};
    void deletePushDomain() { this->pushDomain_ = nullptr;};
    inline string getPushDomain() const { DARABONBA_PTR_GET_DEFAULT(pushDomain_, "") };
    inline CreateGroupRequest& setPushDomain(string pushDomain) { DARABONBA_PTR_SET_VALUE(pushDomain_, pushDomain) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateGroupRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    shared_ptr<string> app_ {};
    shared_ptr<string> callback_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> inProtocol_ {};
    shared_ptr<bool> lazyPull_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> outProtocol_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> playDomain_ {};
    shared_ptr<string> pushDomain_ {};
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
