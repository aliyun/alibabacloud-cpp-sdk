// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADOSSMULTIMODALDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADOSSMULTIMODALDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class UploadOSSMultimodalDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadOSSMultimodalDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UploadOSSMultimodalDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
    };
    UploadOSSMultimodalDatasetRequest() = default ;
    UploadOSSMultimodalDatasetRequest(const UploadOSSMultimodalDatasetRequest &) = default ;
    UploadOSSMultimodalDatasetRequest(UploadOSSMultimodalDatasetRequest &&) = default ;
    UploadOSSMultimodalDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadOSSMultimodalDatasetRequest() = default ;
    UploadOSSMultimodalDatasetRequest& operator=(const UploadOSSMultimodalDatasetRequest &) = default ;
    UploadOSSMultimodalDatasetRequest& operator=(UploadOSSMultimodalDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasetId_ == nullptr && this->ossUrl_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UploadOSSMultimodalDatasetRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline UploadOSSMultimodalDatasetRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline UploadOSSMultimodalDatasetRequest& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> datasetId_ {};
    shared_ptr<string> ossUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
