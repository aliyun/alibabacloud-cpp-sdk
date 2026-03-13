// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELATESTRECORDSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELATESTRECORDSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeLatestRecordSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLatestRecordSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlaybookNodeSchema, playbookNodeSchema_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLatestRecordSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlaybookNodeSchema, playbookNodeSchema_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLatestRecordSchemaResponseBody() = default ;
    DescribeLatestRecordSchemaResponseBody(const DescribeLatestRecordSchemaResponseBody &) = default ;
    DescribeLatestRecordSchemaResponseBody(DescribeLatestRecordSchemaResponseBody &&) = default ;
    DescribeLatestRecordSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLatestRecordSchemaResponseBody() = default ;
    DescribeLatestRecordSchemaResponseBody& operator=(const DescribeLatestRecordSchemaResponseBody &) = default ;
    DescribeLatestRecordSchemaResponseBody& operator=(DescribeLatestRecordSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PlaybookNodeSchema : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlaybookNodeSchema& obj) { 
        DARABONBA_PTR_TO_JSON(NodeSchema, nodeSchema_);
      };
      friend void from_json(const Darabonba::Json& j, PlaybookNodeSchema& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeSchema, nodeSchema_);
      };
      PlaybookNodeSchema() = default ;
      PlaybookNodeSchema(const PlaybookNodeSchema &) = default ;
      PlaybookNodeSchema(PlaybookNodeSchema &&) = default ;
      PlaybookNodeSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PlaybookNodeSchema() = default ;
      PlaybookNodeSchema& operator=(const PlaybookNodeSchema &) = default ;
      PlaybookNodeSchema& operator=(PlaybookNodeSchema &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeSchema : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeSchema& obj) { 
          DARABONBA_PTR_TO_JSON(ActionName, actionName_);
          DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(OutputFields, outputFields_);
        };
        friend void from_json(const Darabonba::Json& j, NodeSchema& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
          DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(OutputFields, outputFields_);
        };
        NodeSchema() = default ;
        NodeSchema(const NodeSchema &) = default ;
        NodeSchema(NodeSchema &&) = default ;
        NodeSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeSchema() = default ;
        NodeSchema& operator=(const NodeSchema &) = default ;
        NodeSchema& operator=(NodeSchema &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionName_ == nullptr
        && this->componentName_ == nullptr && this->nodeName_ == nullptr && this->outputFields_ == nullptr; };
        // actionName Field Functions 
        bool hasActionName() const { return this->actionName_ != nullptr;};
        void deleteActionName() { this->actionName_ = nullptr;};
        inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
        inline NodeSchema& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


        // componentName Field Functions 
        bool hasComponentName() const { return this->componentName_ != nullptr;};
        void deleteComponentName() { this->componentName_ = nullptr;};
        inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
        inline NodeSchema& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline NodeSchema& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // outputFields Field Functions 
        bool hasOutputFields() const { return this->outputFields_ != nullptr;};
        void deleteOutputFields() { this->outputFields_ = nullptr;};
        inline const vector<string> & getOutputFields() const { DARABONBA_PTR_GET_CONST(outputFields_, vector<string>) };
        inline vector<string> getOutputFields() { DARABONBA_PTR_GET(outputFields_, vector<string>) };
        inline NodeSchema& setOutputFields(const vector<string> & outputFields) { DARABONBA_PTR_SET_VALUE(outputFields_, outputFields) };
        inline NodeSchema& setOutputFields(vector<string> && outputFields) { DARABONBA_PTR_SET_RVALUE(outputFields_, outputFields) };


      protected:
        // The action name of the component.
        shared_ptr<string> actionName_ {};
        // The name of the component.
        shared_ptr<string> componentName_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The output fields.
        shared_ptr<vector<string>> outputFields_ {};
      };

      virtual bool empty() const override { return this->nodeSchema_ == nullptr; };
      // nodeSchema Field Functions 
      bool hasNodeSchema() const { return this->nodeSchema_ != nullptr;};
      void deleteNodeSchema() { this->nodeSchema_ = nullptr;};
      inline const vector<PlaybookNodeSchema::NodeSchema> & getNodeSchema() const { DARABONBA_PTR_GET_CONST(nodeSchema_, vector<PlaybookNodeSchema::NodeSchema>) };
      inline vector<PlaybookNodeSchema::NodeSchema> getNodeSchema() { DARABONBA_PTR_GET(nodeSchema_, vector<PlaybookNodeSchema::NodeSchema>) };
      inline PlaybookNodeSchema& setNodeSchema(const vector<PlaybookNodeSchema::NodeSchema> & nodeSchema) { DARABONBA_PTR_SET_VALUE(nodeSchema_, nodeSchema) };
      inline PlaybookNodeSchema& setNodeSchema(vector<PlaybookNodeSchema::NodeSchema> && nodeSchema) { DARABONBA_PTR_SET_RVALUE(nodeSchema_, nodeSchema) };


    protected:
      // The structure information.
      shared_ptr<vector<PlaybookNodeSchema::NodeSchema>> nodeSchema_ {};
    };

    virtual bool empty() const override { return this->playbookNodeSchema_ == nullptr
        && this->requestId_ == nullptr; };
    // playbookNodeSchema Field Functions 
    bool hasPlaybookNodeSchema() const { return this->playbookNodeSchema_ != nullptr;};
    void deletePlaybookNodeSchema() { this->playbookNodeSchema_ = nullptr;};
    inline const DescribeLatestRecordSchemaResponseBody::PlaybookNodeSchema & getPlaybookNodeSchema() const { DARABONBA_PTR_GET_CONST(playbookNodeSchema_, DescribeLatestRecordSchemaResponseBody::PlaybookNodeSchema) };
    inline DescribeLatestRecordSchemaResponseBody::PlaybookNodeSchema getPlaybookNodeSchema() { DARABONBA_PTR_GET(playbookNodeSchema_, DescribeLatestRecordSchemaResponseBody::PlaybookNodeSchema) };
    inline DescribeLatestRecordSchemaResponseBody& setPlaybookNodeSchema(const DescribeLatestRecordSchemaResponseBody::PlaybookNodeSchema & playbookNodeSchema) { DARABONBA_PTR_SET_VALUE(playbookNodeSchema_, playbookNodeSchema) };
    inline DescribeLatestRecordSchemaResponseBody& setPlaybookNodeSchema(DescribeLatestRecordSchemaResponseBody::PlaybookNodeSchema && playbookNodeSchema) { DARABONBA_PTR_SET_RVALUE(playbookNodeSchema_, playbookNodeSchema) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLatestRecordSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The output structure information of the playbook.
    shared_ptr<DescribeLatestRecordSchemaResponseBody::PlaybookNodeSchema> playbookNodeSchema_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
