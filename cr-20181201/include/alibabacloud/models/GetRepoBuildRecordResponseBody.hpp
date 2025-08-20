// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOBUILDRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPOBUILDRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRepoBuildRecordResponseBodyImage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoBuildRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoBuildRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoBuildRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetRepoBuildRecordResponseBody() = default ;
    GetRepoBuildRecordResponseBody(const GetRepoBuildRecordResponseBody &) = default ;
    GetRepoBuildRecordResponseBody(GetRepoBuildRecordResponseBody &&) = default ;
    GetRepoBuildRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoBuildRecordResponseBody() = default ;
    GetRepoBuildRecordResponseBody& operator=(const GetRepoBuildRecordResponseBody &) = default ;
    GetRepoBuildRecordResponseBody& operator=(GetRepoBuildRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildRecordId_ != nullptr
        && this->code_ != nullptr && this->endTime_ != nullptr && this->image_ != nullptr && this->isSuccess_ != nullptr && this->requestId_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr; };
    // buildRecordId Field Functions 
    bool hasBuildRecordId() const { return this->buildRecordId_ != nullptr;};
    void deleteBuildRecordId() { this->buildRecordId_ = nullptr;};
    inline string buildRecordId() const { DARABONBA_PTR_GET_DEFAULT(buildRecordId_, "") };
    inline GetRepoBuildRecordResponseBody& setBuildRecordId(string buildRecordId) { DARABONBA_PTR_SET_VALUE(buildRecordId_, buildRecordId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRepoBuildRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetRepoBuildRecordResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const GetRepoBuildRecordResponseBodyImage & image() const { DARABONBA_PTR_GET_CONST(image_, GetRepoBuildRecordResponseBodyImage) };
    inline GetRepoBuildRecordResponseBodyImage image() { DARABONBA_PTR_GET(image_, GetRepoBuildRecordResponseBodyImage) };
    inline GetRepoBuildRecordResponseBody& setImage(const GetRepoBuildRecordResponseBodyImage & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline GetRepoBuildRecordResponseBody& setImage(GetRepoBuildRecordResponseBodyImage && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetRepoBuildRecordResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRepoBuildRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetRepoBuildRecordResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRepoBuildRecordResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the image building record.
    std::shared_ptr<string> buildRecordId_ = nullptr;
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the image building was completed.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The information about the image.
    std::shared_ptr<GetRepoBuildRecordResponseBodyImage> image_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time when the image building started.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
