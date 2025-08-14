// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELGROUPRESPONSEBODYLIVEPACKAGECHANNELGROUP_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELGROUPRESPONSEBODYLIVEPACKAGECHANNELGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
      DARABONBA_PTR_TO_JSON(OriginDomain, originDomain_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
      DARABONBA_PTR_FROM_JSON(OriginDomain, originDomain_);
    };
    UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup() = default ;
    UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup(const UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup &) = default ;
    UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup(UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup &&) = default ;
    UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup() = default ;
    UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup& operator=(const UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup &) = default ;
    UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup& operator=(UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->groupName_ != nullptr && this->lastModified_ != nullptr && this->originDomain_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string lastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // originDomain Field Functions 
    bool hasOriginDomain() const { return this->originDomain_ != nullptr;};
    void deleteOriginDomain() { this->originDomain_ = nullptr;};
    inline string originDomain() const { DARABONBA_PTR_GET_DEFAULT(originDomain_, "") };
    inline UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup& setOriginDomain(string originDomain) { DARABONBA_PTR_SET_VALUE(originDomain_, originDomain) };


  protected:
    // The time when the channel group was created. It is in the yyyy-MM-ddTHH:mm:ssZ format and displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The channel group description.
    std::shared_ptr<string> description_ = nullptr;
    // The channel group name.
    std::shared_ptr<string> groupName_ = nullptr;
    // The time when the channel group was last modified. It is in the yyyy-MM-ddTHH:mm:ssZ format and displayed in UTC.
    std::shared_ptr<string> lastModified_ = nullptr;
    // The origin domain.
    std::shared_ptr<string> originDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
