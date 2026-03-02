// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOFFICESITEACCELERATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEOFFICESITEACCELERATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateOfficeSiteAcceleratorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOfficeSiteAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOfficeSiteAcceleratorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOfficeSiteAcceleratorResponseBody() = default ;
    CreateOfficeSiteAcceleratorResponseBody(const CreateOfficeSiteAcceleratorResponseBody &) = default ;
    CreateOfficeSiteAcceleratorResponseBody(CreateOfficeSiteAcceleratorResponseBody &&) = default ;
    CreateOfficeSiteAcceleratorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOfficeSiteAcceleratorResponseBody() = default ;
    CreateOfficeSiteAcceleratorResponseBody& operator=(const CreateOfficeSiteAcceleratorResponseBody &) = default ;
    CreateOfficeSiteAcceleratorResponseBody& operator=(CreateOfficeSiteAcceleratorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->requestId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateOfficeSiteAcceleratorResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOfficeSiteAcceleratorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the GA instance.
    shared_ptr<string> acceleratorId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
