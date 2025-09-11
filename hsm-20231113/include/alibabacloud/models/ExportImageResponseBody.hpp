// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExportImageResponseBodyJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ExportImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportImageResponseBody() = default ;
    ExportImageResponseBody(const ExportImageResponseBody &) = default ;
    ExportImageResponseBody(ExportImageResponseBody &&) = default ;
    ExportImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportImageResponseBody() = default ;
    ExportImageResponseBody& operator=(const ExportImageResponseBody &) = default ;
    ExportImageResponseBody& operator=(ExportImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->job_ != nullptr
        && this->requestId_ != nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const ExportImageResponseBodyJob & job() const { DARABONBA_PTR_GET_CONST(job_, ExportImageResponseBodyJob) };
    inline ExportImageResponseBodyJob job() { DARABONBA_PTR_GET(job_, ExportImageResponseBodyJob) };
    inline ExportImageResponseBody& setJob(const ExportImageResponseBodyJob & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline ExportImageResponseBody& setJob(ExportImageResponseBodyJob && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the asynchronous task returned.
    std::shared_ptr<ExportImageResponseBodyJob> job_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
