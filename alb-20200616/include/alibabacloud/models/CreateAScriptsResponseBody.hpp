// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASCRIPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEASCRIPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class AScriptIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AScriptIds& obj) { 
        DARABONBA_PTR_TO_JSON(AScriptId, AScriptId_);
      };
      friend void from_json(const Darabonba::Json& j, AScriptIds& obj) { 
        DARABONBA_PTR_FROM_JSON(AScriptId, AScriptId_);
      };
      AScriptIds() = default ;
      AScriptIds(const AScriptIds &) = default ;
      AScriptIds(AScriptIds &&) = default ;
      AScriptIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AScriptIds() = default ;
      AScriptIds& operator=(const AScriptIds &) = default ;
      AScriptIds& operator=(AScriptIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->AScriptId_ == nullptr; };
      // AScriptId Field Functions 
      bool hasAScriptId() const { return this->AScriptId_ != nullptr;};
      void deleteAScriptId() { this->AScriptId_ = nullptr;};
      inline string getAScriptId() const { DARABONBA_PTR_GET_DEFAULT(AScriptId_, "") };
      inline AScriptIds& setAScriptId(string AScriptId) { DARABONBA_PTR_SET_VALUE(AScriptId_, AScriptId) };


    protected:
      // The AScript rule ID.
      shared_ptr<string> AScriptId_ {};
    };

    virtual bool empty() const override { return this->AScriptIds_ == nullptr
        && this->jobId_ == nullptr && this->requestId_ == nullptr; };
    // AScriptIds Field Functions 
    bool hasAScriptIds() const { return this->AScriptIds_ != nullptr;};
    void deleteAScriptIds() { this->AScriptIds_ = nullptr;};
    inline const vector<CreateAScriptsResponseBody::AScriptIds> & getAScriptIds() const { DARABONBA_PTR_GET_CONST(AScriptIds_, vector<CreateAScriptsResponseBody::AScriptIds>) };
    inline vector<CreateAScriptsResponseBody::AScriptIds> getAScriptIds() { DARABONBA_PTR_GET(AScriptIds_, vector<CreateAScriptsResponseBody::AScriptIds>) };
    inline CreateAScriptsResponseBody& setAScriptIds(const vector<CreateAScriptsResponseBody::AScriptIds> & aScriptIds) { DARABONBA_PTR_SET_VALUE(AScriptIds_, aScriptIds) };
    inline CreateAScriptsResponseBody& setAScriptIds(vector<CreateAScriptsResponseBody::AScriptIds> && aScriptIds) { DARABONBA_PTR_SET_RVALUE(AScriptIds_, aScriptIds) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CreateAScriptsResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAScriptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The AScript rule IDs.
    shared_ptr<vector<CreateAScriptsResponseBody::AScriptIds>> AScriptIds_ {};
    // The asynchronous task ID.
    shared_ptr<string> jobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
