// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASESTRATEGYPERIODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBASESTRATEGYPERIODREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetBaseStrategyPeriodRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaseStrategyPeriodRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntryId, entryId_);
      DARABONBA_PTR_TO_JSON(StrategyLevel, strategyLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaseStrategyPeriodRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntryId, entryId_);
      DARABONBA_PTR_FROM_JSON(StrategyLevel, strategyLevel_);
    };
    GetBaseStrategyPeriodRequest() = default ;
    GetBaseStrategyPeriodRequest(const GetBaseStrategyPeriodRequest &) = default ;
    GetBaseStrategyPeriodRequest(GetBaseStrategyPeriodRequest &&) = default ;
    GetBaseStrategyPeriodRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaseStrategyPeriodRequest() = default ;
    GetBaseStrategyPeriodRequest& operator=(const GetBaseStrategyPeriodRequest &) = default ;
    GetBaseStrategyPeriodRequest& operator=(GetBaseStrategyPeriodRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entryId_ == nullptr
        && return this->strategyLevel_ == nullptr; };
    // entryId Field Functions 
    bool hasEntryId() const { return this->entryId_ != nullptr;};
    void deleteEntryId() { this->entryId_ = nullptr;};
    inline string entryId() const { DARABONBA_PTR_GET_DEFAULT(entryId_, "") };
    inline GetBaseStrategyPeriodRequest& setEntryId(string entryId) { DARABONBA_PTR_SET_VALUE(entryId_, entryId) };


    // strategyLevel Field Functions 
    bool hasStrategyLevel() const { return this->strategyLevel_ != nullptr;};
    void deleteStrategyLevel() { this->strategyLevel_ = nullptr;};
    inline int32_t strategyLevel() const { DARABONBA_PTR_GET_DEFAULT(strategyLevel_, 0) };
    inline GetBaseStrategyPeriodRequest& setStrategyLevel(int32_t strategyLevel) { DARABONBA_PTR_SET_VALUE(strategyLevel_, strategyLevel) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> entryId_ = nullptr;
    std::shared_ptr<int32_t> strategyLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
