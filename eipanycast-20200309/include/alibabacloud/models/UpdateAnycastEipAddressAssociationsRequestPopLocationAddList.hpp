// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANYCASTEIPADDRESSASSOCIATIONSREQUESTPOPLOCATIONADDLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANYCASTEIPADDRESSASSOCIATIONSREQUESTPOPLOCATIONADDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class UpdateAnycastEipAddressAssociationsRequestPopLocationAddList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAnycastEipAddressAssociationsRequestPopLocationAddList& obj) { 
      DARABONBA_PTR_TO_JSON(PopLocation, popLocation_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAnycastEipAddressAssociationsRequestPopLocationAddList& obj) { 
      DARABONBA_PTR_FROM_JSON(PopLocation, popLocation_);
    };
    UpdateAnycastEipAddressAssociationsRequestPopLocationAddList() = default ;
    UpdateAnycastEipAddressAssociationsRequestPopLocationAddList(const UpdateAnycastEipAddressAssociationsRequestPopLocationAddList &) = default ;
    UpdateAnycastEipAddressAssociationsRequestPopLocationAddList(UpdateAnycastEipAddressAssociationsRequestPopLocationAddList &&) = default ;
    UpdateAnycastEipAddressAssociationsRequestPopLocationAddList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAnycastEipAddressAssociationsRequestPopLocationAddList() = default ;
    UpdateAnycastEipAddressAssociationsRequestPopLocationAddList& operator=(const UpdateAnycastEipAddressAssociationsRequestPopLocationAddList &) = default ;
    UpdateAnycastEipAddressAssociationsRequestPopLocationAddList& operator=(UpdateAnycastEipAddressAssociationsRequestPopLocationAddList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->popLocation_ == nullptr; };
    // popLocation Field Functions 
    bool hasPopLocation() const { return this->popLocation_ != nullptr;};
    void deletePopLocation() { this->popLocation_ = nullptr;};
    inline string popLocation() const { DARABONBA_PTR_GET_DEFAULT(popLocation_, "") };
    inline UpdateAnycastEipAddressAssociationsRequestPopLocationAddList& setPopLocation(string popLocation) { DARABONBA_PTR_SET_VALUE(popLocation_, popLocation) };


  protected:
    // The access points in the access areas to be added.
    // 
    // You can call the [DescribeAnycastPopLocations](https://help.aliyun.com/document_detail/171938.html) operation to query the access points in supported access areas.
    std::shared_ptr<string> popLocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
