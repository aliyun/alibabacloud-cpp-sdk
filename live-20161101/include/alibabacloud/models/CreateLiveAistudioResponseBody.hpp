// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEAISTUDIORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEAISTUDIORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateLiveAIStudioResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveAIStudioResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StudioId, studioId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveAIStudioResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StudioId, studioId_);
    };
    CreateLiveAIStudioResponseBody() = default ;
    CreateLiveAIStudioResponseBody(const CreateLiveAIStudioResponseBody &) = default ;
    CreateLiveAIStudioResponseBody(CreateLiveAIStudioResponseBody &&) = default ;
    CreateLiveAIStudioResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveAIStudioResponseBody() = default ;
    CreateLiveAIStudioResponseBody& operator=(const CreateLiveAIStudioResponseBody &) = default ;
    CreateLiveAIStudioResponseBody& operator=(CreateLiveAIStudioResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->studioId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLiveAIStudioResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // studioId Field Functions 
    bool hasStudioId() const { return this->studioId_ != nullptr;};
    void deleteStudioId() { this->studioId_ = nullptr;};
    inline string studioId() const { DARABONBA_PTR_GET_DEFAULT(studioId_, "") };
    inline CreateLiveAIStudioResponseBody& setStudioId(string studioId) { DARABONBA_PTR_SET_VALUE(studioId_, studioId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the virtual studio template.
    std::shared_ptr<string> studioId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
