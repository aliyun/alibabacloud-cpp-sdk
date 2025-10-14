// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTREQUESTLOCATION_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTREQUESTLOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventRequestLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventRequestLocation& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventRequestLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
    };
    PatchEventRequestLocation() = default ;
    PatchEventRequestLocation(const PatchEventRequestLocation &) = default ;
    PatchEventRequestLocation(PatchEventRequestLocation &&) = default ;
    PatchEventRequestLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventRequestLocation() = default ;
    PatchEventRequestLocation& operator=(const PatchEventRequestLocation &) = default ;
    PatchEventRequestLocation& operator=(PatchEventRequestLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline PatchEventRequestLocation& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
