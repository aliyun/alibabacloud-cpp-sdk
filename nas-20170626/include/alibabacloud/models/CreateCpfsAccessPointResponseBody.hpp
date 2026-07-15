// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECPFSACCESSPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECPFSACCESSPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateCpfsAccessPointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCpfsAccessPointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCpfsAccessPointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCpfsAccessPointResponseBody() = default ;
    CreateCpfsAccessPointResponseBody(const CreateCpfsAccessPointResponseBody &) = default ;
    CreateCpfsAccessPointResponseBody(CreateCpfsAccessPointResponseBody &&) = default ;
    CreateCpfsAccessPointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCpfsAccessPointResponseBody() = default ;
    CreateCpfsAccessPointResponseBody& operator=(const CreateCpfsAccessPointResponseBody &) = default ;
    CreateCpfsAccessPointResponseBody& operator=(CreateCpfsAccessPointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->requestId_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline CreateCpfsAccessPointResponseBody& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCpfsAccessPointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessPointId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
