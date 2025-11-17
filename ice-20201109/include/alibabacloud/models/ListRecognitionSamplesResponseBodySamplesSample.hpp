// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOGNITIONSAMPLESRESPONSEBODYSAMPLESSAMPLE_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOGNITIONSAMPLESRESPONSEBODYSAMPLESSAMPLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListRecognitionSamplesResponseBodySamplesSample : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecognitionSamplesResponseBodySamplesSample& obj) { 
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(SampleId, sampleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecognitionSamplesResponseBodySamplesSample& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(SampleId, sampleId_);
    };
    ListRecognitionSamplesResponseBodySamplesSample() = default ;
    ListRecognitionSamplesResponseBodySamplesSample(const ListRecognitionSamplesResponseBodySamplesSample &) = default ;
    ListRecognitionSamplesResponseBodySamplesSample(ListRecognitionSamplesResponseBodySamplesSample &&) = default ;
    ListRecognitionSamplesResponseBodySamplesSample(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecognitionSamplesResponseBodySamplesSample() = default ;
    ListRecognitionSamplesResponseBodySamplesSample& operator=(const ListRecognitionSamplesResponseBodySamplesSample &) = default ;
    ListRecognitionSamplesResponseBodySamplesSample& operator=(ListRecognitionSamplesResponseBodySamplesSample &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityId_ == nullptr
        && return this->imageUrl_ == nullptr && return this->libId_ == nullptr && return this->sampleId_ == nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline ListRecognitionSamplesResponseBodySamplesSample& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ListRecognitionSamplesResponseBodySamplesSample& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline ListRecognitionSamplesResponseBodySamplesSample& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // sampleId Field Functions 
    bool hasSampleId() const { return this->sampleId_ != nullptr;};
    void deleteSampleId() { this->sampleId_ = nullptr;};
    inline string sampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, "") };
    inline ListRecognitionSamplesResponseBodySamplesSample& setSampleId(string sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


  protected:
    std::shared_ptr<string> entityId_ = nullptr;
    // The URL of the image sample.
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> libId_ = nullptr;
    // The sample ID.
    std::shared_ptr<string> sampleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
