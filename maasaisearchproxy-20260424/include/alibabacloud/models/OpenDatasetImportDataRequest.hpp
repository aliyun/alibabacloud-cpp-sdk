// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENDATASETIMPORTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENDATASETIMPORTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasAISearchProxy20260424
{
namespace Models
{
  class OpenDatasetImportDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenDatasetImportDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(records, records_);
    };
    friend void from_json(const Darabonba::Json& j, OpenDatasetImportDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(records, records_);
    };
    OpenDatasetImportDataRequest() = default ;
    OpenDatasetImportDataRequest(const OpenDatasetImportDataRequest &) = default ;
    OpenDatasetImportDataRequest(OpenDatasetImportDataRequest &&) = default ;
    OpenDatasetImportDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenDatasetImportDataRequest() = default ;
    OpenDatasetImportDataRequest& operator=(const OpenDatasetImportDataRequest &) = default ;
    OpenDatasetImportDataRequest& operator=(OpenDatasetImportDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->records_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline OpenDatasetImportDataRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Darabonba::Json> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getRecords() { DARABONBA_PTR_GET(records_, vector<Darabonba::Json>) };
    inline OpenDatasetImportDataRequest& setRecords(const vector<Darabonba::Json> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline OpenDatasetImportDataRequest& setRecords(vector<Darabonba::Json> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> datasetId_ {};
    // This parameter is required.
    shared_ptr<vector<Darabonba::Json>> records_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasAISearchProxy20260424
#endif
