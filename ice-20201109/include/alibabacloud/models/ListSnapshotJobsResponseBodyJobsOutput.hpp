// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTJOBSRESPONSEBODYJOBSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTJOBSRESPONSEBODYJOBSOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSnapshotJobsResponseBodyJobsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotJobsResponseBodyJobsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotJobsResponseBodyJobsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListSnapshotJobsResponseBodyJobsOutput() = default ;
    ListSnapshotJobsResponseBodyJobsOutput(const ListSnapshotJobsResponseBodyJobsOutput &) = default ;
    ListSnapshotJobsResponseBodyJobsOutput(ListSnapshotJobsResponseBodyJobsOutput &&) = default ;
    ListSnapshotJobsResponseBodyJobsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotJobsResponseBodyJobsOutput() = default ;
    ListSnapshotJobsResponseBodyJobsOutput& operator=(const ListSnapshotJobsResponseBodyJobsOutput &) = default ;
    ListSnapshotJobsResponseBodyJobsOutput& operator=(ListSnapshotJobsResponseBodyJobsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr
        && return this->type_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline ListSnapshotJobsResponseBodyJobsOutput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListSnapshotJobsResponseBodyJobsOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The output file. If Type is set to OSS, the URL of an OSS object is returned. If Type is set to Media, the ID of a media asset is returned. The URL of an OSS object can be in one of the following formats:
    // 
    // 1.  OSS://bucket/object
    // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object
    // 
    // In the URL, bucket specifies an OSS bucket that resides in the same region as the job, and object specifies the object URL in OSS. If multiple static snapshots were captured, the object must contain the "{Count}" placeholder. In the case of a sprite, the object must contain the "{TileCount}" placeholder. The suffix of the WebVTT snapshot objects must be ".vtt".
    std::shared_ptr<string> media_ = nullptr;
    // The type of the output file. Valid values:
    // 
    // 1.  OSS: an OSS object.
    // 2.  Media: a media asset.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
