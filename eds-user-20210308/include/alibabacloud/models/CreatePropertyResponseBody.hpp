// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROPERTYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROPERTYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePropertyResponseBodyCreateResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreatePropertyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePropertyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateResult, createResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePropertyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateResult, createResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePropertyResponseBody() = default ;
    CreatePropertyResponseBody(const CreatePropertyResponseBody &) = default ;
    CreatePropertyResponseBody(CreatePropertyResponseBody &&) = default ;
    CreatePropertyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePropertyResponseBody() = default ;
    CreatePropertyResponseBody& operator=(const CreatePropertyResponseBody &) = default ;
    CreatePropertyResponseBody& operator=(CreatePropertyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // createResult Field Functions 
    bool hasCreateResult() const { return this->createResult_ != nullptr;};
    void deleteCreateResult() { this->createResult_ = nullptr;};
    inline const CreatePropertyResponseBodyCreateResult & createResult() const { DARABONBA_PTR_GET_CONST(createResult_, CreatePropertyResponseBodyCreateResult) };
    inline CreatePropertyResponseBodyCreateResult createResult() { DARABONBA_PTR_GET(createResult_, CreatePropertyResponseBodyCreateResult) };
    inline CreatePropertyResponseBody& setCreateResult(const CreatePropertyResponseBodyCreateResult & createResult) { DARABONBA_PTR_SET_VALUE(createResult_, createResult) };
    inline CreatePropertyResponseBody& setCreateResult(CreatePropertyResponseBodyCreateResult && createResult) { DARABONBA_PTR_SET_RVALUE(createResult_, createResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePropertyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result of creating the property.
    std::shared_ptr<CreatePropertyResponseBodyCreateResult> createResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
