// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEMEMBERPROJECTROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REVOKEMEMBERPROJECTROLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RevokeMemberProjectRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeMemberProjectRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeMemberProjectRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RevokeMemberProjectRolesResponseBody() = default ;
    RevokeMemberProjectRolesResponseBody(const RevokeMemberProjectRolesResponseBody &) = default ;
    RevokeMemberProjectRolesResponseBody(RevokeMemberProjectRolesResponseBody &&) = default ;
    RevokeMemberProjectRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeMemberProjectRolesResponseBody() = default ;
    RevokeMemberProjectRolesResponseBody& operator=(const RevokeMemberProjectRolesResponseBody &) = default ;
    RevokeMemberProjectRolesResponseBody& operator=(RevokeMemberProjectRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RevokeMemberProjectRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
