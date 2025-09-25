// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADDONRELEASERESPONSEBODYRELEASECONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEADDONRELEASERESPONSEBODYRELEASECONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateAddonReleaseResponseBodyReleaseConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAddonReleaseResponseBodyReleaseConditions& obj) { 
      DARABONBA_PTR_TO_JSON(firstTransitionTime, firstTransitionTime_);
      DARABONBA_PTR_TO_JSON(lastTransitionTime, lastTransitionTime_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAddonReleaseResponseBodyReleaseConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(firstTransitionTime, firstTransitionTime_);
      DARABONBA_PTR_FROM_JSON(lastTransitionTime, lastTransitionTime_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateAddonReleaseResponseBodyReleaseConditions() = default ;
    CreateAddonReleaseResponseBodyReleaseConditions(const CreateAddonReleaseResponseBodyReleaseConditions &) = default ;
    CreateAddonReleaseResponseBodyReleaseConditions(CreateAddonReleaseResponseBodyReleaseConditions &&) = default ;
    CreateAddonReleaseResponseBodyReleaseConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAddonReleaseResponseBodyReleaseConditions() = default ;
    CreateAddonReleaseResponseBodyReleaseConditions& operator=(const CreateAddonReleaseResponseBodyReleaseConditions &) = default ;
    CreateAddonReleaseResponseBodyReleaseConditions& operator=(CreateAddonReleaseResponseBodyReleaseConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->firstTransitionTime_ != nullptr
        && this->lastTransitionTime_ != nullptr && this->message_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // firstTransitionTime Field Functions 
    bool hasFirstTransitionTime() const { return this->firstTransitionTime_ != nullptr;};
    void deleteFirstTransitionTime() { this->firstTransitionTime_ = nullptr;};
    inline string firstTransitionTime() const { DARABONBA_PTR_GET_DEFAULT(firstTransitionTime_, "") };
    inline CreateAddonReleaseResponseBodyReleaseConditions& setFirstTransitionTime(string firstTransitionTime) { DARABONBA_PTR_SET_VALUE(firstTransitionTime_, firstTransitionTime) };


    // lastTransitionTime Field Functions 
    bool hasLastTransitionTime() const { return this->lastTransitionTime_ != nullptr;};
    void deleteLastTransitionTime() { this->lastTransitionTime_ = nullptr;};
    inline string lastTransitionTime() const { DARABONBA_PTR_GET_DEFAULT(lastTransitionTime_, "") };
    inline CreateAddonReleaseResponseBodyReleaseConditions& setLastTransitionTime(string lastTransitionTime) { DARABONBA_PTR_SET_VALUE(lastTransitionTime_, lastTransitionTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateAddonReleaseResponseBodyReleaseConditions& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateAddonReleaseResponseBodyReleaseConditions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAddonReleaseResponseBodyReleaseConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> firstTransitionTime_ = nullptr;
    std::shared_ptr<string> lastTransitionTime_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
