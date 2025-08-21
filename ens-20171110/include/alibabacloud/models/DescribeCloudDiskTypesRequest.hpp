// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCloudDiskTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
    };
    DescribeCloudDiskTypesRequest() = default ;
    DescribeCloudDiskTypesRequest(const DescribeCloudDiskTypesRequest &) = default ;
    DescribeCloudDiskTypesRequest(DescribeCloudDiskTypesRequest &&) = default ;
    DescribeCloudDiskTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskTypesRequest() = default ;
    DescribeCloudDiskTypesRequest& operator=(const DescribeCloudDiskTypesRequest &) = default ;
    DescribeCloudDiskTypesRequest& operator=(DescribeCloudDiskTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionId_ != nullptr
        && this->ensRegionIds_ != nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeCloudDiskTypesRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline const vector<string> & ensRegionIds() const { DARABONBA_PTR_GET_CONST(ensRegionIds_, vector<string>) };
    inline vector<string> ensRegionIds() { DARABONBA_PTR_GET(ensRegionIds_, vector<string>) };
    inline DescribeCloudDiskTypesRequest& setEnsRegionIds(const vector<string> & ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };
    inline DescribeCloudDiskTypesRequest& setEnsRegionIds(vector<string> && ensRegionIds) { DARABONBA_PTR_SET_RVALUE(ensRegionIds_, ensRegionIds) };


  protected:
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The edge nodes.
    std::shared_ptr<vector<string>> ensRegionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
