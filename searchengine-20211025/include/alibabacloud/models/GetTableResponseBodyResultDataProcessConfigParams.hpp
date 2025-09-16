// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULTDATAPROCESSCONFIGPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULTDATAPROCESSCONFIGPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetTableResponseBodyResultDataProcessConfigParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableResponseBodyResultDataProcessConfigParams& obj) { 
      DARABONBA_PTR_TO_JSON(srcFieldConfig, srcFieldConfig_);
      DARABONBA_PTR_TO_JSON(vectorModal, vectorModal_);
      DARABONBA_PTR_TO_JSON(vectorModel, vectorModel_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableResponseBodyResultDataProcessConfigParams& obj) { 
      DARABONBA_PTR_FROM_JSON(srcFieldConfig, srcFieldConfig_);
      DARABONBA_PTR_FROM_JSON(vectorModal, vectorModal_);
      DARABONBA_PTR_FROM_JSON(vectorModel, vectorModel_);
    };
    GetTableResponseBodyResultDataProcessConfigParams() = default ;
    GetTableResponseBodyResultDataProcessConfigParams(const GetTableResponseBodyResultDataProcessConfigParams &) = default ;
    GetTableResponseBodyResultDataProcessConfigParams(GetTableResponseBodyResultDataProcessConfigParams &&) = default ;
    GetTableResponseBodyResultDataProcessConfigParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableResponseBodyResultDataProcessConfigParams() = default ;
    GetTableResponseBodyResultDataProcessConfigParams& operator=(const GetTableResponseBodyResultDataProcessConfigParams &) = default ;
    GetTableResponseBodyResultDataProcessConfigParams& operator=(GetTableResponseBodyResultDataProcessConfigParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->srcFieldConfig_ != nullptr
        && this->vectorModal_ != nullptr && this->vectorModel_ != nullptr; };
    // srcFieldConfig Field Functions 
    bool hasSrcFieldConfig() const { return this->srcFieldConfig_ != nullptr;};
    void deleteSrcFieldConfig() { this->srcFieldConfig_ = nullptr;};
    inline const Models::GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig & srcFieldConfig() const { DARABONBA_PTR_GET_CONST(srcFieldConfig_, Models::GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig) };
    inline Models::GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig srcFieldConfig() { DARABONBA_PTR_GET(srcFieldConfig_, Models::GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig) };
    inline GetTableResponseBodyResultDataProcessConfigParams& setSrcFieldConfig(const Models::GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig & srcFieldConfig) { DARABONBA_PTR_SET_VALUE(srcFieldConfig_, srcFieldConfig) };
    inline GetTableResponseBodyResultDataProcessConfigParams& setSrcFieldConfig(Models::GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig && srcFieldConfig) { DARABONBA_PTR_SET_RVALUE(srcFieldConfig_, srcFieldConfig) };


    // vectorModal Field Functions 
    bool hasVectorModal() const { return this->vectorModal_ != nullptr;};
    void deleteVectorModal() { this->vectorModal_ = nullptr;};
    inline string vectorModal() const { DARABONBA_PTR_GET_DEFAULT(vectorModal_, "") };
    inline GetTableResponseBodyResultDataProcessConfigParams& setVectorModal(string vectorModal) { DARABONBA_PTR_SET_VALUE(vectorModal_, vectorModal) };


    // vectorModel Field Functions 
    bool hasVectorModel() const { return this->vectorModel_ != nullptr;};
    void deleteVectorModel() { this->vectorModel_ = nullptr;};
    inline string vectorModel() const { DARABONBA_PTR_GET_DEFAULT(vectorModel_, "") };
    inline GetTableResponseBodyResultDataProcessConfigParams& setVectorModel(string vectorModel) { DARABONBA_PTR_SET_VALUE(vectorModel_, vectorModel) };


  protected:
    // The source of the data to be vectorized.
    std::shared_ptr<Models::GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig> srcFieldConfig_ = nullptr;
    // The data type.
    std::shared_ptr<string> vectorModal_ = nullptr;
    // The vectorization model.
    std::shared_ptr<string> vectorModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
