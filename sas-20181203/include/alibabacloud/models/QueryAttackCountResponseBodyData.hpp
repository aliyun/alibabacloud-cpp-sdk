// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYATTACKCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYATTACKCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryAttackCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAttackCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
      DARABONBA_PTR_TO_JSON(TacticId, tacticId_);
      DARABONBA_PTR_TO_JSON(TacticType, tacticType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAttackCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
      DARABONBA_PTR_FROM_JSON(TacticId, tacticId_);
      DARABONBA_PTR_FROM_JSON(TacticType, tacticType_);
    };
    QueryAttackCountResponseBodyData() = default ;
    QueryAttackCountResponseBodyData(const QueryAttackCountResponseBodyData &) = default ;
    QueryAttackCountResponseBodyData(QueryAttackCountResponseBodyData &&) = default ;
    QueryAttackCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAttackCountResponseBodyData() = default ;
    QueryAttackCountResponseBodyData& operator=(const QueryAttackCountResponseBodyData &) = default ;
    QueryAttackCountResponseBodyData& operator=(QueryAttackCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCount_ == nullptr
        && return this->tacticId_ == nullptr && return this->tacticType_ == nullptr; };
    // eventCount Field Functions 
    bool hasEventCount() const { return this->eventCount_ != nullptr;};
    void deleteEventCount() { this->eventCount_ = nullptr;};
    inline int32_t eventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0) };
    inline QueryAttackCountResponseBodyData& setEventCount(int32_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


    // tacticId Field Functions 
    bool hasTacticId() const { return this->tacticId_ != nullptr;};
    void deleteTacticId() { this->tacticId_ = nullptr;};
    inline string tacticId() const { DARABONBA_PTR_GET_DEFAULT(tacticId_, "") };
    inline QueryAttackCountResponseBodyData& setTacticId(string tacticId) { DARABONBA_PTR_SET_VALUE(tacticId_, tacticId) };


    // tacticType Field Functions 
    bool hasTacticType() const { return this->tacticType_ != nullptr;};
    void deleteTacticType() { this->tacticType_ = nullptr;};
    inline string tacticType() const { DARABONBA_PTR_GET_DEFAULT(tacticType_, "") };
    inline QueryAttackCountResponseBodyData& setTacticType(string tacticType) { DARABONBA_PTR_SET_VALUE(tacticType_, tacticType) };


  protected:
    // The number of times that the alert is triggered.
    std::shared_ptr<int32_t> eventCount_ = nullptr;
    // The stage ID of the ATT\\&CK attack.
    std::shared_ptr<string> tacticId_ = nullptr;
    // The type of stage of the ATT\\&CK attack.
    std::shared_ptr<string> tacticType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
