// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASRCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASRCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class GetAsrConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsrConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigLevel, configLevel_);
      DARABONBA_PTR_TO_JSON(EntryId, entryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsrConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigLevel, configLevel_);
      DARABONBA_PTR_FROM_JSON(EntryId, entryId_);
    };
    GetAsrConfigRequest() = default ;
    GetAsrConfigRequest(const GetAsrConfigRequest &) = default ;
    GetAsrConfigRequest(GetAsrConfigRequest &&) = default ;
    GetAsrConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsrConfigRequest() = default ;
    GetAsrConfigRequest& operator=(const GetAsrConfigRequest &) = default ;
    GetAsrConfigRequest& operator=(GetAsrConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configLevel_ == nullptr
        && this->entryId_ == nullptr; };
    // configLevel Field Functions 
    bool hasConfigLevel() const { return this->configLevel_ != nullptr;};
    void deleteConfigLevel() { this->configLevel_ = nullptr;};
    inline int32_t getConfigLevel() const { DARABONBA_PTR_GET_DEFAULT(configLevel_, 0) };
    inline GetAsrConfigRequest& setConfigLevel(int32_t configLevel) { DARABONBA_PTR_SET_VALUE(configLevel_, configLevel) };


    // entryId Field Functions 
    bool hasEntryId() const { return this->entryId_ != nullptr;};
    void deleteEntryId() { this->entryId_ = nullptr;};
    inline string getEntryId() const { DARABONBA_PTR_GET_DEFAULT(entryId_, "") };
    inline GetAsrConfigRequest& setEntryId(string entryId) { DARABONBA_PTR_SET_VALUE(entryId_, entryId) };


  protected:
    // The configuration level. Valid values: `0` (system), `1` (tenant), and `2` (instance).
    shared_ptr<int32_t> configLevel_ {};
    // The ID of the entry at the level specified by `ConfigLevel`.
    shared_ptr<string> entryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
