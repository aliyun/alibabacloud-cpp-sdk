// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLEBINDDETAILRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLEBINDDETAILRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVariableBindDetailResponseBodyResultObjectParams.hpp>
#include <alibabacloud/models/DescribeVariableBindDetailResponseBodyResultObjectRelationRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVariableBindDetailResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableBindDetailResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(allowModify, allowModify_);
      DARABONBA_PTR_TO_JSON(defineId, defineId_);
      DARABONBA_PTR_TO_JSON(defineTitle, defineTitle_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(relationRules, relationRules_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableBindDetailResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(allowModify, allowModify_);
      DARABONBA_PTR_FROM_JSON(defineId, defineId_);
      DARABONBA_PTR_FROM_JSON(defineTitle, defineTitle_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(relationRules, relationRules_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    DescribeVariableBindDetailResponseBodyResultObject() = default ;
    DescribeVariableBindDetailResponseBodyResultObject(const DescribeVariableBindDetailResponseBodyResultObject &) = default ;
    DescribeVariableBindDetailResponseBodyResultObject(DescribeVariableBindDetailResponseBodyResultObject &&) = default ;
    DescribeVariableBindDetailResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableBindDetailResponseBodyResultObject() = default ;
    DescribeVariableBindDetailResponseBodyResultObject& operator=(const DescribeVariableBindDetailResponseBodyResultObject &) = default ;
    DescribeVariableBindDetailResponseBodyResultObject& operator=(DescribeVariableBindDetailResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowModify_ == nullptr
        && return this->defineId_ == nullptr && return this->defineTitle_ == nullptr && return this->description_ == nullptr && return this->eventCode_ == nullptr && return this->id_ == nullptr
        && return this->params_ == nullptr && return this->relationRules_ == nullptr && return this->title_ == nullptr; };
    // allowModify Field Functions 
    bool hasAllowModify() const { return this->allowModify_ != nullptr;};
    void deleteAllowModify() { this->allowModify_ = nullptr;};
    inline bool allowModify() const { DARABONBA_PTR_GET_DEFAULT(allowModify_, false) };
    inline DescribeVariableBindDetailResponseBodyResultObject& setAllowModify(bool allowModify) { DARABONBA_PTR_SET_VALUE(allowModify_, allowModify) };


    // defineId Field Functions 
    bool hasDefineId() const { return this->defineId_ != nullptr;};
    void deleteDefineId() { this->defineId_ = nullptr;};
    inline int64_t defineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, 0L) };
    inline DescribeVariableBindDetailResponseBodyResultObject& setDefineId(int64_t defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


    // defineTitle Field Functions 
    bool hasDefineTitle() const { return this->defineTitle_ != nullptr;};
    void deleteDefineTitle() { this->defineTitle_ = nullptr;};
    inline string defineTitle() const { DARABONBA_PTR_GET_DEFAULT(defineTitle_, "") };
    inline DescribeVariableBindDetailResponseBodyResultObject& setDefineTitle(string defineTitle) { DARABONBA_PTR_SET_VALUE(defineTitle_, defineTitle) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVariableBindDetailResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeVariableBindDetailResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeVariableBindDetailResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<Models::DescribeVariableBindDetailResponseBodyResultObjectParams> & params() const { DARABONBA_PTR_GET_CONST(params_, vector<Models::DescribeVariableBindDetailResponseBodyResultObjectParams>) };
    inline vector<Models::DescribeVariableBindDetailResponseBodyResultObjectParams> params() { DARABONBA_PTR_GET(params_, vector<Models::DescribeVariableBindDetailResponseBodyResultObjectParams>) };
    inline DescribeVariableBindDetailResponseBodyResultObject& setParams(const vector<Models::DescribeVariableBindDetailResponseBodyResultObjectParams> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline DescribeVariableBindDetailResponseBodyResultObject& setParams(vector<Models::DescribeVariableBindDetailResponseBodyResultObjectParams> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // relationRules Field Functions 
    bool hasRelationRules() const { return this->relationRules_ != nullptr;};
    void deleteRelationRules() { this->relationRules_ = nullptr;};
    inline const vector<Models::DescribeVariableBindDetailResponseBodyResultObjectRelationRules> & relationRules() const { DARABONBA_PTR_GET_CONST(relationRules_, vector<Models::DescribeVariableBindDetailResponseBodyResultObjectRelationRules>) };
    inline vector<Models::DescribeVariableBindDetailResponseBodyResultObjectRelationRules> relationRules() { DARABONBA_PTR_GET(relationRules_, vector<Models::DescribeVariableBindDetailResponseBodyResultObjectRelationRules>) };
    inline DescribeVariableBindDetailResponseBodyResultObject& setRelationRules(const vector<Models::DescribeVariableBindDetailResponseBodyResultObjectRelationRules> & relationRules) { DARABONBA_PTR_SET_VALUE(relationRules_, relationRules) };
    inline DescribeVariableBindDetailResponseBodyResultObject& setRelationRules(vector<Models::DescribeVariableBindDetailResponseBodyResultObjectRelationRules> && relationRules) { DARABONBA_PTR_SET_RVALUE(relationRules_, relationRules) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeVariableBindDetailResponseBodyResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Whether modification is allowed, default is false
    std::shared_ptr<bool> allowModify_ = nullptr;
    // Variable definition ID
    std::shared_ptr<int64_t> defineId_ = nullptr;
    // Variable definition title
    std::shared_ptr<string> defineTitle_ = nullptr;
    // Variable description information
    std::shared_ptr<string> description_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Variable ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Bound parameters.
    std::shared_ptr<vector<Models::DescribeVariableBindDetailResponseBodyResultObjectParams>> params_ = nullptr;
    // List of associated policies
    std::shared_ptr<vector<Models::DescribeVariableBindDetailResponseBodyResultObjectRelationRules>> relationRules_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
