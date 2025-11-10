// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTROLPOLICYATTACHMENTSFORTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTROLPOLICYATTACHMENTSFORTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListControlPolicyAttachmentsForTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListControlPolicyAttachmentsForTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ControlPolicyAttachments, controlPolicyAttachments_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListControlPolicyAttachmentsForTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlPolicyAttachments, controlPolicyAttachments_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListControlPolicyAttachmentsForTargetResponseBody() = default ;
    ListControlPolicyAttachmentsForTargetResponseBody(const ListControlPolicyAttachmentsForTargetResponseBody &) = default ;
    ListControlPolicyAttachmentsForTargetResponseBody(ListControlPolicyAttachmentsForTargetResponseBody &&) = default ;
    ListControlPolicyAttachmentsForTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListControlPolicyAttachmentsForTargetResponseBody() = default ;
    ListControlPolicyAttachmentsForTargetResponseBody& operator=(const ListControlPolicyAttachmentsForTargetResponseBody &) = default ;
    ListControlPolicyAttachmentsForTargetResponseBody& operator=(ListControlPolicyAttachmentsForTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlPolicyAttachments_ == nullptr
        && return this->requestId_ == nullptr; };
    // controlPolicyAttachments Field Functions 
    bool hasControlPolicyAttachments() const { return this->controlPolicyAttachments_ != nullptr;};
    void deleteControlPolicyAttachments() { this->controlPolicyAttachments_ = nullptr;};
    inline const ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments & controlPolicyAttachments() const { DARABONBA_PTR_GET_CONST(controlPolicyAttachments_, ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments) };
    inline ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments controlPolicyAttachments() { DARABONBA_PTR_GET(controlPolicyAttachments_, ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments) };
    inline ListControlPolicyAttachmentsForTargetResponseBody& setControlPolicyAttachments(const ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments & controlPolicyAttachments) { DARABONBA_PTR_SET_VALUE(controlPolicyAttachments_, controlPolicyAttachments) };
    inline ListControlPolicyAttachmentsForTargetResponseBody& setControlPolicyAttachments(ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments && controlPolicyAttachments) { DARABONBA_PTR_SET_RVALUE(controlPolicyAttachments_, controlPolicyAttachments) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListControlPolicyAttachmentsForTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the attached access control policies.
    std::shared_ptr<ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments> controlPolicyAttachments_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
