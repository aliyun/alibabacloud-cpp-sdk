// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVSCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVSCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DeleteVscRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVscRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(VscId, vscId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVscRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(VscId, vscId_);
    };
    DeleteVscRequest() = default ;
    DeleteVscRequest(const DeleteVscRequest &) = default ;
    DeleteVscRequest(DeleteVscRequest &&) = default ;
    DeleteVscRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVscRequest() = default ;
    DeleteVscRequest& operator=(const DeleteVscRequest &) = default ;
    DeleteVscRequest& operator=(DeleteVscRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->vscId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteVscRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // vscId Field Functions 
    bool hasVscId() const { return this->vscId_ != nullptr;};
    void deleteVscId() { this->vscId_ = nullptr;};
    inline string vscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
    inline DeleteVscRequest& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the VSC that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> vscId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
