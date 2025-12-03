// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYSUCCESSMODELS_HPP_
#define ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYSUCCESSMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportOASResponseBodySuccessModelsSuccessModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportOASResponseBodySuccessModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOASResponseBodySuccessModels& obj) { 
      DARABONBA_PTR_TO_JSON(SuccessModel, successModel_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOASResponseBodySuccessModels& obj) { 
      DARABONBA_PTR_FROM_JSON(SuccessModel, successModel_);
    };
    ImportOASResponseBodySuccessModels() = default ;
    ImportOASResponseBodySuccessModels(const ImportOASResponseBodySuccessModels &) = default ;
    ImportOASResponseBodySuccessModels(ImportOASResponseBodySuccessModels &&) = default ;
    ImportOASResponseBodySuccessModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOASResponseBodySuccessModels() = default ;
    ImportOASResponseBodySuccessModels& operator=(const ImportOASResponseBodySuccessModels &) = default ;
    ImportOASResponseBodySuccessModels& operator=(ImportOASResponseBodySuccessModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->successModel_ == nullptr; };
    // successModel Field Functions 
    bool hasSuccessModel() const { return this->successModel_ != nullptr;};
    void deleteSuccessModel() { this->successModel_ = nullptr;};
    inline const vector<Models::ImportOASResponseBodySuccessModelsSuccessModel> & successModel() const { DARABONBA_PTR_GET_CONST(successModel_, vector<Models::ImportOASResponseBodySuccessModelsSuccessModel>) };
    inline vector<Models::ImportOASResponseBodySuccessModelsSuccessModel> successModel() { DARABONBA_PTR_GET(successModel_, vector<Models::ImportOASResponseBodySuccessModelsSuccessModel>) };
    inline ImportOASResponseBodySuccessModels& setSuccessModel(const vector<Models::ImportOASResponseBodySuccessModelsSuccessModel> & successModel) { DARABONBA_PTR_SET_VALUE(successModel_, successModel) };
    inline ImportOASResponseBodySuccessModels& setSuccessModel(vector<Models::ImportOASResponseBodySuccessModelsSuccessModel> && successModel) { DARABONBA_PTR_SET_RVALUE(successModel_, successModel) };


  protected:
    std::shared_ptr<vector<Models::ImportOASResponseBodySuccessModelsSuccessModel>> successModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
