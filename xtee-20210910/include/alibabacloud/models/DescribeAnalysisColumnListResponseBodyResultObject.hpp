// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANALYSISCOLUMNLISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANALYSISCOLUMNLISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAnalysisColumnListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnalysisColumnListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(variableName, variableName_);
      DARABONBA_PTR_TO_JSON(variableTitle, variableTitle_);
      DARABONBA_PTR_TO_JSON(variableType, variableType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnalysisColumnListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(variableName, variableName_);
      DARABONBA_PTR_FROM_JSON(variableTitle, variableTitle_);
      DARABONBA_PTR_FROM_JSON(variableType, variableType_);
    };
    DescribeAnalysisColumnListResponseBodyResultObject() = default ;
    DescribeAnalysisColumnListResponseBodyResultObject(const DescribeAnalysisColumnListResponseBodyResultObject &) = default ;
    DescribeAnalysisColumnListResponseBodyResultObject(DescribeAnalysisColumnListResponseBodyResultObject &&) = default ;
    DescribeAnalysisColumnListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnalysisColumnListResponseBodyResultObject() = default ;
    DescribeAnalysisColumnListResponseBodyResultObject& operator=(const DescribeAnalysisColumnListResponseBodyResultObject &) = default ;
    DescribeAnalysisColumnListResponseBodyResultObject& operator=(DescribeAnalysisColumnListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCode_ == nullptr
        && return this->eventName_ == nullptr && return this->isDefault_ == nullptr && return this->variableName_ == nullptr && return this->variableTitle_ == nullptr && return this->variableType_ == nullptr; };
    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeAnalysisColumnListResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeAnalysisColumnListResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeAnalysisColumnListResponseBodyResultObject& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // variableName Field Functions 
    bool hasVariableName() const { return this->variableName_ != nullptr;};
    void deleteVariableName() { this->variableName_ = nullptr;};
    inline string variableName() const { DARABONBA_PTR_GET_DEFAULT(variableName_, "") };
    inline DescribeAnalysisColumnListResponseBodyResultObject& setVariableName(string variableName) { DARABONBA_PTR_SET_VALUE(variableName_, variableName) };


    // variableTitle Field Functions 
    bool hasVariableTitle() const { return this->variableTitle_ != nullptr;};
    void deleteVariableTitle() { this->variableTitle_ = nullptr;};
    inline string variableTitle() const { DARABONBA_PTR_GET_DEFAULT(variableTitle_, "") };
    inline DescribeAnalysisColumnListResponseBodyResultObject& setVariableTitle(string variableTitle) { DARABONBA_PTR_SET_VALUE(variableTitle_, variableTitle) };


    // variableType Field Functions 
    bool hasVariableType() const { return this->variableType_ != nullptr;};
    void deleteVariableType() { this->variableType_ = nullptr;};
    inline string variableType() const { DARABONBA_PTR_GET_DEFAULT(variableType_, "") };
    inline DescribeAnalysisColumnListResponseBodyResultObject& setVariableType(string variableType) { DARABONBA_PTR_SET_VALUE(variableType_, variableType) };


  protected:
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Whether it is a default column.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // Variable name.
    std::shared_ptr<string> variableName_ = nullptr;
    // Variable title.
    std::shared_ptr<string> variableTitle_ = nullptr;
    // Variable type.
    std::shared_ptr<string> variableType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
