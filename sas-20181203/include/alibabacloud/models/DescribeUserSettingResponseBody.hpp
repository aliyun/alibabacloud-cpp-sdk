// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUserSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_TO_JSON(InvalidWarningKeepDays, invalidWarningKeepDays_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_FROM_JSON(InvalidWarningKeepDays, invalidWarningKeepDays_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserSettingResponseBody() = default ;
    DescribeUserSettingResponseBody(const DescribeUserSettingResponseBody &) = default ;
    DescribeUserSettingResponseBody(DescribeUserSettingResponseBody &&) = default ;
    DescribeUserSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserSettingResponseBody() = default ;
    DescribeUserSettingResponseBody& operator=(const DescribeUserSettingResponseBody &) = default ;
    DescribeUserSettingResponseBody& operator=(DescribeUserSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertLevels_ != nullptr
        && this->invalidWarningKeepDays_ != nullptr && this->requestId_ != nullptr; };
    // alertLevels Field Functions 
    bool hasAlertLevels() const { return this->alertLevels_ != nullptr;};
    void deleteAlertLevels() { this->alertLevels_ = nullptr;};
    inline const vector<string> & alertLevels() const { DARABONBA_PTR_GET_CONST(alertLevels_, vector<string>) };
    inline vector<string> alertLevels() { DARABONBA_PTR_GET(alertLevels_, vector<string>) };
    inline DescribeUserSettingResponseBody& setAlertLevels(const vector<string> & alertLevels) { DARABONBA_PTR_SET_VALUE(alertLevels_, alertLevels) };
    inline DescribeUserSettingResponseBody& setAlertLevels(vector<string> && alertLevels) { DARABONBA_PTR_SET_RVALUE(alertLevels_, alertLevels) };


    // invalidWarningKeepDays Field Functions 
    bool hasInvalidWarningKeepDays() const { return this->invalidWarningKeepDays_ != nullptr;};
    void deleteInvalidWarningKeepDays() { this->invalidWarningKeepDays_ = nullptr;};
    inline int32_t invalidWarningKeepDays() const { DARABONBA_PTR_GET_DEFAULT(invalidWarningKeepDays_, 0) };
    inline DescribeUserSettingResponseBody& setInvalidWarningKeepDays(int32_t invalidWarningKeepDays) { DARABONBA_PTR_SET_VALUE(invalidWarningKeepDays_, invalidWarningKeepDays) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The severities of alerts. If this parameter is empty, no custom alerts are generated.
    std::shared_ptr<vector<string>> alertLevels_ = nullptr;
    // The number of days during which you want to retain invalid alerts.
    std::shared_ptr<int32_t> invalidWarningKeepDays_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
