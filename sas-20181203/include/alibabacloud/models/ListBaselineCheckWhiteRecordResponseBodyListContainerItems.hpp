// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDRESPONSEBODYLISTCONTAINERITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDRESPONSEBODYLISTCONTAINERITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListBaselineCheckWhiteRecordResponseBodyListContainerItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineCheckWhiteRecordResponseBodyListContainerItems& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerNames, containerNames_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineCheckWhiteRecordResponseBodyListContainerItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerNames, containerNames_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListBaselineCheckWhiteRecordResponseBodyListContainerItems() = default ;
    ListBaselineCheckWhiteRecordResponseBodyListContainerItems(const ListBaselineCheckWhiteRecordResponseBodyListContainerItems &) = default ;
    ListBaselineCheckWhiteRecordResponseBodyListContainerItems(ListBaselineCheckWhiteRecordResponseBodyListContainerItems &&) = default ;
    ListBaselineCheckWhiteRecordResponseBodyListContainerItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineCheckWhiteRecordResponseBodyListContainerItems() = default ;
    ListBaselineCheckWhiteRecordResponseBodyListContainerItems& operator=(const ListBaselineCheckWhiteRecordResponseBodyListContainerItems &) = default ;
    ListBaselineCheckWhiteRecordResponseBodyListContainerItems& operator=(ListBaselineCheckWhiteRecordResponseBodyListContainerItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerNames_ != nullptr
        && this->uuid_ != nullptr; };
    // containerNames Field Functions 
    bool hasContainerNames() const { return this->containerNames_ != nullptr;};
    void deleteContainerNames() { this->containerNames_ = nullptr;};
    inline string containerNames() const { DARABONBA_PTR_GET_DEFAULT(containerNames_, "") };
    inline ListBaselineCheckWhiteRecordResponseBodyListContainerItems& setContainerNames(string containerNames) { DARABONBA_PTR_SET_VALUE(containerNames_, containerNames) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListBaselineCheckWhiteRecordResponseBodyListContainerItems& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Names of the whitelisted containers for the current asset, separated by English commas.
    std::shared_ptr<string> containerNames_ = nullptr;
    // Server UUID.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
