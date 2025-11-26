// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODYSCRIPTSLISTNLUPROFILE_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODYSCRIPTSLISTNLUPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListScriptsResponseBodyScriptsListNluProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptsResponseBodyScriptsListNluProfile& obj) { 
      DARABONBA_PTR_TO_JSON(FcFunction, fcFunction_);
      DARABONBA_PTR_TO_JSON(FcHttpTriggerUrl, fcHttpTriggerUrl_);
      DARABONBA_PTR_TO_JSON(FcRegion, fcRegion_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptsResponseBodyScriptsListNluProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(FcFunction, fcFunction_);
      DARABONBA_PTR_FROM_JSON(FcHttpTriggerUrl, fcHttpTriggerUrl_);
      DARABONBA_PTR_FROM_JSON(FcRegion, fcRegion_);
    };
    ListScriptsResponseBodyScriptsListNluProfile() = default ;
    ListScriptsResponseBodyScriptsListNluProfile(const ListScriptsResponseBodyScriptsListNluProfile &) = default ;
    ListScriptsResponseBodyScriptsListNluProfile(ListScriptsResponseBodyScriptsListNluProfile &&) = default ;
    ListScriptsResponseBodyScriptsListNluProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptsResponseBodyScriptsListNluProfile() = default ;
    ListScriptsResponseBodyScriptsListNluProfile& operator=(const ListScriptsResponseBodyScriptsListNluProfile &) = default ;
    ListScriptsResponseBodyScriptsListNluProfile& operator=(ListScriptsResponseBodyScriptsListNluProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fcFunction_ == nullptr
        && return this->fcHttpTriggerUrl_ == nullptr && return this->fcRegion_ == nullptr; };
    // fcFunction Field Functions 
    bool hasFcFunction() const { return this->fcFunction_ != nullptr;};
    void deleteFcFunction() { this->fcFunction_ = nullptr;};
    inline string fcFunction() const { DARABONBA_PTR_GET_DEFAULT(fcFunction_, "") };
    inline ListScriptsResponseBodyScriptsListNluProfile& setFcFunction(string fcFunction) { DARABONBA_PTR_SET_VALUE(fcFunction_, fcFunction) };


    // fcHttpTriggerUrl Field Functions 
    bool hasFcHttpTriggerUrl() const { return this->fcHttpTriggerUrl_ != nullptr;};
    void deleteFcHttpTriggerUrl() { this->fcHttpTriggerUrl_ = nullptr;};
    inline string fcHttpTriggerUrl() const { DARABONBA_PTR_GET_DEFAULT(fcHttpTriggerUrl_, "") };
    inline ListScriptsResponseBodyScriptsListNluProfile& setFcHttpTriggerUrl(string fcHttpTriggerUrl) { DARABONBA_PTR_SET_VALUE(fcHttpTriggerUrl_, fcHttpTriggerUrl) };


    // fcRegion Field Functions 
    bool hasFcRegion() const { return this->fcRegion_ != nullptr;};
    void deleteFcRegion() { this->fcRegion_ = nullptr;};
    inline string fcRegion() const { DARABONBA_PTR_GET_DEFAULT(fcRegion_, "") };
    inline ListScriptsResponseBodyScriptsListNluProfile& setFcRegion(string fcRegion) { DARABONBA_PTR_SET_VALUE(fcRegion_, fcRegion) };


  protected:
    std::shared_ptr<string> fcFunction_ = nullptr;
    std::shared_ptr<string> fcHttpTriggerUrl_ = nullptr;
    std::shared_ptr<string> fcRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
