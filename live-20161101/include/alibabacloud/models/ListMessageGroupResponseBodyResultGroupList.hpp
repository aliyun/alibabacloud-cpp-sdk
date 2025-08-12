// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEGROUPRESPONSEBODYRESULTGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEGROUPRESPONSEBODYRESULTGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageGroupResponseBodyResultGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageGroupResponseBodyResultGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageGroupResponseBodyResultGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListMessageGroupResponseBodyResultGroupList() = default ;
    ListMessageGroupResponseBodyResultGroupList(const ListMessageGroupResponseBodyResultGroupList &) = default ;
    ListMessageGroupResponseBodyResultGroupList(ListMessageGroupResponseBodyResultGroupList &&) = default ;
    ListMessageGroupResponseBodyResultGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageGroupResponseBodyResultGroupList() = default ;
    ListMessageGroupResponseBodyResultGroupList& operator=(const ListMessageGroupResponseBodyResultGroupList &) = default ;
    ListMessageGroupResponseBodyResultGroupList& operator=(ListMessageGroupResponseBodyResultGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->createTime_ != nullptr && this->creatorId_ != nullptr && this->extension_ != nullptr && this->groupId_ != nullptr && this->status_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListMessageGroupResponseBodyResultGroupList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListMessageGroupResponseBodyResultGroupList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListMessageGroupResponseBodyResultGroupList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline const map<string, string> & extension() const { DARABONBA_PTR_GET_CONST(extension_, map<string, string>) };
    inline map<string, string> extension() { DARABONBA_PTR_GET(extension_, map<string, string>) };
    inline ListMessageGroupResponseBodyResultGroupList& setExtension(const map<string, string> & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
    inline ListMessageGroupResponseBodyResultGroupList& setExtension(map<string, string> && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListMessageGroupResponseBodyResultGroupList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListMessageGroupResponseBodyResultGroupList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the interactive messaging application.
    std::shared_ptr<string> appId_ = nullptr;
    // The time when the message group was created. The time is displayed in UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the creator.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The extended field.
    std::shared_ptr<map<string, string>> extension_ = nullptr;
    // The ID of the message group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The status of the message group. The default value is **1**, which indicates that the status of the message group is normal.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
