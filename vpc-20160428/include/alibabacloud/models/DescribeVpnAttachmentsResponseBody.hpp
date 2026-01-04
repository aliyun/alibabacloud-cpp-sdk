// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNATTACHMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnAttachments, vpnAttachments_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnAttachments, vpnAttachments_);
    };
    DescribeVpnAttachmentsResponseBody() = default ;
    DescribeVpnAttachmentsResponseBody(const DescribeVpnAttachmentsResponseBody &) = default ;
    DescribeVpnAttachmentsResponseBody(DescribeVpnAttachmentsResponseBody &&) = default ;
    DescribeVpnAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnAttachmentsResponseBody() = default ;
    DescribeVpnAttachmentsResponseBody& operator=(const DescribeVpnAttachmentsResponseBody &) = default ;
    DescribeVpnAttachmentsResponseBody& operator=(DescribeVpnAttachmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpnAttachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpnAttachments& obj) { 
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
      friend void from_json(const Darabonba::Json& j, VpnAttachments& obj) { 
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
      VpnAttachments() = default ;
      VpnAttachments(const VpnAttachments &) = default ;
      VpnAttachments(VpnAttachments &&) = default ;
      VpnAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpnAttachments() = default ;
      VpnAttachments& operator=(const VpnAttachments &) = default ;
      VpnAttachments& operator=(VpnAttachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the IPsec-VPN connection.
        shared_ptr<string> key_ {};
        // The tag value of the IPsec-VPN connection.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->attachType_ == nullptr
        && this->crossAccountAuthorized_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->tag_ == nullptr
        && this->tags_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterName_ == nullptr; };
      // attachType Field Functions 
      bool hasAttachType() const { return this->attachType_ != nullptr;};
      void deleteAttachType() { this->attachType_ = nullptr;};
      inline string getAttachType() const { DARABONBA_PTR_GET_DEFAULT(attachType_, "") };
      inline VpnAttachments& setAttachType(string attachType) { DARABONBA_PTR_SET_VALUE(attachType_, attachType) };


      // crossAccountAuthorized Field Functions 
      bool hasCrossAccountAuthorized() const { return this->crossAccountAuthorized_ != nullptr;};
      void deleteCrossAccountAuthorized() { this->crossAccountAuthorized_ = nullptr;};
      inline bool getCrossAccountAuthorized() const { DARABONBA_PTR_GET_DEFAULT(crossAccountAuthorized_, false) };
      inline VpnAttachments& setCrossAccountAuthorized(bool crossAccountAuthorized) { DARABONBA_PTR_SET_VALUE(crossAccountAuthorized_, crossAccountAuthorized) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline VpnAttachments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline VpnAttachments& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VpnAttachments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline VpnAttachments& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<VpnAttachments::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<VpnAttachments::Tags>) };
      inline vector<VpnAttachments::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<VpnAttachments::Tags>) };
      inline VpnAttachments& setTags(const vector<VpnAttachments::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline VpnAttachments& setTags(vector<VpnAttachments::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline VpnAttachments& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


      // transitRouterName Field Functions 
      bool hasTransitRouterName() const { return this->transitRouterName_ != nullptr;};
      void deleteTransitRouterName() { this->transitRouterName_ = nullptr;};
      inline string getTransitRouterName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterName_, "") };
      inline VpnAttachments& setTransitRouterName(string transitRouterName) { DARABONBA_PTR_SET_VALUE(transitRouterName_, transitRouterName) };


    protected:
      // The type of resource that is associated with the IPsec-VPN connection. The value is set to **CEN**, which indicates that the IPsec-VPN connection is associated with a transit router.
      shared_ptr<string> attachType_ {};
      // Indicates whether the IPsec-VPN connection is associated with a transit router that belongs to another Alibaba Cloud account. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> crossAccountAuthorized_ {};
      // The description of the IPsec-VPN connection.
      shared_ptr<string> description_ {};
      // The ID of the IPsec-VPN connection.
      shared_ptr<string> instanceId_ {};
      // The name of the IPsec-VPN connection.
      shared_ptr<string> name_ {};
      // The system tags of the IPsec-VPN connection.
      // 
      // You can check whether an IPsec-VPN connection supports BGP based on the system tags.
      // 
      // **BGPSupport**: indicates whether the IPsec-VPN connection supports BGP.
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> tag_ {};
      // The list of tags to be added to the IPsec-VPN connection.
      shared_ptr<vector<VpnAttachments::Tags>> tags_ {};
      // The ID of the transit router with which the IPsec-VPN connection is associated.
      shared_ptr<string> transitRouterId_ {};
      // The name of the transit router.
      shared_ptr<string> transitRouterName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpnAttachments_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnAttachmentsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnAttachmentsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpnAttachmentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnAttachments Field Functions 
    bool hasVpnAttachments() const { return this->vpnAttachments_ != nullptr;};
    void deleteVpnAttachments() { this->vpnAttachments_ = nullptr;};
    inline const vector<DescribeVpnAttachmentsResponseBody::VpnAttachments> & getVpnAttachments() const { DARABONBA_PTR_GET_CONST(vpnAttachments_, vector<DescribeVpnAttachmentsResponseBody::VpnAttachments>) };
    inline vector<DescribeVpnAttachmentsResponseBody::VpnAttachments> getVpnAttachments() { DARABONBA_PTR_GET(vpnAttachments_, vector<DescribeVpnAttachmentsResponseBody::VpnAttachments>) };
    inline DescribeVpnAttachmentsResponseBody& setVpnAttachments(const vector<DescribeVpnAttachmentsResponseBody::VpnAttachments> & vpnAttachments) { DARABONBA_PTR_SET_VALUE(vpnAttachments_, vpnAttachments) };
    inline DescribeVpnAttachmentsResponseBody& setVpnAttachments(vector<DescribeVpnAttachmentsResponseBody::VpnAttachments> && vpnAttachments) { DARABONBA_PTR_SET_RVALUE(vpnAttachments_, vpnAttachments) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
    // The list of IPsec-VPN connections associated with the transit router.
    shared_ptr<vector<DescribeVpnAttachmentsResponseBody::VpnAttachments>> vpnAttachments_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
