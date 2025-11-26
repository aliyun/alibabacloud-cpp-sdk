// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUSPENDCALLWITHFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUSPENDCALLWITHFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SuspendCallWithFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuspendCallWithFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SuspendCallWithFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    SuspendCallWithFileRequest() = default ;
    SuspendCallWithFileRequest(const SuspendCallWithFileRequest &) = default ;
    SuspendCallWithFileRequest(SuspendCallWithFileRequest &&) = default ;
    SuspendCallWithFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuspendCallWithFileRequest() = default ;
    SuspendCallWithFileRequest& operator=(const SuspendCallWithFileRequest &) = default ;
    SuspendCallWithFileRequest& operator=(SuspendCallWithFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filePath_ == nullptr
        && return this->groupId_ == nullptr && return this->instanceId_ == nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline SuspendCallWithFileRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SuspendCallWithFileRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SuspendCallWithFileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
