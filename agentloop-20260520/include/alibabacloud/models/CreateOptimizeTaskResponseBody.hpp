// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPTIMIZETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPTIMIZETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class CreateOptimizeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOptimizeTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(optimizeTaskName, optimizeTaskName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOptimizeTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(optimizeTaskName, optimizeTaskName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateOptimizeTaskResponseBody() = default ;
    CreateOptimizeTaskResponseBody(const CreateOptimizeTaskResponseBody &) = default ;
    CreateOptimizeTaskResponseBody(CreateOptimizeTaskResponseBody &&) = default ;
    CreateOptimizeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOptimizeTaskResponseBody() = default ;
    CreateOptimizeTaskResponseBody& operator=(const CreateOptimizeTaskResponseBody &) = default ;
    CreateOptimizeTaskResponseBody& operator=(CreateOptimizeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->optimizeTaskName_ == nullptr
        && this->requestId_ == nullptr; };
    // optimizeTaskName Field Functions 
    bool hasOptimizeTaskName() const { return this->optimizeTaskName_ != nullptr;};
    void deleteOptimizeTaskName() { this->optimizeTaskName_ = nullptr;};
    inline string getOptimizeTaskName() const { DARABONBA_PTR_GET_DEFAULT(optimizeTaskName_, "") };
    inline CreateOptimizeTaskResponseBody& setOptimizeTaskName(string optimizeTaskName) { DARABONBA_PTR_SET_VALUE(optimizeTaskName_, optimizeTaskName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOptimizeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the optimization task.
    shared_ptr<string> optimizeTaskName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
