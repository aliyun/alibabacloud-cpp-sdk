// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGRESPONSEBODYDATAPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGRESPONSEBODYDATAPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBClusterConfigResponseBodyDataParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterConfigResponseBodyDataParams& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(IsDynamic, isDynamic_);
      DARABONBA_PTR_TO_JSON(IsUserModifiable, isUserModifiable_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Optional, optional_);
      DARABONBA_PTR_TO_JSON(ParamCategory, paramCategory_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterConfigResponseBodyDataParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(IsDynamic, isDynamic_);
      DARABONBA_PTR_FROM_JSON(IsUserModifiable, isUserModifiable_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Optional, optional_);
      DARABONBA_PTR_FROM_JSON(ParamCategory, paramCategory_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDBClusterConfigResponseBodyDataParams() = default ;
    DescribeDBClusterConfigResponseBodyDataParams(const DescribeDBClusterConfigResponseBodyDataParams &) = default ;
    DescribeDBClusterConfigResponseBodyDataParams(DescribeDBClusterConfigResponseBodyDataParams &&) = default ;
    DescribeDBClusterConfigResponseBodyDataParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterConfigResponseBodyDataParams() = default ;
    DescribeDBClusterConfigResponseBodyDataParams& operator=(const DescribeDBClusterConfigResponseBodyDataParams &) = default ;
    DescribeDBClusterConfigResponseBodyDataParams& operator=(DescribeDBClusterConfigResponseBodyDataParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->defaultValue_ != nullptr && this->isDynamic_ != nullptr && this->isUserModifiable_ != nullptr && this->name_ != nullptr && this->optional_ != nullptr
        && this->paramCategory_ != nullptr && this->value_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DescribeDBClusterConfigResponseBodyDataParams& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline DescribeDBClusterConfigResponseBodyDataParams& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // isDynamic Field Functions 
    bool hasIsDynamic() const { return this->isDynamic_ != nullptr;};
    void deleteIsDynamic() { this->isDynamic_ = nullptr;};
    inline int32_t isDynamic() const { DARABONBA_PTR_GET_DEFAULT(isDynamic_, 0) };
    inline DescribeDBClusterConfigResponseBodyDataParams& setIsDynamic(int32_t isDynamic) { DARABONBA_PTR_SET_VALUE(isDynamic_, isDynamic) };


    // isUserModifiable Field Functions 
    bool hasIsUserModifiable() const { return this->isUserModifiable_ != nullptr;};
    void deleteIsUserModifiable() { this->isUserModifiable_ = nullptr;};
    inline int32_t isUserModifiable() const { DARABONBA_PTR_GET_DEFAULT(isUserModifiable_, 0) };
    inline DescribeDBClusterConfigResponseBodyDataParams& setIsUserModifiable(int32_t isUserModifiable) { DARABONBA_PTR_SET_VALUE(isUserModifiable_, isUserModifiable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDBClusterConfigResponseBodyDataParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // optional Field Functions 
    bool hasOptional() const { return this->optional_ != nullptr;};
    void deleteOptional() { this->optional_ = nullptr;};
    inline string optional() const { DARABONBA_PTR_GET_DEFAULT(optional_, "") };
    inline DescribeDBClusterConfigResponseBodyDataParams& setOptional(string optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


    // paramCategory Field Functions 
    bool hasParamCategory() const { return this->paramCategory_ != nullptr;};
    void deleteParamCategory() { this->paramCategory_ = nullptr;};
    inline string paramCategory() const { DARABONBA_PTR_GET_DEFAULT(paramCategory_, "") };
    inline DescribeDBClusterConfigResponseBodyDataParams& setParamCategory(string paramCategory) { DARABONBA_PTR_SET_VALUE(paramCategory_, paramCategory) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDBClusterConfigResponseBodyDataParams& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The comments on the parameter.
    std::shared_ptr<string> comment_ = nullptr;
    // The default value of the parameter.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // Indicates whether the parameter immediately takes effect without requiring a restart.
    std::shared_ptr<int32_t> isDynamic_ = nullptr;
    // Indicates whether the parameter is modifiable.
    std::shared_ptr<int32_t> isUserModifiable_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> name_ = nullptr;
    // The value range of the parameter.
    std::shared_ptr<string> optional_ = nullptr;
    // The category of the parameter.
    std::shared_ptr<string> paramCategory_ = nullptr;
    // The current value of the parameter.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
