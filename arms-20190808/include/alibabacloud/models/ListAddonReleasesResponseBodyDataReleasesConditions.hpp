// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONRELEASESRESPONSEBODYDATARELEASESCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONRELEASESRESPONSEBODYDATARELEASESCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAddonReleasesResponseBodyDataReleasesConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonReleasesResponseBodyDataReleasesConditions& obj) { 
      DARABONBA_PTR_TO_JSON(FirstTransitionTime, firstTransitionTime_);
      DARABONBA_PTR_TO_JSON(LastTransitionTime, lastTransitionTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonReleasesResponseBodyDataReleasesConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstTransitionTime, firstTransitionTime_);
      DARABONBA_PTR_FROM_JSON(LastTransitionTime, lastTransitionTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAddonReleasesResponseBodyDataReleasesConditions() = default ;
    ListAddonReleasesResponseBodyDataReleasesConditions(const ListAddonReleasesResponseBodyDataReleasesConditions &) = default ;
    ListAddonReleasesResponseBodyDataReleasesConditions(ListAddonReleasesResponseBodyDataReleasesConditions &&) = default ;
    ListAddonReleasesResponseBodyDataReleasesConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonReleasesResponseBodyDataReleasesConditions() = default ;
    ListAddonReleasesResponseBodyDataReleasesConditions& operator=(const ListAddonReleasesResponseBodyDataReleasesConditions &) = default ;
    ListAddonReleasesResponseBodyDataReleasesConditions& operator=(ListAddonReleasesResponseBodyDataReleasesConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->firstTransitionTime_ != nullptr
        && this->lastTransitionTime_ != nullptr && this->message_ != nullptr && this->reason_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // firstTransitionTime Field Functions 
    bool hasFirstTransitionTime() const { return this->firstTransitionTime_ != nullptr;};
    void deleteFirstTransitionTime() { this->firstTransitionTime_ = nullptr;};
    inline string firstTransitionTime() const { DARABONBA_PTR_GET_DEFAULT(firstTransitionTime_, "") };
    inline ListAddonReleasesResponseBodyDataReleasesConditions& setFirstTransitionTime(string firstTransitionTime) { DARABONBA_PTR_SET_VALUE(firstTransitionTime_, firstTransitionTime) };


    // lastTransitionTime Field Functions 
    bool hasLastTransitionTime() const { return this->lastTransitionTime_ != nullptr;};
    void deleteLastTransitionTime() { this->lastTransitionTime_ = nullptr;};
    inline string lastTransitionTime() const { DARABONBA_PTR_GET_DEFAULT(lastTransitionTime_, "") };
    inline ListAddonReleasesResponseBodyDataReleasesConditions& setLastTransitionTime(string lastTransitionTime) { DARABONBA_PTR_SET_VALUE(lastTransitionTime_, lastTransitionTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAddonReleasesResponseBodyDataReleasesConditions& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListAddonReleasesResponseBodyDataReleasesConditions& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAddonReleasesResponseBodyDataReleasesConditions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAddonReleasesResponseBodyDataReleasesConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The first transition time.
    std::shared_ptr<string> firstTransitionTime_ = nullptr;
    // The last transition time.
    std::shared_ptr<string> lastTransitionTime_ = nullptr;
    // The detailed information.
    std::shared_ptr<string> message_ = nullptr;
    // The reason for the failure.
    std::shared_ptr<string> reason_ = nullptr;
    // The status of the phase.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the phase.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
