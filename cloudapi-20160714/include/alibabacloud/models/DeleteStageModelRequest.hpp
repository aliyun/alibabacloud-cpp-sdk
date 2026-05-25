// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTAGEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTAGEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteStageModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStageModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageModelId, stageModelId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStageModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageModelId, stageModelId_);
    };
    DeleteStageModelRequest() = default ;
    DeleteStageModelRequest(const DeleteStageModelRequest &) = default ;
    DeleteStageModelRequest(DeleteStageModelRequest &&) = default ;
    DeleteStageModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStageModelRequest() = default ;
    DeleteStageModelRequest& operator=(const DeleteStageModelRequest &) = default ;
    DeleteStageModelRequest& operator=(DeleteStageModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityToken_ == nullptr
        && this->stageModelId_ == nullptr; };
    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeleteStageModelRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageModelId Field Functions 
    bool hasStageModelId() const { return this->stageModelId_ != nullptr;};
    void deleteStageModelId() { this->stageModelId_ = nullptr;};
    inline string getStageModelId() const { DARABONBA_PTR_GET_DEFAULT(stageModelId_, "") };
    inline DeleteStageModelRequest& setStageModelId(string stageModelId) { DARABONBA_PTR_SET_VALUE(stageModelId_, stageModelId) };


  protected:
    shared_ptr<string> securityToken_ {};
    // This parameter is required.
    shared_ptr<string> stageModelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
