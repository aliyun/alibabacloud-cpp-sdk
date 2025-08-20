// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRIVATEACCESSTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRIVATEACCESSTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreatePrivateAccessTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrivateAccessTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrivateAccessTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    CreatePrivateAccessTagResponseBody() = default ;
    CreatePrivateAccessTagResponseBody(const CreatePrivateAccessTagResponseBody &) = default ;
    CreatePrivateAccessTagResponseBody(CreatePrivateAccessTagResponseBody &&) = default ;
    CreatePrivateAccessTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrivateAccessTagResponseBody() = default ;
    CreatePrivateAccessTagResponseBody& operator=(const CreatePrivateAccessTagResponseBody &) = default ;
    CreatePrivateAccessTagResponseBody& operator=(CreatePrivateAccessTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tagId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePrivateAccessTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline CreatePrivateAccessTagResponseBody& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> tagId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
