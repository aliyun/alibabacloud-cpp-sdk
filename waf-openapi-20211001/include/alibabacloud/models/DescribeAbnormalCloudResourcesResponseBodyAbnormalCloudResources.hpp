// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABNORMALCLOUDRESOURCESRESPONSEBODYABNORMALCLOUDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABNORMALCLOUDRESOURCESRESPONSEBODYABNORMALCLOUDRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceInstancePort, resourceInstancePort_);
      DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceInstancePort, resourceInstancePort_);
      DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
    };
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources() = default ;
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources(const DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources &) = default ;
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources(DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources &&) = default ;
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources() = default ;
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources& operator=(const DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources &) = default ;
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources& operator=(DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->details_ != nullptr
        && this->reason_ != nullptr && this->resourceInstanceId_ != nullptr && this->resourceInstanceName_ != nullptr && this->resourceInstancePort_ != nullptr && this->resourceProduct_ != nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails>) };
    inline vector<Models::DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails>) };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources& setDetails(const vector<Models::DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources& setDetails(vector<Models::DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceInstanceName Field Functions 
    bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
    void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
    inline string resourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


    // resourceInstancePort Field Functions 
    bool hasResourceInstancePort() const { return this->resourceInstancePort_ != nullptr;};
    void deleteResourceInstancePort() { this->resourceInstancePort_ = nullptr;};
    inline int32_t resourceInstancePort() const { DARABONBA_PTR_GET_DEFAULT(resourceInstancePort_, 0) };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources& setResourceInstancePort(int32_t resourceInstancePort) { DARABONBA_PTR_SET_VALUE(resourceInstancePort_, resourceInstancePort) };


    // resourceProduct Field Functions 
    bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
    void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
    inline string resourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResources& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


  protected:
    std::shared_ptr<vector<Models::DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails>> details_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    std::shared_ptr<string> resourceInstanceName_ = nullptr;
    std::shared_ptr<int32_t> resourceInstancePort_ = nullptr;
    std::shared_ptr<string> resourceProduct_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
