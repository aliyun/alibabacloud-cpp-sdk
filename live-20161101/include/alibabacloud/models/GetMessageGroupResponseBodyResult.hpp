// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGEGROUPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGEGROUPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetMessageGroupResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageGroupResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_ANY_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsMuteAll, isMuteAll_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageGroupResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_ANY_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsMuteAll, isMuteAll_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetMessageGroupResponseBodyResult() = default ;
    GetMessageGroupResponseBodyResult(const GetMessageGroupResponseBodyResult &) = default ;
    GetMessageGroupResponseBodyResult(GetMessageGroupResponseBodyResult &&) = default ;
    GetMessageGroupResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageGroupResponseBodyResult() = default ;
    GetMessageGroupResponseBodyResult& operator=(const GetMessageGroupResponseBodyResult &) = default ;
    GetMessageGroupResponseBodyResult& operator=(GetMessageGroupResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->creatorId_ == nullptr && return this->extension_ == nullptr && return this->groupId_ == nullptr && return this->isMuteAll_ == nullptr && return this->status_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetMessageGroupResponseBodyResult& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetMessageGroupResponseBodyResult& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline     const Darabonba::Json & extension() const { DARABONBA_GET(extension_) };
    Darabonba::Json & extension() { DARABONBA_GET(extension_) };
    inline GetMessageGroupResponseBodyResult& setExtension(const Darabonba::Json & extension) { DARABONBA_SET_VALUE(extension_, extension) };
    inline GetMessageGroupResponseBodyResult& setExtension(Darabonba::Json & extension) { DARABONBA_SET_RVALUE(extension_, extension) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetMessageGroupResponseBodyResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isMuteAll Field Functions 
    bool hasIsMuteAll() const { return this->isMuteAll_ != nullptr;};
    void deleteIsMuteAll() { this->isMuteAll_ = nullptr;};
    inline bool isMuteAll() const { DARABONBA_PTR_GET_DEFAULT(isMuteAll_, false) };
    inline GetMessageGroupResponseBodyResult& setIsMuteAll(bool isMuteAll) { DARABONBA_PTR_SET_VALUE(isMuteAll_, isMuteAll) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetMessageGroupResponseBodyResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the message group was created. The time is displayed in UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the creator.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The extended field.
    Darabonba::Json extension_ = nullptr;
    // The ID of the message group.
    std::shared_ptr<string> groupId_ = nullptr;
    // Indicates whether the message group is muted.
    // 
    // *   true: The message group is muted.
    // *   false: The message group is not muted.
    std::shared_ptr<bool> isMuteAll_ = nullptr;
    // The status of the message group. The default value is **1**, which indicates that the message group is normal.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
