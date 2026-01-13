// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGESEARCHACCOUNTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANAGESEARCHACCOUNTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AccountInfoManageRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class ManageSearchAccountInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageSearchAccountInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ManageSearchAccountInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ManageSearchAccountInfoRequest() = default ;
    ManageSearchAccountInfoRequest(const ManageSearchAccountInfoRequest &) = default ;
    ManageSearchAccountInfoRequest(ManageSearchAccountInfoRequest &&) = default ;
    ManageSearchAccountInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageSearchAccountInfoRequest() = default ;
    ManageSearchAccountInfoRequest& operator=(const ManageSearchAccountInfoRequest &) = default ;
    ManageSearchAccountInfoRequest& operator=(ManageSearchAccountInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AccountInfoManageRequest & getBody() const { DARABONBA_PTR_GET_CONST(body_, AccountInfoManageRequest) };
    inline AccountInfoManageRequest getBody() { DARABONBA_PTR_GET(body_, AccountInfoManageRequest) };
    inline ManageSearchAccountInfoRequest& setBody(const AccountInfoManageRequest & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ManageSearchAccountInfoRequest& setBody(AccountInfoManageRequest && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<AccountInfoManageRequest> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
