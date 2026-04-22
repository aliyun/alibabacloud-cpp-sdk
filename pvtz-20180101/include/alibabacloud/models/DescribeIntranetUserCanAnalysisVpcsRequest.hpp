// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTRANETUSERCANANALYSISVPCSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTRANETUSERCANANALYSISVPCSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeIntranetUserCanAnalysisVpcsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIntranetUserCanAnalysisVpcsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryTreeLevel, queryTreeLevel_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpcOwner, vpcOwner_);
      DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIntranetUserCanAnalysisVpcsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryTreeLevel, queryTreeLevel_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpcOwner, vpcOwner_);
      DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
    };
    DescribeIntranetUserCanAnalysisVpcsRequest() = default ;
    DescribeIntranetUserCanAnalysisVpcsRequest(const DescribeIntranetUserCanAnalysisVpcsRequest &) = default ;
    DescribeIntranetUserCanAnalysisVpcsRequest(DescribeIntranetUserCanAnalysisVpcsRequest &&) = default ;
    DescribeIntranetUserCanAnalysisVpcsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIntranetUserCanAnalysisVpcsRequest() = default ;
    DescribeIntranetUserCanAnalysisVpcsRequest& operator=(const DescribeIntranetUserCanAnalysisVpcsRequest &) = default ;
    DescribeIntranetUserCanAnalysisVpcsRequest& operator=(DescribeIntranetUserCanAnalysisVpcsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkType_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->queryTreeLevel_ == nullptr && this->regionId_ == nullptr && this->vpcOwner_ == nullptr
        && this->vpcType_ == nullptr; };
    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeIntranetUserCanAnalysisVpcsRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIntranetUserCanAnalysisVpcsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIntranetUserCanAnalysisVpcsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryTreeLevel Field Functions 
    bool hasQueryTreeLevel() const { return this->queryTreeLevel_ != nullptr;};
    void deleteQueryTreeLevel() { this->queryTreeLevel_ = nullptr;};
    inline int32_t getQueryTreeLevel() const { DARABONBA_PTR_GET_DEFAULT(queryTreeLevel_, 0) };
    inline DescribeIntranetUserCanAnalysisVpcsRequest& setQueryTreeLevel(int32_t queryTreeLevel) { DARABONBA_PTR_SET_VALUE(queryTreeLevel_, queryTreeLevel) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeIntranetUserCanAnalysisVpcsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpcOwner Field Functions 
    bool hasVpcOwner() const { return this->vpcOwner_ != nullptr;};
    void deleteVpcOwner() { this->vpcOwner_ = nullptr;};
    inline int64_t getVpcOwner() const { DARABONBA_PTR_GET_DEFAULT(vpcOwner_, 0L) };
    inline DescribeIntranetUserCanAnalysisVpcsRequest& setVpcOwner(int64_t vpcOwner) { DARABONBA_PTR_SET_VALUE(vpcOwner_, vpcOwner) };


    // vpcType Field Functions 
    bool hasVpcType() const { return this->vpcType_ != nullptr;};
    void deleteVpcType() { this->vpcType_ = nullptr;};
    inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
    inline DescribeIntranetUserCanAnalysisVpcsRequest& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


  protected:
    shared_ptr<string> networkType_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int32_t> queryTreeLevel_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> vpcOwner_ {};
    shared_ptr<string> vpcType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
