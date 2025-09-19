// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEPAGERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEPAGERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeExpressionVariablePageResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressionVariablePageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(outputs, outputs_);
      DARABONBA_PTR_TO_JSON(ruleList, ruleList_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressionVariablePageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(ruleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeExpressionVariablePageResponseBodyResultObject() = default ;
    DescribeExpressionVariablePageResponseBodyResultObject(const DescribeExpressionVariablePageResponseBodyResultObject &) = default ;
    DescribeExpressionVariablePageResponseBodyResultObject(DescribeExpressionVariablePageResponseBodyResultObject &&) = default ;
    DescribeExpressionVariablePageResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressionVariablePageResponseBodyResultObject() = default ;
    DescribeExpressionVariablePageResponseBodyResultObject& operator=(const DescribeExpressionVariablePageResponseBodyResultObject &) = default ;
    DescribeExpressionVariablePageResponseBodyResultObject& operator=(DescribeExpressionVariablePageResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventName_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->outputs_ != nullptr
        && this->ruleList_ != nullptr && this->status_ != nullptr && this->title_ != nullptr && this->version_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeExpressionVariablePageResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeExpressionVariablePageResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeExpressionVariablePageResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeExpressionVariablePageResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeExpressionVariablePageResponseBodyResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline DescribeExpressionVariablePageResponseBodyResultObject& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<string> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<string>) };
    inline vector<string> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<string>) };
    inline DescribeExpressionVariablePageResponseBodyResultObject& setRuleList(const vector<string> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeExpressionVariablePageResponseBodyResultObject& setRuleList(vector<string> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExpressionVariablePageResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeExpressionVariablePageResponseBodyResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline DescribeExpressionVariablePageResponseBodyResultObject& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Primary key of custom variable.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Query variable name.
    std::shared_ptr<string> name_ = nullptr;
    // Variable return type.
    std::shared_ptr<string> outputs_ = nullptr;
    // Associated Strategies.
    std::shared_ptr<vector<string>> ruleList_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
    // Version information.
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
