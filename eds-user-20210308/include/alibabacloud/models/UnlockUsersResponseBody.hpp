// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOCKUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNLOCKUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UnlockUsersResponseBodyUnlockUsersResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class UnlockUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnlockUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnlockUsersResult, unlockUsersResult_);
    };
    friend void from_json(const Darabonba::Json& j, UnlockUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnlockUsersResult, unlockUsersResult_);
    };
    UnlockUsersResponseBody() = default ;
    UnlockUsersResponseBody(const UnlockUsersResponseBody &) = default ;
    UnlockUsersResponseBody(UnlockUsersResponseBody &&) = default ;
    UnlockUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnlockUsersResponseBody() = default ;
    UnlockUsersResponseBody& operator=(const UnlockUsersResponseBody &) = default ;
    UnlockUsersResponseBody& operator=(UnlockUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->unlockUsersResult_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnlockUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unlockUsersResult Field Functions 
    bool hasUnlockUsersResult() const { return this->unlockUsersResult_ != nullptr;};
    void deleteUnlockUsersResult() { this->unlockUsersResult_ = nullptr;};
    inline const UnlockUsersResponseBodyUnlockUsersResult & unlockUsersResult() const { DARABONBA_PTR_GET_CONST(unlockUsersResult_, UnlockUsersResponseBodyUnlockUsersResult) };
    inline UnlockUsersResponseBodyUnlockUsersResult unlockUsersResult() { DARABONBA_PTR_GET(unlockUsersResult_, UnlockUsersResponseBodyUnlockUsersResult) };
    inline UnlockUsersResponseBody& setUnlockUsersResult(const UnlockUsersResponseBodyUnlockUsersResult & unlockUsersResult) { DARABONBA_PTR_SET_VALUE(unlockUsersResult_, unlockUsersResult) };
    inline UnlockUsersResponseBody& setUnlockUsersResult(UnlockUsersResponseBodyUnlockUsersResult && unlockUsersResult) { DARABONBA_PTR_SET_RVALUE(unlockUsersResult_, unlockUsersResult) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of unlocking the convenience user.
    std::shared_ptr<UnlockUsersResponseBodyUnlockUsersResult> unlockUsersResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
