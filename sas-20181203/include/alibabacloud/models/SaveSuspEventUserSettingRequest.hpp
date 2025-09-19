// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESUSPEVENTUSERSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESUSPEVENTUSERSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SaveSuspEventUserSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSuspEventUserSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(LevelsOn, levelsOn_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSuspEventUserSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(LevelsOn, levelsOn_);
    };
    SaveSuspEventUserSettingRequest() = default ;
    SaveSuspEventUserSettingRequest(const SaveSuspEventUserSettingRequest &) = default ;
    SaveSuspEventUserSettingRequest(SaveSuspEventUserSettingRequest &&) = default ;
    SaveSuspEventUserSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSuspEventUserSettingRequest() = default ;
    SaveSuspEventUserSettingRequest& operator=(const SaveSuspEventUserSettingRequest &) = default ;
    SaveSuspEventUserSettingRequest& operator=(SaveSuspEventUserSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr
        && this->levelsOn_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline SaveSuspEventUserSettingRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // levelsOn Field Functions 
    bool hasLevelsOn() const { return this->levelsOn_ != nullptr;};
    void deleteLevelsOn() { this->levelsOn_ = nullptr;};
    inline string levelsOn() const { DARABONBA_PTR_GET_DEFAULT(levelsOn_, "") };
    inline SaveSuspEventUserSettingRequest& setLevelsOn(string levelsOn) { DARABONBA_PTR_SET_VALUE(levelsOn_, levelsOn) };


  protected:
    // The data source of the exception. Set the value to sas.
    std::shared_ptr<string> from_ = nullptr;
    // The severities of alert notifications. Valid values:
    // 
    // *   **remind**
    // *   **suspicious**
    // *   **serious**
    std::shared_ptr<string> levelsOn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
