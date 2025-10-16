// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCELISTRESPONSEBODYNETWORKINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCELISTRESPONSEBODYNETWORKINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkInstanceListResponseBodyNetworkInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInstanceListResponseBodyNetworkInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInstanceListResponseBodyNetworkInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribeNetworkInstanceListResponseBodyNetworkInstanceList() = default ;
    DescribeNetworkInstanceListResponseBodyNetworkInstanceList(const DescribeNetworkInstanceListResponseBodyNetworkInstanceList &) = default ;
    DescribeNetworkInstanceListResponseBodyNetworkInstanceList(DescribeNetworkInstanceListResponseBodyNetworkInstanceList &&) = default ;
    DescribeNetworkInstanceListResponseBodyNetworkInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInstanceListResponseBodyNetworkInstanceList() = default ;
    DescribeNetworkInstanceListResponseBodyNetworkInstanceList& operator=(const DescribeNetworkInstanceListResponseBodyNetworkInstanceList &) = default ;
    DescribeNetworkInstanceListResponseBodyNetworkInstanceList& operator=(DescribeNetworkInstanceListResponseBodyNetworkInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkInstanceId_ == nullptr
        && return this->networkInstanceName_ == nullptr && return this->networkInstanceType_ == nullptr && return this->regionNo_ == nullptr; };
    // networkInstanceId Field Functions 
    bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
    void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
    inline string networkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
    inline DescribeNetworkInstanceListResponseBodyNetworkInstanceList& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


    // networkInstanceName Field Functions 
    bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
    void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
    inline string networkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
    inline DescribeNetworkInstanceListResponseBodyNetworkInstanceList& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


    // networkInstanceType Field Functions 
    bool hasNetworkInstanceType() const { return this->networkInstanceType_ != nullptr;};
    void deleteNetworkInstanceType() { this->networkInstanceType_ = nullptr;};
    inline string networkInstanceType() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceType_, "") };
    inline DescribeNetworkInstanceListResponseBodyNetworkInstanceList& setNetworkInstanceType(string networkInstanceType) { DARABONBA_PTR_SET_VALUE(networkInstanceType_, networkInstanceType) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeNetworkInstanceListResponseBodyNetworkInstanceList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    std::shared_ptr<string> networkInstanceId_ = nullptr;
    std::shared_ptr<string> networkInstanceName_ = nullptr;
    std::shared_ptr<string> networkInstanceType_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
