// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAvailableModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableModelsResponseBody() = default ;
    DescribeAvailableModelsResponseBody(const DescribeAvailableModelsResponseBody &) = default ;
    DescribeAvailableModelsResponseBody(DescribeAvailableModelsResponseBody &&) = default ;
    DescribeAvailableModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableModelsResponseBody() = default ;
    DescribeAvailableModelsResponseBody& operator=(const DescribeAvailableModelsResponseBody &) = default ;
    DescribeAvailableModelsResponseBody& operator=(DescribeAvailableModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(GpuRequired, gpuRequired_);
        DARABONBA_PTR_TO_JSON(MinimumCpu, minimumCpu_);
        DARABONBA_PTR_TO_JSON(MinimumMemory, minimumMemory_);
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(ModelSeries, modelSeries_);
        DARABONBA_PTR_TO_JSON(SupportedGpuModels, supportedGpuModels_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(GpuRequired, gpuRequired_);
        DARABONBA_PTR_FROM_JSON(MinimumCpu, minimumCpu_);
        DARABONBA_PTR_FROM_JSON(MinimumMemory, minimumMemory_);
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(ModelSeries, modelSeries_);
        DARABONBA_PTR_FROM_JSON(SupportedGpuModels, supportedGpuModels_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GpuRequired : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GpuRequired& obj) { 
          DARABONBA_PTR_TO_JSON(GpuMinCount, gpuMinCount_);
          DARABONBA_PTR_TO_JSON(GpuModel, gpuModel_);
        };
        friend void from_json(const Darabonba::Json& j, GpuRequired& obj) { 
          DARABONBA_PTR_FROM_JSON(GpuMinCount, gpuMinCount_);
          DARABONBA_PTR_FROM_JSON(GpuModel, gpuModel_);
        };
        GpuRequired() = default ;
        GpuRequired(const GpuRequired &) = default ;
        GpuRequired(GpuRequired &&) = default ;
        GpuRequired(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GpuRequired() = default ;
        GpuRequired& operator=(const GpuRequired &) = default ;
        GpuRequired& operator=(GpuRequired &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gpuMinCount_ == nullptr
        && this->gpuModel_ == nullptr; };
        // gpuMinCount Field Functions 
        bool hasGpuMinCount() const { return this->gpuMinCount_ != nullptr;};
        void deleteGpuMinCount() { this->gpuMinCount_ = nullptr;};
        inline string getGpuMinCount() const { DARABONBA_PTR_GET_DEFAULT(gpuMinCount_, "") };
        inline GpuRequired& setGpuMinCount(string gpuMinCount) { DARABONBA_PTR_SET_VALUE(gpuMinCount_, gpuMinCount) };


        // gpuModel Field Functions 
        bool hasGpuModel() const { return this->gpuModel_ != nullptr;};
        void deleteGpuModel() { this->gpuModel_ = nullptr;};
        inline string getGpuModel() const { DARABONBA_PTR_GET_DEFAULT(gpuModel_, "") };
        inline GpuRequired& setGpuModel(string gpuModel) { DARABONBA_PTR_SET_VALUE(gpuModel_, gpuModel) };


      protected:
        shared_ptr<string> gpuMinCount_ {};
        shared_ptr<string> gpuModel_ {};
      };

      virtual bool empty() const override { return this->gpuRequired_ == nullptr
        && this->minimumCpu_ == nullptr && this->minimumMemory_ == nullptr && this->modelName_ == nullptr && this->modelSeries_ == nullptr && this->supportedGpuModels_ == nullptr; };
      // gpuRequired Field Functions 
      bool hasGpuRequired() const { return this->gpuRequired_ != nullptr;};
      void deleteGpuRequired() { this->gpuRequired_ = nullptr;};
      inline const vector<Items::GpuRequired> & getGpuRequired() const { DARABONBA_PTR_GET_CONST(gpuRequired_, vector<Items::GpuRequired>) };
      inline vector<Items::GpuRequired> getGpuRequired() { DARABONBA_PTR_GET(gpuRequired_, vector<Items::GpuRequired>) };
      inline Items& setGpuRequired(const vector<Items::GpuRequired> & gpuRequired) { DARABONBA_PTR_SET_VALUE(gpuRequired_, gpuRequired) };
      inline Items& setGpuRequired(vector<Items::GpuRequired> && gpuRequired) { DARABONBA_PTR_SET_RVALUE(gpuRequired_, gpuRequired) };


      // minimumCpu Field Functions 
      bool hasMinimumCpu() const { return this->minimumCpu_ != nullptr;};
      void deleteMinimumCpu() { this->minimumCpu_ = nullptr;};
      inline int64_t getMinimumCpu() const { DARABONBA_PTR_GET_DEFAULT(minimumCpu_, 0L) };
      inline Items& setMinimumCpu(int64_t minimumCpu) { DARABONBA_PTR_SET_VALUE(minimumCpu_, minimumCpu) };


      // minimumMemory Field Functions 
      bool hasMinimumMemory() const { return this->minimumMemory_ != nullptr;};
      void deleteMinimumMemory() { this->minimumMemory_ = nullptr;};
      inline int64_t getMinimumMemory() const { DARABONBA_PTR_GET_DEFAULT(minimumMemory_, 0L) };
      inline Items& setMinimumMemory(int64_t minimumMemory) { DARABONBA_PTR_SET_VALUE(minimumMemory_, minimumMemory) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Items& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modelSeries Field Functions 
      bool hasModelSeries() const { return this->modelSeries_ != nullptr;};
      void deleteModelSeries() { this->modelSeries_ = nullptr;};
      inline string getModelSeries() const { DARABONBA_PTR_GET_DEFAULT(modelSeries_, "") };
      inline Items& setModelSeries(string modelSeries) { DARABONBA_PTR_SET_VALUE(modelSeries_, modelSeries) };


      // supportedGpuModels Field Functions 
      bool hasSupportedGpuModels() const { return this->supportedGpuModels_ != nullptr;};
      void deleteSupportedGpuModels() { this->supportedGpuModels_ = nullptr;};
      inline const vector<string> & getSupportedGpuModels() const { DARABONBA_PTR_GET_CONST(supportedGpuModels_, vector<string>) };
      inline vector<string> getSupportedGpuModels() { DARABONBA_PTR_GET(supportedGpuModels_, vector<string>) };
      inline Items& setSupportedGpuModels(const vector<string> & supportedGpuModels) { DARABONBA_PTR_SET_VALUE(supportedGpuModels_, supportedGpuModels) };
      inline Items& setSupportedGpuModels(vector<string> && supportedGpuModels) { DARABONBA_PTR_SET_RVALUE(supportedGpuModels_, supportedGpuModels) };


    protected:
      shared_ptr<vector<Items::GpuRequired>> gpuRequired_ {};
      shared_ptr<int64_t> minimumCpu_ {};
      shared_ptr<int64_t> minimumMemory_ {};
      shared_ptr<string> modelName_ {};
      shared_ptr<string> modelSeries_ {};
      shared_ptr<vector<string>> supportedGpuModels_ {};
    };

    virtual bool empty() const override { return this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->items_ == nullptr && this->requestId_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeAvailableModelsResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeAvailableModelsResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAvailableModelsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAvailableModelsResponseBody::Items>) };
    inline vector<DescribeAvailableModelsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAvailableModelsResponseBody::Items>) };
    inline DescribeAvailableModelsResponseBody& setItems(const vector<DescribeAvailableModelsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAvailableModelsResponseBody& setItems(vector<DescribeAvailableModelsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> engine_ {};
    shared_ptr<string> engineVersion_ {};
    shared_ptr<vector<DescribeAvailableModelsResponseBody::Items>> items_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
