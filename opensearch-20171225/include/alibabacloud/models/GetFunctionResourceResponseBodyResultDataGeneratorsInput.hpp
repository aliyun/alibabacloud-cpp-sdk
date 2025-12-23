// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONRESOURCERESPONSEBODYRESULTDATAGENERATORSINPUT_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONRESOURCERESPONSEBODYRESULTDATAGENERATORSINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionResourceResponseBodyResultDataGeneratorsInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionResourceResponseBodyResultDataGeneratorsInput& obj) { 
      DARABONBA_PTR_TO_JSON(Features, features_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionResourceResponseBodyResultDataGeneratorsInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Features, features_);
    };
    GetFunctionResourceResponseBodyResultDataGeneratorsInput() = default ;
    GetFunctionResourceResponseBodyResultDataGeneratorsInput(const GetFunctionResourceResponseBodyResultDataGeneratorsInput &) = default ;
    GetFunctionResourceResponseBodyResultDataGeneratorsInput(GetFunctionResourceResponseBodyResultDataGeneratorsInput &&) = default ;
    GetFunctionResourceResponseBodyResultDataGeneratorsInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionResourceResponseBodyResultDataGeneratorsInput() = default ;
    GetFunctionResourceResponseBodyResultDataGeneratorsInput& operator=(const GetFunctionResourceResponseBodyResultDataGeneratorsInput &) = default ;
    GetFunctionResourceResponseBodyResultDataGeneratorsInput& operator=(GetFunctionResourceResponseBodyResultDataGeneratorsInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->features_ == nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<Models::GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures> & features() const { DARABONBA_PTR_GET_CONST(features_, vector<Models::GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures>) };
    inline vector<Models::GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures> features() { DARABONBA_PTR_GET(features_, vector<Models::GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures>) };
    inline GetFunctionResourceResponseBodyResultDataGeneratorsInput& setFeatures(const vector<Models::GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline GetFunctionResourceResponseBodyResultDataGeneratorsInput& setFeatures(vector<Models::GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


  protected:
    // The input features.
    std::shared_ptr<vector<Models::GetFunctionResourceResponseBodyResultDataGeneratorsInputFeatures>> features_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
