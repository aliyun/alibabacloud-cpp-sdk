// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTWORKFLOWDEFINITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTWORKFLOWDEFINITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImportWorkflowDefinitionResponseBodyAsyncJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ImportWorkflowDefinitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportWorkflowDefinitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncJob, asyncJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportWorkflowDefinitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncJob, asyncJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImportWorkflowDefinitionResponseBody() = default ;
    ImportWorkflowDefinitionResponseBody(const ImportWorkflowDefinitionResponseBody &) = default ;
    ImportWorkflowDefinitionResponseBody(ImportWorkflowDefinitionResponseBody &&) = default ;
    ImportWorkflowDefinitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportWorkflowDefinitionResponseBody() = default ;
    ImportWorkflowDefinitionResponseBody& operator=(const ImportWorkflowDefinitionResponseBody &) = default ;
    ImportWorkflowDefinitionResponseBody& operator=(ImportWorkflowDefinitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncJob_ != nullptr
        && this->requestId_ != nullptr; };
    // asyncJob Field Functions 
    bool hasAsyncJob() const { return this->asyncJob_ != nullptr;};
    void deleteAsyncJob() { this->asyncJob_ = nullptr;};
    inline const ImportWorkflowDefinitionResponseBodyAsyncJob & asyncJob() const { DARABONBA_PTR_GET_CONST(asyncJob_, ImportWorkflowDefinitionResponseBodyAsyncJob) };
    inline ImportWorkflowDefinitionResponseBodyAsyncJob asyncJob() { DARABONBA_PTR_GET(asyncJob_, ImportWorkflowDefinitionResponseBodyAsyncJob) };
    inline ImportWorkflowDefinitionResponseBody& setAsyncJob(const ImportWorkflowDefinitionResponseBodyAsyncJob & asyncJob) { DARABONBA_PTR_SET_VALUE(asyncJob_, asyncJob) };
    inline ImportWorkflowDefinitionResponseBody& setAsyncJob(ImportWorkflowDefinitionResponseBodyAsyncJob && asyncJob) { DARABONBA_PTR_SET_RVALUE(asyncJob_, asyncJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportWorkflowDefinitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status information of the asynchronous task.
    std::shared_ptr<ImportWorkflowDefinitionResponseBodyAsyncJob> asyncJob_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
