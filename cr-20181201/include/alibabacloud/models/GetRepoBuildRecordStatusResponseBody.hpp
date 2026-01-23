// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOBUILDRECORDSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPOBUILDRECORDSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoBuildRecordStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoBuildRecordStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildStatus, buildStatus_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoBuildRecordStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildStatus, buildStatus_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRepoBuildRecordStatusResponseBody() = default ;
    GetRepoBuildRecordStatusResponseBody(const GetRepoBuildRecordStatusResponseBody &) = default ;
    GetRepoBuildRecordStatusResponseBody(GetRepoBuildRecordStatusResponseBody &&) = default ;
    GetRepoBuildRecordStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoBuildRecordStatusResponseBody() = default ;
    GetRepoBuildRecordStatusResponseBody& operator=(const GetRepoBuildRecordStatusResponseBody &) = default ;
    GetRepoBuildRecordStatusResponseBody& operator=(GetRepoBuildRecordStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildStatus_ == nullptr
        && this->code_ == nullptr && this->isSuccess_ == nullptr && this->requestId_ == nullptr; };
    // buildStatus Field Functions 
    bool hasBuildStatus() const { return this->buildStatus_ != nullptr;};
    void deleteBuildStatus() { this->buildStatus_ = nullptr;};
    inline string getBuildStatus() const { DARABONBA_PTR_GET_DEFAULT(buildStatus_, "") };
    inline GetRepoBuildRecordStatusResponseBody& setBuildStatus(string buildStatus) { DARABONBA_PTR_SET_VALUE(buildStatus_, buildStatus) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRepoBuildRecordStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetRepoBuildRecordStatusResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRepoBuildRecordStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of the image building.
    shared_ptr<string> buildStatus_ {};
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
