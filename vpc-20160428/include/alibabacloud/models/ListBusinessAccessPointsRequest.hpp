// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUSINESSACCESSPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBUSINESSACCESSPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListBusinessAccessPointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBusinessAccessPointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBusinessAccessPointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListBusinessAccessPointsRequest() = default ;
    ListBusinessAccessPointsRequest(const ListBusinessAccessPointsRequest &) = default ;
    ListBusinessAccessPointsRequest(ListBusinessAccessPointsRequest &&) = default ;
    ListBusinessAccessPointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBusinessAccessPointsRequest() = default ;
    ListBusinessAccessPointsRequest& operator=(const ListBusinessAccessPointsRequest &) = default ;
    ListBusinessAccessPointsRequest& operator=(ListBusinessAccessPointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListBusinessAccessPointsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
