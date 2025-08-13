// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECOMMENDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECOMMENDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateRecommendTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecommendTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sampleId, sampleId_);
      DARABONBA_PTR_TO_JSON(variablesStr, variablesStr_);
      DARABONBA_PTR_TO_JSON(velocitiesStr, velocitiesStr_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecommendTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sampleId, sampleId_);
      DARABONBA_PTR_FROM_JSON(variablesStr, variablesStr_);
      DARABONBA_PTR_FROM_JSON(velocitiesStr, velocitiesStr_);
    };
    CreateRecommendTaskRequest() = default ;
    CreateRecommendTaskRequest(const CreateRecommendTaskRequest &) = default ;
    CreateRecommendTaskRequest(CreateRecommendTaskRequest &&) = default ;
    CreateRecommendTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecommendTaskRequest() = default ;
    CreateRecommendTaskRequest& operator=(const CreateRecommendTaskRequest &) = default ;
    CreateRecommendTaskRequest& operator=(CreateRecommendTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->name_ != nullptr && this->regId_ != nullptr && this->sampleId_ != nullptr && this->variablesStr_ != nullptr && this->velocitiesStr_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateRecommendTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRecommendTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateRecommendTaskRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleId Field Functions 
    bool hasSampleId() const { return this->sampleId_ != nullptr;};
    void deleteSampleId() { this->sampleId_ = nullptr;};
    inline int64_t sampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, 0L) };
    inline CreateRecommendTaskRequest& setSampleId(int64_t sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


    // variablesStr Field Functions 
    bool hasVariablesStr() const { return this->variablesStr_ != nullptr;};
    void deleteVariablesStr() { this->variablesStr_ = nullptr;};
    inline string variablesStr() const { DARABONBA_PTR_GET_DEFAULT(variablesStr_, "") };
    inline CreateRecommendTaskRequest& setVariablesStr(string variablesStr) { DARABONBA_PTR_SET_VALUE(variablesStr_, variablesStr) };


    // velocitiesStr Field Functions 
    bool hasVelocitiesStr() const { return this->velocitiesStr_ != nullptr;};
    void deleteVelocitiesStr() { this->velocitiesStr_ = nullptr;};
    inline string velocitiesStr() const { DARABONBA_PTR_GET_DEFAULT(velocitiesStr_, "") };
    inline CreateRecommendTaskRequest& setVelocitiesStr(string velocitiesStr) { DARABONBA_PTR_SET_VALUE(velocitiesStr_, velocitiesStr) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Name
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Task ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> sampleId_ = nullptr;
    // Variables to be calculated, variables
    // 
    // This parameter is required.
    std::shared_ptr<string> variablesStr_ = nullptr;
    // Indicator effect
    // 
    // This parameter is required.
    std::shared_ptr<string> velocitiesStr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
