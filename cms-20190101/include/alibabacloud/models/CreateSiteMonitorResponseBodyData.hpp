// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSiteMonitorResponseBodyDataAttachAlertResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateSiteMonitorResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AttachAlertResult, attachAlertResult_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachAlertResult, attachAlertResult_);
    };
    CreateSiteMonitorResponseBodyData() = default ;
    CreateSiteMonitorResponseBodyData(const CreateSiteMonitorResponseBodyData &) = default ;
    CreateSiteMonitorResponseBodyData(CreateSiteMonitorResponseBodyData &&) = default ;
    CreateSiteMonitorResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteMonitorResponseBodyData() = default ;
    CreateSiteMonitorResponseBodyData& operator=(const CreateSiteMonitorResponseBodyData &) = default ;
    CreateSiteMonitorResponseBodyData& operator=(CreateSiteMonitorResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachAlertResult_ != nullptr; };
    // attachAlertResult Field Functions 
    bool hasAttachAlertResult() const { return this->attachAlertResult_ != nullptr;};
    void deleteAttachAlertResult() { this->attachAlertResult_ = nullptr;};
    inline const Models::CreateSiteMonitorResponseBodyDataAttachAlertResult & attachAlertResult() const { DARABONBA_PTR_GET_CONST(attachAlertResult_, Models::CreateSiteMonitorResponseBodyDataAttachAlertResult) };
    inline Models::CreateSiteMonitorResponseBodyDataAttachAlertResult attachAlertResult() { DARABONBA_PTR_GET(attachAlertResult_, Models::CreateSiteMonitorResponseBodyDataAttachAlertResult) };
    inline CreateSiteMonitorResponseBodyData& setAttachAlertResult(const Models::CreateSiteMonitorResponseBodyDataAttachAlertResult & attachAlertResult) { DARABONBA_PTR_SET_VALUE(attachAlertResult_, attachAlertResult) };
    inline CreateSiteMonitorResponseBodyData& setAttachAlertResult(Models::CreateSiteMonitorResponseBodyDataAttachAlertResult && attachAlertResult) { DARABONBA_PTR_SET_RVALUE(attachAlertResult_, attachAlertResult) };


  protected:
    // The result that is returned after you associate the existing alert rule with the site monitoring task.
    std::shared_ptr<Models::CreateSiteMonitorResponseBodyDataAttachAlertResult> attachAlertResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
