// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTREQUESTLOCATION_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTREQUESTLOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventRequestLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventRequestLocation& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventRequestLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
    };
    CreateEventRequestLocation() = default ;
    CreateEventRequestLocation(const CreateEventRequestLocation &) = default ;
    CreateEventRequestLocation(CreateEventRequestLocation &&) = default ;
    CreateEventRequestLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventRequestLocation() = default ;
    CreateEventRequestLocation& operator=(const CreateEventRequestLocation &) = default ;
    CreateEventRequestLocation& operator=(CreateEventRequestLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateEventRequestLocation& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
