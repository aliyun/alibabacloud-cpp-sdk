// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGINFERENCEJOBINFODTO_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGINFERENCEJOBINFODTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class Personalizedtxt2imgInferenceJobInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Personalizedtxt2imgInferenceJobInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(createUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(resultImageUrl, resultImageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, Personalizedtxt2imgInferenceJobInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(createUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(resultImageUrl, resultImageUrl_);
    };
    Personalizedtxt2imgInferenceJobInfoDTO() = default ;
    Personalizedtxt2imgInferenceJobInfoDTO(const Personalizedtxt2imgInferenceJobInfoDTO &) = default ;
    Personalizedtxt2imgInferenceJobInfoDTO(Personalizedtxt2imgInferenceJobInfoDTO &&) = default ;
    Personalizedtxt2imgInferenceJobInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Personalizedtxt2imgInferenceJobInfoDTO() = default ;
    Personalizedtxt2imgInferenceJobInfoDTO& operator=(const Personalizedtxt2imgInferenceJobInfoDTO &) = default ;
    Personalizedtxt2imgInferenceJobInfoDTO& operator=(Personalizedtxt2imgInferenceJobInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createUserId_ == nullptr
        && this->id_ == nullptr && this->jobStatus_ == nullptr && this->modelId_ == nullptr && this->resultImageUrl_ == nullptr; };
    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline Personalizedtxt2imgInferenceJobInfoDTO& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Personalizedtxt2imgInferenceJobInfoDTO& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline Personalizedtxt2imgInferenceJobInfoDTO& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline Personalizedtxt2imgInferenceJobInfoDTO& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // resultImageUrl Field Functions 
    bool hasResultImageUrl() const { return this->resultImageUrl_ != nullptr;};
    void deleteResultImageUrl() { this->resultImageUrl_ = nullptr;};
    inline const vector<string> & getResultImageUrl() const { DARABONBA_PTR_GET_CONST(resultImageUrl_, vector<string>) };
    inline vector<string> getResultImageUrl() { DARABONBA_PTR_GET(resultImageUrl_, vector<string>) };
    inline Personalizedtxt2imgInferenceJobInfoDTO& setResultImageUrl(const vector<string> & resultImageUrl) { DARABONBA_PTR_SET_VALUE(resultImageUrl_, resultImageUrl) };
    inline Personalizedtxt2imgInferenceJobInfoDTO& setResultImageUrl(vector<string> && resultImageUrl) { DARABONBA_PTR_SET_RVALUE(resultImageUrl_, resultImageUrl) };


  protected:
    shared_ptr<string> createUserId_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> jobStatus_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<vector<string>> resultImageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
