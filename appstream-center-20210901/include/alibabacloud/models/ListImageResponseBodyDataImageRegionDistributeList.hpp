// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGERESPONSEBODYDATAIMAGEREGIONDISTRIBUTELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGERESPONSEBODYDATAIMAGEREGIONDISTRIBUTELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListImageResponseBodyDataImageRegionDistributeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageResponseBodyDataImageRegionDistributeList& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageResponseBodyDataImageRegionDistributeList& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    ListImageResponseBodyDataImageRegionDistributeList() = default ;
    ListImageResponseBodyDataImageRegionDistributeList(const ListImageResponseBodyDataImageRegionDistributeList &) = default ;
    ListImageResponseBodyDataImageRegionDistributeList(ListImageResponseBodyDataImageRegionDistributeList &&) = default ;
    ListImageResponseBodyDataImageRegionDistributeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageResponseBodyDataImageRegionDistributeList() = default ;
    ListImageResponseBodyDataImageRegionDistributeList& operator=(const ListImageResponseBodyDataImageRegionDistributeList &) = default ;
    ListImageResponseBodyDataImageRegionDistributeList& operator=(ListImageResponseBodyDataImageRegionDistributeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->progress_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->versionId_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListImageResponseBodyDataImageRegionDistributeList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline ListImageResponseBodyDataImageRegionDistributeList& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListImageResponseBodyDataImageRegionDistributeList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListImageResponseBodyDataImageRegionDistributeList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline ListImageResponseBodyDataImageRegionDistributeList& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> progress_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
