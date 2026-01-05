// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEMESSAGEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEMESSAGEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateLiveMessageGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlreadyDelete, alreadyDelete_);
      DARABONBA_PTR_TO_JSON(AlreadyExists, alreadyExists_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlreadyDelete, alreadyDelete_);
      DARABONBA_PTR_FROM_JSON(AlreadyExists, alreadyExists_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLiveMessageGroupResponseBody() = default ;
    CreateLiveMessageGroupResponseBody(const CreateLiveMessageGroupResponseBody &) = default ;
    CreateLiveMessageGroupResponseBody(CreateLiveMessageGroupResponseBody &&) = default ;
    CreateLiveMessageGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveMessageGroupResponseBody() = default ;
    CreateLiveMessageGroupResponseBody& operator=(const CreateLiveMessageGroupResponseBody &) = default ;
    CreateLiveMessageGroupResponseBody& operator=(CreateLiveMessageGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alreadyDelete_ == nullptr
        && this->alreadyExists_ == nullptr && this->groupId_ == nullptr && this->requestId_ == nullptr; };
    // alreadyDelete Field Functions 
    bool hasAlreadyDelete() const { return this->alreadyDelete_ != nullptr;};
    void deleteAlreadyDelete() { this->alreadyDelete_ = nullptr;};
    inline bool getAlreadyDelete() const { DARABONBA_PTR_GET_DEFAULT(alreadyDelete_, false) };
    inline CreateLiveMessageGroupResponseBody& setAlreadyDelete(bool alreadyDelete) { DARABONBA_PTR_SET_VALUE(alreadyDelete_, alreadyDelete) };


    // alreadyExists Field Functions 
    bool hasAlreadyExists() const { return this->alreadyExists_ != nullptr;};
    void deleteAlreadyExists() { this->alreadyExists_ = nullptr;};
    inline bool getAlreadyExists() const { DARABONBA_PTR_GET_DEFAULT(alreadyExists_, false) };
    inline CreateLiveMessageGroupResponseBody& setAlreadyExists(bool alreadyExists) { DARABONBA_PTR_SET_VALUE(alreadyExists_, alreadyExists) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateLiveMessageGroupResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLiveMessageGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the group is deleted. If the group existed and is deleted, the group ID is unavailable. We recommend that you create a new group.
    shared_ptr<bool> alreadyDelete_ {};
    // Indicates whether the group already exists.
    shared_ptr<bool> alreadyExists_ {};
    // The ID of the group created.
    shared_ptr<string> groupId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
