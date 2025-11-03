// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEENTRYREQUESTNEXTHOPLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEENTRYREQUESTNEXTHOPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateRouteEntryRequestNextHopList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteEntryRequestNextHopList& obj) { 
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteEntryRequestNextHopList& obj) { 
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateRouteEntryRequestNextHopList() = default ;
    CreateRouteEntryRequestNextHopList(const CreateRouteEntryRequestNextHopList &) = default ;
    CreateRouteEntryRequestNextHopList(CreateRouteEntryRequestNextHopList &&) = default ;
    CreateRouteEntryRequestNextHopList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteEntryRequestNextHopList() = default ;
    CreateRouteEntryRequestNextHopList& operator=(const CreateRouteEntryRequestNextHopList &) = default ;
    CreateRouteEntryRequestNextHopList& operator=(CreateRouteEntryRequestNextHopList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextHopId_ == nullptr
        && return this->nextHopType_ == nullptr && return this->weight_ == nullptr; };
    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string nextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline CreateRouteEntryRequestNextHopList& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline CreateRouteEntryRequestNextHopList& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateRouteEntryRequestNextHopList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The ID of the next hop of the ECMP route.
    std::shared_ptr<string> nextHopId_ = nullptr;
    // The type of next hop of the ECMP route entry. Set the value to **RouterInterface**.
    std::shared_ptr<string> nextHopType_ = nullptr;
    // The weight of the next hop of the ECMP route entry.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
