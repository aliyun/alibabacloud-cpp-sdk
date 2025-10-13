// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALGORITHMSPECPROGRESSDEFINITIONSOVERALLPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_ALGORITHMSPECPROGRESSDEFINITIONSOVERALLPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class AlgorithmSpecProgressDefinitionsOverallProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlgorithmSpecProgressDefinitionsOverallProgress& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Regex, regex_);
    };
    friend void from_json(const Darabonba::Json& j, AlgorithmSpecProgressDefinitionsOverallProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Regex, regex_);
    };
    AlgorithmSpecProgressDefinitionsOverallProgress() = default ;
    AlgorithmSpecProgressDefinitionsOverallProgress(const AlgorithmSpecProgressDefinitionsOverallProgress &) = default ;
    AlgorithmSpecProgressDefinitionsOverallProgress(AlgorithmSpecProgressDefinitionsOverallProgress &&) = default ;
    AlgorithmSpecProgressDefinitionsOverallProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlgorithmSpecProgressDefinitionsOverallProgress() = default ;
    AlgorithmSpecProgressDefinitionsOverallProgress& operator=(const AlgorithmSpecProgressDefinitionsOverallProgress &) = default ;
    AlgorithmSpecProgressDefinitionsOverallProgress& operator=(AlgorithmSpecProgressDefinitionsOverallProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->regex_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AlgorithmSpecProgressDefinitionsOverallProgress& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regex Field Functions 
    bool hasRegex() const { return this->regex_ != nullptr;};
    void deleteRegex() { this->regex_ = nullptr;};
    inline string regex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
    inline AlgorithmSpecProgressDefinitionsOverallProgress& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> regex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
