// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCloudDiskTypesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskTypesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskTypesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIdsShrink_);
    };
    DescribeCloudDiskTypesShrinkRequest() = default ;
    DescribeCloudDiskTypesShrinkRequest(const DescribeCloudDiskTypesShrinkRequest &) = default ;
    DescribeCloudDiskTypesShrinkRequest(DescribeCloudDiskTypesShrinkRequest &&) = default ;
    DescribeCloudDiskTypesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskTypesShrinkRequest() = default ;
    DescribeCloudDiskTypesShrinkRequest& operator=(const DescribeCloudDiskTypesShrinkRequest &) = default ;
    DescribeCloudDiskTypesShrinkRequest& operator=(DescribeCloudDiskTypesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionId_ != nullptr
        && this->ensRegionIdsShrink_ != nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeCloudDiskTypesShrinkRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIdsShrink Field Functions 
    bool hasEnsRegionIdsShrink() const { return this->ensRegionIdsShrink_ != nullptr;};
    void deleteEnsRegionIdsShrink() { this->ensRegionIdsShrink_ = nullptr;};
    inline string ensRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ensRegionIdsShrink_, "") };
    inline DescribeCloudDiskTypesShrinkRequest& setEnsRegionIdsShrink(string ensRegionIdsShrink) { DARABONBA_PTR_SET_VALUE(ensRegionIdsShrink_, ensRegionIdsShrink) };


  protected:
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The edge nodes.
    std::shared_ptr<string> ensRegionIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
