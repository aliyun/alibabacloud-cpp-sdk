// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYFAILEDMODELS_HPP_
#define ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYFAILEDMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportOASResponseBodyFailedModelsFailedModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportOASResponseBodyFailedModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOASResponseBodyFailedModels& obj) { 
      DARABONBA_PTR_TO_JSON(FailedModel, failedModel_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOASResponseBodyFailedModels& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedModel, failedModel_);
    };
    ImportOASResponseBodyFailedModels() = default ;
    ImportOASResponseBodyFailedModels(const ImportOASResponseBodyFailedModels &) = default ;
    ImportOASResponseBodyFailedModels(ImportOASResponseBodyFailedModels &&) = default ;
    ImportOASResponseBodyFailedModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOASResponseBodyFailedModels() = default ;
    ImportOASResponseBodyFailedModels& operator=(const ImportOASResponseBodyFailedModels &) = default ;
    ImportOASResponseBodyFailedModels& operator=(ImportOASResponseBodyFailedModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedModel_ == nullptr; };
    // failedModel Field Functions 
    bool hasFailedModel() const { return this->failedModel_ != nullptr;};
    void deleteFailedModel() { this->failedModel_ = nullptr;};
    inline const vector<Models::ImportOASResponseBodyFailedModelsFailedModel> & failedModel() const { DARABONBA_PTR_GET_CONST(failedModel_, vector<Models::ImportOASResponseBodyFailedModelsFailedModel>) };
    inline vector<Models::ImportOASResponseBodyFailedModelsFailedModel> failedModel() { DARABONBA_PTR_GET(failedModel_, vector<Models::ImportOASResponseBodyFailedModelsFailedModel>) };
    inline ImportOASResponseBodyFailedModels& setFailedModel(const vector<Models::ImportOASResponseBodyFailedModelsFailedModel> & failedModel) { DARABONBA_PTR_SET_VALUE(failedModel_, failedModel) };
    inline ImportOASResponseBodyFailedModels& setFailedModel(vector<Models::ImportOASResponseBodyFailedModelsFailedModel> && failedModel) { DARABONBA_PTR_SET_RVALUE(failedModel_, failedModel) };


  protected:
    std::shared_ptr<vector<Models::ImportOASResponseBodyFailedModelsFailedModel>> failedModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
