// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class CheckServiceLinkedRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceLinkedRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceLinkedRoleExists, serviceLinkedRoleExists_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceLinkedRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceLinkedRoleExists, serviceLinkedRoleExists_);
    };
    CheckServiceLinkedRoleResponseBody() = default ;
    CheckServiceLinkedRoleResponseBody(const CheckServiceLinkedRoleResponseBody &) = default ;
    CheckServiceLinkedRoleResponseBody(CheckServiceLinkedRoleResponseBody &&) = default ;
    CheckServiceLinkedRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceLinkedRoleResponseBody() = default ;
    CheckServiceLinkedRoleResponseBody& operator=(const CheckServiceLinkedRoleResponseBody &) = default ;
    CheckServiceLinkedRoleResponseBody& operator=(CheckServiceLinkedRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceLinkedRoleExists_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckServiceLinkedRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceLinkedRoleExists Field Functions 
    bool hasServiceLinkedRoleExists() const { return this->serviceLinkedRoleExists_ != nullptr;};
    void deleteServiceLinkedRoleExists() { this->serviceLinkedRoleExists_ = nullptr;};
    inline bool getServiceLinkedRoleExists() const { DARABONBA_PTR_GET_DEFAULT(serviceLinkedRoleExists_, false) };
    inline CheckServiceLinkedRoleResponseBody& setServiceLinkedRoleExists(bool serviceLinkedRoleExists) { DARABONBA_PTR_SET_VALUE(serviceLinkedRoleExists_, serviceLinkedRoleExists) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether an SLR is created.
    shared_ptr<bool> serviceLinkedRoleExists_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
