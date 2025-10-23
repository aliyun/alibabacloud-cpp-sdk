// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATSESSIONLISTRESPONSEBODYDATASESSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCHATSESSIONLISTRESPONSEBODYDATASESSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetChatSessionListResponseBodyDataSessionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatSessionListResponseBodyDataSessionList& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatSessionListResponseBodyDataSessionList& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetChatSessionListResponseBodyDataSessionList() = default ;
    GetChatSessionListResponseBodyDataSessionList(const GetChatSessionListResponseBodyDataSessionList &) = default ;
    GetChatSessionListResponseBodyDataSessionList(GetChatSessionListResponseBodyDataSessionList &&) = default ;
    GetChatSessionListResponseBodyDataSessionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatSessionListResponseBodyDataSessionList() = default ;
    GetChatSessionListResponseBodyDataSessionList& operator=(const GetChatSessionListResponseBodyDataSessionList &) = default ;
    GetChatSessionListResponseBodyDataSessionList& operator=(GetChatSessionListResponseBodyDataSessionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->folderId_ == nullptr && return this->name_ == nullptr && return this->sessionId_ == nullptr && return this->updateTime_ == nullptr && return this->userId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetChatSessionListResponseBodyDataSessionList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetChatSessionListResponseBodyDataSessionList& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetChatSessionListResponseBodyDataSessionList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetChatSessionListResponseBodyDataSessionList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetChatSessionListResponseBodyDataSessionList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetChatSessionListResponseBodyDataSessionList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Report creation timestamp, in milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Folder ID, used to specify the scope of documents to be queried.
    std::shared_ptr<string> folderId_ = nullptr;
    // Session name
    std::shared_ptr<string> name_ = nullptr;
    // Q&A session ID, used to record multiple Q&As of the same user.
    std::shared_ptr<string> sessionId_ = nullptr;
    // Modification time, in milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // User ID of the current session.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
