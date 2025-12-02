// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDANSWERSAMPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDANSWERSAMPLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class AddAnswerSampleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAnswerSampleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SampleObject, sampleObject_);
      DARABONBA_PTR_TO_JSON(Samples, samples_);
    };
    friend void from_json(const Darabonba::Json& j, AddAnswerSampleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SampleObject, sampleObject_);
      DARABONBA_PTR_FROM_JSON(Samples, samples_);
    };
    AddAnswerSampleRequest() = default ;
    AddAnswerSampleRequest(const AddAnswerSampleRequest &) = default ;
    AddAnswerSampleRequest(AddAnswerSampleRequest &&) = default ;
    AddAnswerSampleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAnswerSampleRequest() = default ;
    AddAnswerSampleRequest& operator=(const AddAnswerSampleRequest &) = default ;
    AddAnswerSampleRequest& operator=(AddAnswerSampleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libId_ == nullptr
        && return this->regionId_ == nullptr && return this->sampleObject_ == nullptr && return this->samples_ == nullptr; };
    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline AddAnswerSampleRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddAnswerSampleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sampleObject Field Functions 
    bool hasSampleObject() const { return this->sampleObject_ != nullptr;};
    void deleteSampleObject() { this->sampleObject_ = nullptr;};
    inline string sampleObject() const { DARABONBA_PTR_GET_DEFAULT(sampleObject_, "") };
    inline AddAnswerSampleRequest& setSampleObject(string sampleObject) { DARABONBA_PTR_SET_VALUE(sampleObject_, sampleObject) };


    // samples Field Functions 
    bool hasSamples() const { return this->samples_ != nullptr;};
    void deleteSamples() { this->samples_ = nullptr;};
    inline string samples() const { DARABONBA_PTR_GET_DEFAULT(samples_, "") };
    inline AddAnswerSampleRequest& setSamples(string samples) { DARABONBA_PTR_SET_VALUE(samples_, samples) };


  protected:
    std::shared_ptr<string> libId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sampleObject_ = nullptr;
    std::shared_ptr<string> samples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
