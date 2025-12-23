// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONRESOURCERESPONSEBODYRESULTDATAGENERATORSINPUTFEATURES_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONRESOURCERESPONSEBODYRESULTDATAGENERATORSINPUTFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures() = default ;
    GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures(const GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures &) = default ;
    GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures(GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures &&) = default ;
    GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures() = default ;
    GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures& operator=(const GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures &) = default ;
    GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures& operator=(GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the feature.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the feature.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
