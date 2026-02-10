// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMBLOCKRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMBLOCKRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteCustomBlockRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomBlockRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomBlockRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DeleteCustomBlockRecordRequest() = default ;
    DeleteCustomBlockRecordRequest(const DeleteCustomBlockRecordRequest &) = default ;
    DeleteCustomBlockRecordRequest(DeleteCustomBlockRecordRequest &&) = default ;
    DeleteCustomBlockRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomBlockRecordRequest() = default ;
    DeleteCustomBlockRecordRequest& operator=(const DeleteCustomBlockRecordRequest &) = default ;
    DeleteCustomBlockRecordRequest& operator=(DeleteCustomBlockRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteCustomBlockRecordRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteCustomBlockRecordRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the IP address blocking policy.
    // 
    // > You can call the [DescribeCustomBlockRecords](~~DescribeCustomBlockRecords~~) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
