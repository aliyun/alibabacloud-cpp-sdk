// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOGNITIONSAMPLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOGNITIONSAMPLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListRecognitionSamplesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecognitionSamplesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Samples, samples_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecognitionSamplesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Samples, samples_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecognitionSamplesResponseBody() = default ;
    ListRecognitionSamplesResponseBody(const ListRecognitionSamplesResponseBody &) = default ;
    ListRecognitionSamplesResponseBody(ListRecognitionSamplesResponseBody &&) = default ;
    ListRecognitionSamplesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecognitionSamplesResponseBody() = default ;
    ListRecognitionSamplesResponseBody& operator=(const ListRecognitionSamplesResponseBody &) = default ;
    ListRecognitionSamplesResponseBody& operator=(ListRecognitionSamplesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Samples : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Samples& obj) { 
        DARABONBA_PTR_TO_JSON(Sample, sample_);
      };
      friend void from_json(const Darabonba::Json& j, Samples& obj) { 
        DARABONBA_PTR_FROM_JSON(Sample, sample_);
      };
      Samples() = default ;
      Samples(const Samples &) = default ;
      Samples(Samples &&) = default ;
      Samples(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Samples() = default ;
      Samples& operator=(const Samples &) = default ;
      Samples& operator=(Samples &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sample : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sample& obj) { 
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(LibId, libId_);
          DARABONBA_PTR_TO_JSON(SampleId, sampleId_);
        };
        friend void from_json(const Darabonba::Json& j, Sample& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(LibId, libId_);
          DARABONBA_PTR_FROM_JSON(SampleId, sampleId_);
        };
        Sample() = default ;
        Sample(const Sample &) = default ;
        Sample(Sample &&) = default ;
        Sample(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sample() = default ;
        Sample& operator=(const Sample &) = default ;
        Sample& operator=(Sample &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->entityId_ == nullptr
        && this->imageUrl_ == nullptr && this->libId_ == nullptr && this->sampleId_ == nullptr; };
        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Sample& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline Sample& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // libId Field Functions 
        bool hasLibId() const { return this->libId_ != nullptr;};
        void deleteLibId() { this->libId_ = nullptr;};
        inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
        inline Sample& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


        // sampleId Field Functions 
        bool hasSampleId() const { return this->sampleId_ != nullptr;};
        void deleteSampleId() { this->sampleId_ = nullptr;};
        inline string getSampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, "") };
        inline Sample& setSampleId(string sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


      protected:
        shared_ptr<string> entityId_ {};
        // The URL of the image sample.
        shared_ptr<string> imageUrl_ {};
        shared_ptr<string> libId_ {};
        // The sample ID.
        shared_ptr<string> sampleId_ {};
      };

      virtual bool empty() const override { return this->sample_ == nullptr; };
      // sample Field Functions 
      bool hasSample() const { return this->sample_ != nullptr;};
      void deleteSample() { this->sample_ = nullptr;};
      inline const vector<Samples::Sample> & getSample() const { DARABONBA_PTR_GET_CONST(sample_, vector<Samples::Sample>) };
      inline vector<Samples::Sample> getSample() { DARABONBA_PTR_GET(sample_, vector<Samples::Sample>) };
      inline Samples& setSample(const vector<Samples::Sample> & sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };
      inline Samples& setSample(vector<Samples::Sample> && sample) { DARABONBA_PTR_SET_RVALUE(sample_, sample) };


    protected:
      shared_ptr<vector<Samples::Sample>> sample_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->samples_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRecognitionSamplesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRecognitionSamplesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecognitionSamplesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // samples Field Functions 
    bool hasSamples() const { return this->samples_ != nullptr;};
    void deleteSamples() { this->samples_ = nullptr;};
    inline const ListRecognitionSamplesResponseBody::Samples & getSamples() const { DARABONBA_PTR_GET_CONST(samples_, ListRecognitionSamplesResponseBody::Samples) };
    inline ListRecognitionSamplesResponseBody::Samples getSamples() { DARABONBA_PTR_GET(samples_, ListRecognitionSamplesResponseBody::Samples) };
    inline ListRecognitionSamplesResponseBody& setSamples(const ListRecognitionSamplesResponseBody::Samples & samples) { DARABONBA_PTR_SET_VALUE(samples_, samples) };
    inline ListRecognitionSamplesResponseBody& setSamples(ListRecognitionSamplesResponseBody::Samples && samples) { DARABONBA_PTR_SET_RVALUE(samples_, samples) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRecognitionSamplesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The samples.
    shared_ptr<ListRecognitionSamplesResponseBody::Samples> samples_ {};
    // The total number of samples.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
