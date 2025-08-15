// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTROLETOUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GRANTROLETOUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GrantRoleToUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantRoleToUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantRoleToUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GrantRoleToUsersResponseBody() = default ;
    GrantRoleToUsersResponseBody(const GrantRoleToUsersResponseBody &) = default ;
    GrantRoleToUsersResponseBody(GrantRoleToUsersResponseBody &&) = default ;
    GrantRoleToUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantRoleToUsersResponseBody() = default ;
    GrantRoleToUsersResponseBody& operator=(const GrantRoleToUsersResponseBody &) = default ;
    GrantRoleToUsersResponseBody& operator=(GrantRoleToUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GrantRoleToUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
