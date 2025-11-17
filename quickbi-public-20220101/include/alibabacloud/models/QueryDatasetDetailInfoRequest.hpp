// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETDETAILINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETDETAILINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetDetailInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetDetailInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetDetailInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
    };
    QueryDatasetDetailInfoRequest() = default ;
    QueryDatasetDetailInfoRequest(const QueryDatasetDetailInfoRequest &) = default ;
    QueryDatasetDetailInfoRequest(QueryDatasetDetailInfoRequest &&) = default ;
    QueryDatasetDetailInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetDetailInfoRequest() = default ;
    QueryDatasetDetailInfoRequest& operator=(const QueryDatasetDetailInfoRequest &) = default ;
    QueryDatasetDetailInfoRequest& operator=(QueryDatasetDetailInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline QueryDatasetDetailInfoRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


  protected:
    // The ID of the training dataset that you want to remove from the specified custom linguistic model.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
