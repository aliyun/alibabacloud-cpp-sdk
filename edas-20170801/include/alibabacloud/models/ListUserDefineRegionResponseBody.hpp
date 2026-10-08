// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEFINEREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEFINEREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListUserDefineRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDefineRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDefineRegionList, userDefineRegionList_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDefineRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDefineRegionList, userDefineRegionList_);
    };
    ListUserDefineRegionResponseBody() = default ;
    ListUserDefineRegionResponseBody(const ListUserDefineRegionResponseBody &) = default ;
    ListUserDefineRegionResponseBody(ListUserDefineRegionResponseBody &&) = default ;
    ListUserDefineRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDefineRegionResponseBody() = default ;
    ListUserDefineRegionResponseBody& operator=(const ListUserDefineRegionResponseBody &) = default ;
    ListUserDefineRegionResponseBody& operator=(ListUserDefineRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserDefineRegionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserDefineRegionList& obj) { 
        DARABONBA_PTR_TO_JSON(UserDefineRegionEntity, userDefineRegionEntity_);
      };
      friend void from_json(const Darabonba::Json& j, UserDefineRegionList& obj) { 
        DARABONBA_PTR_FROM_JSON(UserDefineRegionEntity, userDefineRegionEntity_);
      };
      UserDefineRegionList() = default ;
      UserDefineRegionList(const UserDefineRegionList &) = default ;
      UserDefineRegionList(UserDefineRegionList &&) = default ;
      UserDefineRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserDefineRegionList() = default ;
      UserDefineRegionList& operator=(const UserDefineRegionList &) = default ;
      UserDefineRegionList& operator=(UserDefineRegionList &&) = default ;
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
          DARABONBA_PTR_TO_JSON(MseInstanceId, mseInstanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RegionName, regionName_);
          DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, UserDefineRegionEntity& obj) { 
          DARABONBA_PTR_FROM_JSON(BelongRegion, belongRegion_);
          DARABONBA_PTR_FROM_JSON(DebugEnable, debugEnable_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MseInstanceId, mseInstanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
          DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
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
        && this->debugEnable_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->mseInstanceId_ == nullptr && this->regionId_ == nullptr
        && this->regionName_ == nullptr && this->registryType_ == nullptr && this->userId_ == nullptr; };
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


        // mseInstanceId Field Functions 
        bool hasMseInstanceId() const { return this->mseInstanceId_ != nullptr;};
        void deleteMseInstanceId() { this->mseInstanceId_ = nullptr;};
        inline string getMseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mseInstanceId_, "") };
        inline UserDefineRegionEntity& setMseInstanceId(string mseInstanceId) { DARABONBA_PTR_SET_VALUE(mseInstanceId_, mseInstanceId) };


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


        // registryType Field Functions 
        bool hasRegistryType() const { return this->registryType_ != nullptr;};
        void deleteRegistryType() { this->registryType_ = nullptr;};
        inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
        inline UserDefineRegionEntity& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserDefineRegionEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> belongRegion_ {};
        shared_ptr<bool> debugEnable_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> mseInstanceId_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> regionName_ {};
        shared_ptr<string> registryType_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->userDefineRegionEntity_ == nullptr; };
      // userDefineRegionEntity Field Functions 
      bool hasUserDefineRegionEntity() const { return this->userDefineRegionEntity_ != nullptr;};
      void deleteUserDefineRegionEntity() { this->userDefineRegionEntity_ = nullptr;};
      inline const vector<UserDefineRegionList::UserDefineRegionEntity> & getUserDefineRegionEntity() const { DARABONBA_PTR_GET_CONST(userDefineRegionEntity_, vector<UserDefineRegionList::UserDefineRegionEntity>) };
      inline vector<UserDefineRegionList::UserDefineRegionEntity> getUserDefineRegionEntity() { DARABONBA_PTR_GET(userDefineRegionEntity_, vector<UserDefineRegionList::UserDefineRegionEntity>) };
      inline UserDefineRegionList& setUserDefineRegionEntity(const vector<UserDefineRegionList::UserDefineRegionEntity> & userDefineRegionEntity) { DARABONBA_PTR_SET_VALUE(userDefineRegionEntity_, userDefineRegionEntity) };
      inline UserDefineRegionList& setUserDefineRegionEntity(vector<UserDefineRegionList::UserDefineRegionEntity> && userDefineRegionEntity) { DARABONBA_PTR_SET_RVALUE(userDefineRegionEntity_, userDefineRegionEntity) };


    protected:
      shared_ptr<vector<UserDefineRegionList::UserDefineRegionEntity>> userDefineRegionEntity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->userDefineRegionList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListUserDefineRegionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUserDefineRegionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserDefineRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDefineRegionList Field Functions 
    bool hasUserDefineRegionList() const { return this->userDefineRegionList_ != nullptr;};
    void deleteUserDefineRegionList() { this->userDefineRegionList_ = nullptr;};
    inline const ListUserDefineRegionResponseBody::UserDefineRegionList & getUserDefineRegionList() const { DARABONBA_PTR_GET_CONST(userDefineRegionList_, ListUserDefineRegionResponseBody::UserDefineRegionList) };
    inline ListUserDefineRegionResponseBody::UserDefineRegionList getUserDefineRegionList() { DARABONBA_PTR_GET(userDefineRegionList_, ListUserDefineRegionResponseBody::UserDefineRegionList) };
    inline ListUserDefineRegionResponseBody& setUserDefineRegionList(const ListUserDefineRegionResponseBody::UserDefineRegionList & userDefineRegionList) { DARABONBA_PTR_SET_VALUE(userDefineRegionList_, userDefineRegionList) };
    inline ListUserDefineRegionResponseBody& setUserDefineRegionList(ListUserDefineRegionResponseBody::UserDefineRegionList && userDefineRegionList) { DARABONBA_PTR_SET_RVALUE(userDefineRegionList_, userDefineRegionList) };


  protected:
    // The status of the API call or a POP error code.
    shared_ptr<int32_t> code_ {};
    // Additional information.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListUserDefineRegionResponseBody::UserDefineRegionList> userDefineRegionList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
