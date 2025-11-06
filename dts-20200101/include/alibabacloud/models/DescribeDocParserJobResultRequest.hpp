// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCPARSERJOBRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCPARSERJOBRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDocParserJobResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocParserJobResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(RagInstanceId, ragInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocParserJobResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(RagInstanceId, ragInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeDocParserJobResultRequest() = default ;
    DescribeDocParserJobResultRequest(const DescribeDocParserJobResultRequest &) = default ;
    DescribeDocParserJobResultRequest(DescribeDocParserJobResultRequest &&) = default ;
    DescribeDocParserJobResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocParserJobResultRequest() = default ;
    DescribeDocParserJobResultRequest& operator=(const DescribeDocParserJobResultRequest &) = default ;
    DescribeDocParserJobResultRequest& operator=(DescribeDocParserJobResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsJobId_ == nullptr
        && return this->ragInstanceId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDocParserJobResultRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // ragInstanceId Field Functions 
    bool hasRagInstanceId() const { return this->ragInstanceId_ != nullptr;};
    void deleteRagInstanceId() { this->ragInstanceId_ = nullptr;};
    inline string ragInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ragInstanceId_, "") };
    inline DescribeDocParserJobResultRequest& setRagInstanceId(string ragInstanceId) { DARABONBA_PTR_SET_VALUE(ragInstanceId_, ragInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDocParserJobResultRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDocParserJobResultRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    std::shared_ptr<string> dtsJobId_ = nullptr;
    std::shared_ptr<string> ragInstanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
