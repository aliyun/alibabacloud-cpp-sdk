// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASCRIPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEASCRIPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAScriptsResponseBodyAScriptIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateAScriptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAScriptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AScriptIds, AScriptIds_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAScriptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AScriptIds, AScriptIds_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAScriptsResponseBody() = default ;
    CreateAScriptsResponseBody(const CreateAScriptsResponseBody &) = default ;
    CreateAScriptsResponseBody(CreateAScriptsResponseBody &&) = default ;
    CreateAScriptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAScriptsResponseBody() = default ;
    CreateAScriptsResponseBody& operator=(const CreateAScriptsResponseBody &) = default ;
    CreateAScriptsResponseBody& operator=(CreateAScriptsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AScriptIds_ != nullptr
        && this->jobId_ != nullptr && this->requestId_ != nullptr; };
    // AScriptIds Field Functions 
    bool hasAScriptIds() const { return this->AScriptIds_ != nullptr;};
    void deleteAScriptIds() { this->AScriptIds_ = nullptr;};
    inline const vector<CreateAScriptsResponseBodyAScriptIds> & AScriptIds() const { DARABONBA_PTR_GET_CONST(AScriptIds_, vector<CreateAScriptsResponseBodyAScriptIds>) };
    inline vector<CreateAScriptsResponseBodyAScriptIds> AScriptIds() { DARABONBA_PTR_GET(AScriptIds_, vector<CreateAScriptsResponseBodyAScriptIds>) };
    inline CreateAScriptsResponseBody& setAScriptIds(const vector<CreateAScriptsResponseBodyAScriptIds> & AScriptIds) { DARABONBA_PTR_SET_VALUE(AScriptIds_, AScriptIds) };
    inline CreateAScriptsResponseBody& setAScriptIds(vector<CreateAScriptsResponseBodyAScriptIds> && AScriptIds) { DARABONBA_PTR_SET_RVALUE(AScriptIds_, AScriptIds) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CreateAScriptsResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAScriptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The AScript rule IDs.
    std::shared_ptr<vector<CreateAScriptsResponseBodyAScriptIds>> AScriptIds_ = nullptr;
    // The asynchronous task ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
