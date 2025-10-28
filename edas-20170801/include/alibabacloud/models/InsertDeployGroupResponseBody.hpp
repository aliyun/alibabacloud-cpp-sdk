// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTDEPLOYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSERTDEPLOYGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsertDeployGroupResponseBodyDeployGroupEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertDeployGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertDeployGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DeployGroupEntity, deployGroupEntity_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertDeployGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DeployGroupEntity, deployGroupEntity_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InsertDeployGroupResponseBody() = default ;
    InsertDeployGroupResponseBody(const InsertDeployGroupResponseBody &) = default ;
    InsertDeployGroupResponseBody(InsertDeployGroupResponseBody &&) = default ;
    InsertDeployGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertDeployGroupResponseBody() = default ;
    InsertDeployGroupResponseBody& operator=(const InsertDeployGroupResponseBody &) = default ;
    InsertDeployGroupResponseBody& operator=(InsertDeployGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->deployGroupEntity_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline InsertDeployGroupResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // deployGroupEntity Field Functions 
    bool hasDeployGroupEntity() const { return this->deployGroupEntity_ != nullptr;};
    void deleteDeployGroupEntity() { this->deployGroupEntity_ = nullptr;};
    inline const InsertDeployGroupResponseBodyDeployGroupEntity & deployGroupEntity() const { DARABONBA_PTR_GET_CONST(deployGroupEntity_, InsertDeployGroupResponseBodyDeployGroupEntity) };
    inline InsertDeployGroupResponseBodyDeployGroupEntity deployGroupEntity() { DARABONBA_PTR_GET(deployGroupEntity_, InsertDeployGroupResponseBodyDeployGroupEntity) };
    inline InsertDeployGroupResponseBody& setDeployGroupEntity(const InsertDeployGroupResponseBodyDeployGroupEntity & deployGroupEntity) { DARABONBA_PTR_SET_VALUE(deployGroupEntity_, deployGroupEntity) };
    inline InsertDeployGroupResponseBody& setDeployGroupEntity(InsertDeployGroupResponseBodyDeployGroupEntity && deployGroupEntity) { DARABONBA_PTR_SET_RVALUE(deployGroupEntity_, deployGroupEntity) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsertDeployGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsertDeployGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The information about the instance group.
    std::shared_ptr<InsertDeployGroupResponseBodyDeployGroupEntity> deployGroupEntity_ = nullptr;
    // The additional information that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
