// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELURLUPLOADJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELURLUPLOADJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CancelUrlUploadJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelUrlUploadJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanceledJobs, canceledJobs_);
      DARABONBA_PTR_TO_JSON(NonExists, nonExists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelUrlUploadJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanceledJobs, canceledJobs_);
      DARABONBA_PTR_FROM_JSON(NonExists, nonExists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CancelUrlUploadJobsResponseBody() = default ;
    CancelUrlUploadJobsResponseBody(const CancelUrlUploadJobsResponseBody &) = default ;
    CancelUrlUploadJobsResponseBody(CancelUrlUploadJobsResponseBody &&) = default ;
    CancelUrlUploadJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelUrlUploadJobsResponseBody() = default ;
    CancelUrlUploadJobsResponseBody& operator=(const CancelUrlUploadJobsResponseBody &) = default ;
    CancelUrlUploadJobsResponseBody& operator=(CancelUrlUploadJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canceledJobs_ != nullptr
        && this->nonExists_ != nullptr && this->requestId_ != nullptr; };
    // canceledJobs Field Functions 
    bool hasCanceledJobs() const { return this->canceledJobs_ != nullptr;};
    void deleteCanceledJobs() { this->canceledJobs_ = nullptr;};
    inline const vector<string> & canceledJobs() const { DARABONBA_PTR_GET_CONST(canceledJobs_, vector<string>) };
    inline vector<string> canceledJobs() { DARABONBA_PTR_GET(canceledJobs_, vector<string>) };
    inline CancelUrlUploadJobsResponseBody& setCanceledJobs(const vector<string> & canceledJobs) { DARABONBA_PTR_SET_VALUE(canceledJobs_, canceledJobs) };
    inline CancelUrlUploadJobsResponseBody& setCanceledJobs(vector<string> && canceledJobs) { DARABONBA_PTR_SET_RVALUE(canceledJobs_, canceledJobs) };


    // nonExists Field Functions 
    bool hasNonExists() const { return this->nonExists_ != nullptr;};
    void deleteNonExists() { this->nonExists_ = nullptr;};
    inline const vector<string> & nonExists() const { DARABONBA_PTR_GET_CONST(nonExists_, vector<string>) };
    inline vector<string> nonExists() { DARABONBA_PTR_GET(nonExists_, vector<string>) };
    inline CancelUrlUploadJobsResponseBody& setNonExists(const vector<string> & nonExists) { DARABONBA_PTR_SET_VALUE(nonExists_, nonExists) };
    inline CancelUrlUploadJobsResponseBody& setNonExists(vector<string> && nonExists) { DARABONBA_PTR_SET_RVALUE(nonExists_, nonExists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelUrlUploadJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of canceled jobs.
    std::shared_ptr<vector<string>> canceledJobs_ = nullptr;
    // The jobs that do not exist.
    std::shared_ptr<vector<string>> nonExists_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
