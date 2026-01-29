// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPERMISSIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPERMISSIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPermissionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPermissionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPermissionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPermissionListResponseBody() = default ;
    QueryPermissionListResponseBody(const QueryPermissionListResponseBody &) = default ;
    QueryPermissionListResponseBody(QueryPermissionListResponseBody &&) = default ;
    QueryPermissionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPermissionListResponseBody() = default ;
    QueryPermissionListResponseBody& operator=(const QueryPermissionListResponseBody &) = default ;
    QueryPermissionListResponseBody& operator=(QueryPermissionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(MasterId, masterId_);
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
        DARABONBA_PTR_TO_JSON(PermissionList, permissionList_);
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        DARABONBA_PTR_TO_JSON(SetupTime, setupTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(MasterId, masterId_);
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
        DARABONBA_PTR_FROM_JSON(PermissionList, permissionList_);
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        DARABONBA_PTR_FROM_JSON(SetupTime, setupTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PermissionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PermissionList& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(PermissionCode, permissionCode_);
          DARABONBA_PTR_TO_JSON(PermissionName, permissionName_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, PermissionList& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(PermissionCode, permissionCode_);
          DARABONBA_PTR_FROM_JSON(PermissionName, permissionName_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        PermissionList() = default ;
        PermissionList(const PermissionList &) = default ;
        PermissionList(PermissionList &&) = default ;
        PermissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PermissionList() = default ;
        PermissionList& operator=(const PermissionList &) = default ;
        PermissionList& operator=(PermissionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->permissionCode_ == nullptr && this->permissionName_ == nullptr && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline PermissionList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // permissionCode Field Functions 
        bool hasPermissionCode() const { return this->permissionCode_ != nullptr;};
        void deletePermissionCode() { this->permissionCode_ = nullptr;};
        inline string getPermissionCode() const { DARABONBA_PTR_GET_DEFAULT(permissionCode_, "") };
        inline PermissionList& setPermissionCode(string permissionCode) { DARABONBA_PTR_SET_VALUE(permissionCode_, permissionCode) };


        // permissionName Field Functions 
        bool hasPermissionName() const { return this->permissionName_ != nullptr;};
        void deletePermissionName() { this->permissionName_ = nullptr;};
        inline string getPermissionName() const { DARABONBA_PTR_GET_DEFAULT(permissionName_, "") };
        inline PermissionList& setPermissionName(string permissionName) { DARABONBA_PTR_SET_VALUE(permissionName_, permissionName) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline PermissionList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The time when the permission expired. If no value is returned, the permission is still valid. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. For example, 2016-05-23T12:00:00Z indicates that the permission expired at 20:00:00 on May 23, 2016 (UTC+8).
        shared_ptr<string> endTime_ {};
        // The code of the permission.
        shared_ptr<string> permissionCode_ {};
        // The name of the permission.
        shared_ptr<string> permissionName_ {};
        // The time when the permission took effect. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. For example, 2016-05-23T12:00:00Z indicates that the permission took effect at 20:00:00 on May 23, 2016 (UTC+8).
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->masterId_ == nullptr && this->memberId_ == nullptr && this->permissionList_ == nullptr && this->relationType_ == nullptr && this->setupTime_ == nullptr
        && this->startTime_ == nullptr && this->state_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // masterId Field Functions 
      bool hasMasterId() const { return this->masterId_ != nullptr;};
      void deleteMasterId() { this->masterId_ = nullptr;};
      inline int64_t getMasterId() const { DARABONBA_PTR_GET_DEFAULT(masterId_, 0L) };
      inline Data& setMasterId(int64_t masterId) { DARABONBA_PTR_SET_VALUE(masterId_, masterId) };


      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline int64_t getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, 0L) };
      inline Data& setMemberId(int64_t memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


      // permissionList Field Functions 
      bool hasPermissionList() const { return this->permissionList_ != nullptr;};
      void deletePermissionList() { this->permissionList_ = nullptr;};
      inline const vector<Data::PermissionList> & getPermissionList() const { DARABONBA_PTR_GET_CONST(permissionList_, vector<Data::PermissionList>) };
      inline vector<Data::PermissionList> getPermissionList() { DARABONBA_PTR_GET(permissionList_, vector<Data::PermissionList>) };
      inline Data& setPermissionList(const vector<Data::PermissionList> & permissionList) { DARABONBA_PTR_SET_VALUE(permissionList_, permissionList) };
      inline Data& setPermissionList(vector<Data::PermissionList> && permissionList) { DARABONBA_PTR_SET_RVALUE(permissionList_, permissionList) };


      // relationType Field Functions 
      bool hasRelationType() const { return this->relationType_ != nullptr;};
      void deleteRelationType() { this->relationType_ = nullptr;};
      inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
      inline Data& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      // setupTime Field Functions 
      bool hasSetupTime() const { return this->setupTime_ != nullptr;};
      void deleteSetupTime() { this->setupTime_ = nullptr;};
      inline string getSetupTime() const { DARABONBA_PTR_GET_DEFAULT(setupTime_, "") };
      inline Data& setSetupTime(string setupTime) { DARABONBA_PTR_SET_VALUE(setupTime_, setupTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The time when the relationship expired. If no value is returned, the relationship is still valid.
      shared_ptr<string> endTime_ {};
      // The ID of the management account.
      shared_ptr<int64_t> masterId_ {};
      // The ID of the member.
      shared_ptr<int64_t> memberId_ {};
      // The list of permissions.
      shared_ptr<vector<Data::PermissionList>> permissionList_ {};
      // The type of the relationship. Valid values: FinancialManagement and FinancialTrusteeship.
      shared_ptr<string> relationType_ {};
      // The time when the relationship was established. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. For example, 2016-05-23T12:00:00Z indicates that the relationship was established at 20:00:00 on May 23, 2016 (UTC+8).
      shared_ptr<string> setupTime_ {};
      // The time when the relationship took effect. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. For example, 2016-05-23T12:00:00Z indicates that the relationship took effect at 20:00:00 on May 23, 2016 (UTC+8).
      shared_ptr<string> startTime_ {};
      // The status of the relationship. For more information about valid values of this parameter, see the enumeration values of the RelationshipStatusEnum type in the following table.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPermissionListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryPermissionListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryPermissionListResponseBody::Data) };
    inline QueryPermissionListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryPermissionListResponseBody::Data) };
    inline QueryPermissionListResponseBody& setData(const QueryPermissionListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPermissionListResponseBody& setData(QueryPermissionListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryPermissionListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPermissionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPermissionListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryPermissionListResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
