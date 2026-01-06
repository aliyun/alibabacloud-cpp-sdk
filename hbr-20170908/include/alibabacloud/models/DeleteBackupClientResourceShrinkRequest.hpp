// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPCLIENTRESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPCLIENTRESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeleteBackupClientResourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupClientResourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIds, clientIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupClientResourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIds, clientIdsShrink_);
    };
    DeleteBackupClientResourceShrinkRequest() = default ;
    DeleteBackupClientResourceShrinkRequest(const DeleteBackupClientResourceShrinkRequest &) = default ;
    DeleteBackupClientResourceShrinkRequest(DeleteBackupClientResourceShrinkRequest &&) = default ;
    DeleteBackupClientResourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupClientResourceShrinkRequest() = default ;
    DeleteBackupClientResourceShrinkRequest& operator=(const DeleteBackupClientResourceShrinkRequest &) = default ;
    DeleteBackupClientResourceShrinkRequest& operator=(DeleteBackupClientResourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIdsShrink_ == nullptr; };
    // clientIdsShrink Field Functions 
    bool hasClientIdsShrink() const { return this->clientIdsShrink_ != nullptr;};
    void deleteClientIdsShrink() { this->clientIdsShrink_ = nullptr;};
    inline string getClientIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(clientIdsShrink_, "") };
    inline DeleteBackupClientResourceShrinkRequest& setClientIdsShrink(string clientIdsShrink) { DARABONBA_PTR_SET_VALUE(clientIdsShrink_, clientIdsShrink) };


  protected:
    // The IDs of HBR clients. The value can be a JSON array that consists of up to 100 client IDs. Separate the IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> clientIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
