// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLivePackageChannelGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivePackageChannelGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageChannelGroup, livePackageChannelGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivePackageChannelGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageChannelGroup, livePackageChannelGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLivePackageChannelGroupResponseBody() = default ;
    CreateLivePackageChannelGroupResponseBody(const CreateLivePackageChannelGroupResponseBody &) = default ;
    CreateLivePackageChannelGroupResponseBody(CreateLivePackageChannelGroupResponseBody &&) = default ;
    CreateLivePackageChannelGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivePackageChannelGroupResponseBody() = default ;
    CreateLivePackageChannelGroupResponseBody& operator=(const CreateLivePackageChannelGroupResponseBody &) = default ;
    CreateLivePackageChannelGroupResponseBody& operator=(CreateLivePackageChannelGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LivePackageChannelGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LivePackageChannelGroup& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(OriginDomain, originDomain_);
      };
      friend void from_json(const Darabonba::Json& j, LivePackageChannelGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(OriginDomain, originDomain_);
      };
      LivePackageChannelGroup() = default ;
      LivePackageChannelGroup(const LivePackageChannelGroup &) = default ;
      LivePackageChannelGroup(LivePackageChannelGroup &&) = default ;
      LivePackageChannelGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LivePackageChannelGroup() = default ;
      LivePackageChannelGroup& operator=(const LivePackageChannelGroup &) = default ;
      LivePackageChannelGroup& operator=(LivePackageChannelGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->groupName_ == nullptr && this->lastModified_ == nullptr && this->originDomain_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LivePackageChannelGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LivePackageChannelGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline LivePackageChannelGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline LivePackageChannelGroup& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // originDomain Field Functions 
      bool hasOriginDomain() const { return this->originDomain_ != nullptr;};
      void deleteOriginDomain() { this->originDomain_ = nullptr;};
      inline string getOriginDomain() const { DARABONBA_PTR_GET_DEFAULT(originDomain_, "") };
      inline LivePackageChannelGroup& setOriginDomain(string originDomain) { DARABONBA_PTR_SET_VALUE(originDomain_, originDomain) };


    protected:
      // The time when the channel group was created. It is in the yyyy-MM-ddTHH:mm:ssZ format and displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The channel group description.
      shared_ptr<string> description_ {};
      // The channel group name.
      shared_ptr<string> groupName_ {};
      // The time when the channel group was last modified. It is in the yyyy-MM-ddTHH:mm:ssZ format and displayed in UTC.
      shared_ptr<string> lastModified_ {};
      // The origin domain.
      shared_ptr<string> originDomain_ {};
    };

    virtual bool empty() const override { return this->livePackageChannelGroup_ == nullptr
        && this->requestId_ == nullptr; };
    // livePackageChannelGroup Field Functions 
    bool hasLivePackageChannelGroup() const { return this->livePackageChannelGroup_ != nullptr;};
    void deleteLivePackageChannelGroup() { this->livePackageChannelGroup_ = nullptr;};
    inline const CreateLivePackageChannelGroupResponseBody::LivePackageChannelGroup & getLivePackageChannelGroup() const { DARABONBA_PTR_GET_CONST(livePackageChannelGroup_, CreateLivePackageChannelGroupResponseBody::LivePackageChannelGroup) };
    inline CreateLivePackageChannelGroupResponseBody::LivePackageChannelGroup getLivePackageChannelGroup() { DARABONBA_PTR_GET(livePackageChannelGroup_, CreateLivePackageChannelGroupResponseBody::LivePackageChannelGroup) };
    inline CreateLivePackageChannelGroupResponseBody& setLivePackageChannelGroup(const CreateLivePackageChannelGroupResponseBody::LivePackageChannelGroup & livePackageChannelGroup) { DARABONBA_PTR_SET_VALUE(livePackageChannelGroup_, livePackageChannelGroup) };
    inline CreateLivePackageChannelGroupResponseBody& setLivePackageChannelGroup(CreateLivePackageChannelGroupResponseBody::LivePackageChannelGroup && livePackageChannelGroup) { DARABONBA_PTR_SET_RVALUE(livePackageChannelGroup_, livePackageChannelGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLivePackageChannelGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the channel group.
    shared_ptr<CreateLivePackageChannelGroupResponseBody::LivePackageChannelGroup> livePackageChannelGroup_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
