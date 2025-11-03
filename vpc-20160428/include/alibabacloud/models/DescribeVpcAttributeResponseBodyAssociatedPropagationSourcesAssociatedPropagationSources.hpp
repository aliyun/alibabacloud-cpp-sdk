// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYASSOCIATEDPROPAGATIONSOURCESASSOCIATEDPROPAGATIONSOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYASSOCIATEDPROPAGATIONSOURCESASSOCIATEDPROPAGATIONSOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources& obj) { 
      DARABONBA_PTR_TO_JSON(RoutePropagated, routePropagated_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_TO_JSON(SourceOwnerId, sourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources& obj) { 
      DARABONBA_PTR_FROM_JSON(RoutePropagated, routePropagated_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(SourceOwnerId, sourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources() = default ;
    DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources(const DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources &) = default ;
    DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources(DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources &&) = default ;
    DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources() = default ;
    DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources& operator=(const DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources &) = default ;
    DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources& operator=(DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routePropagated_ == nullptr
        && return this->sourceInstanceId_ == nullptr && return this->sourceOwnerId_ == nullptr && return this->sourceType_ == nullptr && return this->status_ == nullptr; };
    // routePropagated Field Functions 
    bool hasRoutePropagated() const { return this->routePropagated_ != nullptr;};
    void deleteRoutePropagated() { this->routePropagated_ = nullptr;};
    inline bool routePropagated() const { DARABONBA_PTR_GET_DEFAULT(routePropagated_, false) };
    inline DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources& setRoutePropagated(bool routePropagated) { DARABONBA_PTR_SET_VALUE(routePropagated_, routePropagated) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string sourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    // sourceOwnerId Field Functions 
    bool hasSourceOwnerId() const { return this->sourceOwnerId_ != nullptr;};
    void deleteSourceOwnerId() { this->sourceOwnerId_ = nullptr;};
    inline int64_t sourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerId_, 0L) };
    inline DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources& setSourceOwnerId(int64_t sourceOwnerId) { DARABONBA_PTR_SET_VALUE(sourceOwnerId_, sourceOwnerId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpcAttributeResponseBodyAssociatedPropagationSourcesAssociatedPropagationSources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether routes are advertised to the VPC.
    std::shared_ptr<bool> routePropagated_ = nullptr;
    // The instance ID of the source.
    std::shared_ptr<string> sourceInstanceId_ = nullptr;
    // The account ID of the source.
    std::shared_ptr<int64_t> sourceOwnerId_ = nullptr;
    // The source type.
    // 
    // *   **CEN**
    // *   **VPN**
    // *   **TR**
    // *   **ECR**
    std::shared_ptr<string> sourceType_ = nullptr;
    // The binding status.
    // 
    // *   **Attaching**
    // *   **Attached**
    // *   **Detaching**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
