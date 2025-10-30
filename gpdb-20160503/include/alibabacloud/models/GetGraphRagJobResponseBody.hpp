// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAPHRAGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGRAPHRAGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGraphRAGJobResponseBodyJob.hpp>
#include <alibabacloud/models/GetGraphRAGJobResponseBodyUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetGraphRAGJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGraphRAGJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetGraphRAGJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    GetGraphRAGJobResponseBody() = default ;
    GetGraphRAGJobResponseBody(const GetGraphRAGJobResponseBody &) = default ;
    GetGraphRAGJobResponseBody(GetGraphRAGJobResponseBody &&) = default ;
    GetGraphRAGJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGraphRAGJobResponseBody() = default ;
    GetGraphRAGJobResponseBody& operator=(const GetGraphRAGJobResponseBody &) = default ;
    GetGraphRAGJobResponseBody& operator=(GetGraphRAGJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->job_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->usage_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetGraphRAGJobResponseBodyJob & job() const { DARABONBA_PTR_GET_CONST(job_, GetGraphRAGJobResponseBodyJob) };
    inline GetGraphRAGJobResponseBodyJob job() { DARABONBA_PTR_GET(job_, GetGraphRAGJobResponseBodyJob) };
    inline GetGraphRAGJobResponseBody& setJob(const GetGraphRAGJobResponseBodyJob & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetGraphRAGJobResponseBody& setJob(GetGraphRAGJobResponseBodyJob && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGraphRAGJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGraphRAGJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGraphRAGJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const GetGraphRAGJobResponseBodyUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, GetGraphRAGJobResponseBodyUsage) };
    inline GetGraphRAGJobResponseBodyUsage usage() { DARABONBA_PTR_GET(usage_, GetGraphRAGJobResponseBodyUsage) };
    inline GetGraphRAGJobResponseBody& setUsage(const GetGraphRAGJobResponseBodyUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetGraphRAGJobResponseBody& setUsage(GetGraphRAGJobResponseBodyUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<GetGraphRAGJobResponseBodyJob> job_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<GetGraphRAGJobResponseBodyUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
