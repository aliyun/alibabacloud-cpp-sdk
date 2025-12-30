// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateUsersResponseBody() = default ;
    CreateUsersResponseBody(const CreateUsersResponseBody &) = default ;
    CreateUsersResponseBody(CreateUsersResponseBody &&) = default ;
    CreateUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersResponseBody() = default ;
    CreateUsersResponseBody& operator=(const CreateUsersResponseBody &) = default ;
    CreateUsersResponseBody& operator=(CreateUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
