// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EMBEDDINGTRANSFORMPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_EMBEDDINGTRANSFORMPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EmbeddingTransformParametersEmbeddingData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EmbeddingTransformParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EmbeddingTransformParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(EmbeddingData, embeddingData_);
      DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
    };
    friend void from_json(const Darabonba::Json& j, EmbeddingTransformParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(EmbeddingData, embeddingData_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
    };
    EmbeddingTransformParameters() = default ;
    EmbeddingTransformParameters(const EmbeddingTransformParameters &) = default ;
    EmbeddingTransformParameters(EmbeddingTransformParameters &&) = default ;
    EmbeddingTransformParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EmbeddingTransformParameters() = default ;
    EmbeddingTransformParameters& operator=(const EmbeddingTransformParameters &) = default ;
    EmbeddingTransformParameters& operator=(EmbeddingTransformParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->embeddingData_ == nullptr && return this->embeddingModel_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline EmbeddingTransformParameters& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // embeddingData Field Functions 
    bool hasEmbeddingData() const { return this->embeddingData_ != nullptr;};
    void deleteEmbeddingData() { this->embeddingData_ = nullptr;};
    inline const EmbeddingTransformParametersEmbeddingData & embeddingData() const { DARABONBA_PTR_GET_CONST(embeddingData_, EmbeddingTransformParametersEmbeddingData) };
    inline EmbeddingTransformParametersEmbeddingData embeddingData() { DARABONBA_PTR_GET(embeddingData_, EmbeddingTransformParametersEmbeddingData) };
    inline EmbeddingTransformParameters& setEmbeddingData(const EmbeddingTransformParametersEmbeddingData & embeddingData) { DARABONBA_PTR_SET_VALUE(embeddingData_, embeddingData) };
    inline EmbeddingTransformParameters& setEmbeddingData(EmbeddingTransformParametersEmbeddingData && embeddingData) { DARABONBA_PTR_SET_RVALUE(embeddingData_, embeddingData) };


    // embeddingModel Field Functions 
    bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
    void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
    inline string embeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
    inline EmbeddingTransformParameters& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<EmbeddingTransformParametersEmbeddingData> embeddingData_ = nullptr;
    std::shared_ptr<string> embeddingModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
