// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{
namespace Models
{
  class UpdateJobPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobPlanCurrentStep, jobPlanCurrentStep_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobPlanCurrentStep, jobPlanCurrentStep_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    UpdateJobPlanRequest() = default ;
    UpdateJobPlanRequest(const UpdateJobPlanRequest &) = default ;
    UpdateJobPlanRequest(UpdateJobPlanRequest &&) = default ;
    UpdateJobPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobPlanRequest() = default ;
    UpdateJobPlanRequest& operator=(const UpdateJobPlanRequest &) = default ;
    UpdateJobPlanRequest& operator=(UpdateJobPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. If the tag key already exists, the tag is updated. Otherwise, a new tag is added.
      shared_ptr<string> key_ {};
      // The tag key. If the tag key already exists, the tag is updated. Otherwise, a new tag is added.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->jobPlanCurrentStep_ == nullptr
        && this->tag_ == nullptr; };
    // jobPlanCurrentStep Field Functions 
    bool hasJobPlanCurrentStep() const { return this->jobPlanCurrentStep_ != nullptr;};
    void deleteJobPlanCurrentStep() { this->jobPlanCurrentStep_ = nullptr;};
    inline string getJobPlanCurrentStep() const { DARABONBA_PTR_GET_DEFAULT(jobPlanCurrentStep_, "") };
    inline UpdateJobPlanRequest& setJobPlanCurrentStep(string jobPlanCurrentStep) { DARABONBA_PTR_SET_VALUE(jobPlanCurrentStep_, jobPlanCurrentStep) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<UpdateJobPlanRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<UpdateJobPlanRequest::Tag>) };
    inline vector<UpdateJobPlanRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<UpdateJobPlanRequest::Tag>) };
    inline UpdateJobPlanRequest& setTag(const vector<UpdateJobPlanRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline UpdateJobPlanRequest& setTag(vector<UpdateJobPlanRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The current step of the task plan. Set this parameter to `DatasetSynthesisAndModelTrain` for the full process or `DatasetSynthesisModelTrain` for step-by-step execution.
    shared_ptr<string> jobPlanCurrentStep_ {};
    // The list of tags.
    shared_ptr<vector<UpdateJobPlanRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
