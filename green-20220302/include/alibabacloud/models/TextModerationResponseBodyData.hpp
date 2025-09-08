// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTMODERATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TEXTMODERATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class TextModerationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextModerationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(dataId, dataId_);
      DARABONBA_PTR_TO_JSON(descriptions, descriptions_);
      DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(manualTaskId, manualTaskId_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, TextModerationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(dataId, dataId_);
      DARABONBA_PTR_FROM_JSON(descriptions, descriptions_);
      DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(manualTaskId, manualTaskId_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    TextModerationResponseBodyData() = default ;
    TextModerationResponseBodyData(const TextModerationResponseBodyData &) = default ;
    TextModerationResponseBodyData(TextModerationResponseBodyData &&) = default ;
    TextModerationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextModerationResponseBodyData() = default ;
    TextModerationResponseBodyData& operator=(const TextModerationResponseBodyData &) = default ;
    TextModerationResponseBodyData& operator=(TextModerationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->dataId_ != nullptr && this->descriptions_ != nullptr && this->deviceId_ != nullptr && this->labels_ != nullptr && this->manualTaskId_ != nullptr
        && this->reason_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline TextModerationResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline TextModerationResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // descriptions Field Functions 
    bool hasDescriptions() const { return this->descriptions_ != nullptr;};
    void deleteDescriptions() { this->descriptions_ = nullptr;};
    inline string descriptions() const { DARABONBA_PTR_GET_DEFAULT(descriptions_, "") };
    inline TextModerationResponseBodyData& setDescriptions(string descriptions) { DARABONBA_PTR_SET_VALUE(descriptions_, descriptions) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline TextModerationResponseBodyData& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline TextModerationResponseBodyData& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // manualTaskId Field Functions 
    bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
    void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
    inline string manualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
    inline TextModerationResponseBodyData& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline TextModerationResponseBodyData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID of the moderated object.
    std::shared_ptr<string> dataId_ = nullptr;
    // The description of the labels.
    std::shared_ptr<string> descriptions_ = nullptr;
    // The device ID.
    std::shared_ptr<string> deviceId_ = nullptr;
    // The labels. Multiple labels are separated by commas (,). Valid values: ad: ad violation profanity: abuse contraband: contraband sexual_content: pornography violence: violence nonsense: irrigation spam: spam negative_content: undesirable content cyberbullying: cyberbullying C_customized: custom library that is hit
    std::shared_ptr<string> labels_ = nullptr;
    std::shared_ptr<string> manualTaskId_ = nullptr;
    // The JSON string used to locate the cause. Valid values: riskTips: subcategory label riskWords: risk words adNums: hit advertising number customizedWords: customized words customizedLibs: customized libraries
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
