// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODYPARAMETERSCOMPONENTPARAMETERSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODYPARAMETERSCOMPONENTPARAMETERSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationParametersResponseBodyParametersComponentParametersParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Default, default_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedRestart, needRestart_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Default, default_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedRestart, needRestart_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeApplicationParametersResponseBodyParametersComponentParametersParameters() = default ;
    DescribeApplicationParametersResponseBodyParametersComponentParametersParameters(const DescribeApplicationParametersResponseBodyParametersComponentParametersParameters &) = default ;
    DescribeApplicationParametersResponseBodyParametersComponentParametersParameters(DescribeApplicationParametersResponseBodyParametersComponentParametersParameters &&) = default ;
    DescribeApplicationParametersResponseBodyParametersComponentParametersParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationParametersResponseBodyParametersComponentParametersParameters() = default ;
    DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& operator=(const DescribeApplicationParametersResponseBodyParametersComponentParametersParameters &) = default ;
    DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& operator=(DescribeApplicationParametersResponseBodyParametersComponentParametersParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->default_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->needRestart_ == nullptr && return this->pattern_ == nullptr && return this->readOnly_ == nullptr
        && return this->status_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline string _default() const { DARABONBA_PTR_GET_DEFAULT(default_, "") };
    inline DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& setDefault(string _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needRestart Field Functions 
    bool hasNeedRestart() const { return this->needRestart_ != nullptr;};
    void deleteNeedRestart() { this->needRestart_ = nullptr;};
    inline bool needRestart() const { DARABONBA_PTR_GET_DEFAULT(needRestart_, false) };
    inline DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& setNeedRestart(bool needRestart) { DARABONBA_PTR_SET_VALUE(needRestart_, needRestart) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeApplicationParametersResponseBodyParametersComponentParametersParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> default_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> needRestart_ = nullptr;
    std::shared_ptr<string> pattern_ = nullptr;
    std::shared_ptr<bool> readOnly_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
