// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENDATASETRESOURCEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENDATASETRESOURCEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasAISearchProxy20260424
{
namespace Models
{
  class OpenDatasetResourceUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenDatasetResourceUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(primaryKey, primaryKey_);
    };
    friend void from_json(const Darabonba::Json& j, OpenDatasetResourceUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(primaryKey, primaryKey_);
    };
    OpenDatasetResourceUrlRequest() = default ;
    OpenDatasetResourceUrlRequest(const OpenDatasetResourceUrlRequest &) = default ;
    OpenDatasetResourceUrlRequest(OpenDatasetResourceUrlRequest &&) = default ;
    OpenDatasetResourceUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenDatasetResourceUrlRequest() = default ;
    OpenDatasetResourceUrlRequest& operator=(const OpenDatasetResourceUrlRequest &) = default ;
    OpenDatasetResourceUrlRequest& operator=(OpenDatasetResourceUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->primaryKey_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline OpenDatasetResourceUrlRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline OpenDatasetResourceUrlRequest& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> datasetId_ {};
    // This parameter is required.
    shared_ptr<string> primaryKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasAISearchProxy20260424
#endif
