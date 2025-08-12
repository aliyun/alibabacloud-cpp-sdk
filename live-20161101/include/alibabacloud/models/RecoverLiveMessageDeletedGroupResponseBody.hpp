// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERLIVEMESSAGEDELETEDGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOVERLIVEMESSAGEDELETEDGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class RecoverLiveMessageDeletedGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoverLiveMessageDeletedGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RecoverLiveMessageDeletedGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RecoverLiveMessageDeletedGroupResponseBody() = default ;
    RecoverLiveMessageDeletedGroupResponseBody(const RecoverLiveMessageDeletedGroupResponseBody &) = default ;
    RecoverLiveMessageDeletedGroupResponseBody(RecoverLiveMessageDeletedGroupResponseBody &&) = default ;
    RecoverLiveMessageDeletedGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoverLiveMessageDeletedGroupResponseBody() = default ;
    RecoverLiveMessageDeletedGroupResponseBody& operator=(const RecoverLiveMessageDeletedGroupResponseBody &) = default ;
    RecoverLiveMessageDeletedGroupResponseBody& operator=(RecoverLiveMessageDeletedGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->requestId_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RecoverLiveMessageDeletedGroupResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecoverLiveMessageDeletedGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the group that was restored.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
