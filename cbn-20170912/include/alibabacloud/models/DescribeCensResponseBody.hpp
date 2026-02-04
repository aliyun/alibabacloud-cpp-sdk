// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCensResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCensResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cens, cens_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCensResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cens, cens_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCensResponseBody() = default ;
    DescribeCensResponseBody(const DescribeCensResponseBody &) = default ;
    DescribeCensResponseBody(DescribeCensResponseBody &&) = default ;
    DescribeCensResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCensResponseBody() = default ;
    DescribeCensResponseBody& operator=(const DescribeCensResponseBody &) = default ;
    DescribeCensResponseBody& operator=(DescribeCensResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Cens : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cens& obj) { 
        DARABONBA_PTR_TO_JSON(Cen, cen_);
      };
      friend void from_json(const Darabonba::Json& j, Cens& obj) { 
        DARABONBA_PTR_FROM_JSON(Cen, cen_);
      };
      Cens() = default ;
      Cens(const Cens &) = default ;
      Cens(Cens &&) = default ;
      Cens(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cens() = default ;
      Cens& operator=(const Cens &) = default ;
      Cens& operator=(Cens &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Cen : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cen& obj) { 
          DARABONBA_PTR_TO_JSON(CenBandwidthPackageIds, cenBandwidthPackageIds_);
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Ipv6Level, ipv6Level_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Cen& obj) { 
          DARABONBA_PTR_FROM_JSON(CenBandwidthPackageIds, cenBandwidthPackageIds_);
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Ipv6Level, ipv6Level_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Cen() = default ;
        Cen(const Cen &) = default ;
        Cen(Cen &&) = default ;
        Cen(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cen() = default ;
        Cen& operator=(const Cen &) = default ;
        Cen& operator=(Cen &&) = default ;
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
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
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

        class CenBandwidthPackageIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CenBandwidthPackageIds& obj) { 
            DARABONBA_PTR_TO_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
          };
          friend void from_json(const Darabonba::Json& j, CenBandwidthPackageIds& obj) { 
            DARABONBA_PTR_FROM_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
          };
          CenBandwidthPackageIds() = default ;
          CenBandwidthPackageIds(const CenBandwidthPackageIds &) = default ;
          CenBandwidthPackageIds(CenBandwidthPackageIds &&) = default ;
          CenBandwidthPackageIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CenBandwidthPackageIds() = default ;
          CenBandwidthPackageIds& operator=(const CenBandwidthPackageIds &) = default ;
          CenBandwidthPackageIds& operator=(CenBandwidthPackageIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cenBandwidthPackageId_ == nullptr; };
          // cenBandwidthPackageId Field Functions 
          bool hasCenBandwidthPackageId() const { return this->cenBandwidthPackageId_ != nullptr;};
          void deleteCenBandwidthPackageId() { this->cenBandwidthPackageId_ = nullptr;};
          inline const vector<string> & getCenBandwidthPackageId() const { DARABONBA_PTR_GET_CONST(cenBandwidthPackageId_, vector<string>) };
          inline vector<string> getCenBandwidthPackageId() { DARABONBA_PTR_GET(cenBandwidthPackageId_, vector<string>) };
          inline CenBandwidthPackageIds& setCenBandwidthPackageId(const vector<string> & cenBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };
          inline CenBandwidthPackageIds& setCenBandwidthPackageId(vector<string> && cenBandwidthPackageId) { DARABONBA_PTR_SET_RVALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };


        protected:
          shared_ptr<vector<string>> cenBandwidthPackageId_ {};
        };

        virtual bool empty() const override { return this->cenBandwidthPackageIds_ == nullptr
        && this->cenId_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->ipv6Level_ == nullptr && this->name_ == nullptr
        && this->protectionLevel_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
        // cenBandwidthPackageIds Field Functions 
        bool hasCenBandwidthPackageIds() const { return this->cenBandwidthPackageIds_ != nullptr;};
        void deleteCenBandwidthPackageIds() { this->cenBandwidthPackageIds_ = nullptr;};
        inline const Cen::CenBandwidthPackageIds & getCenBandwidthPackageIds() const { DARABONBA_PTR_GET_CONST(cenBandwidthPackageIds_, Cen::CenBandwidthPackageIds) };
        inline Cen::CenBandwidthPackageIds getCenBandwidthPackageIds() { DARABONBA_PTR_GET(cenBandwidthPackageIds_, Cen::CenBandwidthPackageIds) };
        inline Cen& setCenBandwidthPackageIds(const Cen::CenBandwidthPackageIds & cenBandwidthPackageIds) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageIds_, cenBandwidthPackageIds) };
        inline Cen& setCenBandwidthPackageIds(Cen::CenBandwidthPackageIds && cenBandwidthPackageIds) { DARABONBA_PTR_SET_RVALUE(cenBandwidthPackageIds_, cenBandwidthPackageIds) };


        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline Cen& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Cen& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Cen& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ipv6Level Field Functions 
        bool hasIpv6Level() const { return this->ipv6Level_ != nullptr;};
        void deleteIpv6Level() { this->ipv6Level_ = nullptr;};
        inline string getIpv6Level() const { DARABONBA_PTR_GET_DEFAULT(ipv6Level_, "") };
        inline Cen& setIpv6Level(string ipv6Level) { DARABONBA_PTR_SET_VALUE(ipv6Level_, ipv6Level) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Cen& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // protectionLevel Field Functions 
        bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
        void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
        inline string getProtectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, "") };
        inline Cen& setProtectionLevel(string protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Cen& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Cen& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Cen::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Cen::Tags) };
        inline Cen::Tags getTags() { DARABONBA_PTR_GET(tags_, Cen::Tags) };
        inline Cen& setTags(const Cen::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Cen& setTags(Cen::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The IDs of the bandwidth plans that are associated with the CEN instance.
        shared_ptr<Cen::CenBandwidthPackageIds> cenBandwidthPackageIds_ {};
        // The CEN instance ID.
        shared_ptr<string> cenId_ {};
        // The time when the CEN instance was created.
        // 
        // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the CEN instance.
        shared_ptr<string> description_ {};
        // Indicates whether IPv6 is enabled for the CEN instance.
        // 
        // *   **ENABLE**
        // *   **DISABLED**
        shared_ptr<string> ipv6Level_ {};
        // The CEN instance name.
        shared_ptr<string> name_ {};
        // The level of CIDR block overlapping.
        // 
        // **REDUCED**: Overlapped CIDR blocks are allowed. This value specifies that CIDR blocks can overlap but CIDR blocks cannot be duplicates.
        shared_ptr<string> protectionLevel_ {};
        // The ID of the resource group to which the CEN instance belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The status of the CEN instance.
        // 
        // *   **Creating**
        // *   **Active**
        // *   **Deleting**
        shared_ptr<string> status_ {};
        // The IDs of the tags that are added to the CEN instance.
        shared_ptr<Cen::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->cen_ == nullptr; };
      // cen Field Functions 
      bool hasCen() const { return this->cen_ != nullptr;};
      void deleteCen() { this->cen_ = nullptr;};
      inline const vector<Cens::Cen> & getCen() const { DARABONBA_PTR_GET_CONST(cen_, vector<Cens::Cen>) };
      inline vector<Cens::Cen> getCen() { DARABONBA_PTR_GET(cen_, vector<Cens::Cen>) };
      inline Cens& setCen(const vector<Cens::Cen> & cen) { DARABONBA_PTR_SET_VALUE(cen_, cen) };
      inline Cens& setCen(vector<Cens::Cen> && cen) { DARABONBA_PTR_SET_RVALUE(cen_, cen) };


    protected:
      shared_ptr<vector<Cens::Cen>> cen_ {};
    };

    virtual bool empty() const override { return this->cens_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cens Field Functions 
    bool hasCens() const { return this->cens_ != nullptr;};
    void deleteCens() { this->cens_ = nullptr;};
    inline const DescribeCensResponseBody::Cens & getCens() const { DARABONBA_PTR_GET_CONST(cens_, DescribeCensResponseBody::Cens) };
    inline DescribeCensResponseBody::Cens getCens() { DARABONBA_PTR_GET(cens_, DescribeCensResponseBody::Cens) };
    inline DescribeCensResponseBody& setCens(const DescribeCensResponseBody::Cens & cens) { DARABONBA_PTR_SET_VALUE(cens_, cens) };
    inline DescribeCensResponseBody& setCens(DescribeCensResponseBody::Cens && cens) { DARABONBA_PTR_SET_RVALUE(cens_, cens) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCensResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCensResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCensResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCensResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the CEN instance.
    shared_ptr<DescribeCensResponseBody::Cens> cens_ {};
    // The number of the page returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
