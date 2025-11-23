// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRACKJOBDEGREERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRACKJOBDEGREERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataTrackJobDegreeResponseBodyJobDegree.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataTrackJobDegreeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrackJobDegreeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(JobDegree, jobDegree_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrackJobDegreeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(JobDegree, jobDegree_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataTrackJobDegreeResponseBody() = default ;
    GetDataTrackJobDegreeResponseBody(const GetDataTrackJobDegreeResponseBody &) = default ;
    GetDataTrackJobDegreeResponseBody(GetDataTrackJobDegreeResponseBody &&) = default ;
    GetDataTrackJobDegreeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrackJobDegreeResponseBody() = default ;
    GetDataTrackJobDegreeResponseBody& operator=(const GetDataTrackJobDegreeResponseBody &) = default ;
    GetDataTrackJobDegreeResponseBody& operator=(GetDataTrackJobDegreeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->jobDegree_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataTrackJobDegreeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataTrackJobDegreeResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // jobDegree Field Functions 
    bool hasJobDegree() const { return this->jobDegree_ != nullptr;};
    void deleteJobDegree() { this->jobDegree_ = nullptr;};
    inline const GetDataTrackJobDegreeResponseBodyJobDegree & jobDegree() const { DARABONBA_PTR_GET_CONST(jobDegree_, GetDataTrackJobDegreeResponseBodyJobDegree) };
    inline GetDataTrackJobDegreeResponseBodyJobDegree jobDegree() { DARABONBA_PTR_GET(jobDegree_, GetDataTrackJobDegreeResponseBodyJobDegree) };
    inline GetDataTrackJobDegreeResponseBody& setJobDegree(const GetDataTrackJobDegreeResponseBodyJobDegree & jobDegree) { DARABONBA_PTR_SET_VALUE(jobDegree_, jobDegree) };
    inline GetDataTrackJobDegreeResponseBody& setJobDegree(GetDataTrackJobDegreeResponseBodyJobDegree && jobDegree) { DARABONBA_PTR_SET_RVALUE(jobDegree_, jobDegree) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataTrackJobDegreeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataTrackJobDegreeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The progress details of the data tracking task.
    std::shared_ptr<GetDataTrackJobDegreeResponseBodyJobDegree> jobDegree_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
