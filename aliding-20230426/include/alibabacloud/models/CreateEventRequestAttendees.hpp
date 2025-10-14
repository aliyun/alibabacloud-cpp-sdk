// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTREQUESTATTENDEES_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTREQUESTATTENDEES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventRequestAttendees : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventRequestAttendees& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isOptional, isOptional_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventRequestAttendees& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isOptional, isOptional_);
    };
    CreateEventRequestAttendees() = default ;
    CreateEventRequestAttendees(const CreateEventRequestAttendees &) = default ;
    CreateEventRequestAttendees(CreateEventRequestAttendees &&) = default ;
    CreateEventRequestAttendees(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventRequestAttendees() = default ;
    CreateEventRequestAttendees& operator=(const CreateEventRequestAttendees &) = default ;
    CreateEventRequestAttendees& operator=(CreateEventRequestAttendees &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->isOptional_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateEventRequestAttendees& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isOptional Field Functions 
    bool hasIsOptional() const { return this->isOptional_ != nullptr;};
    void deleteIsOptional() { this->isOptional_ = nullptr;};
    inline bool isOptional() const { DARABONBA_PTR_GET_DEFAULT(isOptional_, false) };
    inline CreateEventRequestAttendees& setIsOptional(bool isOptional) { DARABONBA_PTR_SET_VALUE(isOptional_, isOptional) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isOptional_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
