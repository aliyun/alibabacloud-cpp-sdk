// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
    };
    QueryDatasetInfoRequest() = default ;
    QueryDatasetInfoRequest(const QueryDatasetInfoRequest &) = default ;
    QueryDatasetInfoRequest(QueryDatasetInfoRequest &&) = default ;
    QueryDatasetInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetInfoRequest() = default ;
    QueryDatasetInfoRequest& operator=(const QueryDatasetInfoRequest &) = default ;
    QueryDatasetInfoRequest& operator=(QueryDatasetInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline QueryDatasetInfoRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


  protected:
    // Queries information about a specified dataset.
    // 
    // This parameter is required.
    shared_ptr<string> datasetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
