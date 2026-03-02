// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTSBYLABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTSBYLABELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetDeploymentsByLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentsByLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ignoreJobSummary, ignoreJobSummary_);
      DARABONBA_PTR_TO_JSON(ignoreResourceSetting, ignoreResourceSetting_);
      DARABONBA_PTR_TO_JSON(labelKey, labelKey_);
      DARABONBA_PTR_TO_JSON(labelValue, labelValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentsByLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ignoreJobSummary, ignoreJobSummary_);
      DARABONBA_PTR_FROM_JSON(ignoreResourceSetting, ignoreResourceSetting_);
      DARABONBA_PTR_FROM_JSON(labelKey, labelKey_);
      DARABONBA_PTR_FROM_JSON(labelValue, labelValue_);
    };
    GetDeploymentsByLabelRequest() = default ;
    GetDeploymentsByLabelRequest(const GetDeploymentsByLabelRequest &) = default ;
    GetDeploymentsByLabelRequest(GetDeploymentsByLabelRequest &&) = default ;
    GetDeploymentsByLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentsByLabelRequest() = default ;
    GetDeploymentsByLabelRequest& operator=(const GetDeploymentsByLabelRequest &) = default ;
    GetDeploymentsByLabelRequest& operator=(GetDeploymentsByLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreJobSummary_ == nullptr
        && this->ignoreResourceSetting_ == nullptr && this->labelKey_ == nullptr && this->labelValue_ == nullptr; };
    // ignoreJobSummary Field Functions 
    bool hasIgnoreJobSummary() const { return this->ignoreJobSummary_ != nullptr;};
    void deleteIgnoreJobSummary() { this->ignoreJobSummary_ = nullptr;};
    inline bool getIgnoreJobSummary() const { DARABONBA_PTR_GET_DEFAULT(ignoreJobSummary_, false) };
    inline GetDeploymentsByLabelRequest& setIgnoreJobSummary(bool ignoreJobSummary) { DARABONBA_PTR_SET_VALUE(ignoreJobSummary_, ignoreJobSummary) };


    // ignoreResourceSetting Field Functions 
    bool hasIgnoreResourceSetting() const { return this->ignoreResourceSetting_ != nullptr;};
    void deleteIgnoreResourceSetting() { this->ignoreResourceSetting_ = nullptr;};
    inline bool getIgnoreResourceSetting() const { DARABONBA_PTR_GET_DEFAULT(ignoreResourceSetting_, false) };
    inline GetDeploymentsByLabelRequest& setIgnoreResourceSetting(bool ignoreResourceSetting) { DARABONBA_PTR_SET_VALUE(ignoreResourceSetting_, ignoreResourceSetting) };


    // labelKey Field Functions 
    bool hasLabelKey() const { return this->labelKey_ != nullptr;};
    void deleteLabelKey() { this->labelKey_ = nullptr;};
    inline string getLabelKey() const { DARABONBA_PTR_GET_DEFAULT(labelKey_, "") };
    inline GetDeploymentsByLabelRequest& setLabelKey(string labelKey) { DARABONBA_PTR_SET_VALUE(labelKey_, labelKey) };


    // labelValue Field Functions 
    bool hasLabelValue() const { return this->labelValue_ != nullptr;};
    void deleteLabelValue() { this->labelValue_ = nullptr;};
    inline string getLabelValue() const { DARABONBA_PTR_GET_DEFAULT(labelValue_, "") };
    inline GetDeploymentsByLabelRequest& setLabelValue(string labelValue) { DARABONBA_PTR_SET_VALUE(labelValue_, labelValue) };


  protected:
    shared_ptr<bool> ignoreJobSummary_ {};
    shared_ptr<bool> ignoreResourceSetting_ {};
    // This parameter is required.
    shared_ptr<string> labelKey_ {};
    // This parameter is required.
    shared_ptr<string> labelValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
