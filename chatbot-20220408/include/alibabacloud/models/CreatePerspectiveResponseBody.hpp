// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSPECTIVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSPECTIVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreatePerspectiveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePerspectiveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PerspectiveId, perspectiveId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePerspectiveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PerspectiveId, perspectiveId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePerspectiveResponseBody() = default ;
    CreatePerspectiveResponseBody(const CreatePerspectiveResponseBody &) = default ;
    CreatePerspectiveResponseBody(CreatePerspectiveResponseBody &&) = default ;
    CreatePerspectiveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePerspectiveResponseBody() = default ;
    CreatePerspectiveResponseBody& operator=(const CreatePerspectiveResponseBody &) = default ;
    CreatePerspectiveResponseBody& operator=(CreatePerspectiveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->perspectiveId_ == nullptr
        && return this->requestId_ == nullptr; };
    // perspectiveId Field Functions 
    bool hasPerspectiveId() const { return this->perspectiveId_ != nullptr;};
    void deletePerspectiveId() { this->perspectiveId_ = nullptr;};
    inline string perspectiveId() const { DARABONBA_PTR_GET_DEFAULT(perspectiveId_, "") };
    inline CreatePerspectiveResponseBody& setPerspectiveId(string perspectiveId) { DARABONBA_PTR_SET_VALUE(perspectiveId_, perspectiveId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePerspectiveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> perspectiveId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
