// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANYCASTEIPADDRESSASSOCIATIONSREQUESTPOPLOCATIONDELETELIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANYCASTEIPADDRESSASSOCIATIONSREQUESTPOPLOCATIONDELETELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList& obj) { 
      DARABONBA_PTR_TO_JSON(PopLocation, popLocation_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList& obj) { 
      DARABONBA_PTR_FROM_JSON(PopLocation, popLocation_);
    };
    UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList() = default ;
    UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList(const UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList &) = default ;
    UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList(UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList &&) = default ;
    UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList() = default ;
    UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList& operator=(const UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList &) = default ;
    UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList& operator=(UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->popLocation_ == nullptr; };
    // popLocation Field Functions 
    bool hasPopLocation() const { return this->popLocation_ != nullptr;};
    void deletePopLocation() { this->popLocation_ = nullptr;};
    inline string popLocation() const { DARABONBA_PTR_GET_DEFAULT(popLocation_, "") };
    inline UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList& setPopLocation(string popLocation) { DARABONBA_PTR_SET_VALUE(popLocation_, popLocation) };


  protected:
    // The access points in the access areas to be deleted.
    // 
    // >  If the access point in the access area is associated with a default origin server, you cannot delete the access point in the access area.
    std::shared_ptr<string> popLocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
