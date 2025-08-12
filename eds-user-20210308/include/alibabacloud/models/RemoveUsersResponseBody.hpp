// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveUsersResponseBodyRemoveUsersResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class RemoveUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemoveUsersResult, removeUsersResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemoveUsersResult, removeUsersResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RemoveUsersResponseBody() = default ;
    RemoveUsersResponseBody(const RemoveUsersResponseBody &) = default ;
    RemoveUsersResponseBody(RemoveUsersResponseBody &&) = default ;
    RemoveUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUsersResponseBody() = default ;
    RemoveUsersResponseBody& operator=(const RemoveUsersResponseBody &) = default ;
    RemoveUsersResponseBody& operator=(RemoveUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->removeUsersResult_ != nullptr
        && this->requestId_ != nullptr; };
    // removeUsersResult Field Functions 
    bool hasRemoveUsersResult() const { return this->removeUsersResult_ != nullptr;};
    void deleteRemoveUsersResult() { this->removeUsersResult_ = nullptr;};
    inline const RemoveUsersResponseBodyRemoveUsersResult & removeUsersResult() const { DARABONBA_PTR_GET_CONST(removeUsersResult_, RemoveUsersResponseBodyRemoveUsersResult) };
    inline RemoveUsersResponseBodyRemoveUsersResult removeUsersResult() { DARABONBA_PTR_GET(removeUsersResult_, RemoveUsersResponseBodyRemoveUsersResult) };
    inline RemoveUsersResponseBody& setRemoveUsersResult(const RemoveUsersResponseBodyRemoveUsersResult & removeUsersResult) { DARABONBA_PTR_SET_VALUE(removeUsersResult_, removeUsersResult) };
    inline RemoveUsersResponseBody& setRemoveUsersResult(RemoveUsersResponseBodyRemoveUsersResult && removeUsersResult) { DARABONBA_PTR_SET_RVALUE(removeUsersResult_, removeUsersResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result of removing the convenience user.
    std::shared_ptr<RemoveUsersResponseBodyRemoveUsersResult> removeUsersResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
