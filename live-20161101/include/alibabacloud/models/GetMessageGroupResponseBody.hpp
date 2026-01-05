// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetMessageGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetMessageGroupResponseBody() = default ;
    GetMessageGroupResponseBody(const GetMessageGroupResponseBody &) = default ;
    GetMessageGroupResponseBody(GetMessageGroupResponseBody &&) = default ;
    GetMessageGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageGroupResponseBody() = default ;
    GetMessageGroupResponseBody& operator=(const GetMessageGroupResponseBody &) = default ;
    GetMessageGroupResponseBody& operator=(GetMessageGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_ANY_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(IsMuteAll, isMuteAll_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_ANY_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(IsMuteAll, isMuteAll_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creatorId_ == nullptr && this->extension_ == nullptr && this->groupId_ == nullptr && this->isMuteAll_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Result& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Result& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline       const Darabonba::Json & getExtension() const { DARABONBA_GET(extension_) };
      Darabonba::Json & getExtension() { DARABONBA_GET(extension_) };
      inline Result& setExtension(const Darabonba::Json & extension) { DARABONBA_SET_VALUE(extension_, extension) };
      inline Result& setExtension(Darabonba::Json && extension) { DARABONBA_SET_RVALUE(extension_, extension) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Result& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // isMuteAll Field Functions 
      bool hasIsMuteAll() const { return this->isMuteAll_ != nullptr;};
      void deleteIsMuteAll() { this->isMuteAll_ = nullptr;};
      inline bool getIsMuteAll() const { DARABONBA_PTR_GET_DEFAULT(isMuteAll_, false) };
      inline Result& setIsMuteAll(bool isMuteAll) { DARABONBA_PTR_SET_VALUE(isMuteAll_, isMuteAll) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the message group was created. The time is displayed in UTC.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the creator.
      shared_ptr<string> creatorId_ {};
      // The extended field.
      Darabonba::Json extension_ {};
      // The ID of the message group.
      shared_ptr<string> groupId_ {};
      // Indicates whether the message group is muted.
      // 
      // *   true: The message group is muted.
      // *   false: The message group is not muted.
      shared_ptr<bool> isMuteAll_ {};
      // The status of the message group. The default value is **1**, which indicates that the message group is normal.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetMessageGroupResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetMessageGroupResponseBody::Result) };
    inline GetMessageGroupResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetMessageGroupResponseBody::Result) };
    inline GetMessageGroupResponseBody& setResult(const GetMessageGroupResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetMessageGroupResponseBody& setResult(GetMessageGroupResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<GetMessageGroupResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
