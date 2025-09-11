// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAccessPointResponseBodyAccessPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateAccessPointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessPointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPoint, accessPoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessPointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPoint, accessPoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAccessPointResponseBody() = default ;
    CreateAccessPointResponseBody(const CreateAccessPointResponseBody &) = default ;
    CreateAccessPointResponseBody(CreateAccessPointResponseBody &&) = default ;
    CreateAccessPointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessPointResponseBody() = default ;
    CreateAccessPointResponseBody& operator=(const CreateAccessPointResponseBody &) = default ;
    CreateAccessPointResponseBody& operator=(CreateAccessPointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessPoint_ != nullptr
        && this->requestId_ != nullptr; };
    // accessPoint Field Functions 
    bool hasAccessPoint() const { return this->accessPoint_ != nullptr;};
    void deleteAccessPoint() { this->accessPoint_ = nullptr;};
    inline const CreateAccessPointResponseBodyAccessPoint & accessPoint() const { DARABONBA_PTR_GET_CONST(accessPoint_, CreateAccessPointResponseBodyAccessPoint) };
    inline CreateAccessPointResponseBodyAccessPoint accessPoint() { DARABONBA_PTR_GET(accessPoint_, CreateAccessPointResponseBodyAccessPoint) };
    inline CreateAccessPointResponseBody& setAccessPoint(const CreateAccessPointResponseBodyAccessPoint & accessPoint) { DARABONBA_PTR_SET_VALUE(accessPoint_, accessPoint) };
    inline CreateAccessPointResponseBody& setAccessPoint(CreateAccessPointResponseBodyAccessPoint && accessPoint) { DARABONBA_PTR_SET_RVALUE(accessPoint_, accessPoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAccessPointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The access point.
    std::shared_ptr<CreateAccessPointResponseBodyAccessPoint> accessPoint_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
