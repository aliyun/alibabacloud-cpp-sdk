// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSRESPONSEBODYSUSPEVENTSTACTICITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSRESPONSEBODYSUSPEVENTSTACTICITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventsResponseBodySuspEventsTacticItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventsResponseBodySuspEventsTacticItems& obj) { 
      DARABONBA_PTR_TO_JSON(TacticDisplayName, tacticDisplayName_);
      DARABONBA_PTR_TO_JSON(TacticId, tacticId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventsResponseBodySuspEventsTacticItems& obj) { 
      DARABONBA_PTR_FROM_JSON(TacticDisplayName, tacticDisplayName_);
      DARABONBA_PTR_FROM_JSON(TacticId, tacticId_);
    };
    DescribeSuspEventsResponseBodySuspEventsTacticItems() = default ;
    DescribeSuspEventsResponseBodySuspEventsTacticItems(const DescribeSuspEventsResponseBodySuspEventsTacticItems &) = default ;
    DescribeSuspEventsResponseBodySuspEventsTacticItems(DescribeSuspEventsResponseBodySuspEventsTacticItems &&) = default ;
    DescribeSuspEventsResponseBodySuspEventsTacticItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventsResponseBodySuspEventsTacticItems() = default ;
    DescribeSuspEventsResponseBodySuspEventsTacticItems& operator=(const DescribeSuspEventsResponseBodySuspEventsTacticItems &) = default ;
    DescribeSuspEventsResponseBodySuspEventsTacticItems& operator=(DescribeSuspEventsResponseBodySuspEventsTacticItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tacticDisplayName_ != nullptr
        && this->tacticId_ != nullptr; };
    // tacticDisplayName Field Functions 
    bool hasTacticDisplayName() const { return this->tacticDisplayName_ != nullptr;};
    void deleteTacticDisplayName() { this->tacticDisplayName_ = nullptr;};
    inline string tacticDisplayName() const { DARABONBA_PTR_GET_DEFAULT(tacticDisplayName_, "") };
    inline DescribeSuspEventsResponseBodySuspEventsTacticItems& setTacticDisplayName(string tacticDisplayName) { DARABONBA_PTR_SET_VALUE(tacticDisplayName_, tacticDisplayName) };


    // tacticId Field Functions 
    bool hasTacticId() const { return this->tacticId_ != nullptr;};
    void deleteTacticId() { this->tacticId_ = nullptr;};
    inline string tacticId() const { DARABONBA_PTR_GET_DEFAULT(tacticId_, "") };
    inline DescribeSuspEventsResponseBodySuspEventsTacticItems& setTacticId(string tacticId) { DARABONBA_PTR_SET_VALUE(tacticId_, tacticId) };


  protected:
    // The tactic name of ATT\\&CK.
    std::shared_ptr<string> tacticDisplayName_ = nullptr;
    // The stage information about ATT\\&CK.
    std::shared_ptr<string> tacticId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
