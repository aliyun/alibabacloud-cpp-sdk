// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGRAPHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGRAPHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateGraphInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGraphInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(businessProfile, businessProfile_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGraphInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(businessProfile, businessProfile_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    UpdateGraphInfoResponseBody() = default ;
    UpdateGraphInfoResponseBody(const UpdateGraphInfoResponseBody &) = default ;
    UpdateGraphInfoResponseBody(UpdateGraphInfoResponseBody &&) = default ;
    UpdateGraphInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGraphInfoResponseBody() = default ;
    UpdateGraphInfoResponseBody& operator=(const UpdateGraphInfoResponseBody &) = default ;
    UpdateGraphInfoResponseBody& operator=(UpdateGraphInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessProfile_ == nullptr
        && this->code_ == nullptr && this->displayName_ == nullptr && this->graphName_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->updated_ == nullptr; };
    // businessProfile Field Functions 
    bool hasBusinessProfile() const { return this->businessProfile_ != nullptr;};
    void deleteBusinessProfile() { this->businessProfile_ = nullptr;};
    inline string getBusinessProfile() const { DARABONBA_PTR_GET_DEFAULT(businessProfile_, "") };
    inline UpdateGraphInfoResponseBody& setBusinessProfile(string businessProfile) { DARABONBA_PTR_SET_VALUE(businessProfile_, businessProfile) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateGraphInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateGraphInfoResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline UpdateGraphInfoResponseBody& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateGraphInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateGraphInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline bool getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
    inline UpdateGraphInfoResponseBody& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // 更新后的业务说明，未设置时为空
    shared_ptr<string> businessProfile_ {};
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 更新后的图谱展示名，未设置时为空
    shared_ptr<string> displayName_ {};
    // 图谱名称
    shared_ptr<string> graphName_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 是否更新成功
    shared_ptr<bool> updated_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
