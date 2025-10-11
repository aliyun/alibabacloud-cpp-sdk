// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODYPARAMETERTEMPLATESCOMPONENTPARAMETERTEMPLATESPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODYPARAMETERTEMPLATESCOMPONENTPARAMETERTEMPLATESPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Default, default_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedRestart, needRestart_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Default, default_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedRestart, needRestart_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters() = default ;
    DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters(const DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters &) = default ;
    DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters(DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters &&) = default ;
    DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters() = default ;
    DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters& operator=(const DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters &) = default ;
    DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters& operator=(DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->default_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->needRestart_ != nullptr && this->pattern_ != nullptr && this->readOnly_ != nullptr
        && this->type_ != nullptr; };
    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline string _default() const { DARABONBA_PTR_GET_DEFAULT(default_, "") };
    inline DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters& setDefault(string _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needRestart Field Functions 
    bool hasNeedRestart() const { return this->needRestart_ != nullptr;};
    void deleteNeedRestart() { this->needRestart_ = nullptr;};
    inline bool needRestart() const { DARABONBA_PTR_GET_DEFAULT(needRestart_, false) };
    inline DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters& setNeedRestart(bool needRestart) { DARABONBA_PTR_SET_VALUE(needRestart_, needRestart) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeApplicationParametersResponseBodyParameterTemplatesComponentParameterTemplatesParameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> default_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> needRestart_ = nullptr;
    std::shared_ptr<string> pattern_ = nullptr;
    std::shared_ptr<bool> readOnly_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
