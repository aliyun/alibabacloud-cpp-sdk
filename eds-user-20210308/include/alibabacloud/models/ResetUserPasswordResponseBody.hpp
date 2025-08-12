// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETUSERPASSWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESETUSERPASSWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResetUserPasswordResponseBodyResetUsersResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ResetUserPasswordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetUserPasswordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResetUsersResult, resetUsersResult_);
    };
    friend void from_json(const Darabonba::Json& j, ResetUserPasswordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResetUsersResult, resetUsersResult_);
    };
    ResetUserPasswordResponseBody() = default ;
    ResetUserPasswordResponseBody(const ResetUserPasswordResponseBody &) = default ;
    ResetUserPasswordResponseBody(ResetUserPasswordResponseBody &&) = default ;
    ResetUserPasswordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetUserPasswordResponseBody() = default ;
    ResetUserPasswordResponseBody& operator=(const ResetUserPasswordResponseBody &) = default ;
    ResetUserPasswordResponseBody& operator=(ResetUserPasswordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resetUsersResult_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResetUserPasswordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resetUsersResult Field Functions 
    bool hasResetUsersResult() const { return this->resetUsersResult_ != nullptr;};
    void deleteResetUsersResult() { this->resetUsersResult_ = nullptr;};
    inline const ResetUserPasswordResponseBodyResetUsersResult & resetUsersResult() const { DARABONBA_PTR_GET_CONST(resetUsersResult_, ResetUserPasswordResponseBodyResetUsersResult) };
    inline ResetUserPasswordResponseBodyResetUsersResult resetUsersResult() { DARABONBA_PTR_GET(resetUsersResult_, ResetUserPasswordResponseBodyResetUsersResult) };
    inline ResetUserPasswordResponseBody& setResetUsersResult(const ResetUserPasswordResponseBodyResetUsersResult & resetUsersResult) { DARABONBA_PTR_SET_VALUE(resetUsersResult_, resetUsersResult) };
    inline ResetUserPasswordResponseBody& setResetUsersResult(ResetUserPasswordResponseBodyResetUsersResult && resetUsersResult) { DARABONBA_PTR_SET_RVALUE(resetUsersResult_, resetUsersResult) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of resetting the password of the convenience user.
    std::shared_ptr<ResetUserPasswordResponseBodyResetUsersResult> resetUsersResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
