// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETABLEREQUESTDATAPROCESSCONFIGPARAMS_HPP_
#define ALIBABACLOUD_MODELS_CREATETABLEREQUESTDATAPROCESSCONFIGPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTableRequestDataProcessConfigParamsSrcFieldConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateTableRequestDataProcessConfigParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTableRequestDataProcessConfigParams& obj) { 
      DARABONBA_PTR_TO_JSON(srcFieldConfig, srcFieldConfig_);
      DARABONBA_PTR_TO_JSON(vectorModal, vectorModal_);
      DARABONBA_PTR_TO_JSON(vectorModel, vectorModel_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTableRequestDataProcessConfigParams& obj) { 
      DARABONBA_PTR_FROM_JSON(srcFieldConfig, srcFieldConfig_);
      DARABONBA_PTR_FROM_JSON(vectorModal, vectorModal_);
      DARABONBA_PTR_FROM_JSON(vectorModel, vectorModel_);
    };
    CreateTableRequestDataProcessConfigParams() = default ;
    CreateTableRequestDataProcessConfigParams(const CreateTableRequestDataProcessConfigParams &) = default ;
    CreateTableRequestDataProcessConfigParams(CreateTableRequestDataProcessConfigParams &&) = default ;
    CreateTableRequestDataProcessConfigParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTableRequestDataProcessConfigParams() = default ;
    CreateTableRequestDataProcessConfigParams& operator=(const CreateTableRequestDataProcessConfigParams &) = default ;
    CreateTableRequestDataProcessConfigParams& operator=(CreateTableRequestDataProcessConfigParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->srcFieldConfig_ != nullptr
        && this->vectorModal_ != nullptr && this->vectorModel_ != nullptr; };
    // srcFieldConfig Field Functions 
    bool hasSrcFieldConfig() const { return this->srcFieldConfig_ != nullptr;};
    void deleteSrcFieldConfig() { this->srcFieldConfig_ = nullptr;};
    inline const Models::CreateTableRequestDataProcessConfigParamsSrcFieldConfig & srcFieldConfig() const { DARABONBA_PTR_GET_CONST(srcFieldConfig_, Models::CreateTableRequestDataProcessConfigParamsSrcFieldConfig) };
    inline Models::CreateTableRequestDataProcessConfigParamsSrcFieldConfig srcFieldConfig() { DARABONBA_PTR_GET(srcFieldConfig_, Models::CreateTableRequestDataProcessConfigParamsSrcFieldConfig) };
    inline CreateTableRequestDataProcessConfigParams& setSrcFieldConfig(const Models::CreateTableRequestDataProcessConfigParamsSrcFieldConfig & srcFieldConfig) { DARABONBA_PTR_SET_VALUE(srcFieldConfig_, srcFieldConfig) };
    inline CreateTableRequestDataProcessConfigParams& setSrcFieldConfig(Models::CreateTableRequestDataProcessConfigParamsSrcFieldConfig && srcFieldConfig) { DARABONBA_PTR_SET_RVALUE(srcFieldConfig_, srcFieldConfig) };


    // vectorModal Field Functions 
    bool hasVectorModal() const { return this->vectorModal_ != nullptr;};
    void deleteVectorModal() { this->vectorModal_ = nullptr;};
    inline string vectorModal() const { DARABONBA_PTR_GET_DEFAULT(vectorModal_, "") };
    inline CreateTableRequestDataProcessConfigParams& setVectorModal(string vectorModal) { DARABONBA_PTR_SET_VALUE(vectorModal_, vectorModal) };


    // vectorModel Field Functions 
    bool hasVectorModel() const { return this->vectorModel_ != nullptr;};
    void deleteVectorModel() { this->vectorModel_ = nullptr;};
    inline string vectorModel() const { DARABONBA_PTR_GET_DEFAULT(vectorModel_, "") };
    inline CreateTableRequestDataProcessConfigParams& setVectorModel(string vectorModel) { DARABONBA_PTR_SET_VALUE(vectorModel_, vectorModel) };


  protected:
    // The source of the data to be vectorized.
    std::shared_ptr<Models::CreateTableRequestDataProcessConfigParamsSrcFieldConfig> srcFieldConfig_ = nullptr;
    // The data type.
    std::shared_ptr<string> vectorModal_ = nullptr;
    // The vectorization model.
    std::shared_ptr<string> vectorModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
