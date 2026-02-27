// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetServiceLinkedRoleDeletionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceLinkedRoleDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceLinkedRoleDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetServiceLinkedRoleDeletionStatusResponseBody() = default ;
    GetServiceLinkedRoleDeletionStatusResponseBody(const GetServiceLinkedRoleDeletionStatusResponseBody &) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBody(GetServiceLinkedRoleDeletionStatusResponseBody &&) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceLinkedRoleDeletionStatusResponseBody() = default ;
    GetServiceLinkedRoleDeletionStatusResponseBody& operator=(const GetServiceLinkedRoleDeletionStatusResponseBody &) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBody& operator=(GetServiceLinkedRoleDeletionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Reason : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Reason& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RoleUsages, roleUsages_);
      };
      friend void from_json(const Darabonba::Json& j, Reason& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RoleUsages, roleUsages_);
      };
      Reason() = default ;
      Reason(const Reason &) = default ;
      Reason(Reason &&) = default ;
      Reason(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Reason() = default ;
      Reason& operator=(const Reason &) = default ;
      Reason& operator=(Reason &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RoleUsages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoleUsages& obj) { 
          DARABONBA_PTR_TO_JSON(RoleUsage, roleUsage_);
        };
        friend void from_json(const Darabonba::Json& j, RoleUsages& obj) { 
          DARABONBA_PTR_FROM_JSON(RoleUsage, roleUsage_);
        };
        RoleUsages() = default ;
        RoleUsages(const RoleUsages &) = default ;
        RoleUsages(RoleUsages &&) = default ;
        RoleUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoleUsages() = default ;
        RoleUsages& operator=(const RoleUsages &) = default ;
        RoleUsages& operator=(RoleUsages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RoleUsage : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoleUsage& obj) { 
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(Resources, resources_);
          };
          friend void from_json(const Darabonba::Json& j, RoleUsage& obj) { 
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(Resources, resources_);
          };
          RoleUsage() = default ;
          RoleUsage(const RoleUsage &) = default ;
          RoleUsage(RoleUsage &&) = default ;
          RoleUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoleUsage() = default ;
          RoleUsage& operator=(const RoleUsage &) = default ;
          RoleUsage& operator=(RoleUsage &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Resources : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Resources& obj) { 
              DARABONBA_PTR_TO_JSON(Resource, resource_);
            };
            friend void from_json(const Darabonba::Json& j, Resources& obj) { 
              DARABONBA_PTR_FROM_JSON(Resource, resource_);
            };
            Resources() = default ;
            Resources(const Resources &) = default ;
            Resources(Resources &&) = default ;
            Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Resources() = default ;
            Resources& operator=(const Resources &) = default ;
            Resources& operator=(Resources &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->resource_ == nullptr; };
            // resource Field Functions 
            bool hasResource() const { return this->resource_ != nullptr;};
            void deleteResource() { this->resource_ = nullptr;};
            inline const vector<string> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<string>) };
            inline vector<string> getResource() { DARABONBA_PTR_GET(resource_, vector<string>) };
            inline Resources& setResource(const vector<string> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
            inline Resources& setResource(vector<string> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


          protected:
            shared_ptr<vector<string>> resource_ {};
          };

          virtual bool empty() const override { return this->region_ == nullptr
        && this->resources_ == nullptr; };
          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline RoleUsage& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // resources Field Functions 
          bool hasResources() const { return this->resources_ != nullptr;};
          void deleteResources() { this->resources_ = nullptr;};
          inline const RoleUsage::Resources & getResources() const { DARABONBA_PTR_GET_CONST(resources_, RoleUsage::Resources) };
          inline RoleUsage::Resources getResources() { DARABONBA_PTR_GET(resources_, RoleUsage::Resources) };
          inline RoleUsage& setResources(const RoleUsage::Resources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
          inline RoleUsage& setResources(RoleUsage::Resources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


        protected:
          shared_ptr<string> region_ {};
          shared_ptr<RoleUsage::Resources> resources_ {};
        };

        virtual bool empty() const override { return this->roleUsage_ == nullptr; };
        // roleUsage Field Functions 
        bool hasRoleUsage() const { return this->roleUsage_ != nullptr;};
        void deleteRoleUsage() { this->roleUsage_ = nullptr;};
        inline const vector<RoleUsages::RoleUsage> & getRoleUsage() const { DARABONBA_PTR_GET_CONST(roleUsage_, vector<RoleUsages::RoleUsage>) };
        inline vector<RoleUsages::RoleUsage> getRoleUsage() { DARABONBA_PTR_GET(roleUsage_, vector<RoleUsages::RoleUsage>) };
        inline RoleUsages& setRoleUsage(const vector<RoleUsages::RoleUsage> & roleUsage) { DARABONBA_PTR_SET_VALUE(roleUsage_, roleUsage) };
        inline RoleUsages& setRoleUsage(vector<RoleUsages::RoleUsage> && roleUsage) { DARABONBA_PTR_SET_RVALUE(roleUsage_, roleUsage) };


      protected:
        shared_ptr<vector<RoleUsages::RoleUsage>> roleUsage_ {};
      };

      virtual bool empty() const override { return this->message_ == nullptr
        && this->roleUsages_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Reason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // roleUsages Field Functions 
      bool hasRoleUsages() const { return this->roleUsages_ != nullptr;};
      void deleteRoleUsages() { this->roleUsages_ = nullptr;};
      inline const Reason::RoleUsages & getRoleUsages() const { DARABONBA_PTR_GET_CONST(roleUsages_, Reason::RoleUsages) };
      inline Reason::RoleUsages getRoleUsages() { DARABONBA_PTR_GET(roleUsages_, Reason::RoleUsages) };
      inline Reason& setRoleUsages(const Reason::RoleUsages & roleUsages) { DARABONBA_PTR_SET_VALUE(roleUsages_, roleUsages) };
      inline Reason& setRoleUsages(Reason::RoleUsages && roleUsages) { DARABONBA_PTR_SET_RVALUE(roleUsages_, roleUsages) };


    protected:
      // The failure information.
      shared_ptr<string> message_ {};
      shared_ptr<Reason::RoleUsages> roleUsages_ {};
    };

    virtual bool empty() const override { return this->reason_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline const GetServiceLinkedRoleDeletionStatusResponseBody::Reason & getReason() const { DARABONBA_PTR_GET_CONST(reason_, GetServiceLinkedRoleDeletionStatusResponseBody::Reason) };
    inline GetServiceLinkedRoleDeletionStatusResponseBody::Reason getReason() { DARABONBA_PTR_GET(reason_, GetServiceLinkedRoleDeletionStatusResponseBody::Reason) };
    inline GetServiceLinkedRoleDeletionStatusResponseBody& setReason(const GetServiceLinkedRoleDeletionStatusResponseBody::Reason & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
    inline GetServiceLinkedRoleDeletionStatusResponseBody& setReason(GetServiceLinkedRoleDeletionStatusResponseBody::Reason && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceLinkedRoleDeletionStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceLinkedRoleDeletionStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The cause for the failure of the deletion task.
    shared_ptr<GetServiceLinkedRoleDeletionStatusResponseBody::Reason> reason_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the task.
    // 
    // *   SUCCEEDED
    // *   IN_PROGRESS
    // *   FAILED
    // *   NOT_STARTED
    // *   INTERNAL_ERROR
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
