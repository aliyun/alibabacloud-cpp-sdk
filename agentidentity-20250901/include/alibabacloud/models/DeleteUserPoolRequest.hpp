// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class DeleteUserPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    DeleteUserPoolRequest() = default ;
    DeleteUserPoolRequest(const DeleteUserPoolRequest &) = default ;
    DeleteUserPoolRequest(DeleteUserPoolRequest &&) = default ;
    DeleteUserPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserPoolRequest() = default ;
    DeleteUserPoolRequest& operator=(const DeleteUserPoolRequest &) = default ;
    DeleteUserPoolRequest& operator=(DeleteUserPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userPoolName_ == nullptr; };
    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline DeleteUserPoolRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
