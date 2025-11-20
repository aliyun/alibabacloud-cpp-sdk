// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPCLIENTRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPCLIENTRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeleteBackupClientResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupClientResourceRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ClientIds, clientIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupClientResourceRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ClientIds, clientIds_);
    };
    DeleteBackupClientResourceRequest() = default ;
    DeleteBackupClientResourceRequest(const DeleteBackupClientResourceRequest &) = default ;
    DeleteBackupClientResourceRequest(DeleteBackupClientResourceRequest &&) = default ;
    DeleteBackupClientResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupClientResourceRequest() = default ;
    DeleteBackupClientResourceRequest& operator=(const DeleteBackupClientResourceRequest &) = default ;
    DeleteBackupClientResourceRequest& operator=(DeleteBackupClientResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIds_ == nullptr; };
    // clientIds Field Functions 
    bool hasClientIds() const { return this->clientIds_ != nullptr;};
    void deleteClientIds() { this->clientIds_ = nullptr;};
    inline     const Darabonba::Json & clientIds() const { DARABONBA_GET(clientIds_) };
    Darabonba::Json & clientIds() { DARABONBA_GET(clientIds_) };
    inline DeleteBackupClientResourceRequest& setClientIds(const Darabonba::Json & clientIds) { DARABONBA_SET_VALUE(clientIds_, clientIds) };
    inline DeleteBackupClientResourceRequest& setClientIds(Darabonba::Json & clientIds) { DARABONBA_SET_RVALUE(clientIds_, clientIds) };


  protected:
    // The IDs of HBR clients. The value can be a JSON array that consists of up to 100 client IDs. Separate the IDs with commas (,).
    // 
    // This parameter is required.
    Darabonba::Json clientIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
