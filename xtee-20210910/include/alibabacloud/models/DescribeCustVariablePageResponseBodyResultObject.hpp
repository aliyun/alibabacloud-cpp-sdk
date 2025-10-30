// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLEPAGERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLEPAGERESPONSEBODYRESULTOBJECT_HPP_
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
  class DescribeCustVariablePageResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustVariablePageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(dataVersion, dataVersion_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ruleList, ruleList_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustVariablePageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(dataVersion, dataVersion_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ruleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    DescribeCustVariablePageResponseBodyResultObject() = default ;
    DescribeCustVariablePageResponseBodyResultObject(const DescribeCustVariablePageResponseBodyResultObject &) = default ;
    DescribeCustVariablePageResponseBodyResultObject(DescribeCustVariablePageResponseBodyResultObject &&) = default ;
    DescribeCustVariablePageResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustVariablePageResponseBodyResultObject() = default ;
    DescribeCustVariablePageResponseBodyResultObject& operator=(const DescribeCustVariablePageResponseBodyResultObject &) = default ;
    DescribeCustVariablePageResponseBodyResultObject& operator=(DescribeCustVariablePageResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataVersion_ == nullptr
        && return this->description_ == nullptr && return this->eventName_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->ruleList_ == nullptr && return this->status_ == nullptr && return this->title_ == nullptr; };
    // dataVersion Field Functions 
    bool hasDataVersion() const { return this->dataVersion_ != nullptr;};
    void deleteDataVersion() { this->dataVersion_ = nullptr;};
    inline int64_t dataVersion() const { DARABONBA_PTR_GET_DEFAULT(dataVersion_, 0L) };
    inline DescribeCustVariablePageResponseBodyResultObject& setDataVersion(int64_t dataVersion) { DARABONBA_PTR_SET_VALUE(dataVersion_, dataVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCustVariablePageResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeCustVariablePageResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeCustVariablePageResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeCustVariablePageResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCustVariablePageResponseBodyResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<string> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<string>) };
    inline vector<string> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<string>) };
    inline DescribeCustVariablePageResponseBodyResultObject& setRuleList(const vector<string> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeCustVariablePageResponseBodyResultObject& setRuleList(vector<string> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCustVariablePageResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeCustVariablePageResponseBodyResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Data version.
    std::shared_ptr<int64_t> dataVersion_ = nullptr;
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Primary key ID of accumulated variable.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Accumulated variable name: generated by backend.
    std::shared_ptr<string> name_ = nullptr;
    // Associated Strategies.
    std::shared_ptr<vector<string>> ruleList_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
