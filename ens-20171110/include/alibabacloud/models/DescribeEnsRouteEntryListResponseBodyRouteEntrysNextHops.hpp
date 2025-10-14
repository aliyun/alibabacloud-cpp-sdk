// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSROUTEENTRYLISTRESPONSEBODYROUTEENTRYSNEXTHOPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSROUTEENTRYLISTRESPONSEBODYROUTEENTRYSNEXTHOPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops& obj) { 
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopName, nextHopName_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops& obj) { 
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopName, nextHopName_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
    };
    DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops() = default ;
    DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops(const DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops &) = default ;
    DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops(DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops &&) = default ;
    DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops() = default ;
    DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops& operator=(const DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops &) = default ;
    DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops& operator=(DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextHopId_ == nullptr
        && return this->nextHopName_ == nullptr && return this->nextHopType_ == nullptr; };
    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string nextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopName Field Functions 
    bool hasNextHopName() const { return this->nextHopName_ != nullptr;};
    void deleteNextHopName() { this->nextHopName_ = nullptr;};
    inline string nextHopName() const { DARABONBA_PTR_GET_DEFAULT(nextHopName_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops& setNextHopName(string nextHopName) { DARABONBA_PTR_SET_VALUE(nextHopName_, nextHopName) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


  protected:
    // The ID of the next hop.
    std::shared_ptr<string> nextHopId_ = nullptr;
    // The instance ID of the next hop.
    std::shared_ptr<string> nextHopName_ = nullptr;
    // The type of the next hop. Valid values:
    std::shared_ptr<string> nextHopType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
