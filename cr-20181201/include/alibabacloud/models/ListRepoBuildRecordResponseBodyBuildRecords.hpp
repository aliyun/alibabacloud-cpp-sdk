// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDRESPONSEBODYBUILDRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDRESPONSEBODYBUILDRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRepoBuildRecordResponseBodyBuildRecordsImage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoBuildRecordResponseBodyBuildRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoBuildRecordResponseBodyBuildRecords& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_TO_JSON(BuildStatus, buildStatus_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoBuildRecordResponseBodyBuildRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_FROM_JSON(BuildStatus, buildStatus_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListRepoBuildRecordResponseBodyBuildRecords() = default ;
    ListRepoBuildRecordResponseBodyBuildRecords(const ListRepoBuildRecordResponseBodyBuildRecords &) = default ;
    ListRepoBuildRecordResponseBodyBuildRecords(ListRepoBuildRecordResponseBodyBuildRecords &&) = default ;
    ListRepoBuildRecordResponseBodyBuildRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoBuildRecordResponseBodyBuildRecords() = default ;
    ListRepoBuildRecordResponseBodyBuildRecords& operator=(const ListRepoBuildRecordResponseBodyBuildRecords &) = default ;
    ListRepoBuildRecordResponseBodyBuildRecords& operator=(ListRepoBuildRecordResponseBodyBuildRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildRecordId_ != nullptr
        && this->buildStatus_ != nullptr && this->endTime_ != nullptr && this->image_ != nullptr && this->startTime_ != nullptr; };
    // buildRecordId Field Functions 
    bool hasBuildRecordId() const { return this->buildRecordId_ != nullptr;};
    void deleteBuildRecordId() { this->buildRecordId_ = nullptr;};
    inline string buildRecordId() const { DARABONBA_PTR_GET_DEFAULT(buildRecordId_, "") };
    inline ListRepoBuildRecordResponseBodyBuildRecords& setBuildRecordId(string buildRecordId) { DARABONBA_PTR_SET_VALUE(buildRecordId_, buildRecordId) };


    // buildStatus Field Functions 
    bool hasBuildStatus() const { return this->buildStatus_ != nullptr;};
    void deleteBuildStatus() { this->buildStatus_ = nullptr;};
    inline string buildStatus() const { DARABONBA_PTR_GET_DEFAULT(buildStatus_, "") };
    inline ListRepoBuildRecordResponseBodyBuildRecords& setBuildStatus(string buildStatus) { DARABONBA_PTR_SET_VALUE(buildStatus_, buildStatus) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListRepoBuildRecordResponseBodyBuildRecords& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const Models::ListRepoBuildRecordResponseBodyBuildRecordsImage & image() const { DARABONBA_PTR_GET_CONST(image_, Models::ListRepoBuildRecordResponseBodyBuildRecordsImage) };
    inline Models::ListRepoBuildRecordResponseBodyBuildRecordsImage image() { DARABONBA_PTR_GET(image_, Models::ListRepoBuildRecordResponseBodyBuildRecordsImage) };
    inline ListRepoBuildRecordResponseBodyBuildRecords& setImage(const Models::ListRepoBuildRecordResponseBodyBuildRecordsImage & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline ListRepoBuildRecordResponseBodyBuildRecords& setImage(Models::ListRepoBuildRecordResponseBodyBuildRecordsImage && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListRepoBuildRecordResponseBodyBuildRecords& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the image building record.
    std::shared_ptr<string> buildRecordId_ = nullptr;
    // The status of the image building.
    std::shared_ptr<string> buildStatus_ = nullptr;
    // The time when the image building ended.
    std::shared_ptr<string> endTime_ = nullptr;
    // The information about the image.
    std::shared_ptr<Models::ListRepoBuildRecordResponseBodyBuildRecordsImage> image_ = nullptr;
    // The time when the image building started.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
