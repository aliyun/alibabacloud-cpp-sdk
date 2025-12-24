// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELATESTRECORDSCHEMARESPONSEBODYPLAYBOOKNODESCHEMANODESCHEMA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELATESTRECORDSCHEMARESPONSEBODYPLAYBOOKNODESCHEMANODESCHEMA_HPP_
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
  class DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionName_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(OutputFields, outputFields_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(OutputFields, outputFields_);
    };
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema() = default ;
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema(const DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema &) = default ;
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema(DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema &&) = default ;
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema() = default ;
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema& operator=(const DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema &) = default ;
    DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema& operator=(DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionName_ == nullptr
        && return this->componentName_ == nullptr && return this->nodeName_ == nullptr && return this->outputFields_ == nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string actionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // outputFields Field Functions 
    bool hasOutputFields() const { return this->outputFields_ != nullptr;};
    void deleteOutputFields() { this->outputFields_ = nullptr;};
    inline const vector<string> & outputFields() const { DARABONBA_PTR_GET_CONST(outputFields_, vector<string>) };
    inline vector<string> outputFields() { DARABONBA_PTR_GET(outputFields_, vector<string>) };
    inline DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema& setOutputFields(const vector<string> & outputFields) { DARABONBA_PTR_SET_VALUE(outputFields_, outputFields) };
    inline DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchemaNodeSchema& setOutputFields(vector<string> && outputFields) { DARABONBA_PTR_SET_RVALUE(outputFields_, outputFields) };


  protected:
    // The action name of the component.
    std::shared_ptr<string> actionName_ = nullptr;
    // The name of the component.
    std::shared_ptr<string> componentName_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The output fields.
    std::shared_ptr<vector<string>> outputFields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
