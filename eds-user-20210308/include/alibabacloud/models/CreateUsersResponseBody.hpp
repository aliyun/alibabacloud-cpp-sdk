// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateUsersResponseBodyCreateResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreateUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllSucceed, allSucceed_);
      DARABONBA_PTR_TO_JSON(CreateResult, createResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllSucceed, allSucceed_);
      DARABONBA_PTR_FROM_JSON(CreateResult, createResult_);
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
    virtual bool empty() const override { this->allSucceed_ != nullptr
        && this->createResult_ != nullptr && this->requestId_ != nullptr; };
    // allSucceed Field Functions 
    bool hasAllSucceed() const { return this->allSucceed_ != nullptr;};
    void deleteAllSucceed() { this->allSucceed_ = nullptr;};
    inline bool allSucceed() const { DARABONBA_PTR_GET_DEFAULT(allSucceed_, false) };
    inline CreateUsersResponseBody& setAllSucceed(bool allSucceed) { DARABONBA_PTR_SET_VALUE(allSucceed_, allSucceed) };


    // createResult Field Functions 
    bool hasCreateResult() const { return this->createResult_ != nullptr;};
    void deleteCreateResult() { this->createResult_ = nullptr;};
    inline const CreateUsersResponseBodyCreateResult & createResult() const { DARABONBA_PTR_GET_CONST(createResult_, CreateUsersResponseBodyCreateResult) };
    inline CreateUsersResponseBodyCreateResult createResult() { DARABONBA_PTR_GET(createResult_, CreateUsersResponseBodyCreateResult) };
    inline CreateUsersResponseBody& setCreateResult(const CreateUsersResponseBodyCreateResult & createResult) { DARABONBA_PTR_SET_VALUE(createResult_, createResult) };
    inline CreateUsersResponseBody& setCreateResult(CreateUsersResponseBodyCreateResult && createResult) { DARABONBA_PTR_SET_RVALUE(createResult_, createResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> allSucceed_ = nullptr;
    // The result of user creation.
    std::shared_ptr<CreateUsersResponseBodyCreateResult> createResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
