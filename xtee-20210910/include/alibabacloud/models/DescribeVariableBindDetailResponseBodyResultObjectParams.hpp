// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLEBINDDETAILRESPONSEBODYRESULTOBJECTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLEBINDDETAILRESPONSEBODYRESULTOBJECTPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVariableBindDetailResponseBodyResultObjectParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableBindDetailResponseBodyResultObjectParams& obj) { 
      DARABONBA_PTR_TO_JSON(eventFieldName, eventFieldName_);
      DARABONBA_PTR_TO_JSON(required, required_);
      DARABONBA_PTR_TO_JSON(variableName, variableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableBindDetailResponseBodyResultObjectParams& obj) { 
      DARABONBA_PTR_FROM_JSON(eventFieldName, eventFieldName_);
      DARABONBA_PTR_FROM_JSON(required, required_);
      DARABONBA_PTR_FROM_JSON(variableName, variableName_);
    };
    DescribeVariableBindDetailResponseBodyResultObjectParams() = default ;
    DescribeVariableBindDetailResponseBodyResultObjectParams(const DescribeVariableBindDetailResponseBodyResultObjectParams &) = default ;
    DescribeVariableBindDetailResponseBodyResultObjectParams(DescribeVariableBindDetailResponseBodyResultObjectParams &&) = default ;
    DescribeVariableBindDetailResponseBodyResultObjectParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableBindDetailResponseBodyResultObjectParams() = default ;
    DescribeVariableBindDetailResponseBodyResultObjectParams& operator=(const DescribeVariableBindDetailResponseBodyResultObjectParams &) = default ;
    DescribeVariableBindDetailResponseBodyResultObjectParams& operator=(DescribeVariableBindDetailResponseBodyResultObjectParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventFieldName_ == nullptr
        && return this->required_ == nullptr && return this->variableName_ == nullptr; };
    // eventFieldName Field Functions 
    bool hasEventFieldName() const { return this->eventFieldName_ != nullptr;};
    void deleteEventFieldName() { this->eventFieldName_ = nullptr;};
    inline string eventFieldName() const { DARABONBA_PTR_GET_DEFAULT(eventFieldName_, "") };
    inline DescribeVariableBindDetailResponseBodyResultObjectParams& setEventFieldName(string eventFieldName) { DARABONBA_PTR_SET_VALUE(eventFieldName_, eventFieldName) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline DescribeVariableBindDetailResponseBodyResultObjectParams& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // variableName Field Functions 
    bool hasVariableName() const { return this->variableName_ != nullptr;};
    void deleteVariableName() { this->variableName_ = nullptr;};
    inline string variableName() const { DARABONBA_PTR_GET_DEFAULT(variableName_, "") };
    inline DescribeVariableBindDetailResponseBodyResultObjectParams& setVariableName(string variableName) { DARABONBA_PTR_SET_VALUE(variableName_, variableName) };


  protected:
    // Event field name
    std::shared_ptr<string> eventFieldName_ = nullptr;
    // Whether it is required, default is false
    std::shared_ptr<bool> required_ = nullptr;
    // Bound variable name
    std::shared_ptr<string> variableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
