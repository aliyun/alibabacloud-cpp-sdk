// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateUserPermissionsRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpdateUserPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
    };
    UpdateUserPermissionsRequest() = default ;
    UpdateUserPermissionsRequest(const UpdateUserPermissionsRequest &) = default ;
    UpdateUserPermissionsRequest(UpdateUserPermissionsRequest &&) = default ;
    UpdateUserPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserPermissionsRequest() = default ;
    UpdateUserPermissionsRequest& operator=(const UpdateUserPermissionsRequest &) = default ;
    UpdateUserPermissionsRequest& operator=(UpdateUserPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->mode_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpdateUserPermissionsRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<UpdateUserPermissionsRequestBody>) };
    inline vector<UpdateUserPermissionsRequestBody> body() { DARABONBA_PTR_GET(body_, vector<UpdateUserPermissionsRequestBody>) };
    inline UpdateUserPermissionsRequest& setBody(const vector<UpdateUserPermissionsRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateUserPermissionsRequest& setBody(vector<UpdateUserPermissionsRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline UpdateUserPermissionsRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // The request body.
    std::shared_ptr<vector<UpdateUserPermissionsRequestBody>> body_ = nullptr;
    // The authorization method. Valid values:
    // 
    // *   `apply`: The global update mode. Overwrites all existing permissions of the RAM user or RAM role on the cluster. You must specify all the permissions you want to grant to the RAM user or RAM role in the request parameters when you call this operation.
    // *   `delete`: The deletion mode. Revokes only the cluster permissions specified in the request, preserving other existing permissions of the RAM user or RAM role.
    // *   `patch`: The incremental mode. Adds only the cluster permissions specified in the request, preserving other existing permissions of the RAM user or RAM role.
    // 
    // Default value: `apply`.
    std::shared_ptr<string> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
