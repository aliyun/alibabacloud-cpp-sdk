// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTREQUESTATTENDEES_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTREQUESTATTENDEES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventRequestAttendees : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventRequestAttendees& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isOptional, isOptional_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventRequestAttendees& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isOptional, isOptional_);
    };
    PatchEventRequestAttendees() = default ;
    PatchEventRequestAttendees(const PatchEventRequestAttendees &) = default ;
    PatchEventRequestAttendees(PatchEventRequestAttendees &&) = default ;
    PatchEventRequestAttendees(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventRequestAttendees() = default ;
    PatchEventRequestAttendees& operator=(const PatchEventRequestAttendees &) = default ;
    PatchEventRequestAttendees& operator=(PatchEventRequestAttendees &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->isOptional_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PatchEventRequestAttendees& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isOptional Field Functions 
    bool hasIsOptional() const { return this->isOptional_ != nullptr;};
    void deleteIsOptional() { this->isOptional_ = nullptr;};
    inline bool isOptional() const { DARABONBA_PTR_GET_DEFAULT(isOptional_, false) };
    inline PatchEventRequestAttendees& setIsOptional(bool isOptional) { DARABONBA_PTR_SET_VALUE(isOptional_, isOptional) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isOptional_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
