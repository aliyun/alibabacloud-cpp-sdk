// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTEENTRYREQUESTNEXTHOPLIST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTEENTRYREQUESTNEXTHOPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DeleteRouteEntryRequestNextHopList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRouteEntryRequestNextHopList& obj) { 
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRouteEntryRequestNextHopList& obj) { 
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
    };
    DeleteRouteEntryRequestNextHopList() = default ;
    DeleteRouteEntryRequestNextHopList(const DeleteRouteEntryRequestNextHopList &) = default ;
    DeleteRouteEntryRequestNextHopList(DeleteRouteEntryRequestNextHopList &&) = default ;
    DeleteRouteEntryRequestNextHopList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRouteEntryRequestNextHopList() = default ;
    DeleteRouteEntryRequestNextHopList& operator=(const DeleteRouteEntryRequestNextHopList &) = default ;
    DeleteRouteEntryRequestNextHopList& operator=(DeleteRouteEntryRequestNextHopList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextHopId_ == nullptr
        && return this->nextHopType_ == nullptr; };
    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string nextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline DeleteRouteEntryRequestNextHopList& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline DeleteRouteEntryRequestNextHopList& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


  protected:
    // The ID of the next hop that is configured for ECMP routing. You can specify information about at most 16 next hops.
    std::shared_ptr<string> nextHopId_ = nullptr;
    // The type of the next hop that is configured for ECMP routing. Set the value to **RouterInterface**. You can specify information about at most 16 next hops.
    std::shared_ptr<string> nextHopType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
