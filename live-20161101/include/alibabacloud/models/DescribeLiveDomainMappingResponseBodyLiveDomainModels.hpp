// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMAPPINGRESPONSEBODYLIVEDOMAINMODELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMAPPINGRESPONSEBODYLIVEDOMAINMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainMappingResponseBodyLiveDomainModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainMappingResponseBodyLiveDomainModels& obj) { 
      DARABONBA_PTR_TO_JSON(LiveDomainModel, liveDomainModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainMappingResponseBodyLiveDomainModels& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveDomainModel, liveDomainModel_);
    };
    DescribeLiveDomainMappingResponseBodyLiveDomainModels() = default ;
    DescribeLiveDomainMappingResponseBodyLiveDomainModels(const DescribeLiveDomainMappingResponseBodyLiveDomainModels &) = default ;
    DescribeLiveDomainMappingResponseBodyLiveDomainModels(DescribeLiveDomainMappingResponseBodyLiveDomainModels &&) = default ;
    DescribeLiveDomainMappingResponseBodyLiveDomainModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainMappingResponseBodyLiveDomainModels() = default ;
    DescribeLiveDomainMappingResponseBodyLiveDomainModels& operator=(const DescribeLiveDomainMappingResponseBodyLiveDomainModels &) = default ;
    DescribeLiveDomainMappingResponseBodyLiveDomainModels& operator=(DescribeLiveDomainMappingResponseBodyLiveDomainModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveDomainModel_ == nullptr; };
    // liveDomainModel Field Functions 
    bool hasLiveDomainModel() const { return this->liveDomainModel_ != nullptr;};
    void deleteLiveDomainModel() { this->liveDomainModel_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel> & liveDomainModel() const { DARABONBA_PTR_GET_CONST(liveDomainModel_, vector<Models::DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel>) };
    inline vector<Models::DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel> liveDomainModel() { DARABONBA_PTR_GET(liveDomainModel_, vector<Models::DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel>) };
    inline DescribeLiveDomainMappingResponseBodyLiveDomainModels& setLiveDomainModel(const vector<Models::DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel> & liveDomainModel) { DARABONBA_PTR_SET_VALUE(liveDomainModel_, liveDomainModel) };
    inline DescribeLiveDomainMappingResponseBodyLiveDomainModels& setLiveDomainModel(vector<Models::DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel> && liveDomainModel) { DARABONBA_PTR_SET_RVALUE(liveDomainModel_, liveDomainModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainMappingResponseBodyLiveDomainModelsLiveDomainModel>> liveDomainModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
