// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDCONNECTNETWORKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDCONNECTNETWORKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeCloudConnectNetworksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudConnectNetworksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudConnectNetworks, cloudConnectNetworks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudConnectNetworksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudConnectNetworks, cloudConnectNetworks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudConnectNetworksResponseBody() = default ;
    DescribeCloudConnectNetworksResponseBody(const DescribeCloudConnectNetworksResponseBody &) = default ;
    DescribeCloudConnectNetworksResponseBody(DescribeCloudConnectNetworksResponseBody &&) = default ;
    DescribeCloudConnectNetworksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudConnectNetworksResponseBody() = default ;
    DescribeCloudConnectNetworksResponseBody& operator=(const DescribeCloudConnectNetworksResponseBody &) = default ;
    DescribeCloudConnectNetworksResponseBody& operator=(DescribeCloudConnectNetworksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudConnectNetworks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudConnectNetworks& obj) { 
        DARABONBA_PTR_TO_JSON(CloudConnectNetwork, cloudConnectNetwork_);
      };
      friend void from_json(const Darabonba::Json& j, CloudConnectNetworks& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudConnectNetwork, cloudConnectNetwork_);
      };
      CloudConnectNetworks() = default ;
      CloudConnectNetworks(const CloudConnectNetworks &) = default ;
      CloudConnectNetworks(CloudConnectNetworks &&) = default ;
      CloudConnectNetworks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudConnectNetworks() = default ;
      CloudConnectNetworks& operator=(const CloudConnectNetworks &) = default ;
      CloudConnectNetworks& operator=(CloudConnectNetworks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudConnectNetwork : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudConnectNetwork& obj) { 
          DARABONBA_PTR_TO_JSON(AssociatedCenId, associatedCenId_);
          DARABONBA_PTR_TO_JSON(AssociatedCenOwnerId, associatedCenOwnerId_);
          DARABONBA_PTR_TO_JSON(AssociatedCloudBoxCount, associatedCloudBoxCount_);
          DARABONBA_PTR_TO_JSON(AvailableCloudBoxCount, availableCloudBoxCount_);
          DARABONBA_PTR_TO_JSON(CcnId, ccnId_);
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InterworkingStatus, interworkingStatus_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NewAgw, newAgw_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SnatCidrBlock, snatCidrBlock_);
          DARABONBA_PTR_TO_JSON(Subnet, subnet_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, CloudConnectNetwork& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociatedCenId, associatedCenId_);
          DARABONBA_PTR_FROM_JSON(AssociatedCenOwnerId, associatedCenOwnerId_);
          DARABONBA_PTR_FROM_JSON(AssociatedCloudBoxCount, associatedCloudBoxCount_);
          DARABONBA_PTR_FROM_JSON(AvailableCloudBoxCount, availableCloudBoxCount_);
          DARABONBA_PTR_FROM_JSON(CcnId, ccnId_);
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InterworkingStatus, interworkingStatus_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NewAgw, newAgw_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SnatCidrBlock, snatCidrBlock_);
          DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        CloudConnectNetwork() = default ;
        CloudConnectNetwork(const CloudConnectNetwork &) = default ;
        CloudConnectNetwork(CloudConnectNetwork &&) = default ;
        CloudConnectNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudConnectNetwork() = default ;
        CloudConnectNetwork& operator=(const CloudConnectNetwork &) = default ;
        CloudConnectNetwork& operator=(CloudConnectNetwork &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->associatedCenId_ == nullptr
        && this->associatedCenOwnerId_ == nullptr && this->associatedCloudBoxCount_ == nullptr && this->availableCloudBoxCount_ == nullptr && this->ccnId_ == nullptr && this->cidrBlock_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->interworkingStatus_ == nullptr && this->name_ == nullptr && this->newAgw_ == nullptr
        && this->resourceGroupId_ == nullptr && this->snatCidrBlock_ == nullptr && this->subnet_ == nullptr && this->tags_ == nullptr; };
        // associatedCenId Field Functions 
        bool hasAssociatedCenId() const { return this->associatedCenId_ != nullptr;};
        void deleteAssociatedCenId() { this->associatedCenId_ = nullptr;};
        inline string getAssociatedCenId() const { DARABONBA_PTR_GET_DEFAULT(associatedCenId_, "") };
        inline CloudConnectNetwork& setAssociatedCenId(string associatedCenId) { DARABONBA_PTR_SET_VALUE(associatedCenId_, associatedCenId) };


        // associatedCenOwnerId Field Functions 
        bool hasAssociatedCenOwnerId() const { return this->associatedCenOwnerId_ != nullptr;};
        void deleteAssociatedCenOwnerId() { this->associatedCenOwnerId_ = nullptr;};
        inline string getAssociatedCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(associatedCenOwnerId_, "") };
        inline CloudConnectNetwork& setAssociatedCenOwnerId(string associatedCenOwnerId) { DARABONBA_PTR_SET_VALUE(associatedCenOwnerId_, associatedCenOwnerId) };


        // associatedCloudBoxCount Field Functions 
        bool hasAssociatedCloudBoxCount() const { return this->associatedCloudBoxCount_ != nullptr;};
        void deleteAssociatedCloudBoxCount() { this->associatedCloudBoxCount_ = nullptr;};
        inline string getAssociatedCloudBoxCount() const { DARABONBA_PTR_GET_DEFAULT(associatedCloudBoxCount_, "") };
        inline CloudConnectNetwork& setAssociatedCloudBoxCount(string associatedCloudBoxCount) { DARABONBA_PTR_SET_VALUE(associatedCloudBoxCount_, associatedCloudBoxCount) };


        // availableCloudBoxCount Field Functions 
        bool hasAvailableCloudBoxCount() const { return this->availableCloudBoxCount_ != nullptr;};
        void deleteAvailableCloudBoxCount() { this->availableCloudBoxCount_ = nullptr;};
        inline string getAvailableCloudBoxCount() const { DARABONBA_PTR_GET_DEFAULT(availableCloudBoxCount_, "") };
        inline CloudConnectNetwork& setAvailableCloudBoxCount(string availableCloudBoxCount) { DARABONBA_PTR_SET_VALUE(availableCloudBoxCount_, availableCloudBoxCount) };


        // ccnId Field Functions 
        bool hasCcnId() const { return this->ccnId_ != nullptr;};
        void deleteCcnId() { this->ccnId_ = nullptr;};
        inline string getCcnId() const { DARABONBA_PTR_GET_DEFAULT(ccnId_, "") };
        inline CloudConnectNetwork& setCcnId(string ccnId) { DARABONBA_PTR_SET_VALUE(ccnId_, ccnId) };


        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline CloudConnectNetwork& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline CloudConnectNetwork& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CloudConnectNetwork& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // interworkingStatus Field Functions 
        bool hasInterworkingStatus() const { return this->interworkingStatus_ != nullptr;};
        void deleteInterworkingStatus() { this->interworkingStatus_ = nullptr;};
        inline string getInterworkingStatus() const { DARABONBA_PTR_GET_DEFAULT(interworkingStatus_, "") };
        inline CloudConnectNetwork& setInterworkingStatus(string interworkingStatus) { DARABONBA_PTR_SET_VALUE(interworkingStatus_, interworkingStatus) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CloudConnectNetwork& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // newAgw Field Functions 
        bool hasNewAgw() const { return this->newAgw_ != nullptr;};
        void deleteNewAgw() { this->newAgw_ = nullptr;};
        inline bool getNewAgw() const { DARABONBA_PTR_GET_DEFAULT(newAgw_, false) };
        inline CloudConnectNetwork& setNewAgw(bool newAgw) { DARABONBA_PTR_SET_VALUE(newAgw_, newAgw) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline CloudConnectNetwork& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // snatCidrBlock Field Functions 
        bool hasSnatCidrBlock() const { return this->snatCidrBlock_ != nullptr;};
        void deleteSnatCidrBlock() { this->snatCidrBlock_ = nullptr;};
        inline string getSnatCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(snatCidrBlock_, "") };
        inline CloudConnectNetwork& setSnatCidrBlock(string snatCidrBlock) { DARABONBA_PTR_SET_VALUE(snatCidrBlock_, snatCidrBlock) };


        // subnet Field Functions 
        bool hasSubnet() const { return this->subnet_ != nullptr;};
        void deleteSubnet() { this->subnet_ = nullptr;};
        inline string getSubnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
        inline CloudConnectNetwork& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const CloudConnectNetwork::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, CloudConnectNetwork::Tags) };
        inline CloudConnectNetwork::Tags getTags() { DARABONBA_PTR_GET(tags_, CloudConnectNetwork::Tags) };
        inline CloudConnectNetwork& setTags(const CloudConnectNetwork::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline CloudConnectNetwork& setTags(CloudConnectNetwork::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<string> associatedCenId_ {};
        shared_ptr<string> associatedCenOwnerId_ {};
        shared_ptr<string> associatedCloudBoxCount_ {};
        shared_ptr<string> availableCloudBoxCount_ {};
        shared_ptr<string> ccnId_ {};
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> interworkingStatus_ {};
        shared_ptr<string> name_ {};
        shared_ptr<bool> newAgw_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> snatCidrBlock_ {};
        shared_ptr<string> subnet_ {};
        shared_ptr<CloudConnectNetwork::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->cloudConnectNetwork_ == nullptr; };
      // cloudConnectNetwork Field Functions 
      bool hasCloudConnectNetwork() const { return this->cloudConnectNetwork_ != nullptr;};
      void deleteCloudConnectNetwork() { this->cloudConnectNetwork_ = nullptr;};
      inline const vector<CloudConnectNetworks::CloudConnectNetwork> & getCloudConnectNetwork() const { DARABONBA_PTR_GET_CONST(cloudConnectNetwork_, vector<CloudConnectNetworks::CloudConnectNetwork>) };
      inline vector<CloudConnectNetworks::CloudConnectNetwork> getCloudConnectNetwork() { DARABONBA_PTR_GET(cloudConnectNetwork_, vector<CloudConnectNetworks::CloudConnectNetwork>) };
      inline CloudConnectNetworks& setCloudConnectNetwork(const vector<CloudConnectNetworks::CloudConnectNetwork> & cloudConnectNetwork) { DARABONBA_PTR_SET_VALUE(cloudConnectNetwork_, cloudConnectNetwork) };
      inline CloudConnectNetworks& setCloudConnectNetwork(vector<CloudConnectNetworks::CloudConnectNetwork> && cloudConnectNetwork) { DARABONBA_PTR_SET_RVALUE(cloudConnectNetwork_, cloudConnectNetwork) };


    protected:
      shared_ptr<vector<CloudConnectNetworks::CloudConnectNetwork>> cloudConnectNetwork_ {};
    };

    virtual bool empty() const override { return this->cloudConnectNetworks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cloudConnectNetworks Field Functions 
    bool hasCloudConnectNetworks() const { return this->cloudConnectNetworks_ != nullptr;};
    void deleteCloudConnectNetworks() { this->cloudConnectNetworks_ = nullptr;};
    inline const DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks & getCloudConnectNetworks() const { DARABONBA_PTR_GET_CONST(cloudConnectNetworks_, DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks) };
    inline DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks getCloudConnectNetworks() { DARABONBA_PTR_GET(cloudConnectNetworks_, DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks) };
    inline DescribeCloudConnectNetworksResponseBody& setCloudConnectNetworks(const DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks & cloudConnectNetworks) { DARABONBA_PTR_SET_VALUE(cloudConnectNetworks_, cloudConnectNetworks) };
    inline DescribeCloudConnectNetworksResponseBody& setCloudConnectNetworks(DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks && cloudConnectNetworks) { DARABONBA_PTR_SET_RVALUE(cloudConnectNetworks_, cloudConnectNetworks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCloudConnectNetworksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCloudConnectNetworksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudConnectNetworksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCloudConnectNetworksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks> cloudConnectNetworks_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that match the query.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
