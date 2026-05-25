// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTAGEMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESTAGEMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateStageModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStageModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StageModelId, stageModelId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStageModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StageModelId, stageModelId_);
    };
    CreateStageModelResponseBody() = default ;
    CreateStageModelResponseBody(const CreateStageModelResponseBody &) = default ;
    CreateStageModelResponseBody(CreateStageModelResponseBody &&) = default ;
    CreateStageModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStageModelResponseBody() = default ;
    CreateStageModelResponseBody& operator=(const CreateStageModelResponseBody &) = default ;
    CreateStageModelResponseBody& operator=(CreateStageModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stageModelId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateStageModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stageModelId Field Functions 
    bool hasStageModelId() const { return this->stageModelId_ != nullptr;};
    void deleteStageModelId() { this->stageModelId_ = nullptr;};
    inline string getStageModelId() const { DARABONBA_PTR_GET_DEFAULT(stageModelId_, "") };
    inline CreateStageModelResponseBody& setStageModelId(string stageModelId) { DARABONBA_PTR_SET_VALUE(stageModelId_, stageModelId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> stageModelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
