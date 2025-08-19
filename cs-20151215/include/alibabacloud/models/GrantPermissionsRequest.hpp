// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrantPermissionsRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GrantPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GrantPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GrantPermissionsRequest() = default ;
    GrantPermissionsRequest(const GrantPermissionsRequest &) = default ;
    GrantPermissionsRequest(GrantPermissionsRequest &&) = default ;
    GrantPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantPermissionsRequest() = default ;
    GrantPermissionsRequest& operator=(const GrantPermissionsRequest &) = default ;
    GrantPermissionsRequest& operator=(GrantPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<GrantPermissionsRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<GrantPermissionsRequestBody>) };
    inline vector<GrantPermissionsRequestBody> body() { DARABONBA_PTR_GET(body_, vector<GrantPermissionsRequestBody>) };
    inline GrantPermissionsRequest& setBody(const vector<GrantPermissionsRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GrantPermissionsRequest& setBody(vector<GrantPermissionsRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    std::shared_ptr<vector<GrantPermissionsRequestBody>> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
