// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARFSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARFSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarFsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarFsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarFsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    DeletePolarFsRequest() = default ;
    DeletePolarFsRequest(const DeletePolarFsRequest &) = default ;
    DeletePolarFsRequest(DeletePolarFsRequest &&) = default ;
    DeletePolarFsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarFsRequest() = default ;
    DeletePolarFsRequest& operator=(const DeletePolarFsRequest &) = default ;
    DeletePolarFsRequest& operator=(DeletePolarFsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->polarFsInstanceId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeletePolarFsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DeletePolarFsRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    // The cluster ID.
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the cluster IDs of all Data Warehouse Edition clusters in a specific region.
    shared_ptr<string> DBClusterId_ {};
    // The PolarFs instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
