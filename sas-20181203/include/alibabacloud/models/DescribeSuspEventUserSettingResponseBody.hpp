// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTUSERSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTUSERSETTINGRESPONSEBODY_HPP_
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
  class DescribeSuspEventUserSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventUserSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LevelsOn, levelsOn_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventUserSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LevelsOn, levelsOn_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSuspEventUserSettingResponseBody() = default ;
    DescribeSuspEventUserSettingResponseBody(const DescribeSuspEventUserSettingResponseBody &) = default ;
    DescribeSuspEventUserSettingResponseBody(DescribeSuspEventUserSettingResponseBody &&) = default ;
    DescribeSuspEventUserSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventUserSettingResponseBody() = default ;
    DescribeSuspEventUserSettingResponseBody& operator=(const DescribeSuspEventUserSettingResponseBody &) = default ;
    DescribeSuspEventUserSettingResponseBody& operator=(DescribeSuspEventUserSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->levelsOn_ != nullptr
        && this->requestId_ != nullptr; };
    // levelsOn Field Functions 
    bool hasLevelsOn() const { return this->levelsOn_ != nullptr;};
    void deleteLevelsOn() { this->levelsOn_ = nullptr;};
    inline const vector<string> & levelsOn() const { DARABONBA_PTR_GET_CONST(levelsOn_, vector<string>) };
    inline vector<string> levelsOn() { DARABONBA_PTR_GET(levelsOn_, vector<string>) };
    inline DescribeSuspEventUserSettingResponseBody& setLevelsOn(const vector<string> & levelsOn) { DARABONBA_PTR_SET_VALUE(levelsOn_, levelsOn) };
    inline DescribeSuspEventUserSettingResponseBody& setLevelsOn(vector<string> && levelsOn) { DARABONBA_PTR_SET_RVALUE(levelsOn_, levelsOn) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSuspEventUserSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the risk levels of alert notifications. Valid values:
    // 
    // *   **remind**
    // *   **suspicious**
    // *   **serious**
    std::shared_ptr<vector<string>> levelsOn_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
