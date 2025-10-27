// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class CheckServiceLinkedRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceLinkedRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HasServiceLinkedRole, hasServiceLinkedRole_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceLinkedRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HasServiceLinkedRole, hasServiceLinkedRole_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    virtual bool empty() const override { return this->hasServiceLinkedRole_ == nullptr
        && return this->requestId_ == nullptr; };
    // hasServiceLinkedRole Field Functions 
    bool hasHasServiceLinkedRole() const { return this->hasServiceLinkedRole_ != nullptr;};
    void deleteHasServiceLinkedRole() { this->hasServiceLinkedRole_ = nullptr;};
    inline bool hasServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(hasServiceLinkedRole_, false) };
    inline CheckServiceLinkedRoleResponseBody& setHasServiceLinkedRole(bool hasServiceLinkedRole) { DARABONBA_PTR_SET_VALUE(hasServiceLinkedRole_, hasServiceLinkedRole) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckServiceLinkedRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether an SLR is created.
    std::shared_ptr<bool> hasServiceLinkedRole_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
