// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTBIZALERTINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTBIZALERTINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class ReportBizAlertInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportBizAlertInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertDescription, alertDescription_);
      DARABONBA_PTR_TO_JSON(AlertDetail, alertDetail_);
      DARABONBA_PTR_TO_JSON(AlertGrade, alertGrade_);
      DARABONBA_PTR_TO_JSON(AlertLabels, alertLabels_);
      DARABONBA_PTR_TO_JSON(AlertScene, alertScene_);
      DARABONBA_PTR_TO_JSON(AlertToken, alertToken_);
      DARABONBA_PTR_TO_JSON(AlertUid, alertUidShrink_);
      DARABONBA_PTR_TO_JSON(Language, language_);
    };
    friend void from_json(const Darabonba::Json& j, ReportBizAlertInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertDescription, alertDescription_);
      DARABONBA_PTR_FROM_JSON(AlertDetail, alertDetail_);
      DARABONBA_PTR_FROM_JSON(AlertGrade, alertGrade_);
      DARABONBA_PTR_FROM_JSON(AlertLabels, alertLabels_);
      DARABONBA_PTR_FROM_JSON(AlertScene, alertScene_);
      DARABONBA_PTR_FROM_JSON(AlertToken, alertToken_);
      DARABONBA_PTR_FROM_JSON(AlertUid, alertUidShrink_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
    };
    ReportBizAlertInfoShrinkRequest() = default ;
    ReportBizAlertInfoShrinkRequest(const ReportBizAlertInfoShrinkRequest &) = default ;
    ReportBizAlertInfoShrinkRequest(ReportBizAlertInfoShrinkRequest &&) = default ;
    ReportBizAlertInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportBizAlertInfoShrinkRequest() = default ;
    ReportBizAlertInfoShrinkRequest& operator=(const ReportBizAlertInfoShrinkRequest &) = default ;
    ReportBizAlertInfoShrinkRequest& operator=(ReportBizAlertInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertDescription_ == nullptr
        && this->alertDetail_ == nullptr && this->alertGrade_ == nullptr && this->alertLabels_ == nullptr && this->alertScene_ == nullptr && this->alertToken_ == nullptr
        && this->alertUidShrink_ == nullptr && this->language_ == nullptr; };
    // alertDescription Field Functions 
    bool hasAlertDescription() const { return this->alertDescription_ != nullptr;};
    void deleteAlertDescription() { this->alertDescription_ = nullptr;};
    inline string getAlertDescription() const { DARABONBA_PTR_GET_DEFAULT(alertDescription_, "") };
    inline ReportBizAlertInfoShrinkRequest& setAlertDescription(string alertDescription) { DARABONBA_PTR_SET_VALUE(alertDescription_, alertDescription) };


    // alertDetail Field Functions 
    bool hasAlertDetail() const { return this->alertDetail_ != nullptr;};
    void deleteAlertDetail() { this->alertDetail_ = nullptr;};
    inline string getAlertDetail() const { DARABONBA_PTR_GET_DEFAULT(alertDetail_, "") };
    inline ReportBizAlertInfoShrinkRequest& setAlertDetail(string alertDetail) { DARABONBA_PTR_SET_VALUE(alertDetail_, alertDetail) };


    // alertGrade Field Functions 
    bool hasAlertGrade() const { return this->alertGrade_ != nullptr;};
    void deleteAlertGrade() { this->alertGrade_ = nullptr;};
    inline string getAlertGrade() const { DARABONBA_PTR_GET_DEFAULT(alertGrade_, "") };
    inline ReportBizAlertInfoShrinkRequest& setAlertGrade(string alertGrade) { DARABONBA_PTR_SET_VALUE(alertGrade_, alertGrade) };


    // alertLabels Field Functions 
    bool hasAlertLabels() const { return this->alertLabels_ != nullptr;};
    void deleteAlertLabels() { this->alertLabels_ = nullptr;};
    inline string getAlertLabels() const { DARABONBA_PTR_GET_DEFAULT(alertLabels_, "") };
    inline ReportBizAlertInfoShrinkRequest& setAlertLabels(string alertLabels) { DARABONBA_PTR_SET_VALUE(alertLabels_, alertLabels) };


    // alertScene Field Functions 
    bool hasAlertScene() const { return this->alertScene_ != nullptr;};
    void deleteAlertScene() { this->alertScene_ = nullptr;};
    inline string getAlertScene() const { DARABONBA_PTR_GET_DEFAULT(alertScene_, "") };
    inline ReportBizAlertInfoShrinkRequest& setAlertScene(string alertScene) { DARABONBA_PTR_SET_VALUE(alertScene_, alertScene) };


    // alertToken Field Functions 
    bool hasAlertToken() const { return this->alertToken_ != nullptr;};
    void deleteAlertToken() { this->alertToken_ = nullptr;};
    inline string getAlertToken() const { DARABONBA_PTR_GET_DEFAULT(alertToken_, "") };
    inline ReportBizAlertInfoShrinkRequest& setAlertToken(string alertToken) { DARABONBA_PTR_SET_VALUE(alertToken_, alertToken) };


    // alertUidShrink Field Functions 
    bool hasAlertUidShrink() const { return this->alertUidShrink_ != nullptr;};
    void deleteAlertUidShrink() { this->alertUidShrink_ = nullptr;};
    inline string getAlertUidShrink() const { DARABONBA_PTR_GET_DEFAULT(alertUidShrink_, "") };
    inline ReportBizAlertInfoShrinkRequest& setAlertUidShrink(string alertUidShrink) { DARABONBA_PTR_SET_VALUE(alertUidShrink_, alertUidShrink) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ReportBizAlertInfoShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    shared_ptr<string> alertDescription_ {};
    // This parameter is required.
    shared_ptr<string> alertDetail_ {};
    shared_ptr<string> alertGrade_ {};
    shared_ptr<string> alertLabels_ {};
    // This parameter is required.
    shared_ptr<string> alertScene_ {};
    // This parameter is required.
    shared_ptr<string> alertToken_ {};
    shared_ptr<string> alertUidShrink_ {};
    shared_ptr<string> language_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
