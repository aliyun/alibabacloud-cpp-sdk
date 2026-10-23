// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERCAPACITYRESERVATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERCAPACITYRESERVATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeTransitRouterCapacityReservationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouterCapacityReservationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouterCapacityReservationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeTransitRouterCapacityReservationsRequest() = default ;
    DescribeTransitRouterCapacityReservationsRequest(const DescribeTransitRouterCapacityReservationsRequest &) = default ;
    DescribeTransitRouterCapacityReservationsRequest(DescribeTransitRouterCapacityReservationsRequest &&) = default ;
    DescribeTransitRouterCapacityReservationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouterCapacityReservationsRequest() = default ;
    DescribeTransitRouterCapacityReservationsRequest& operator=(const DescribeTransitRouterCapacityReservationsRequest &) = default ;
    DescribeTransitRouterCapacityReservationsRequest& operator=(DescribeTransitRouterCapacityReservationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transitRouterId_ == nullptr
        && this->version_ == nullptr; };
    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeTransitRouterCapacityReservationsRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeTransitRouterCapacityReservationsRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // This parameter is required.
    shared_ptr<string> transitRouterId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
