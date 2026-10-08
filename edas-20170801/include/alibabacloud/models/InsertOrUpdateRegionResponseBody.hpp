// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTORUPDATEREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSERTORUPDATEREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertOrUpdateRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertOrUpdateRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDefineRegionEntity, userDefineRegionEntity_);
    };
    friend void from_json(const Darabonba::Json& j, InsertOrUpdateRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDefineRegionEntity, userDefineRegionEntity_);
    };
    InsertOrUpdateRegionResponseBody() = default ;
    InsertOrUpdateRegionResponseBody(const InsertOrUpdateRegionResponseBody &) = default ;
    InsertOrUpdateRegionResponseBody(InsertOrUpdateRegionResponseBody &&) = default ;
    InsertOrUpdateRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertOrUpdateRegionResponseBody() = default ;
    InsertOrUpdateRegionResponseBody& operator=(const InsertOrUpdateRegionResponseBody &) = default ;
    InsertOrUpdateRegionResponseBody& operator=(InsertOrUpdateRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserDefineRegionEntity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserDefineRegionEntity& obj) { 
        DARABONBA_PTR_TO_JSON(BelongRegion, belongRegion_);
        DARABONBA_PTR_TO_JSON(DebugEnable, debugEnable_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, UserDefineRegionEntity& obj) { 
        DARABONBA_PTR_FROM_JSON(BelongRegion, belongRegion_);
        DARABONBA_PTR_FROM_JSON(DebugEnable, debugEnable_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      UserDefineRegionEntity() = default ;
      UserDefineRegionEntity(const UserDefineRegionEntity &) = default ;
      UserDefineRegionEntity(UserDefineRegionEntity &&) = default ;
      UserDefineRegionEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserDefineRegionEntity() = default ;
      UserDefineRegionEntity& operator=(const UserDefineRegionEntity &) = default ;
      UserDefineRegionEntity& operator=(UserDefineRegionEntity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->belongRegion_ == nullptr
        && this->debugEnable_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->regionId_ == nullptr && this->regionName_ == nullptr
        && this->userId_ == nullptr; };
      // belongRegion Field Functions 
      bool hasBelongRegion() const { return this->belongRegion_ != nullptr;};
      void deleteBelongRegion() { this->belongRegion_ = nullptr;};
      inline string getBelongRegion() const { DARABONBA_PTR_GET_DEFAULT(belongRegion_, "") };
      inline UserDefineRegionEntity& setBelongRegion(string belongRegion) { DARABONBA_PTR_SET_VALUE(belongRegion_, belongRegion) };


      // debugEnable Field Functions 
      bool hasDebugEnable() const { return this->debugEnable_ != nullptr;};
      void deleteDebugEnable() { this->debugEnable_ = nullptr;};
      inline bool getDebugEnable() const { DARABONBA_PTR_GET_DEFAULT(debugEnable_, false) };
      inline UserDefineRegionEntity& setDebugEnable(bool debugEnable) { DARABONBA_PTR_SET_VALUE(debugEnable_, debugEnable) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UserDefineRegionEntity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UserDefineRegionEntity& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline UserDefineRegionEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline UserDefineRegionEntity& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserDefineRegionEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The ID of the region to which the namespace belongs.
      shared_ptr<string> belongRegion_ {};
      // Indicates whether remote debugging is enabled. Valid values:
      // 
      // - true: Remote debugging is enabled.
      // 
      // - false: Remote debugging is disabled.
      shared_ptr<bool> debugEnable_ {};
      // The description of the namespace.
      shared_ptr<string> description_ {};
      // Indicates whether the namespace is created or modified. If this parameter is left empty or 0 is returned, the namespace is created. Otherwise, the namespace is modified.
      shared_ptr<int64_t> id_ {};
      // The ID of the namespace.
      // 
      // - The ID of a custom namespace is in the `region ID:namespace identifier` format. Example: cn-beijing:tdy218.
      // 
      // - The ID of the default namespace is in the `region ID` format. Example: cn-beijing.
      shared_ptr<string> regionId_ {};
      // The name of the namespace.
      shared_ptr<string> regionName_ {};
      // The ID of the Alibaba Cloud account to which the custom namespace belongs.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->userDefineRegionEntity_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline InsertOrUpdateRegionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsertOrUpdateRegionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsertOrUpdateRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDefineRegionEntity Field Functions 
    bool hasUserDefineRegionEntity() const { return this->userDefineRegionEntity_ != nullptr;};
    void deleteUserDefineRegionEntity() { this->userDefineRegionEntity_ = nullptr;};
    inline const InsertOrUpdateRegionResponseBody::UserDefineRegionEntity & getUserDefineRegionEntity() const { DARABONBA_PTR_GET_CONST(userDefineRegionEntity_, InsertOrUpdateRegionResponseBody::UserDefineRegionEntity) };
    inline InsertOrUpdateRegionResponseBody::UserDefineRegionEntity getUserDefineRegionEntity() { DARABONBA_PTR_GET(userDefineRegionEntity_, InsertOrUpdateRegionResponseBody::UserDefineRegionEntity) };
    inline InsertOrUpdateRegionResponseBody& setUserDefineRegionEntity(const InsertOrUpdateRegionResponseBody::UserDefineRegionEntity & userDefineRegionEntity) { DARABONBA_PTR_SET_VALUE(userDefineRegionEntity_, userDefineRegionEntity) };
    inline InsertOrUpdateRegionResponseBody& setUserDefineRegionEntity(InsertOrUpdateRegionResponseBody::UserDefineRegionEntity && userDefineRegionEntity) { DARABONBA_PTR_SET_RVALUE(userDefineRegionEntity_, userDefineRegionEntity) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the custom namespace.
    shared_ptr<InsertOrUpdateRegionResponseBody::UserDefineRegionEntity> userDefineRegionEntity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
