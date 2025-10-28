// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETFILEMETARESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DATASETFILEMETARESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DatasetFileMetaResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetFileMetaResponse& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetFileMetaId, datasetFileMetaId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetFileMetaResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetFileMetaId, datasetFileMetaId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    DatasetFileMetaResponse() = default ;
    DatasetFileMetaResponse(const DatasetFileMetaResponse &) = default ;
    DatasetFileMetaResponse(DatasetFileMetaResponse &&) = default ;
    DatasetFileMetaResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetFileMetaResponse() = default ;
    DatasetFileMetaResponse& operator=(const DatasetFileMetaResponse &) = default ;
    DatasetFileMetaResponse& operator=(DatasetFileMetaResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetFileMetaId_ == nullptr
        && return this->result_ == nullptr && return this->uri_ == nullptr; };
    // datasetFileMetaId Field Functions 
    bool hasDatasetFileMetaId() const { return this->datasetFileMetaId_ != nullptr;};
    void deleteDatasetFileMetaId() { this->datasetFileMetaId_ = nullptr;};
    inline string datasetFileMetaId() const { DARABONBA_PTR_GET_DEFAULT(datasetFileMetaId_, "") };
    inline DatasetFileMetaResponse& setDatasetFileMetaId(string datasetFileMetaId) { DARABONBA_PTR_SET_VALUE(datasetFileMetaId_, datasetFileMetaId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DatasetFileMetaResponse& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline DatasetFileMetaResponse& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> datasetFileMetaId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
