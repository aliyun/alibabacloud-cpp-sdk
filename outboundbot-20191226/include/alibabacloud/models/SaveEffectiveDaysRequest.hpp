// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEEFFECTIVEDAYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEEFFECTIVEDAYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveEffectiveDaysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveEffectiveDaysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveDays, effectiveDays_);
      DARABONBA_PTR_TO_JSON(EntryId, entryId_);
      DARABONBA_PTR_TO_JSON(StrategyLevel, strategyLevel_);
    };
    friend void from_json(const Darabonba::Json& j, SaveEffectiveDaysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveDays, effectiveDays_);
      DARABONBA_PTR_FROM_JSON(EntryId, entryId_);
      DARABONBA_PTR_FROM_JSON(StrategyLevel, strategyLevel_);
    };
    SaveEffectiveDaysRequest() = default ;
    SaveEffectiveDaysRequest(const SaveEffectiveDaysRequest &) = default ;
    SaveEffectiveDaysRequest(SaveEffectiveDaysRequest &&) = default ;
    SaveEffectiveDaysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveEffectiveDaysRequest() = default ;
    SaveEffectiveDaysRequest& operator=(const SaveEffectiveDaysRequest &) = default ;
    SaveEffectiveDaysRequest& operator=(SaveEffectiveDaysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveDays_ == nullptr
        && return this->entryId_ == nullptr && return this->strategyLevel_ == nullptr; };
    // effectiveDays Field Functions 
    bool hasEffectiveDays() const { return this->effectiveDays_ != nullptr;};
    void deleteEffectiveDays() { this->effectiveDays_ = nullptr;};
    inline int32_t effectiveDays() const { DARABONBA_PTR_GET_DEFAULT(effectiveDays_, 0) };
    inline SaveEffectiveDaysRequest& setEffectiveDays(int32_t effectiveDays) { DARABONBA_PTR_SET_VALUE(effectiveDays_, effectiveDays) };


    // entryId Field Functions 
    bool hasEntryId() const { return this->entryId_ != nullptr;};
    void deleteEntryId() { this->entryId_ = nullptr;};
    inline string entryId() const { DARABONBA_PTR_GET_DEFAULT(entryId_, "") };
    inline SaveEffectiveDaysRequest& setEntryId(string entryId) { DARABONBA_PTR_SET_VALUE(entryId_, entryId) };


    // strategyLevel Field Functions 
    bool hasStrategyLevel() const { return this->strategyLevel_ != nullptr;};
    void deleteStrategyLevel() { this->strategyLevel_ = nullptr;};
    inline int32_t strategyLevel() const { DARABONBA_PTR_GET_DEFAULT(strategyLevel_, 0) };
    inline SaveEffectiveDaysRequest& setStrategyLevel(int32_t strategyLevel) { DARABONBA_PTR_SET_VALUE(strategyLevel_, strategyLevel) };


  protected:
    std::shared_ptr<int32_t> effectiveDays_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> entryId_ = nullptr;
    std::shared_ptr<int32_t> strategyLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
