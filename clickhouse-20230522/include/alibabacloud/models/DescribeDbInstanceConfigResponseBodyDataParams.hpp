// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGRESPONSEBODYDATAPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGRESPONSEBODYDATAPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceConfigResponseBodyDataParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceConfigResponseBodyDataParams& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(IsDynamic, isDynamic_);
      DARABONBA_PTR_TO_JSON(IsUserModifiable, isUserModifiable_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Optional, optional_);
      DARABONBA_PTR_TO_JSON(ParamRelyRule, paramRelyRule_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceConfigResponseBodyDataParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(IsDynamic, isDynamic_);
      DARABONBA_PTR_FROM_JSON(IsUserModifiable, isUserModifiable_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Optional, optional_);
      DARABONBA_PTR_FROM_JSON(ParamRelyRule, paramRelyRule_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDBInstanceConfigResponseBodyDataParams() = default ;
    DescribeDBInstanceConfigResponseBodyDataParams(const DescribeDBInstanceConfigResponseBodyDataParams &) = default ;
    DescribeDBInstanceConfigResponseBodyDataParams(DescribeDBInstanceConfigResponseBodyDataParams &&) = default ;
    DescribeDBInstanceConfigResponseBodyDataParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceConfigResponseBodyDataParams() = default ;
    DescribeDBInstanceConfigResponseBodyDataParams& operator=(const DescribeDBInstanceConfigResponseBodyDataParams &) = default ;
    DescribeDBInstanceConfigResponseBodyDataParams& operator=(DescribeDBInstanceConfigResponseBodyDataParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->defaultValue_ == nullptr && return this->isDynamic_ == nullptr && return this->isUserModifiable_ == nullptr && return this->name_ == nullptr && return this->optional_ == nullptr
        && return this->paramRelyRule_ == nullptr && return this->value_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DescribeDBInstanceConfigResponseBodyDataParams& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline DescribeDBInstanceConfigResponseBodyDataParams& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // isDynamic Field Functions 
    bool hasIsDynamic() const { return this->isDynamic_ != nullptr;};
    void deleteIsDynamic() { this->isDynamic_ = nullptr;};
    inline int32_t isDynamic() const { DARABONBA_PTR_GET_DEFAULT(isDynamic_, 0) };
    inline DescribeDBInstanceConfigResponseBodyDataParams& setIsDynamic(int32_t isDynamic) { DARABONBA_PTR_SET_VALUE(isDynamic_, isDynamic) };


    // isUserModifiable Field Functions 
    bool hasIsUserModifiable() const { return this->isUserModifiable_ != nullptr;};
    void deleteIsUserModifiable() { this->isUserModifiable_ = nullptr;};
    inline int32_t isUserModifiable() const { DARABONBA_PTR_GET_DEFAULT(isUserModifiable_, 0) };
    inline DescribeDBInstanceConfigResponseBodyDataParams& setIsUserModifiable(int32_t isUserModifiable) { DARABONBA_PTR_SET_VALUE(isUserModifiable_, isUserModifiable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDBInstanceConfigResponseBodyDataParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // optional Field Functions 
    bool hasOptional() const { return this->optional_ != nullptr;};
    void deleteOptional() { this->optional_ = nullptr;};
    inline string optional() const { DARABONBA_PTR_GET_DEFAULT(optional_, "") };
    inline DescribeDBInstanceConfigResponseBodyDataParams& setOptional(string optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


    // paramRelyRule Field Functions 
    bool hasParamRelyRule() const { return this->paramRelyRule_ != nullptr;};
    void deleteParamRelyRule() { this->paramRelyRule_ = nullptr;};
    inline string paramRelyRule() const { DARABONBA_PTR_GET_DEFAULT(paramRelyRule_, "") };
    inline DescribeDBInstanceConfigResponseBodyDataParams& setParamRelyRule(string paramRelyRule) { DARABONBA_PTR_SET_VALUE(paramRelyRule_, paramRelyRule) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDBInstanceConfigResponseBodyDataParams& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<int32_t> isDynamic_ = nullptr;
    std::shared_ptr<int32_t> isUserModifiable_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> optional_ = nullptr;
    std::shared_ptr<string> paramRelyRule_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
