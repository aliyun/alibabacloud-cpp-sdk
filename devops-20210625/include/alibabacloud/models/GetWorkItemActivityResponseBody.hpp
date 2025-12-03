// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMACTIVITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMACTIVITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkItemActivityResponseBodyActivities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemActivityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemActivityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(activities, activities_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemActivityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(activities, activities_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetWorkItemActivityResponseBody() = default ;
    GetWorkItemActivityResponseBody(const GetWorkItemActivityResponseBody &) = default ;
    GetWorkItemActivityResponseBody(GetWorkItemActivityResponseBody &&) = default ;
    GetWorkItemActivityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemActivityResponseBody() = default ;
    GetWorkItemActivityResponseBody& operator=(const GetWorkItemActivityResponseBody &) = default ;
    GetWorkItemActivityResponseBody& operator=(GetWorkItemActivityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activities_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // activities Field Functions 
    bool hasActivities() const { return this->activities_ != nullptr;};
    void deleteActivities() { this->activities_ = nullptr;};
    inline const vector<GetWorkItemActivityResponseBodyActivities> & activities() const { DARABONBA_PTR_GET_CONST(activities_, vector<GetWorkItemActivityResponseBodyActivities>) };
    inline vector<GetWorkItemActivityResponseBodyActivities> activities() { DARABONBA_PTR_GET(activities_, vector<GetWorkItemActivityResponseBodyActivities>) };
    inline GetWorkItemActivityResponseBody& setActivities(const vector<GetWorkItemActivityResponseBodyActivities> & activities) { DARABONBA_PTR_SET_VALUE(activities_, activities) };
    inline GetWorkItemActivityResponseBody& setActivities(vector<GetWorkItemActivityResponseBodyActivities> && activities) { DARABONBA_PTR_SET_RVALUE(activities_, activities) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetWorkItemActivityResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetWorkItemActivityResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkItemActivityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkItemActivityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<GetWorkItemActivityResponseBodyActivities>> activities_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
