// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANSWERLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANSWERLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class CreateAnswerLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnswerLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LibName, libName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SampleBucket, sampleBucket_);
      DARABONBA_PTR_TO_JSON(SampleObject, sampleObject_);
      DARABONBA_PTR_TO_JSON(Samples, samples_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnswerLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SampleBucket, sampleBucket_);
      DARABONBA_PTR_FROM_JSON(SampleObject, sampleObject_);
      DARABONBA_PTR_FROM_JSON(Samples, samples_);
    };
    CreateAnswerLibRequest() = default ;
    CreateAnswerLibRequest(const CreateAnswerLibRequest &) = default ;
    CreateAnswerLibRequest(CreateAnswerLibRequest &&) = default ;
    CreateAnswerLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnswerLibRequest() = default ;
    CreateAnswerLibRequest& operator=(const CreateAnswerLibRequest &) = default ;
    CreateAnswerLibRequest& operator=(CreateAnswerLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libName_ == nullptr
        && return this->regionId_ == nullptr && return this->sampleBucket_ == nullptr && return this->sampleObject_ == nullptr && return this->samples_ == nullptr; };
    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline CreateAnswerLibRequest& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAnswerLibRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sampleBucket Field Functions 
    bool hasSampleBucket() const { return this->sampleBucket_ != nullptr;};
    void deleteSampleBucket() { this->sampleBucket_ = nullptr;};
    inline string sampleBucket() const { DARABONBA_PTR_GET_DEFAULT(sampleBucket_, "") };
    inline CreateAnswerLibRequest& setSampleBucket(string sampleBucket) { DARABONBA_PTR_SET_VALUE(sampleBucket_, sampleBucket) };


    // sampleObject Field Functions 
    bool hasSampleObject() const { return this->sampleObject_ != nullptr;};
    void deleteSampleObject() { this->sampleObject_ = nullptr;};
    inline string sampleObject() const { DARABONBA_PTR_GET_DEFAULT(sampleObject_, "") };
    inline CreateAnswerLibRequest& setSampleObject(string sampleObject) { DARABONBA_PTR_SET_VALUE(sampleObject_, sampleObject) };


    // samples Field Functions 
    bool hasSamples() const { return this->samples_ != nullptr;};
    void deleteSamples() { this->samples_ = nullptr;};
    inline string samples() const { DARABONBA_PTR_GET_DEFAULT(samples_, "") };
    inline CreateAnswerLibRequest& setSamples(string samples) { DARABONBA_PTR_SET_VALUE(samples_, samples) };


  protected:
    std::shared_ptr<string> libName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sampleBucket_ = nullptr;
    std::shared_ptr<string> sampleObject_ = nullptr;
    std::shared_ptr<string> samples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
