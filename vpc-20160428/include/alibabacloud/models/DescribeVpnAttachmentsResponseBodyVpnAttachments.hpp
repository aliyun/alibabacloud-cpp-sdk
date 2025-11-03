// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNATTACHMENTSRESPONSEBODYVPNATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNATTACHMENTSRESPONSEBODYVPNATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnAttachmentsResponseBodyVpnAttachmentsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnAttachmentsResponseBodyVpnAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnAttachmentsResponseBodyVpnAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(AttachType, attachType_);
      DARABONBA_PTR_TO_JSON(CrossAccountAuthorized, crossAccountAuthorized_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterName, transitRouterName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnAttachmentsResponseBodyVpnAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachType, attachType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountAuthorized, crossAccountAuthorized_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterName, transitRouterName_);
    };
    DescribeVpnAttachmentsResponseBodyVpnAttachments() = default ;
    DescribeVpnAttachmentsResponseBodyVpnAttachments(const DescribeVpnAttachmentsResponseBodyVpnAttachments &) = default ;
    DescribeVpnAttachmentsResponseBodyVpnAttachments(DescribeVpnAttachmentsResponseBodyVpnAttachments &&) = default ;
    DescribeVpnAttachmentsResponseBodyVpnAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnAttachmentsResponseBodyVpnAttachments() = default ;
    DescribeVpnAttachmentsResponseBodyVpnAttachments& operator=(const DescribeVpnAttachmentsResponseBodyVpnAttachments &) = default ;
    DescribeVpnAttachmentsResponseBodyVpnAttachments& operator=(DescribeVpnAttachmentsResponseBodyVpnAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachType_ == nullptr
        && return this->crossAccountAuthorized_ == nullptr && return this->description_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->tag_ == nullptr
        && return this->tags_ == nullptr && return this->transitRouterId_ == nullptr && return this->transitRouterName_ == nullptr; };
    // attachType Field Functions 
    bool hasAttachType() const { return this->attachType_ != nullptr;};
    void deleteAttachType() { this->attachType_ = nullptr;};
    inline string attachType() const { DARABONBA_PTR_GET_DEFAULT(attachType_, "") };
    inline DescribeVpnAttachmentsResponseBodyVpnAttachments& setAttachType(string attachType) { DARABONBA_PTR_SET_VALUE(attachType_, attachType) };


    // crossAccountAuthorized Field Functions 
    bool hasCrossAccountAuthorized() const { return this->crossAccountAuthorized_ != nullptr;};
    void deleteCrossAccountAuthorized() { this->crossAccountAuthorized_ = nullptr;};
    inline bool crossAccountAuthorized() const { DARABONBA_PTR_GET_DEFAULT(crossAccountAuthorized_, false) };
    inline DescribeVpnAttachmentsResponseBodyVpnAttachments& setCrossAccountAuthorized(bool crossAccountAuthorized) { DARABONBA_PTR_SET_VALUE(crossAccountAuthorized_, crossAccountAuthorized) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVpnAttachmentsResponseBodyVpnAttachments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVpnAttachmentsResponseBodyVpnAttachments& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVpnAttachmentsResponseBodyVpnAttachments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeVpnAttachmentsResponseBodyVpnAttachments& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeVpnAttachmentsResponseBodyVpnAttachmentsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeVpnAttachmentsResponseBodyVpnAttachmentsTags>) };
    inline vector<Models::DescribeVpnAttachmentsResponseBodyVpnAttachmentsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeVpnAttachmentsResponseBodyVpnAttachmentsTags>) };
    inline DescribeVpnAttachmentsResponseBodyVpnAttachments& setTags(const vector<Models::DescribeVpnAttachmentsResponseBodyVpnAttachmentsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVpnAttachmentsResponseBodyVpnAttachments& setTags(vector<Models::DescribeVpnAttachmentsResponseBodyVpnAttachmentsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeVpnAttachmentsResponseBodyVpnAttachments& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterName Field Functions 
    bool hasTransitRouterName() const { return this->transitRouterName_ != nullptr;};
    void deleteTransitRouterName() { this->transitRouterName_ = nullptr;};
    inline string transitRouterName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterName_, "") };
    inline DescribeVpnAttachmentsResponseBodyVpnAttachments& setTransitRouterName(string transitRouterName) { DARABONBA_PTR_SET_VALUE(transitRouterName_, transitRouterName) };


  protected:
    // The type of resource that is associated with the IPsec-VPN connection. The value is set to **CEN**, which indicates that the IPsec-VPN connection is associated with a transit router.
    std::shared_ptr<string> attachType_ = nullptr;
    // Indicates whether the IPsec-VPN connection is associated with a transit router that belongs to another Alibaba Cloud account. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> crossAccountAuthorized_ = nullptr;
    // The description of the IPsec-VPN connection.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the IPsec-VPN connection.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the IPsec-VPN connection.
    std::shared_ptr<string> name_ = nullptr;
    // The system tags of the IPsec-VPN connection.
    // 
    // You can check whether an IPsec-VPN connection supports BGP based on the system tags.
    // 
    // **BGPSupport**: indicates whether the IPsec-VPN connection supports BGP.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> tag_ = nullptr;
    // The list of tags to be added to the IPsec-VPN connection.
    std::shared_ptr<vector<Models::DescribeVpnAttachmentsResponseBodyVpnAttachmentsTags>> tags_ = nullptr;
    // The ID of the transit router with which the IPsec-VPN connection is associated.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The name of the transit router.
    std::shared_ptr<string> transitRouterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
