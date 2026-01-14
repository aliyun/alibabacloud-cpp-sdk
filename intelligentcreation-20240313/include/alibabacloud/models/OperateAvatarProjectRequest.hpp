// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAVATARPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAVATARPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class OperateAvatarProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateAvatarProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(operateType, operateType_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(resChannelNumber, resChannelNumber_);
      DARABONBA_PTR_TO_JSON(resType, resType_);
    };
    friend void from_json(const Darabonba::Json& j, OperateAvatarProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(operateType, operateType_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(resChannelNumber, resChannelNumber_);
      DARABONBA_PTR_FROM_JSON(resType, resType_);
    };
    OperateAvatarProjectRequest() = default ;
    OperateAvatarProjectRequest(const OperateAvatarProjectRequest &) = default ;
    OperateAvatarProjectRequest(OperateAvatarProjectRequest &&) = default ;
    OperateAvatarProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateAvatarProjectRequest() = default ;
    OperateAvatarProjectRequest& operator=(const OperateAvatarProjectRequest &) = default ;
    OperateAvatarProjectRequest& operator=(OperateAvatarProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateType_ == nullptr
        && this->projectId_ == nullptr && this->resChannelNumber_ == nullptr && this->resType_ == nullptr; };
    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline OperateAvatarProjectRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline OperateAvatarProjectRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resChannelNumber Field Functions 
    bool hasResChannelNumber() const { return this->resChannelNumber_ != nullptr;};
    void deleteResChannelNumber() { this->resChannelNumber_ = nullptr;};
    inline int32_t getResChannelNumber() const { DARABONBA_PTR_GET_DEFAULT(resChannelNumber_, 0) };
    inline OperateAvatarProjectRequest& setResChannelNumber(int32_t resChannelNumber) { DARABONBA_PTR_SET_VALUE(resChannelNumber_, resChannelNumber) };


    // resType Field Functions 
    bool hasResType() const { return this->resType_ != nullptr;};
    void deleteResType() { this->resType_ = nullptr;};
    inline string getResType() const { DARABONBA_PTR_GET_DEFAULT(resType_, "") };
    inline OperateAvatarProjectRequest& setResType(string resType) { DARABONBA_PTR_SET_VALUE(resType_, resType) };


  protected:
    shared_ptr<string> operateType_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<int32_t> resChannelNumber_ {};
    shared_ptr<string> resType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
