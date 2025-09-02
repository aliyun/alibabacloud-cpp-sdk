// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKETABLEPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REVOKETABLEPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RevokeTablePermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeTablePermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RevokeSuccess, revokeSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeTablePermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RevokeSuccess, revokeSuccess_);
    };
    RevokeTablePermissionResponseBody() = default ;
    RevokeTablePermissionResponseBody(const RevokeTablePermissionResponseBody &) = default ;
    RevokeTablePermissionResponseBody(RevokeTablePermissionResponseBody &&) = default ;
    RevokeTablePermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeTablePermissionResponseBody() = default ;
    RevokeTablePermissionResponseBody& operator=(const RevokeTablePermissionResponseBody &) = default ;
    RevokeTablePermissionResponseBody& operator=(RevokeTablePermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->revokeSuccess_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RevokeTablePermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // revokeSuccess Field Functions 
    bool hasRevokeSuccess() const { return this->revokeSuccess_ != nullptr;};
    void deleteRevokeSuccess() { this->revokeSuccess_ = nullptr;};
    inline bool revokeSuccess() const { DARABONBA_PTR_GET_DEFAULT(revokeSuccess_, false) };
    inline RevokeTablePermissionResponseBody& setRevokeSuccess(bool revokeSuccess) { DARABONBA_PTR_SET_VALUE(revokeSuccess_, revokeSuccess) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the permissions are revoked.
    std::shared_ptr<bool> revokeSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
