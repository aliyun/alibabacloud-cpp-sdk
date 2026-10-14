// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPTIMIZERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPTIMIZERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class CreateOptimizeRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOptimizeRunResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(optimizeRun, optimizeRun_);
      DARABONBA_PTR_TO_JSON(optimizeRunId, optimizeRunId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOptimizeRunResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(optimizeRun, optimizeRun_);
      DARABONBA_PTR_FROM_JSON(optimizeRunId, optimizeRunId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateOptimizeRunResponseBody() = default ;
    CreateOptimizeRunResponseBody(const CreateOptimizeRunResponseBody &) = default ;
    CreateOptimizeRunResponseBody(CreateOptimizeRunResponseBody &&) = default ;
    CreateOptimizeRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOptimizeRunResponseBody() = default ;
    CreateOptimizeRunResponseBody& operator=(const CreateOptimizeRunResponseBody &) = default ;
    CreateOptimizeRunResponseBody& operator=(CreateOptimizeRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->optimizeRun_ == nullptr
        && this->optimizeRunId_ == nullptr && this->requestId_ == nullptr; };
    // optimizeRun Field Functions 
    bool hasOptimizeRun() const { return this->optimizeRun_ != nullptr;};
    void deleteOptimizeRun() { this->optimizeRun_ = nullptr;};
    inline     const Darabonba::Json & getOptimizeRun() const { DARABONBA_GET(optimizeRun_) };
    Darabonba::Json & getOptimizeRun() { DARABONBA_GET(optimizeRun_) };
    inline CreateOptimizeRunResponseBody& setOptimizeRun(const Darabonba::Json & optimizeRun) { DARABONBA_SET_VALUE(optimizeRun_, optimizeRun) };
    inline CreateOptimizeRunResponseBody& setOptimizeRun(Darabonba::Json && optimizeRun) { DARABONBA_SET_RVALUE(optimizeRun_, optimizeRun) };


    // optimizeRunId Field Functions 
    bool hasOptimizeRunId() const { return this->optimizeRunId_ != nullptr;};
    void deleteOptimizeRunId() { this->optimizeRunId_ = nullptr;};
    inline string getOptimizeRunId() const { DARABONBA_PTR_GET_DEFAULT(optimizeRunId_, "") };
    inline CreateOptimizeRunResponseBody& setOptimizeRunId(string optimizeRunId) { DARABONBA_PTR_SET_VALUE(optimizeRunId_, optimizeRunId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOptimizeRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the created run. You can call the GetOptimizeRun operation to query the subsequent status.
    Darabonba::Json optimizeRun_ {};
    // The run ID.
    shared_ptr<string> optimizeRunId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
