// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_METRICDEFINITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class MetricDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Regex, regex_);
    };
    friend void from_json(const Darabonba::Json& j, MetricDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Regex, regex_);
    };
    MetricDefinition() = default ;
    MetricDefinition(const MetricDefinition &) = default ;
    MetricDefinition(MetricDefinition &&) = default ;
    MetricDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricDefinition() = default ;
    MetricDefinition& operator=(const MetricDefinition &) = default ;
    MetricDefinition& operator=(MetricDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->regex_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MetricDefinition& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MetricDefinition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regex Field Functions 
    bool hasRegex() const { return this->regex_ != nullptr;};
    void deleteRegex() { this->regex_ = nullptr;};
    inline string regex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
    inline MetricDefinition& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
