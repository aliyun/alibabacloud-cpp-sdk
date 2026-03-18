// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGMODELTRAINJOBINFODTO_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGMODELTRAINJOBINFODTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Personalizedtxt2imgInferenceJobInfoDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class Personalizedtxt2imgModelTrainJobInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Personalizedtxt2imgModelTrainJobInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InferenceJobList, inferenceJobList_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, Personalizedtxt2imgModelTrainJobInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InferenceJobList, inferenceJobList_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    Personalizedtxt2imgModelTrainJobInfoDTO() = default ;
    Personalizedtxt2imgModelTrainJobInfoDTO(const Personalizedtxt2imgModelTrainJobInfoDTO &) = default ;
    Personalizedtxt2imgModelTrainJobInfoDTO(Personalizedtxt2imgModelTrainJobInfoDTO &&) = default ;
    Personalizedtxt2imgModelTrainJobInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Personalizedtxt2imgModelTrainJobInfoDTO() = default ;
    Personalizedtxt2imgModelTrainJobInfoDTO& operator=(const Personalizedtxt2imgModelTrainJobInfoDTO &) = default ;
    Personalizedtxt2imgModelTrainJobInfoDTO& operator=(Personalizedtxt2imgModelTrainJobInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUserId_ == nullptr && this->imageUrl_ == nullptr && this->inferenceJobList_ == nullptr && this->jobStatus_ == nullptr && this->name_ == nullptr
        && this->objectType_ == nullptr && this->id_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Personalizedtxt2imgModelTrainJobInfoDTO& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline Personalizedtxt2imgModelTrainJobInfoDTO& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline const vector<string> & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, vector<string>) };
    inline vector<string> getImageUrl() { DARABONBA_PTR_GET(imageUrl_, vector<string>) };
    inline Personalizedtxt2imgModelTrainJobInfoDTO& setImageUrl(const vector<string> & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
    inline Personalizedtxt2imgModelTrainJobInfoDTO& setImageUrl(vector<string> && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


    // inferenceJobList Field Functions 
    bool hasInferenceJobList() const { return this->inferenceJobList_ != nullptr;};
    void deleteInferenceJobList() { this->inferenceJobList_ = nullptr;};
    inline const vector<Personalizedtxt2imgInferenceJobInfoDTO> & getInferenceJobList() const { DARABONBA_PTR_GET_CONST(inferenceJobList_, vector<Personalizedtxt2imgInferenceJobInfoDTO>) };
    inline vector<Personalizedtxt2imgInferenceJobInfoDTO> getInferenceJobList() { DARABONBA_PTR_GET(inferenceJobList_, vector<Personalizedtxt2imgInferenceJobInfoDTO>) };
    inline Personalizedtxt2imgModelTrainJobInfoDTO& setInferenceJobList(const vector<Personalizedtxt2imgInferenceJobInfoDTO> & inferenceJobList) { DARABONBA_PTR_SET_VALUE(inferenceJobList_, inferenceJobList) };
    inline Personalizedtxt2imgModelTrainJobInfoDTO& setInferenceJobList(vector<Personalizedtxt2imgInferenceJobInfoDTO> && inferenceJobList) { DARABONBA_PTR_SET_RVALUE(inferenceJobList_, inferenceJobList) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline Personalizedtxt2imgModelTrainJobInfoDTO& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Personalizedtxt2imgModelTrainJobInfoDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline Personalizedtxt2imgModelTrainJobInfoDTO& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Personalizedtxt2imgModelTrainJobInfoDTO& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> createUserId_ {};
    shared_ptr<vector<string>> imageUrl_ {};
    shared_ptr<vector<Personalizedtxt2imgInferenceJobInfoDTO>> inferenceJobList_ {};
    shared_ptr<string> jobStatus_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> objectType_ {};
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
