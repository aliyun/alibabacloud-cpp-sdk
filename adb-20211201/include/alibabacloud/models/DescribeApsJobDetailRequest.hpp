// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSJOBDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSJOBDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsJobDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsJobDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApsJobId, apsJobId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsJobDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsJobId, apsJobId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeApsJobDetailRequest() = default ;
    DescribeApsJobDetailRequest(const DescribeApsJobDetailRequest &) = default ;
    DescribeApsJobDetailRequest(DescribeApsJobDetailRequest &&) = default ;
    DescribeApsJobDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsJobDetailRequest() = default ;
    DescribeApsJobDetailRequest& operator=(const DescribeApsJobDetailRequest &) = default ;
    DescribeApsJobDetailRequest& operator=(DescribeApsJobDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apsJobId_ != nullptr
        && this->regionId_ != nullptr; };
    // apsJobId Field Functions 
    bool hasApsJobId() const { return this->apsJobId_ != nullptr;};
    void deleteApsJobId() { this->apsJobId_ = nullptr;};
    inline string apsJobId() const { DARABONBA_PTR_GET_DEFAULT(apsJobId_, "") };
    inline DescribeApsJobDetailRequest& setApsJobId(string apsJobId) { DARABONBA_PTR_SET_VALUE(apsJobId_, apsJobId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApsJobDetailRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The job ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> apsJobId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
