// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEATUREVIEWREQUESTFIELDSTRANSFORM_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEATUREVIEWREQUESTFIELDSTRANSFORM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFeatureViewRequestFieldsTransformInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateFeatureViewRequestFieldsTransform : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFeatureViewRequestFieldsTransform& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(LLMConfigId, LLMConfigId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFeatureViewRequestFieldsTransform& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(LLMConfigId, LLMConfigId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateFeatureViewRequestFieldsTransform() = default ;
    CreateFeatureViewRequestFieldsTransform(const CreateFeatureViewRequestFieldsTransform &) = default ;
    CreateFeatureViewRequestFieldsTransform(CreateFeatureViewRequestFieldsTransform &&) = default ;
    CreateFeatureViewRequestFieldsTransform(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFeatureViewRequestFieldsTransform() = default ;
    CreateFeatureViewRequestFieldsTransform& operator=(const CreateFeatureViewRequestFieldsTransform &) = default ;
    CreateFeatureViewRequestFieldsTransform& operator=(CreateFeatureViewRequestFieldsTransform &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->input_ != nullptr
        && this->LLMConfigId_ != nullptr && this->type_ != nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const vector<Models::CreateFeatureViewRequestFieldsTransformInput> & input() const { DARABONBA_PTR_GET_CONST(input_, vector<Models::CreateFeatureViewRequestFieldsTransformInput>) };
    inline vector<Models::CreateFeatureViewRequestFieldsTransformInput> input() { DARABONBA_PTR_GET(input_, vector<Models::CreateFeatureViewRequestFieldsTransformInput>) };
    inline CreateFeatureViewRequestFieldsTransform& setInput(const vector<Models::CreateFeatureViewRequestFieldsTransformInput> & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline CreateFeatureViewRequestFieldsTransform& setInput(vector<Models::CreateFeatureViewRequestFieldsTransformInput> && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // LLMConfigId Field Functions 
    bool hasLLMConfigId() const { return this->LLMConfigId_ != nullptr;};
    void deleteLLMConfigId() { this->LLMConfigId_ = nullptr;};
    inline int32_t LLMConfigId() const { DARABONBA_PTR_GET_DEFAULT(LLMConfigId_, 0) };
    inline CreateFeatureViewRequestFieldsTransform& setLLMConfigId(int32_t LLMConfigId) { DARABONBA_PTR_SET_VALUE(LLMConfigId_, LLMConfigId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateFeatureViewRequestFieldsTransform& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::CreateFeatureViewRequestFieldsTransformInput>> input_ = nullptr;
    std::shared_ptr<int32_t> LLMConfigId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
