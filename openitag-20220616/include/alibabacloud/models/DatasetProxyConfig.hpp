// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETPROXYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DATASETPROXYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class DatasetProxyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetProxyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceDatasetId, sourceDatasetId_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetProxyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceDatasetId, sourceDatasetId_);
    };
    DatasetProxyConfig() = default ;
    DatasetProxyConfig(const DatasetProxyConfig &) = default ;
    DatasetProxyConfig(DatasetProxyConfig &&) = default ;
    DatasetProxyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetProxyConfig() = default ;
    DatasetProxyConfig& operator=(const DatasetProxyConfig &) = default ;
    DatasetProxyConfig& operator=(DatasetProxyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetType_ == nullptr
        && this->source_ == nullptr && this->sourceDatasetId_ == nullptr; };
    // datasetType Field Functions 
    bool hasDatasetType() const { return this->datasetType_ != nullptr;};
    void deleteDatasetType() { this->datasetType_ = nullptr;};
    inline string getDatasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
    inline DatasetProxyConfig& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DatasetProxyConfig& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceDatasetId Field Functions 
    bool hasSourceDatasetId() const { return this->sourceDatasetId_ != nullptr;};
    void deleteSourceDatasetId() { this->sourceDatasetId_ = nullptr;};
    inline string getSourceDatasetId() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetId_, "") };
    inline DatasetProxyConfig& setSourceDatasetId(string sourceDatasetId) { DARABONBA_PTR_SET_VALUE(sourceDatasetId_, sourceDatasetId) };


  protected:
    // Dataset type. Only LABEL is supported.
    shared_ptr<string> datasetType_ {};
    // Dataset source. Only PAI is supported.
    shared_ptr<string> source_ {};
    // Source dataset ID. For information about how to obtain a dataset ID, see [ListDatasets](https://help.aliyun.com/document_detail/457222.html).
    // 
    // This parameter is required.
    shared_ptr<string> sourceDatasetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
