// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNHEALTHYHOSTAVAILABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNHEALTHYHOSTAVAILABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeUnhealthyHostAvailabilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUnhealthyHostAvailabilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UnhealthyList, unhealthyList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUnhealthyHostAvailabilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UnhealthyList, unhealthyList_);
    };
    DescribeUnhealthyHostAvailabilityResponseBody() = default ;
    DescribeUnhealthyHostAvailabilityResponseBody(const DescribeUnhealthyHostAvailabilityResponseBody &) = default ;
    DescribeUnhealthyHostAvailabilityResponseBody(DescribeUnhealthyHostAvailabilityResponseBody &&) = default ;
    DescribeUnhealthyHostAvailabilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUnhealthyHostAvailabilityResponseBody() = default ;
    DescribeUnhealthyHostAvailabilityResponseBody& operator=(const DescribeUnhealthyHostAvailabilityResponseBody &) = default ;
    DescribeUnhealthyHostAvailabilityResponseBody& operator=(DescribeUnhealthyHostAvailabilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnhealthyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnhealthyList& obj) { 
        DARABONBA_PTR_TO_JSON(NodeTaskInstance, nodeTaskInstance_);
      };
      friend void from_json(const Darabonba::Json& j, UnhealthyList& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeTaskInstance, nodeTaskInstance_);
      };
      UnhealthyList() = default ;
      UnhealthyList(const UnhealthyList &) = default ;
      UnhealthyList(UnhealthyList &&) = default ;
      UnhealthyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnhealthyList() = default ;
      UnhealthyList& operator=(const UnhealthyList &) = default ;
      UnhealthyList& operator=(UnhealthyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeTaskInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeTaskInstance& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
        };
        friend void from_json(const Darabonba::Json& j, NodeTaskInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
        };
        NodeTaskInstance() = default ;
        NodeTaskInstance(const NodeTaskInstance &) = default ;
        NodeTaskInstance(NodeTaskInstance &&) = default ;
        NodeTaskInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeTaskInstance() = default ;
        NodeTaskInstance& operator=(const NodeTaskInstance &) = default ;
        NodeTaskInstance& operator=(NodeTaskInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InstanceList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
            DARABONBA_PTR_TO_JSON(String, string_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
            DARABONBA_PTR_FROM_JSON(String, string_);
          };
          InstanceList() = default ;
          InstanceList(const InstanceList &) = default ;
          InstanceList(InstanceList &&) = default ;
          InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceList() = default ;
          InstanceList& operator=(const InstanceList &) = default ;
          InstanceList& operator=(InstanceList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->string_ == nullptr; };
          // string Field Functions 
          bool hasString() const { return this->string_ != nullptr;};
          void deleteString() { this->string_ = nullptr;};
          inline const vector<string> & getString() const { DARABONBA_PTR_GET_CONST(string_, vector<string>) };
          inline vector<string> getString() { DARABONBA_PTR_GET(string_, vector<string>) };
          inline InstanceList& setString(const vector<string> & string) { DARABONBA_PTR_SET_VALUE(string_, string) };
          inline InstanceList& setString(vector<string> && string) { DARABONBA_PTR_SET_RVALUE(string_, string) };


        protected:
          shared_ptr<vector<string>> string_ {};
        };

        virtual bool empty() const override { return this->id_ == nullptr
        && this->instanceList_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline NodeTaskInstance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // instanceList Field Functions 
        bool hasInstanceList() const { return this->instanceList_ != nullptr;};
        void deleteInstanceList() { this->instanceList_ = nullptr;};
        inline const NodeTaskInstance::InstanceList & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, NodeTaskInstance::InstanceList) };
        inline NodeTaskInstance::InstanceList getInstanceList() { DARABONBA_PTR_GET(instanceList_, NodeTaskInstance::InstanceList) };
        inline NodeTaskInstance& setInstanceList(const NodeTaskInstance::InstanceList & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
        inline NodeTaskInstance& setInstanceList(NodeTaskInstance::InstanceList && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


      protected:
        // The ID of the availability monitoring task.
        shared_ptr<int64_t> id_ {};
        shared_ptr<NodeTaskInstance::InstanceList> instanceList_ {};
      };

      virtual bool empty() const override { return this->nodeTaskInstance_ == nullptr; };
      // nodeTaskInstance Field Functions 
      bool hasNodeTaskInstance() const { return this->nodeTaskInstance_ != nullptr;};
      void deleteNodeTaskInstance() { this->nodeTaskInstance_ = nullptr;};
      inline const vector<UnhealthyList::NodeTaskInstance> & getNodeTaskInstance() const { DARABONBA_PTR_GET_CONST(nodeTaskInstance_, vector<UnhealthyList::NodeTaskInstance>) };
      inline vector<UnhealthyList::NodeTaskInstance> getNodeTaskInstance() { DARABONBA_PTR_GET(nodeTaskInstance_, vector<UnhealthyList::NodeTaskInstance>) };
      inline UnhealthyList& setNodeTaskInstance(const vector<UnhealthyList::NodeTaskInstance> & nodeTaskInstance) { DARABONBA_PTR_SET_VALUE(nodeTaskInstance_, nodeTaskInstance) };
      inline UnhealthyList& setNodeTaskInstance(vector<UnhealthyList::NodeTaskInstance> && nodeTaskInstance) { DARABONBA_PTR_SET_RVALUE(nodeTaskInstance_, nodeTaskInstance) };


    protected:
      shared_ptr<vector<UnhealthyList::NodeTaskInstance>> nodeTaskInstance_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->unhealthyList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // unhealthyList Field Functions 
    bool hasUnhealthyList() const { return this->unhealthyList_ != nullptr;};
    void deleteUnhealthyList() { this->unhealthyList_ = nullptr;};
    inline const DescribeUnhealthyHostAvailabilityResponseBody::UnhealthyList & getUnhealthyList() const { DARABONBA_PTR_GET_CONST(unhealthyList_, DescribeUnhealthyHostAvailabilityResponseBody::UnhealthyList) };
    inline DescribeUnhealthyHostAvailabilityResponseBody::UnhealthyList getUnhealthyList() { DARABONBA_PTR_GET(unhealthyList_, DescribeUnhealthyHostAvailabilityResponseBody::UnhealthyList) };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setUnhealthyList(const DescribeUnhealthyHostAvailabilityResponseBody::UnhealthyList & unhealthyList) { DARABONBA_PTR_SET_VALUE(unhealthyList_, unhealthyList) };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setUnhealthyList(DescribeUnhealthyHostAvailabilityResponseBody::UnhealthyList && unhealthyList) { DARABONBA_PTR_SET_RVALUE(unhealthyList_, unhealthyList) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The unhealthy instances that are detected by the specified availability monitoring tasks.
    shared_ptr<DescribeUnhealthyHostAvailabilityResponseBody::UnhealthyList> unhealthyList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
