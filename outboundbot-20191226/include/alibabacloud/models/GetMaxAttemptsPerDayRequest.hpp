// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMAXATTEMPTSPERDAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMAXATTEMPTSPERDAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetMaxAttemptsPerDayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMaxAttemptsPerDayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntryId, entryId_);
      DARABONBA_PTR_TO_JSON(StrategyLevel, strategyLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetMaxAttemptsPerDayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntryId, entryId_);
      DARABONBA_PTR_FROM_JSON(StrategyLevel, strategyLevel_);
    };
    GetMaxAttemptsPerDayRequest() = default ;
    GetMaxAttemptsPerDayRequest(const GetMaxAttemptsPerDayRequest &) = default ;
    GetMaxAttemptsPerDayRequest(GetMaxAttemptsPerDayRequest &&) = default ;
    GetMaxAttemptsPerDayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMaxAttemptsPerDayRequest() = default ;
    GetMaxAttemptsPerDayRequest& operator=(const GetMaxAttemptsPerDayRequest &) = default ;
    GetMaxAttemptsPerDayRequest& operator=(GetMaxAttemptsPerDayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entryId_ == nullptr
        && this->strategyLevel_ == nullptr; };
    // entryId Field Functions 
    bool hasEntryId() const { return this->entryId_ != nullptr;};
    void deleteEntryId() { this->entryId_ = nullptr;};
    inline string getEntryId() const { DARABONBA_PTR_GET_DEFAULT(entryId_, "") };
    inline GetMaxAttemptsPerDayRequest& setEntryId(string entryId) { DARABONBA_PTR_SET_VALUE(entryId_, entryId) };


    // strategyLevel Field Functions 
    bool hasStrategyLevel() const { return this->strategyLevel_ != nullptr;};
    void deleteStrategyLevel() { this->strategyLevel_ = nullptr;};
    inline int32_t getStrategyLevel() const { DARABONBA_PTR_GET_DEFAULT(strategyLevel_, 0) };
    inline GetMaxAttemptsPerDayRequest& setStrategyLevel(int32_t strategyLevel) { DARABONBA_PTR_SET_VALUE(strategyLevel_, strategyLevel) };


  protected:
    // This parameter is required.
    shared_ptr<string> entryId_ {};
    shared_ptr<int32_t> strategyLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
