// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AccessRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class CheckPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CheckPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
    };
    CheckPermissionsRequest() = default ;
    CheckPermissionsRequest(const CheckPermissionsRequest &) = default ;
    CheckPermissionsRequest(CheckPermissionsRequest &&) = default ;
    CheckPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckPermissionsRequest() = default ;
    CheckPermissionsRequest& operator=(const CheckPermissionsRequest &) = default ;
    CheckPermissionsRequest& operator=(CheckPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AccessRequest & body() const { DARABONBA_PTR_GET_CONST(body_, AccessRequest) };
    inline AccessRequest body() { DARABONBA_PTR_GET(body_, AccessRequest) };
    inline CheckPermissionsRequest& setBody(const AccessRequest & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CheckPermissionsRequest& setBody(AccessRequest && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The HTTP request body, in the JSON format.
    std::shared_ptr<AccessRequest> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
