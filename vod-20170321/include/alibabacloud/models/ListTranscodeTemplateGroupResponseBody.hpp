// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODETEMPLATEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODETEMPLATEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListTranscodeTemplateGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupList, transcodeTemplateGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupList, transcodeTemplateGroupList_);
    };
    ListTranscodeTemplateGroupResponseBody() = default ;
    ListTranscodeTemplateGroupResponseBody(const ListTranscodeTemplateGroupResponseBody &) = default ;
    ListTranscodeTemplateGroupResponseBody(ListTranscodeTemplateGroupResponseBody &&) = default ;
    ListTranscodeTemplateGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeTemplateGroupResponseBody() = default ;
    ListTranscodeTemplateGroupResponseBody& operator=(const ListTranscodeTemplateGroupResponseBody &) = default ;
    ListTranscodeTemplateGroupResponseBody& operator=(ListTranscodeTemplateGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeTemplateGroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeTemplateGroupList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(Locked, locked_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeTemplateGroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(Locked, locked_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      };
      TranscodeTemplateGroupList() = default ;
      TranscodeTemplateGroupList(const TranscodeTemplateGroupList &) = default ;
      TranscodeTemplateGroupList(TranscodeTemplateGroupList &&) = default ;
      TranscodeTemplateGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeTemplateGroupList() = default ;
      TranscodeTemplateGroupList& operator=(const TranscodeTemplateGroupList &) = default ;
      TranscodeTemplateGroupList& operator=(TranscodeTemplateGroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->creationTime_ == nullptr && this->isDefault_ == nullptr && this->locked_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr
        && this->transcodeTemplateGroupId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline TranscodeTemplateGroupList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TranscodeTemplateGroupList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
      inline TranscodeTemplateGroupList& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // locked Field Functions 
      bool hasLocked() const { return this->locked_ != nullptr;};
      void deleteLocked() { this->locked_ = nullptr;};
      inline string getLocked() const { DARABONBA_PTR_GET_DEFAULT(locked_, "") };
      inline TranscodeTemplateGroupList& setLocked(string locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline TranscodeTemplateGroupList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TranscodeTemplateGroupList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // transcodeTemplateGroupId Field Functions 
      bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
      void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
      inline string getTranscodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
      inline TranscodeTemplateGroupList& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The time when the template group was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // Indicates whether the template group is the default one. Valid values:
      // 
      // *   **Default**: The template group is the default one.
      // *   **NotDefault**: The template group is not the default one.
      shared_ptr<string> isDefault_ {};
      // The lock status of the transcoding template group. Valid values:
      // 
      // *   **Disabled**: The template group is not locked.
      // *   **Enabled**: The template group is locked.
      shared_ptr<string> locked_ {};
      // The time when the template group was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> modifyTime_ {};
      // The name of the template group.
      shared_ptr<string> name_ {};
      // The ID of the transcoding template group.
      shared_ptr<string> transcodeTemplateGroupId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->transcodeTemplateGroupList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTranscodeTemplateGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeTemplateGroupList Field Functions 
    bool hasTranscodeTemplateGroupList() const { return this->transcodeTemplateGroupList_ != nullptr;};
    void deleteTranscodeTemplateGroupList() { this->transcodeTemplateGroupList_ = nullptr;};
    inline const vector<ListTranscodeTemplateGroupResponseBody::TranscodeTemplateGroupList> & getTranscodeTemplateGroupList() const { DARABONBA_PTR_GET_CONST(transcodeTemplateGroupList_, vector<ListTranscodeTemplateGroupResponseBody::TranscodeTemplateGroupList>) };
    inline vector<ListTranscodeTemplateGroupResponseBody::TranscodeTemplateGroupList> getTranscodeTemplateGroupList() { DARABONBA_PTR_GET(transcodeTemplateGroupList_, vector<ListTranscodeTemplateGroupResponseBody::TranscodeTemplateGroupList>) };
    inline ListTranscodeTemplateGroupResponseBody& setTranscodeTemplateGroupList(const vector<ListTranscodeTemplateGroupResponseBody::TranscodeTemplateGroupList> & transcodeTemplateGroupList) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupList_, transcodeTemplateGroupList) };
    inline ListTranscodeTemplateGroupResponseBody& setTranscodeTemplateGroupList(vector<ListTranscodeTemplateGroupResponseBody::TranscodeTemplateGroupList> && transcodeTemplateGroupList) { DARABONBA_PTR_SET_RVALUE(transcodeTemplateGroupList_, transcodeTemplateGroupList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The transcoding template groups.
    shared_ptr<vector<ListTranscodeTemplateGroupResponseBody::TranscodeTemplateGroupList>> transcodeTemplateGroupList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
