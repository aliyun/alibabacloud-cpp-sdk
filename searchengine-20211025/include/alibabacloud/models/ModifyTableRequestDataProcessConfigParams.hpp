// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTABLEREQUESTDATAPROCESSCONFIGPARAMS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTABLEREQUESTDATAPROCESSCONFIGPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyTableRequestDataProcessConfigParamsSrcFieldConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyTableRequestDataProcessConfigParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTableRequestDataProcessConfigParams& obj) { 
      DARABONBA_PTR_TO_JSON(srcFieldConfig, srcFieldConfig_);
      DARABONBA_PTR_TO_JSON(vectorModal, vectorModal_);
      DARABONBA_PTR_TO_JSON(vectorModel, vectorModel_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTableRequestDataProcessConfigParams& obj) { 
      DARABONBA_PTR_FROM_JSON(srcFieldConfig, srcFieldConfig_);
      DARABONBA_PTR_FROM_JSON(vectorModal, vectorModal_);
      DARABONBA_PTR_FROM_JSON(vectorModel, vectorModel_);
    };
    ModifyTableRequestDataProcessConfigParams() = default ;
    ModifyTableRequestDataProcessConfigParams(const ModifyTableRequestDataProcessConfigParams &) = default ;
    ModifyTableRequestDataProcessConfigParams(ModifyTableRequestDataProcessConfigParams &&) = default ;
    ModifyTableRequestDataProcessConfigParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTableRequestDataProcessConfigParams() = default ;
    ModifyTableRequestDataProcessConfigParams& operator=(const ModifyTableRequestDataProcessConfigParams &) = default ;
    ModifyTableRequestDataProcessConfigParams& operator=(ModifyTableRequestDataProcessConfigParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->srcFieldConfig_ != nullptr
        && this->vectorModal_ != nullptr && this->vectorModel_ != nullptr; };
    // srcFieldConfig Field Functions 
    bool hasSrcFieldConfig() const { return this->srcFieldConfig_ != nullptr;};
    void deleteSrcFieldConfig() { this->srcFieldConfig_ = nullptr;};
    inline const Models::ModifyTableRequestDataProcessConfigParamsSrcFieldConfig & srcFieldConfig() const { DARABONBA_PTR_GET_CONST(srcFieldConfig_, Models::ModifyTableRequestDataProcessConfigParamsSrcFieldConfig) };
    inline Models::ModifyTableRequestDataProcessConfigParamsSrcFieldConfig srcFieldConfig() { DARABONBA_PTR_GET(srcFieldConfig_, Models::ModifyTableRequestDataProcessConfigParamsSrcFieldConfig) };
    inline ModifyTableRequestDataProcessConfigParams& setSrcFieldConfig(const Models::ModifyTableRequestDataProcessConfigParamsSrcFieldConfig & srcFieldConfig) { DARABONBA_PTR_SET_VALUE(srcFieldConfig_, srcFieldConfig) };
    inline ModifyTableRequestDataProcessConfigParams& setSrcFieldConfig(Models::ModifyTableRequestDataProcessConfigParamsSrcFieldConfig && srcFieldConfig) { DARABONBA_PTR_SET_RVALUE(srcFieldConfig_, srcFieldConfig) };


    // vectorModal Field Functions 
    bool hasVectorModal() const { return this->vectorModal_ != nullptr;};
    void deleteVectorModal() { this->vectorModal_ = nullptr;};
    inline string vectorModal() const { DARABONBA_PTR_GET_DEFAULT(vectorModal_, "") };
    inline ModifyTableRequestDataProcessConfigParams& setVectorModal(string vectorModal) { DARABONBA_PTR_SET_VALUE(vectorModal_, vectorModal) };


    // vectorModel Field Functions 
    bool hasVectorModel() const { return this->vectorModel_ != nullptr;};
    void deleteVectorModel() { this->vectorModel_ = nullptr;};
    inline string vectorModel() const { DARABONBA_PTR_GET_DEFAULT(vectorModel_, "") };
    inline ModifyTableRequestDataProcessConfigParams& setVectorModel(string vectorModel) { DARABONBA_PTR_SET_VALUE(vectorModel_, vectorModel) };


  protected:
    // The source of the data to be vectorized.
    std::shared_ptr<Models::ModifyTableRequestDataProcessConfigParamsSrcFieldConfig> srcFieldConfig_ = nullptr;
    // The data type.
    std::shared_ptr<string> vectorModal_ = nullptr;
    // The vectorization model.
    std::shared_ptr<string> vectorModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
