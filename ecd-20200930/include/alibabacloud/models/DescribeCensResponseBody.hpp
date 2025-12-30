// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
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
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Ipv6Level, ipv6Level_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PackageIds, packageIds_);
        DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Cens& obj) { 
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Ipv6Level, ipv6Level_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PackageIds, packageIds_);
        DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
        // The key of the tag.
        shared_ptr<string> key_ {};
        // The value of the tag.
        shared_ptr<string> value_ {};
      };

      class PackageIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PackageIds& obj) { 
          DARABONBA_PTR_TO_JSON(PackageId, packageId_);
        };
        friend void from_json(const Darabonba::Json& j, PackageIds& obj) { 
          DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
        };
        PackageIds() = default ;
        PackageIds(const PackageIds &) = default ;
        PackageIds(PackageIds &&) = default ;
        PackageIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PackageIds() = default ;
        PackageIds& operator=(const PackageIds &) = default ;
        PackageIds& operator=(PackageIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->packageId_ == nullptr; };
        // packageId Field Functions 
        bool hasPackageId() const { return this->packageId_ != nullptr;};
        void deletePackageId() { this->packageId_ = nullptr;};
        inline string getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
        inline PackageIds& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


      protected:
        // The ID of the bandwidth plan that is bound to the CEN instance.
        shared_ptr<string> packageId_ {};
      };

      virtual bool empty() const override { return this->cenId_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->ipv6Level_ == nullptr && this->name_ == nullptr && this->packageIds_ == nullptr
        && this->protectionLevel_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline Cens& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Cens& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Cens& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ipv6Level Field Functions 
      bool hasIpv6Level() const { return this->ipv6Level_ != nullptr;};
      void deleteIpv6Level() { this->ipv6Level_ = nullptr;};
      inline string getIpv6Level() const { DARABONBA_PTR_GET_DEFAULT(ipv6Level_, "") };
      inline Cens& setIpv6Level(string ipv6Level) { DARABONBA_PTR_SET_VALUE(ipv6Level_, ipv6Level) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Cens& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // packageIds Field Functions 
      bool hasPackageIds() const { return this->packageIds_ != nullptr;};
      void deletePackageIds() { this->packageIds_ = nullptr;};
      inline const vector<Cens::PackageIds> & getPackageIds() const { DARABONBA_PTR_GET_CONST(packageIds_, vector<Cens::PackageIds>) };
      inline vector<Cens::PackageIds> getPackageIds() { DARABONBA_PTR_GET(packageIds_, vector<Cens::PackageIds>) };
      inline Cens& setPackageIds(const vector<Cens::PackageIds> & packageIds) { DARABONBA_PTR_SET_VALUE(packageIds_, packageIds) };
      inline Cens& setPackageIds(vector<Cens::PackageIds> && packageIds) { DARABONBA_PTR_SET_RVALUE(packageIds_, packageIds) };


      // protectionLevel Field Functions 
      bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
      void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
      inline string getProtectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, "") };
      inline Cens& setProtectionLevel(string protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Cens& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Cens::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Cens::Tags>) };
      inline vector<Cens::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Cens::Tags>) };
      inline Cens& setTags(const vector<Cens::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Cens& setTags(vector<Cens::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the CEN instance.
      shared_ptr<string> cenId_ {};
      // The time when the CEN instance was created.
      shared_ptr<string> creationTime_ {};
      // The description of the CEN instance.
      shared_ptr<string> description_ {};
      // The IPv6 level.
      // 
      // >  IPv6 is not supported.
      // 
      // Valid value:
      // 
      // *   DISABLED
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> ipv6Level_ {};
      // The name of the CEN instance.
      shared_ptr<string> name_ {};
      // The bandwidth plans that are bound to the CEN instance.
      shared_ptr<vector<Cens::PackageIds>> packageIds_ {};
      // The tolerated level of CIDR block conflict.
      // 
      // Valid value:
      // 
      // *   REDUCED: CIDR block conflicts are allowed, but the conflicting CIDR blocks cannot be identical.
      shared_ptr<string> protectionLevel_ {};
      // The status of the CEN instance.
      // 
      // Valid values:
      // 
      // *   Creating
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Active
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Deleting
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> status_ {};
      // The tags of the CEN instance.
      shared_ptr<vector<Cens::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->cens_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cens Field Functions 
    bool hasCens() const { return this->cens_ != nullptr;};
    void deleteCens() { this->cens_ = nullptr;};
    inline const vector<DescribeCensResponseBody::Cens> & getCens() const { DARABONBA_PTR_GET_CONST(cens_, vector<DescribeCensResponseBody::Cens>) };
    inline vector<DescribeCensResponseBody::Cens> getCens() { DARABONBA_PTR_GET(cens_, vector<DescribeCensResponseBody::Cens>) };
    inline DescribeCensResponseBody& setCens(const vector<DescribeCensResponseBody::Cens> & cens) { DARABONBA_PTR_SET_VALUE(cens_, cens) };
    inline DescribeCensResponseBody& setCens(vector<DescribeCensResponseBody::Cens> && cens) { DARABONBA_PTR_SET_RVALUE(cens_, cens) };


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
    // Details of the CEN instances.
    shared_ptr<vector<DescribeCensResponseBody::Cens>> cens_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of CEN instances returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
