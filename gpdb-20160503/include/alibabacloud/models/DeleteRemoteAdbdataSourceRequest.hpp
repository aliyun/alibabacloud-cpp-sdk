// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREMOTEADBDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREMOTEADBDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteRemoteADBDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRemoteADBDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(LocalDBInstanceId, localDBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRemoteADBDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(LocalDBInstanceId, localDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    DeleteRemoteADBDataSourceRequest() = default ;
    DeleteRemoteADBDataSourceRequest(const DeleteRemoteADBDataSourceRequest &) = default ;
    DeleteRemoteADBDataSourceRequest(DeleteRemoteADBDataSourceRequest &&) = default ;
    DeleteRemoteADBDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRemoteADBDataSourceRequest() = default ;
    DeleteRemoteADBDataSourceRequest& operator=(const DeleteRemoteADBDataSourceRequest &) = default ;
    DeleteRemoteADBDataSourceRequest& operator=(DeleteRemoteADBDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceId_ != nullptr
        && this->localDBInstanceId_ != nullptr && this->ownerId_ != nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline DeleteRemoteADBDataSourceRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // localDBInstanceId Field Functions 
    bool hasLocalDBInstanceId() const { return this->localDBInstanceId_ != nullptr;};
    void deleteLocalDBInstanceId() { this->localDBInstanceId_ = nullptr;};
    inline string localDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(localDBInstanceId_, "") };
    inline DeleteRemoteADBDataSourceRequest& setLocalDBInstanceId(string localDBInstanceId) { DARABONBA_PTR_SET_VALUE(localDBInstanceId_, localDBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteRemoteADBDataSourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // The ID of the instance that uses the data provided by another instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> localDBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
