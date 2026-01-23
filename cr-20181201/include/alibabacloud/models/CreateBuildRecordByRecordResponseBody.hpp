// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBUILDRECORDBYRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBUILDRECORDBYRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateBuildRecordByRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBuildRecordByRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBuildRecordByRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateBuildRecordByRecordResponseBody() = default ;
    CreateBuildRecordByRecordResponseBody(const CreateBuildRecordByRecordResponseBody &) = default ;
    CreateBuildRecordByRecordResponseBody(CreateBuildRecordByRecordResponseBody &&) = default ;
    CreateBuildRecordByRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBuildRecordByRecordResponseBody() = default ;
    CreateBuildRecordByRecordResponseBody& operator=(const CreateBuildRecordByRecordResponseBody &) = default ;
    CreateBuildRecordByRecordResponseBody& operator=(CreateBuildRecordByRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildRecordId_ == nullptr
        && this->code_ == nullptr && this->isSuccess_ == nullptr && this->requestId_ == nullptr; };
    // buildRecordId Field Functions 
    bool hasBuildRecordId() const { return this->buildRecordId_ != nullptr;};
    void deleteBuildRecordId() { this->buildRecordId_ = nullptr;};
    inline string getBuildRecordId() const { DARABONBA_PTR_GET_DEFAULT(buildRecordId_, "") };
    inline CreateBuildRecordByRecordResponseBody& setBuildRecordId(string buildRecordId) { DARABONBA_PTR_SET_VALUE(buildRecordId_, buildRecordId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateBuildRecordByRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline CreateBuildRecordByRecordResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBuildRecordByRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the image building record.
    shared_ptr<string> buildRecordId_ {};
    // The HTTP status code. The status code 200 indicates that the request is successful.\\
    // Other status codes indicate that the request failed.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
