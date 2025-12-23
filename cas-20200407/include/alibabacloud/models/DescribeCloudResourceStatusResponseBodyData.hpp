// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribeCloudResourceStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourceStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CloudName, cloudName_);
      DARABONBA_PTR_TO_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourceStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudName, cloudName_);
      DARABONBA_PTR_FROM_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudResourceStatusResponseBodyData() = default ;
    DescribeCloudResourceStatusResponseBodyData(const DescribeCloudResourceStatusResponseBodyData &) = default ;
    DescribeCloudResourceStatusResponseBodyData(DescribeCloudResourceStatusResponseBodyData &&) = default ;
    DescribeCloudResourceStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourceStatusResponseBodyData() = default ;
    DescribeCloudResourceStatusResponseBodyData& operator=(const DescribeCloudResourceStatusResponseBodyData &) = default ;
    DescribeCloudResourceStatusResponseBodyData& operator=(DescribeCloudResourceStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudName_ == nullptr
        && return this->cloudProduct_ == nullptr && return this->totalCount_ == nullptr; };
    // cloudName Field Functions 
    bool hasCloudName() const { return this->cloudName_ != nullptr;};
    void deleteCloudName() { this->cloudName_ = nullptr;};
    inline string cloudName() const { DARABONBA_PTR_GET_DEFAULT(cloudName_, "") };
    inline DescribeCloudResourceStatusResponseBodyData& setCloudName(string cloudName) { DARABONBA_PTR_SET_VALUE(cloudName_, cloudName) };


    // cloudProduct Field Functions 
    bool hasCloudProduct() const { return this->cloudProduct_ != nullptr;};
    void deleteCloudProduct() { this->cloudProduct_ = nullptr;};
    inline string cloudProduct() const { DARABONBA_PTR_GET_DEFAULT(cloudProduct_, "") };
    inline DescribeCloudResourceStatusResponseBodyData& setCloudProduct(string cloudProduct) { DARABONBA_PTR_SET_VALUE(cloudProduct_, cloudProduct) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeCloudResourceStatusResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cloud service provider.
    std::shared_ptr<string> cloudName_ = nullptr;
    // The cloud service.
    std::shared_ptr<string> cloudProduct_ = nullptr;
    // The total number of cloud resources on which certificates are deployed.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
