// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTRESPONSEBODYITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTRESPONSEBODYITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeMetaSearchPageListResponseBodyItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaSearchPageListResponseBodyItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VehicleNum, vehicleNum_);
      DARABONBA_PTR_TO_JSON(VehicleType, vehicleType_);
      DARABONBA_PTR_TO_JSON(VehicleTypeName, vehicleTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaSearchPageListResponseBodyItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VehicleNum, vehicleNum_);
      DARABONBA_PTR_FROM_JSON(VehicleType, vehicleType_);
      DARABONBA_PTR_FROM_JSON(VehicleTypeName, vehicleTypeName_);
    };
    DescribeMetaSearchPageListResponseBodyItemsRequest() = default ;
    DescribeMetaSearchPageListResponseBodyItemsRequest(const DescribeMetaSearchPageListResponseBodyItemsRequest &) = default ;
    DescribeMetaSearchPageListResponseBodyItemsRequest(DescribeMetaSearchPageListResponseBodyItemsRequest &&) = default ;
    DescribeMetaSearchPageListResponseBodyItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaSearchPageListResponseBodyItemsRequest() = default ;
    DescribeMetaSearchPageListResponseBodyItemsRequest& operator=(const DescribeMetaSearchPageListResponseBodyItemsRequest &) = default ;
    DescribeMetaSearchPageListResponseBodyItemsRequest& operator=(DescribeMetaSearchPageListResponseBodyItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vehicleNum_ == nullptr
        && return this->vehicleType_ == nullptr && return this->vehicleTypeName_ == nullptr; };
    // vehicleNum Field Functions 
    bool hasVehicleNum() const { return this->vehicleNum_ != nullptr;};
    void deleteVehicleNum() { this->vehicleNum_ = nullptr;};
    inline string vehicleNum() const { DARABONBA_PTR_GET_DEFAULT(vehicleNum_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsRequest& setVehicleNum(string vehicleNum) { DARABONBA_PTR_SET_VALUE(vehicleNum_, vehicleNum) };


    // vehicleType Field Functions 
    bool hasVehicleType() const { return this->vehicleType_ != nullptr;};
    void deleteVehicleType() { this->vehicleType_ = nullptr;};
    inline string vehicleType() const { DARABONBA_PTR_GET_DEFAULT(vehicleType_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsRequest& setVehicleType(string vehicleType) { DARABONBA_PTR_SET_VALUE(vehicleType_, vehicleType) };


    // vehicleTypeName Field Functions 
    bool hasVehicleTypeName() const { return this->vehicleTypeName_ != nullptr;};
    void deleteVehicleTypeName() { this->vehicleTypeName_ = nullptr;};
    inline string vehicleTypeName() const { DARABONBA_PTR_GET_DEFAULT(vehicleTypeName_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsRequest& setVehicleTypeName(string vehicleTypeName) { DARABONBA_PTR_SET_VALUE(vehicleTypeName_, vehicleTypeName) };


  protected:
    std::shared_ptr<string> vehicleNum_ = nullptr;
    std::shared_ptr<string> vehicleType_ = nullptr;
    std::shared_ptr<string> vehicleTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
