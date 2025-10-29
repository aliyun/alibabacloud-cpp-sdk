// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTDEFAULTRUNPROPERTIESALERT_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTDEFAULTRUNPROPERTIESALERT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateWorkflowInstancesRequestDefaultRunPropertiesAlert : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowInstancesRequestDefaultRunPropertiesAlert& obj) { 
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowInstancesRequestDefaultRunPropertiesAlert& obj) { 
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateWorkflowInstancesRequestDefaultRunPropertiesAlert() = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesAlert(const CreateWorkflowInstancesRequestDefaultRunPropertiesAlert &) = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesAlert(CreateWorkflowInstancesRequestDefaultRunPropertiesAlert &&) = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesAlert(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowInstancesRequestDefaultRunPropertiesAlert() = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesAlert& operator=(const CreateWorkflowInstancesRequestDefaultRunPropertiesAlert &) = default ;
    CreateWorkflowInstancesRequestDefaultRunPropertiesAlert& operator=(CreateWorkflowInstancesRequestDefaultRunPropertiesAlert &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->noticeType_ == nullptr
        && return this->type_ == nullptr; };
    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline string noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
    inline CreateWorkflowInstancesRequestDefaultRunPropertiesAlert& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateWorkflowInstancesRequestDefaultRunPropertiesAlert& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The alert notification method. Valid values:
    // 
    // *   Sms: SMS only.
    // *   Mail: Mail only.
    // *   SmsMail: SMS and mail.
    std::shared_ptr<string> noticeType_ = nullptr;
    // The alerting policy. Valid values:
    // 
    // *   Success: Alerts on success.
    // *   Failure: Alerts on failure.
    // *   SuccessFailure: Alerts on both success and failure.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
