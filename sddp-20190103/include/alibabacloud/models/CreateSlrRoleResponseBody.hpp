// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLRROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESLRROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class CreateSlrRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlrRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HasPermission, hasPermission_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlrRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HasPermission, hasPermission_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSlrRoleResponseBody() = default ;
    CreateSlrRoleResponseBody(const CreateSlrRoleResponseBody &) = default ;
    CreateSlrRoleResponseBody(CreateSlrRoleResponseBody &&) = default ;
    CreateSlrRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlrRoleResponseBody() = default ;
    CreateSlrRoleResponseBody& operator=(const CreateSlrRoleResponseBody &) = default ;
    CreateSlrRoleResponseBody& operator=(CreateSlrRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasPermission_ != nullptr
        && this->requestId_ != nullptr; };
    // hasPermission Field Functions 
    bool hasHasPermission() const { return this->hasPermission_ != nullptr;};
    void deleteHasPermission() { this->hasPermission_ = nullptr;};
    inline bool hasPermission() const { DARABONBA_PTR_GET_DEFAULT(hasPermission_, false) };
    inline CreateSlrRoleResponseBody& setHasPermission(bool hasPermission) { DARABONBA_PTR_SET_VALUE(hasPermission_, hasPermission) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSlrRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the service-linked role was created. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> hasPermission_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
