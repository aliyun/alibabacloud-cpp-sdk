// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeVpcAccessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAccessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcAccessAttributes, vpcAccessAttributes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAccessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcAccessAttributes, vpcAccessAttributes_);
    };
    DescribeVpcAccessesResponseBody() = default ;
    DescribeVpcAccessesResponseBody(const DescribeVpcAccessesResponseBody &) = default ;
    DescribeVpcAccessesResponseBody(DescribeVpcAccessesResponseBody &&) = default ;
    DescribeVpcAccessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAccessesResponseBody() = default ;
    DescribeVpcAccessesResponseBody& operator=(const DescribeVpcAccessesResponseBody &) = default ;
    DescribeVpcAccessesResponseBody& operator=(DescribeVpcAccessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcAccessAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcAccessAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(VpcAccessAttribute, vpcAccessAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, VpcAccessAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(VpcAccessAttribute, vpcAccessAttribute_);
      };
      VpcAccessAttributes() = default ;
      VpcAccessAttributes(const VpcAccessAttributes &) = default ;
      VpcAccessAttributes(VpcAccessAttributes &&) = default ;
      VpcAccessAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcAccessAttributes() = default ;
      VpcAccessAttributes& operator=(const VpcAccessAttributes &) = default ;
      VpcAccessAttributes& operator=(VpcAccessAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpcAccessAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcAccessAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcAccessId, vpcAccessId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcTargetHostName, vpcTargetHostName_);
        };
        friend void from_json(const Darabonba::Json& j, VpcAccessAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcAccessId, vpcAccessId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcTargetHostName, vpcTargetHostName_);
        };
        VpcAccessAttribute() = default ;
        VpcAccessAttribute(const VpcAccessAttribute &) = default ;
        VpcAccessAttribute(VpcAccessAttribute &&) = default ;
        VpcAccessAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcAccessAttribute() = default ;
        VpcAccessAttribute& operator=(const VpcAccessAttribute &) = default ;
        VpcAccessAttribute& operator=(VpcAccessAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
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
          class TagInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagInfo() = default ;
            TagInfo(const TagInfo &) = default ;
            TagInfo(TagInfo &&) = default ;
            TagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagInfo() = default ;
            TagInfo& operator=(const TagInfo &) = default ;
            TagInfo& operator=(TagInfo &&) = default ;
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
            inline TagInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tagInfo_ == nullptr; };
          // tagInfo Field Functions 
          bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
          void deleteTagInfo() { this->tagInfo_ = nullptr;};
          inline const vector<Tags::TagInfo> & getTagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Tags::TagInfo>) };
          inline vector<Tags::TagInfo> getTagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Tags::TagInfo>) };
          inline Tags& setTagInfo(const vector<Tags::TagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
          inline Tags& setTagInfo(vector<Tags::TagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


        protected:
          shared_ptr<vector<Tags::TagInfo>> tagInfo_ {};
        };

        virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr
        && this->tags_ == nullptr && this->vpcAccessId_ == nullptr && this->vpcId_ == nullptr && this->vpcTargetHostName_ == nullptr; };
        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline VpcAccessAttribute& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VpcAccessAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline VpcAccessAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VpcAccessAttribute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline VpcAccessAttribute& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline VpcAccessAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const VpcAccessAttribute::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, VpcAccessAttribute::Tags) };
        inline VpcAccessAttribute::Tags getTags() { DARABONBA_PTR_GET(tags_, VpcAccessAttribute::Tags) };
        inline VpcAccessAttribute& setTags(const VpcAccessAttribute::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline VpcAccessAttribute& setTags(VpcAccessAttribute::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcAccessId Field Functions 
        bool hasVpcAccessId() const { return this->vpcAccessId_ != nullptr;};
        void deleteVpcAccessId() { this->vpcAccessId_ = nullptr;};
        inline string getVpcAccessId() const { DARABONBA_PTR_GET_DEFAULT(vpcAccessId_, "") };
        inline VpcAccessAttribute& setVpcAccessId(string vpcAccessId) { DARABONBA_PTR_SET_VALUE(vpcAccessId_, vpcAccessId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VpcAccessAttribute& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcTargetHostName Field Functions 
        bool hasVpcTargetHostName() const { return this->vpcTargetHostName_ != nullptr;};
        void deleteVpcTargetHostName() { this->vpcTargetHostName_ = nullptr;};
        inline string getVpcTargetHostName() const { DARABONBA_PTR_GET_DEFAULT(vpcTargetHostName_, "") };
        inline VpcAccessAttribute& setVpcTargetHostName(string vpcTargetHostName) { DARABONBA_PTR_SET_VALUE(vpcTargetHostName_, vpcTargetHostName) };


      protected:
        // The time when the authorization was created.
        shared_ptr<string> createdTime_ {};
        // The description of the VPC access authorization.
        shared_ptr<string> description_ {};
        // The ID of an Elastic Compute Service (ECS) or Server Load Balancer (SLB) instance in the VPC.
        shared_ptr<string> instanceId_ {};
        // The name of the authorization.
        shared_ptr<string> name_ {};
        // The port number that corresponds to the instance.
        shared_ptr<int32_t> port_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The tags.
        shared_ptr<VpcAccessAttribute::Tags> tags_ {};
        // The ID of the VPC access authorization.
        shared_ptr<string> vpcAccessId_ {};
        // The VPC ID.
        shared_ptr<string> vpcId_ {};
        // The host of the backend service.
        shared_ptr<string> vpcTargetHostName_ {};
      };

      virtual bool empty() const override { return this->vpcAccessAttribute_ == nullptr; };
      // vpcAccessAttribute Field Functions 
      bool hasVpcAccessAttribute() const { return this->vpcAccessAttribute_ != nullptr;};
      void deleteVpcAccessAttribute() { this->vpcAccessAttribute_ = nullptr;};
      inline const vector<VpcAccessAttributes::VpcAccessAttribute> & getVpcAccessAttribute() const { DARABONBA_PTR_GET_CONST(vpcAccessAttribute_, vector<VpcAccessAttributes::VpcAccessAttribute>) };
      inline vector<VpcAccessAttributes::VpcAccessAttribute> getVpcAccessAttribute() { DARABONBA_PTR_GET(vpcAccessAttribute_, vector<VpcAccessAttributes::VpcAccessAttribute>) };
      inline VpcAccessAttributes& setVpcAccessAttribute(const vector<VpcAccessAttributes::VpcAccessAttribute> & vpcAccessAttribute) { DARABONBA_PTR_SET_VALUE(vpcAccessAttribute_, vpcAccessAttribute) };
      inline VpcAccessAttributes& setVpcAccessAttribute(vector<VpcAccessAttributes::VpcAccessAttribute> && vpcAccessAttribute) { DARABONBA_PTR_SET_RVALUE(vpcAccessAttribute_, vpcAccessAttribute) };


    protected:
      shared_ptr<vector<VpcAccessAttributes::VpcAccessAttribute>> vpcAccessAttribute_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpcAccessAttributes_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpcAccessesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpcAccessesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcAccessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcAccessesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcAccessAttributes Field Functions 
    bool hasVpcAccessAttributes() const { return this->vpcAccessAttributes_ != nullptr;};
    void deleteVpcAccessAttributes() { this->vpcAccessAttributes_ = nullptr;};
    inline const DescribeVpcAccessesResponseBody::VpcAccessAttributes & getVpcAccessAttributes() const { DARABONBA_PTR_GET_CONST(vpcAccessAttributes_, DescribeVpcAccessesResponseBody::VpcAccessAttributes) };
    inline DescribeVpcAccessesResponseBody::VpcAccessAttributes getVpcAccessAttributes() { DARABONBA_PTR_GET(vpcAccessAttributes_, DescribeVpcAccessesResponseBody::VpcAccessAttributes) };
    inline DescribeVpcAccessesResponseBody& setVpcAccessAttributes(const DescribeVpcAccessesResponseBody::VpcAccessAttributes & vpcAccessAttributes) { DARABONBA_PTR_SET_VALUE(vpcAccessAttributes_, vpcAccessAttributes) };
    inline DescribeVpcAccessesResponseBody& setVpcAccessAttributes(DescribeVpcAccessesResponseBody::VpcAccessAttributes && vpcAccessAttributes) { DARABONBA_PTR_SET_RVALUE(vpcAccessAttributes_, vpcAccessAttributes) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the VPC access authorization. The information is an array consisting of VpcAccessAttribute data.
    shared_ptr<DescribeVpcAccessesResponseBody::VpcAccessAttributes> vpcAccessAttributes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
