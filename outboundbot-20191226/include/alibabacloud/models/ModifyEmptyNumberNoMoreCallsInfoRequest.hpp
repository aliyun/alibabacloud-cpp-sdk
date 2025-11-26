// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEMPTYNUMBERNOMORECALLSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEMPTYNUMBERNOMORECALLSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyEmptyNumberNoMoreCallsInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEmptyNumberNoMoreCallsInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EmptyNumberNoMoreCalls, emptyNumberNoMoreCalls_);
      DARABONBA_PTR_TO_JSON(EntryId, entryId_);
      DARABONBA_PTR_TO_JSON(StrategyLevel, strategyLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEmptyNumberNoMoreCallsInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EmptyNumberNoMoreCalls, emptyNumberNoMoreCalls_);
      DARABONBA_PTR_FROM_JSON(EntryId, entryId_);
      DARABONBA_PTR_FROM_JSON(StrategyLevel, strategyLevel_);
    };
    ModifyEmptyNumberNoMoreCallsInfoRequest() = default ;
    ModifyEmptyNumberNoMoreCallsInfoRequest(const ModifyEmptyNumberNoMoreCallsInfoRequest &) = default ;
    ModifyEmptyNumberNoMoreCallsInfoRequest(ModifyEmptyNumberNoMoreCallsInfoRequest &&) = default ;
    ModifyEmptyNumberNoMoreCallsInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEmptyNumberNoMoreCallsInfoRequest() = default ;
    ModifyEmptyNumberNoMoreCallsInfoRequest& operator=(const ModifyEmptyNumberNoMoreCallsInfoRequest &) = default ;
    ModifyEmptyNumberNoMoreCallsInfoRequest& operator=(ModifyEmptyNumberNoMoreCallsInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->emptyNumberNoMoreCalls_ == nullptr
        && return this->entryId_ == nullptr && return this->strategyLevel_ == nullptr; };
    // emptyNumberNoMoreCalls Field Functions 
    bool hasEmptyNumberNoMoreCalls() const { return this->emptyNumberNoMoreCalls_ != nullptr;};
    void deleteEmptyNumberNoMoreCalls() { this->emptyNumberNoMoreCalls_ = nullptr;};
    inline bool emptyNumberNoMoreCalls() const { DARABONBA_PTR_GET_DEFAULT(emptyNumberNoMoreCalls_, false) };
    inline ModifyEmptyNumberNoMoreCallsInfoRequest& setEmptyNumberNoMoreCalls(bool emptyNumberNoMoreCalls) { DARABONBA_PTR_SET_VALUE(emptyNumberNoMoreCalls_, emptyNumberNoMoreCalls) };


    // entryId Field Functions 
    bool hasEntryId() const { return this->entryId_ != nullptr;};
    void deleteEntryId() { this->entryId_ = nullptr;};
    inline string entryId() const { DARABONBA_PTR_GET_DEFAULT(entryId_, "") };
    inline ModifyEmptyNumberNoMoreCallsInfoRequest& setEntryId(string entryId) { DARABONBA_PTR_SET_VALUE(entryId_, entryId) };


    // strategyLevel Field Functions 
    bool hasStrategyLevel() const { return this->strategyLevel_ != nullptr;};
    void deleteStrategyLevel() { this->strategyLevel_ = nullptr;};
    inline int32_t strategyLevel() const { DARABONBA_PTR_GET_DEFAULT(strategyLevel_, 0) };
    inline ModifyEmptyNumberNoMoreCallsInfoRequest& setStrategyLevel(int32_t strategyLevel) { DARABONBA_PTR_SET_VALUE(strategyLevel_, strategyLevel) };


  protected:
    std::shared_ptr<bool> emptyNumberNoMoreCalls_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> entryId_ = nullptr;
    std::shared_ptr<int32_t> strategyLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
