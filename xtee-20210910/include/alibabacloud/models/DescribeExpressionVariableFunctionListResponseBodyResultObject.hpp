// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEFUNCTIONLISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEFUNCTIONLISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeExpressionVariableFunctionListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressionVariableFunctionListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(maxParamSize, maxParamSize_);
      DARABONBA_PTR_TO_JSON(minParamSize, minParamSize_);
      DARABONBA_PTR_TO_JSON(paramTypes, paramTypes_);
      DARABONBA_PTR_TO_JSON(redirect, redirect_);
      DARABONBA_PTR_TO_JSON(returnTypes, returnTypes_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressionVariableFunctionListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(maxParamSize, maxParamSize_);
      DARABONBA_PTR_FROM_JSON(minParamSize, minParamSize_);
      DARABONBA_PTR_FROM_JSON(paramTypes, paramTypes_);
      DARABONBA_PTR_FROM_JSON(redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(returnTypes, returnTypes_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeExpressionVariableFunctionListResponseBodyResultObject() = default ;
    DescribeExpressionVariableFunctionListResponseBodyResultObject(const DescribeExpressionVariableFunctionListResponseBodyResultObject &) = default ;
    DescribeExpressionVariableFunctionListResponseBodyResultObject(DescribeExpressionVariableFunctionListResponseBodyResultObject &&) = default ;
    DescribeExpressionVariableFunctionListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressionVariableFunctionListResponseBodyResultObject() = default ;
    DescribeExpressionVariableFunctionListResponseBodyResultObject& operator=(const DescribeExpressionVariableFunctionListResponseBodyResultObject &) = default ;
    DescribeExpressionVariableFunctionListResponseBodyResultObject& operator=(DescribeExpressionVariableFunctionListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->key_ != nullptr && this->maxParamSize_ != nullptr && this->minParamSize_ != nullptr && this->paramTypes_ != nullptr && this->redirect_ != nullptr
        && this->returnTypes_ != nullptr && this->value_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeExpressionVariableFunctionListResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeExpressionVariableFunctionListResponseBodyResultObject& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // maxParamSize Field Functions 
    bool hasMaxParamSize() const { return this->maxParamSize_ != nullptr;};
    void deleteMaxParamSize() { this->maxParamSize_ = nullptr;};
    inline int64_t maxParamSize() const { DARABONBA_PTR_GET_DEFAULT(maxParamSize_, 0L) };
    inline DescribeExpressionVariableFunctionListResponseBodyResultObject& setMaxParamSize(int64_t maxParamSize) { DARABONBA_PTR_SET_VALUE(maxParamSize_, maxParamSize) };


    // minParamSize Field Functions 
    bool hasMinParamSize() const { return this->minParamSize_ != nullptr;};
    void deleteMinParamSize() { this->minParamSize_ = nullptr;};
    inline int64_t minParamSize() const { DARABONBA_PTR_GET_DEFAULT(minParamSize_, 0L) };
    inline DescribeExpressionVariableFunctionListResponseBodyResultObject& setMinParamSize(int64_t minParamSize) { DARABONBA_PTR_SET_VALUE(minParamSize_, minParamSize) };


    // paramTypes Field Functions 
    bool hasParamTypes() const { return this->paramTypes_ != nullptr;};
    void deleteParamTypes() { this->paramTypes_ = nullptr;};
    inline string paramTypes() const { DARABONBA_PTR_GET_DEFAULT(paramTypes_, "") };
    inline DescribeExpressionVariableFunctionListResponseBodyResultObject& setParamTypes(string paramTypes) { DARABONBA_PTR_SET_VALUE(paramTypes_, paramTypes) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline bool redirect() const { DARABONBA_PTR_GET_DEFAULT(redirect_, false) };
    inline DescribeExpressionVariableFunctionListResponseBodyResultObject& setRedirect(bool redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };


    // returnTypes Field Functions 
    bool hasReturnTypes() const { return this->returnTypes_ != nullptr;};
    void deleteReturnTypes() { this->returnTypes_ = nullptr;};
    inline string returnTypes() const { DARABONBA_PTR_GET_DEFAULT(returnTypes_, "") };
    inline DescribeExpressionVariableFunctionListResponseBodyResultObject& setReturnTypes(string returnTypes) { DARABONBA_PTR_SET_VALUE(returnTypes_, returnTypes) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeExpressionVariableFunctionListResponseBodyResultObject& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Function name
    std::shared_ptr<string> key_ = nullptr;
    // Maximum number of parameters
    std::shared_ptr<int64_t> maxParamSize_ = nullptr;
    // Minimum number of parameters
    std::shared_ptr<int64_t> minParamSize_ = nullptr;
    // Parameter types
    std::shared_ptr<string> paramTypes_ = nullptr;
    // Whether it is directly invoked
    std::shared_ptr<bool> redirect_ = nullptr;
    // Method return types
    std::shared_ptr<string> returnTypes_ = nullptr;
    // Function value
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
