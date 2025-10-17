// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateImagePipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImagePipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImagePipelineId, imagePipelineId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImagePipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImagePipelineId, imagePipelineId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateImagePipelineResponseBody() = default ;
    CreateImagePipelineResponseBody(const CreateImagePipelineResponseBody &) = default ;
    CreateImagePipelineResponseBody(CreateImagePipelineResponseBody &&) = default ;
    CreateImagePipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImagePipelineResponseBody() = default ;
    CreateImagePipelineResponseBody& operator=(const CreateImagePipelineResponseBody &) = default ;
    CreateImagePipelineResponseBody& operator=(CreateImagePipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imagePipelineId_ == nullptr
        && return this->requestId_ == nullptr; };
    // imagePipelineId Field Functions 
    bool hasImagePipelineId() const { return this->imagePipelineId_ != nullptr;};
    void deleteImagePipelineId() { this->imagePipelineId_ = nullptr;};
    inline string imagePipelineId() const { DARABONBA_PTR_GET_DEFAULT(imagePipelineId_, "") };
    inline CreateImagePipelineResponseBody& setImagePipelineId(string imagePipelineId) { DARABONBA_PTR_SET_VALUE(imagePipelineId_, imagePipelineId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateImagePipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the image template.
    std::shared_ptr<string> imagePipelineId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
