// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHINSTANCERAMROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHINSTANCERAMROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DetachInstanceRamRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachInstanceRamRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetachInstanceRamRoleResults, detachInstanceRamRoleResults_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DetachInstanceRamRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetachInstanceRamRoleResults, detachInstanceRamRoleResults_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DetachInstanceRamRoleResponseBody() = default ;
    DetachInstanceRamRoleResponseBody(const DetachInstanceRamRoleResponseBody &) = default ;
    DetachInstanceRamRoleResponseBody(DetachInstanceRamRoleResponseBody &&) = default ;
    DetachInstanceRamRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachInstanceRamRoleResponseBody() = default ;
    DetachInstanceRamRoleResponseBody& operator=(const DetachInstanceRamRoleResponseBody &) = default ;
    DetachInstanceRamRoleResponseBody& operator=(DetachInstanceRamRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetachInstanceRamRoleResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetachInstanceRamRoleResults& obj) { 
        DARABONBA_PTR_TO_JSON(DetachInstanceRamRoleResult, detachInstanceRamRoleResult_);
      };
      friend void from_json(const Darabonba::Json& j, DetachInstanceRamRoleResults& obj) { 
        DARABONBA_PTR_FROM_JSON(DetachInstanceRamRoleResult, detachInstanceRamRoleResult_);
      };
      DetachInstanceRamRoleResults() = default ;
      DetachInstanceRamRoleResults(const DetachInstanceRamRoleResults &) = default ;
      DetachInstanceRamRoleResults(DetachInstanceRamRoleResults &&) = default ;
      DetachInstanceRamRoleResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetachInstanceRamRoleResults() = default ;
      DetachInstanceRamRoleResults& operator=(const DetachInstanceRamRoleResults &) = default ;
      DetachInstanceRamRoleResults& operator=(DetachInstanceRamRoleResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DetachInstanceRamRoleResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetachInstanceRamRoleResult& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceRamRoleSets, instanceRamRoleSets_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, DetachInstanceRamRoleResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceRamRoleSets, instanceRamRoleSets_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        DetachInstanceRamRoleResult() = default ;
        DetachInstanceRamRoleResult(const DetachInstanceRamRoleResult &) = default ;
        DetachInstanceRamRoleResult(DetachInstanceRamRoleResult &&) = default ;
        DetachInstanceRamRoleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DetachInstanceRamRoleResult() = default ;
        DetachInstanceRamRoleResult& operator=(const DetachInstanceRamRoleResult &) = default ;
        DetachInstanceRamRoleResult& operator=(DetachInstanceRamRoleResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InstanceRamRoleSets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceRamRoleSets& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceRamRoleSet, instanceRamRoleSet_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceRamRoleSets& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceRamRoleSet, instanceRamRoleSet_);
          };
          InstanceRamRoleSets() = default ;
          InstanceRamRoleSets(const InstanceRamRoleSets &) = default ;
          InstanceRamRoleSets(InstanceRamRoleSets &&) = default ;
          InstanceRamRoleSets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceRamRoleSets() = default ;
          InstanceRamRoleSets& operator=(const InstanceRamRoleSets &) = default ;
          InstanceRamRoleSets& operator=(InstanceRamRoleSets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class InstanceRamRoleSet : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InstanceRamRoleSet& obj) { 
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
            };
            friend void from_json(const Darabonba::Json& j, InstanceRamRoleSet& obj) { 
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
            };
            InstanceRamRoleSet() = default ;
            InstanceRamRoleSet(const InstanceRamRoleSet &) = default ;
            InstanceRamRoleSet(InstanceRamRoleSet &&) = default ;
            InstanceRamRoleSet(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InstanceRamRoleSet() = default ;
            InstanceRamRoleSet& operator=(const InstanceRamRoleSet &) = default ;
            InstanceRamRoleSet& operator=(InstanceRamRoleSet &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ramRoleName_ == nullptr; };
            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline InstanceRamRoleSet& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


            // ramRoleName Field Functions 
            bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
            void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
            inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
            inline InstanceRamRoleSet& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


          protected:
            // The ID of the ECS instance.
            shared_ptr<string> instanceId_ {};
            // The name of the instance RAM role.
            shared_ptr<string> ramRoleName_ {};
          };

          virtual bool empty() const override { return this->instanceRamRoleSet_ == nullptr; };
          // instanceRamRoleSet Field Functions 
          bool hasInstanceRamRoleSet() const { return this->instanceRamRoleSet_ != nullptr;};
          void deleteInstanceRamRoleSet() { this->instanceRamRoleSet_ = nullptr;};
          inline const vector<InstanceRamRoleSets::InstanceRamRoleSet> & getInstanceRamRoleSet() const { DARABONBA_PTR_GET_CONST(instanceRamRoleSet_, vector<InstanceRamRoleSets::InstanceRamRoleSet>) };
          inline vector<InstanceRamRoleSets::InstanceRamRoleSet> getInstanceRamRoleSet() { DARABONBA_PTR_GET(instanceRamRoleSet_, vector<InstanceRamRoleSets::InstanceRamRoleSet>) };
          inline InstanceRamRoleSets& setInstanceRamRoleSet(const vector<InstanceRamRoleSets::InstanceRamRoleSet> & instanceRamRoleSet) { DARABONBA_PTR_SET_VALUE(instanceRamRoleSet_, instanceRamRoleSet) };
          inline InstanceRamRoleSets& setInstanceRamRoleSet(vector<InstanceRamRoleSets::InstanceRamRoleSet> && instanceRamRoleSet) { DARABONBA_PTR_SET_RVALUE(instanceRamRoleSet_, instanceRamRoleSet) };


        protected:
          shared_ptr<vector<InstanceRamRoleSets::InstanceRamRoleSet>> instanceRamRoleSet_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceId_ == nullptr && this->instanceRamRoleSets_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline DetachInstanceRamRoleResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline DetachInstanceRamRoleResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceRamRoleSets Field Functions 
        bool hasInstanceRamRoleSets() const { return this->instanceRamRoleSets_ != nullptr;};
        void deleteInstanceRamRoleSets() { this->instanceRamRoleSets_ = nullptr;};
        inline const DetachInstanceRamRoleResult::InstanceRamRoleSets & getInstanceRamRoleSets() const { DARABONBA_PTR_GET_CONST(instanceRamRoleSets_, DetachInstanceRamRoleResult::InstanceRamRoleSets) };
        inline DetachInstanceRamRoleResult::InstanceRamRoleSets getInstanceRamRoleSets() { DARABONBA_PTR_GET(instanceRamRoleSets_, DetachInstanceRamRoleResult::InstanceRamRoleSets) };
        inline DetachInstanceRamRoleResult& setInstanceRamRoleSets(const DetachInstanceRamRoleResult::InstanceRamRoleSets & instanceRamRoleSets) { DARABONBA_PTR_SET_VALUE(instanceRamRoleSets_, instanceRamRoleSets) };
        inline DetachInstanceRamRoleResult& setInstanceRamRoleSets(DetachInstanceRamRoleResult::InstanceRamRoleSets && instanceRamRoleSets) { DARABONBA_PTR_SET_RVALUE(instanceRamRoleSets_, instanceRamRoleSets) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline DetachInstanceRamRoleResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline DetachInstanceRamRoleResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // Indicates whether the instance RAM role was detached. If 200 is returned, the instance RAM role was detached. If any other value is returned, the instance RAM role failed to be detached. For more information, see the "Error codes" section.
        shared_ptr<string> code_ {};
        // The ID of the ECS instance from which you attempted to detach the instance RAM role.
        shared_ptr<string> instanceId_ {};
        // The name of the instance RAM role and the ID of the ECS instance.
        shared_ptr<DetachInstanceRamRoleResult::InstanceRamRoleSets> instanceRamRoleSets_ {};
        // Indicates whether the instance RAM role was detached. If success is returned, the instance RAM role was detached. If any other value is returned, the instance RAM role failed to be detached. For more information, see the "Error codes" section.
        shared_ptr<string> message_ {};
        // Indicates whether the instance RAM role was detached.
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->detachInstanceRamRoleResult_ == nullptr; };
      // detachInstanceRamRoleResult Field Functions 
      bool hasDetachInstanceRamRoleResult() const { return this->detachInstanceRamRoleResult_ != nullptr;};
      void deleteDetachInstanceRamRoleResult() { this->detachInstanceRamRoleResult_ = nullptr;};
      inline const vector<DetachInstanceRamRoleResults::DetachInstanceRamRoleResult> & getDetachInstanceRamRoleResult() const { DARABONBA_PTR_GET_CONST(detachInstanceRamRoleResult_, vector<DetachInstanceRamRoleResults::DetachInstanceRamRoleResult>) };
      inline vector<DetachInstanceRamRoleResults::DetachInstanceRamRoleResult> getDetachInstanceRamRoleResult() { DARABONBA_PTR_GET(detachInstanceRamRoleResult_, vector<DetachInstanceRamRoleResults::DetachInstanceRamRoleResult>) };
      inline DetachInstanceRamRoleResults& setDetachInstanceRamRoleResult(const vector<DetachInstanceRamRoleResults::DetachInstanceRamRoleResult> & detachInstanceRamRoleResult) { DARABONBA_PTR_SET_VALUE(detachInstanceRamRoleResult_, detachInstanceRamRoleResult) };
      inline DetachInstanceRamRoleResults& setDetachInstanceRamRoleResult(vector<DetachInstanceRamRoleResults::DetachInstanceRamRoleResult> && detachInstanceRamRoleResult) { DARABONBA_PTR_SET_RVALUE(detachInstanceRamRoleResult_, detachInstanceRamRoleResult) };


    protected:
      shared_ptr<vector<DetachInstanceRamRoleResults::DetachInstanceRamRoleResult>> detachInstanceRamRoleResult_ {};
    };

    virtual bool empty() const override { return this->detachInstanceRamRoleResults_ == nullptr
        && this->failCount_ == nullptr && this->ramRoleName_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // detachInstanceRamRoleResults Field Functions 
    bool hasDetachInstanceRamRoleResults() const { return this->detachInstanceRamRoleResults_ != nullptr;};
    void deleteDetachInstanceRamRoleResults() { this->detachInstanceRamRoleResults_ = nullptr;};
    inline const DetachInstanceRamRoleResponseBody::DetachInstanceRamRoleResults & getDetachInstanceRamRoleResults() const { DARABONBA_PTR_GET_CONST(detachInstanceRamRoleResults_, DetachInstanceRamRoleResponseBody::DetachInstanceRamRoleResults) };
    inline DetachInstanceRamRoleResponseBody::DetachInstanceRamRoleResults getDetachInstanceRamRoleResults() { DARABONBA_PTR_GET(detachInstanceRamRoleResults_, DetachInstanceRamRoleResponseBody::DetachInstanceRamRoleResults) };
    inline DetachInstanceRamRoleResponseBody& setDetachInstanceRamRoleResults(const DetachInstanceRamRoleResponseBody::DetachInstanceRamRoleResults & detachInstanceRamRoleResults) { DARABONBA_PTR_SET_VALUE(detachInstanceRamRoleResults_, detachInstanceRamRoleResults) };
    inline DetachInstanceRamRoleResponseBody& setDetachInstanceRamRoleResults(DetachInstanceRamRoleResponseBody::DetachInstanceRamRoleResults && detachInstanceRamRoleResults) { DARABONBA_PTR_SET_RVALUE(detachInstanceRamRoleResults_, detachInstanceRamRoleResults) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline DetachInstanceRamRoleResponseBody& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline DetachInstanceRamRoleResponseBody& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachInstanceRamRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DetachInstanceRamRoleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The results of the instance RAM role detachment, which include the names of the instance RAM roles and the IDs of the ECS instances from which you attempted to detach the instance RAM roles.
    shared_ptr<DetachInstanceRamRoleResponseBody::DetachInstanceRamRoleResults> detachInstanceRamRoleResults_ {};
    // The number of ECS instances from which instance RAM roles failed to be detached.
    shared_ptr<int32_t> failCount_ {};
    // The name of the instance RAM role.
    shared_ptr<string> ramRoleName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of ECS instances from which you attempted to detach instance RAM roles.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
