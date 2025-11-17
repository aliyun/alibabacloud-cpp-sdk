// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREVIEWRESPONSEBODYFIELDSTRANSFORM_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREVIEWRESPONSEBODYFIELDSTRANSFORM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFeatureViewResponseBodyFieldsTransformInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetFeatureViewResponseBodyFieldsTransform : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureViewResponseBodyFieldsTransform& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(LLMConfigId, LLMConfigId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureViewResponseBodyFieldsTransform& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(LLMConfigId, LLMConfigId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetFeatureViewResponseBodyFieldsTransform() = default ;
    GetFeatureViewResponseBodyFieldsTransform(const GetFeatureViewResponseBodyFieldsTransform &) = default ;
    GetFeatureViewResponseBodyFieldsTransform(GetFeatureViewResponseBodyFieldsTransform &&) = default ;
    GetFeatureViewResponseBodyFieldsTransform(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureViewResponseBodyFieldsTransform() = default ;
    GetFeatureViewResponseBodyFieldsTransform& operator=(const GetFeatureViewResponseBodyFieldsTransform &) = default ;
    GetFeatureViewResponseBodyFieldsTransform& operator=(GetFeatureViewResponseBodyFieldsTransform &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && return this->LLMConfigId_ == nullptr && return this->type_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const vector<Models::GetFeatureViewResponseBodyFieldsTransformInput> & input() const { DARABONBA_PTR_GET_CONST(input_, vector<Models::GetFeatureViewResponseBodyFieldsTransformInput>) };
    inline vector<Models::GetFeatureViewResponseBodyFieldsTransformInput> input() { DARABONBA_PTR_GET(input_, vector<Models::GetFeatureViewResponseBodyFieldsTransformInput>) };
    inline GetFeatureViewResponseBodyFieldsTransform& setInput(const vector<Models::GetFeatureViewResponseBodyFieldsTransformInput> & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline GetFeatureViewResponseBodyFieldsTransform& setInput(vector<Models::GetFeatureViewResponseBodyFieldsTransformInput> && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // LLMConfigId Field Functions 
    bool hasLLMConfigId() const { return this->LLMConfigId_ != nullptr;};
    void deleteLLMConfigId() { this->LLMConfigId_ = nullptr;};
    inline int32_t LLMConfigId() const { DARABONBA_PTR_GET_DEFAULT(LLMConfigId_, 0) };
    inline GetFeatureViewResponseBodyFieldsTransform& setLLMConfigId(int32_t LLMConfigId) { DARABONBA_PTR_SET_VALUE(LLMConfigId_, LLMConfigId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetFeatureViewResponseBodyFieldsTransform& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::GetFeatureViewResponseBodyFieldsTransformInput>> input_ = nullptr;
    std::shared_ptr<int32_t> LLMConfigId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
