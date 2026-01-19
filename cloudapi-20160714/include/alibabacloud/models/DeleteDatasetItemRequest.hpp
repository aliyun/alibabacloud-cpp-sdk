// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASETITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASETITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteDatasetItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDatasetItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetItemId, datasetItemId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDatasetItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetItemId, datasetItemId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DeleteDatasetItemRequest() = default ;
    DeleteDatasetItemRequest(const DeleteDatasetItemRequest &) = default ;
    DeleteDatasetItemRequest(DeleteDatasetItemRequest &&) = default ;
    DeleteDatasetItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDatasetItemRequest() = default ;
    DeleteDatasetItemRequest& operator=(const DeleteDatasetItemRequest &) = default ;
    DeleteDatasetItemRequest& operator=(DeleteDatasetItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->datasetItemId_ == nullptr && this->securityToken_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline DeleteDatasetItemRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetItemId Field Functions 
    bool hasDatasetItemId() const { return this->datasetItemId_ != nullptr;};
    void deleteDatasetItemId() { this->datasetItemId_ = nullptr;};
    inline string getDatasetItemId() const { DARABONBA_PTR_GET_DEFAULT(datasetItemId_, "") };
    inline DeleteDatasetItemRequest& setDatasetItemId(string datasetItemId) { DARABONBA_PTR_SET_VALUE(datasetItemId_, datasetItemId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeleteDatasetItemRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the dataset.
    // 
    // This parameter is required.
    shared_ptr<string> datasetId_ {};
    // The ID of the data entry.
    // 
    // This parameter is required.
    shared_ptr<string> datasetItemId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
