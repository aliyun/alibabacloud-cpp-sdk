// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHMODIFYENTITLEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHMODIFYENTITLEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class BatchModifyEntitlementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchModifyEntitlementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entitlements, entitlements_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchModifyEntitlementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entitlements, entitlements_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchModifyEntitlementResponseBody() = default ;
    BatchModifyEntitlementResponseBody(const BatchModifyEntitlementResponseBody &) = default ;
    BatchModifyEntitlementResponseBody(BatchModifyEntitlementResponseBody &&) = default ;
    BatchModifyEntitlementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchModifyEntitlementResponseBody() = default ;
    BatchModifyEntitlementResponseBody& operator=(const BatchModifyEntitlementResponseBody &) = default ;
    BatchModifyEntitlementResponseBody& operator=(BatchModifyEntitlementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entitlements : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entitlements& obj) { 
        DARABONBA_PTR_TO_JSON(AssignModels, assignModels_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Entitlements& obj) { 
        DARABONBA_PTR_FROM_JSON(AssignModels, assignModels_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Entitlements() = default ;
      Entitlements(const Entitlements &) = default ;
      Entitlements(Entitlements &&) = default ;
      Entitlements(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entitlements() = default ;
      Entitlements& operator=(const Entitlements &) = default ;
      Entitlements& operator=(Entitlements &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AssignModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssignModels& obj) { 
          DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
          DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
          DARABONBA_PTR_TO_JSON(InnerStatus, innerStatus_);
        };
        friend void from_json(const Darabonba::Json& j, AssignModels& obj) { 
          DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
          DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
          DARABONBA_PTR_FROM_JSON(InnerStatus, innerStatus_);
        };
        AssignModels() = default ;
        AssignModels(const AssignModels &) = default ;
        AssignModels(AssignModels &&) = default ;
        AssignModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssignModels() = default ;
        AssignModels& operator=(const AssignModels &) = default ;
        AssignModels& operator=(AssignModels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->endUserIds_ == nullptr && this->innerStatus_ == nullptr; };
        // desktopId Field Functions 
        bool hasDesktopId() const { return this->desktopId_ != nullptr;};
        void deleteDesktopId() { this->desktopId_ = nullptr;};
        inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
        inline AssignModels& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


        // endUserIds Field Functions 
        bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
        void deleteEndUserIds() { this->endUserIds_ = nullptr;};
        inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
        inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
        inline AssignModels& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
        inline AssignModels& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


        // innerStatus Field Functions 
        bool hasInnerStatus() const { return this->innerStatus_ != nullptr;};
        void deleteInnerStatus() { this->innerStatus_ = nullptr;};
        inline string getInnerStatus() const { DARABONBA_PTR_GET_DEFAULT(innerStatus_, "") };
        inline AssignModels& setInnerStatus(string innerStatus) { DARABONBA_PTR_SET_VALUE(innerStatus_, innerStatus) };


      protected:
        // The cloud computer ID.
        shared_ptr<string> desktopId_ {};
        // The authorized user IDs for the cloud computer.
        shared_ptr<vector<string>> endUserIds_ {};
        // The assign result for each cloud computer.
        // 
        // Valid values:
        // 
        // *   FAILED
        // *   NOT_STARTED
        // *   STARTED
        // *   PROCESSING
        // *   FINISHED
        shared_ptr<string> innerStatus_ {};
      };

      virtual bool empty() const override { return this->assignModels_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr; };
      // assignModels Field Functions 
      bool hasAssignModels() const { return this->assignModels_ != nullptr;};
      void deleteAssignModels() { this->assignModels_ = nullptr;};
      inline const vector<Entitlements::AssignModels> & getAssignModels() const { DARABONBA_PTR_GET_CONST(assignModels_, vector<Entitlements::AssignModels>) };
      inline vector<Entitlements::AssignModels> getAssignModels() { DARABONBA_PTR_GET(assignModels_, vector<Entitlements::AssignModels>) };
      inline Entitlements& setAssignModels(const vector<Entitlements::AssignModels> & assignModels) { DARABONBA_PTR_SET_VALUE(assignModels_, assignModels) };
      inline Entitlements& setAssignModels(vector<Entitlements::AssignModels> && assignModels) { DARABONBA_PTR_SET_RVALUE(assignModels_, assignModels) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Entitlements& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Entitlements& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<vector<Entitlements::AssignModels>> assignModels_ {};
      // The result.
      // 
      // Valid values:
      // 
      // *   FAILED
      // *   NOT_STARTED
      // *   STARTED
      // *   PROCESSING
      // *   FINISHED
      shared_ptr<string> status_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->entitlements_ == nullptr
        && this->requestId_ == nullptr; };
    // entitlements Field Functions 
    bool hasEntitlements() const { return this->entitlements_ != nullptr;};
    void deleteEntitlements() { this->entitlements_ = nullptr;};
    inline const BatchModifyEntitlementResponseBody::Entitlements & getEntitlements() const { DARABONBA_PTR_GET_CONST(entitlements_, BatchModifyEntitlementResponseBody::Entitlements) };
    inline BatchModifyEntitlementResponseBody::Entitlements getEntitlements() { DARABONBA_PTR_GET(entitlements_, BatchModifyEntitlementResponseBody::Entitlements) };
    inline BatchModifyEntitlementResponseBody& setEntitlements(const BatchModifyEntitlementResponseBody::Entitlements & entitlements) { DARABONBA_PTR_SET_VALUE(entitlements_, entitlements) };
    inline BatchModifyEntitlementResponseBody& setEntitlements(BatchModifyEntitlementResponseBody::Entitlements && entitlements) { DARABONBA_PTR_SET_RVALUE(entitlements_, entitlements) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchModifyEntitlementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<BatchModifyEntitlementResponseBody::Entitlements> entitlements_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
