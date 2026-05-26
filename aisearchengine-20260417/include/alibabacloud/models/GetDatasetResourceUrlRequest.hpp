// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETRESOURCEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETRESOURCEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiSearchEngine20260417
{
namespace Models
{
  class GetDatasetResourceUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetResourceUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(primaryKey, primaryKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetResourceUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(primaryKey, primaryKey_);
    };
    GetDatasetResourceUrlRequest() = default ;
    GetDatasetResourceUrlRequest(const GetDatasetResourceUrlRequest &) = default ;
    GetDatasetResourceUrlRequest(GetDatasetResourceUrlRequest &&) = default ;
    GetDatasetResourceUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetResourceUrlRequest() = default ;
    GetDatasetResourceUrlRequest& operator=(const GetDatasetResourceUrlRequest &) = default ;
    GetDatasetResourceUrlRequest& operator=(GetDatasetResourceUrlRequest &&) = default ;
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
    inline GetDatasetResourceUrlRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline GetDatasetResourceUrlRequest& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> datasetId_ {};
    // This parameter is required.
    shared_ptr<string> primaryKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiSearchEngine20260417
#endif
