// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWDATAPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWDATAPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PreviewDataPipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewDataPipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(datasets, datasets_);
      DARABONBA_PTR_TO_JSON(effectiveScript, effectiveScript_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewDataPipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(effectiveScript, effectiveScript_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PreviewDataPipelineResponseBody() = default ;
    PreviewDataPipelineResponseBody(const PreviewDataPipelineResponseBody &) = default ;
    PreviewDataPipelineResponseBody(PreviewDataPipelineResponseBody &&) = default ;
    PreviewDataPipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewDataPipelineResponseBody() = default ;
    PreviewDataPipelineResponseBody& operator=(const PreviewDataPipelineResponseBody &) = default ;
    PreviewDataPipelineResponseBody& operator=(PreviewDataPipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Datasets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datasets& obj) { 
        DARABONBA_PTR_TO_JSON(data, data_);
        DARABONBA_PTR_TO_JSON(meta, meta_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(sampleCount, sampleCount_);
      };
      friend void from_json(const Darabonba::Json& j, Datasets& obj) { 
        DARABONBA_PTR_FROM_JSON(data, data_);
        DARABONBA_PTR_FROM_JSON(meta, meta_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(sampleCount, sampleCount_);
      };
      Datasets() = default ;
      Datasets(const Datasets &) = default ;
      Datasets(Datasets &&) = default ;
      Datasets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datasets() = default ;
      Datasets& operator=(const Datasets &) = default ;
      Datasets& operator=(Datasets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Meta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Meta& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Meta& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Meta() = default ;
        Meta(const Meta &) = default ;
        Meta(Meta &&) = default ;
        Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Meta() = default ;
        Meta& operator=(const Meta &) = default ;
        Meta& operator=(Meta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Meta& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Meta& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The field name.
        shared_ptr<string> name_ {};
        // The field type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->meta_ == nullptr && this->name_ == nullptr && this->sampleCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Darabonba::Json> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getData() { DARABONBA_PTR_GET(data_, vector<Darabonba::Json>) };
      inline Datasets& setData(const vector<Darabonba::Json> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Datasets& setData(vector<Darabonba::Json> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline const vector<Datasets::Meta> & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, vector<Datasets::Meta>) };
      inline vector<Datasets::Meta> getMeta() { DARABONBA_PTR_GET(meta_, vector<Datasets::Meta>) };
      inline Datasets& setMeta(const vector<Datasets::Meta> & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
      inline Datasets& setMeta(vector<Datasets::Meta> && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Datasets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sampleCount Field Functions 
      bool hasSampleCount() const { return this->sampleCount_ != nullptr;};
      void deleteSampleCount() { this->sampleCount_ = nullptr;};
      inline int64_t getSampleCount() const { DARABONBA_PTR_GET_DEFAULT(sampleCount_, 0L) };
      inline Datasets& setSampleCount(int64_t sampleCount) { DARABONBA_PTR_SET_VALUE(sampleCount_, sampleCount) };


    protected:
      // The preview data.
      shared_ptr<vector<Darabonba::Json>> data_ {};
      // The field metadata.
      shared_ptr<vector<Datasets::Meta>> meta_ {};
      // The dataset name.
      shared_ptr<string> name_ {};
      // The number of samples.
      shared_ptr<int64_t> sampleCount_ {};
    };

    virtual bool empty() const override { return this->datasets_ == nullptr
        && this->effectiveScript_ == nullptr && this->requestId_ == nullptr; };
    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<PreviewDataPipelineResponseBody::Datasets> & getDatasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<PreviewDataPipelineResponseBody::Datasets>) };
    inline vector<PreviewDataPipelineResponseBody::Datasets> getDatasets() { DARABONBA_PTR_GET(datasets_, vector<PreviewDataPipelineResponseBody::Datasets>) };
    inline PreviewDataPipelineResponseBody& setDatasets(const vector<PreviewDataPipelineResponseBody::Datasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline PreviewDataPipelineResponseBody& setDatasets(vector<PreviewDataPipelineResponseBody::Datasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // effectiveScript Field Functions 
    bool hasEffectiveScript() const { return this->effectiveScript_ != nullptr;};
    void deleteEffectiveScript() { this->effectiveScript_ = nullptr;};
    inline string getEffectiveScript() const { DARABONBA_PTR_GET_DEFAULT(effectiveScript_, "") };
    inline PreviewDataPipelineResponseBody& setEffectiveScript(string effectiveScript) { DARABONBA_PTR_SET_VALUE(effectiveScript_, effectiveScript) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewDataPipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The dataset preview results.
    shared_ptr<vector<PreviewDataPipelineResponseBody::Datasets>> datasets_ {};
    // The effective SPL.
    shared_ptr<string> effectiveScript_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
