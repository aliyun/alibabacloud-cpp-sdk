// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCloudDiskAvailableResourceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportResources, supportResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportResources, supportResources_);
    };
    DescribeCloudDiskAvailableResourceInfoResponseBody() = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBody(const DescribeCloudDiskAvailableResourceInfoResponseBody &) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBody(DescribeCloudDiskAvailableResourceInfoResponseBody &&) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskAvailableResourceInfoResponseBody() = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBody& operator=(const DescribeCloudDiskAvailableResourceInfoResponseBody &) = default ;
    DescribeCloudDiskAvailableResourceInfoResponseBody& operator=(DescribeCloudDiskAvailableResourceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupportResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportResources& obj) { 
        DARABONBA_PTR_TO_JSON(SupportResource, supportResource_);
      };
      friend void from_json(const Darabonba::Json& j, SupportResources& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportResource, supportResource_);
      };
      SupportResources() = default ;
      SupportResources(const SupportResources &) = default ;
      SupportResources(SupportResources &&) = default ;
      SupportResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportResources() = default ;
      SupportResources& operator=(const SupportResources &) = default ;
      SupportResources& operator=(SupportResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportResource& obj) { 
          DARABONBA_PTR_TO_JSON(Ability, ability_);
          DARABONBA_PTR_TO_JSON(CanBuyCount, canBuyCount_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(DefaultDiskSize, defaultDiskSize_);
          DARABONBA_PTR_TO_JSON(DiskMaxSize, diskMaxSize_);
          DARABONBA_PTR_TO_JSON(DiskMinSize, diskMinSize_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(EnsRegionName, ensRegionName_);
        };
        friend void from_json(const Darabonba::Json& j, SupportResource& obj) { 
          DARABONBA_PTR_FROM_JSON(Ability, ability_);
          DARABONBA_PTR_FROM_JSON(CanBuyCount, canBuyCount_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(DefaultDiskSize, defaultDiskSize_);
          DARABONBA_PTR_FROM_JSON(DiskMaxSize, diskMaxSize_);
          DARABONBA_PTR_FROM_JSON(DiskMinSize, diskMinSize_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(EnsRegionName, ensRegionName_);
        };
        SupportResource() = default ;
        SupportResource(const SupportResource &) = default ;
        SupportResource(SupportResource &&) = default ;
        SupportResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportResource() = default ;
        SupportResource& operator=(const SupportResource &) = default ;
        SupportResource& operator=(SupportResource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ability : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ability& obj) { 
            DARABONBA_PTR_TO_JSON(Ability, ability_);
          };
          friend void from_json(const Darabonba::Json& j, Ability& obj) { 
            DARABONBA_PTR_FROM_JSON(Ability, ability_);
          };
          Ability() = default ;
          Ability(const Ability &) = default ;
          Ability(Ability &&) = default ;
          Ability(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ability() = default ;
          Ability& operator=(const Ability &) = default ;
          Ability& operator=(Ability &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ability_ == nullptr; };
          // ability Field Functions 
          bool hasAbility() const { return this->ability_ != nullptr;};
          void deleteAbility() { this->ability_ = nullptr;};
          inline const vector<string> & getAbility() const { DARABONBA_PTR_GET_CONST(ability_, vector<string>) };
          inline vector<string> getAbility() { DARABONBA_PTR_GET(ability_, vector<string>) };
          inline Ability& setAbility(const vector<string> & ability) { DARABONBA_PTR_SET_VALUE(ability_, ability) };
          inline Ability& setAbility(vector<string> && ability) { DARABONBA_PTR_SET_RVALUE(ability_, ability) };


        protected:
          shared_ptr<vector<string>> ability_ {};
        };

        virtual bool empty() const override { return this->ability_ == nullptr
        && this->canBuyCount_ == nullptr && this->category_ == nullptr && this->defaultDiskSize_ == nullptr && this->diskMaxSize_ == nullptr && this->diskMinSize_ == nullptr
        && this->ensRegionId_ == nullptr && this->ensRegionName_ == nullptr; };
        // ability Field Functions 
        bool hasAbility() const { return this->ability_ != nullptr;};
        void deleteAbility() { this->ability_ = nullptr;};
        inline const SupportResource::Ability & getAbility() const { DARABONBA_PTR_GET_CONST(ability_, SupportResource::Ability) };
        inline SupportResource::Ability getAbility() { DARABONBA_PTR_GET(ability_, SupportResource::Ability) };
        inline SupportResource& setAbility(const SupportResource::Ability & ability) { DARABONBA_PTR_SET_VALUE(ability_, ability) };
        inline SupportResource& setAbility(SupportResource::Ability && ability) { DARABONBA_PTR_SET_RVALUE(ability_, ability) };


        // canBuyCount Field Functions 
        bool hasCanBuyCount() const { return this->canBuyCount_ != nullptr;};
        void deleteCanBuyCount() { this->canBuyCount_ = nullptr;};
        inline int64_t getCanBuyCount() const { DARABONBA_PTR_GET_DEFAULT(canBuyCount_, 0L) };
        inline SupportResource& setCanBuyCount(int64_t canBuyCount) { DARABONBA_PTR_SET_VALUE(canBuyCount_, canBuyCount) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline SupportResource& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // defaultDiskSize Field Functions 
        bool hasDefaultDiskSize() const { return this->defaultDiskSize_ != nullptr;};
        void deleteDefaultDiskSize() { this->defaultDiskSize_ = nullptr;};
        inline int64_t getDefaultDiskSize() const { DARABONBA_PTR_GET_DEFAULT(defaultDiskSize_, 0L) };
        inline SupportResource& setDefaultDiskSize(int64_t defaultDiskSize) { DARABONBA_PTR_SET_VALUE(defaultDiskSize_, defaultDiskSize) };


        // diskMaxSize Field Functions 
        bool hasDiskMaxSize() const { return this->diskMaxSize_ != nullptr;};
        void deleteDiskMaxSize() { this->diskMaxSize_ = nullptr;};
        inline int64_t getDiskMaxSize() const { DARABONBA_PTR_GET_DEFAULT(diskMaxSize_, 0L) };
        inline SupportResource& setDiskMaxSize(int64_t diskMaxSize) { DARABONBA_PTR_SET_VALUE(diskMaxSize_, diskMaxSize) };


        // diskMinSize Field Functions 
        bool hasDiskMinSize() const { return this->diskMinSize_ != nullptr;};
        void deleteDiskMinSize() { this->diskMinSize_ = nullptr;};
        inline int64_t getDiskMinSize() const { DARABONBA_PTR_GET_DEFAULT(diskMinSize_, 0L) };
        inline SupportResource& setDiskMinSize(int64_t diskMinSize) { DARABONBA_PTR_SET_VALUE(diskMinSize_, diskMinSize) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline SupportResource& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // ensRegionName Field Functions 
        bool hasEnsRegionName() const { return this->ensRegionName_ != nullptr;};
        void deleteEnsRegionName() { this->ensRegionName_ = nullptr;};
        inline string getEnsRegionName() const { DARABONBA_PTR_GET_DEFAULT(ensRegionName_, "") };
        inline SupportResource& setEnsRegionName(string ensRegionName) { DARABONBA_PTR_SET_VALUE(ensRegionName_, ensRegionName) };


      protected:
        // Node product capability.
        shared_ptr<SupportResource::Ability> ability_ {};
        // The number of disks that you can purchase.
        shared_ptr<int64_t> canBuyCount_ {};
        // The type of the disk.
        // 
        // *   cloud_efficiency:ultra disk.
        // *   cloud_ssd:all-flash disk.
        // *   local_hdd:local HDD.
        // *   local_ssd:local SSD.
        shared_ptr<string> category_ {};
        // The default size of the disk. Unit: GiB.
        shared_ptr<int64_t> defaultDiskSize_ {};
        // The maximum size of the disk. Unit: GiB.
        shared_ptr<int64_t> diskMaxSize_ {};
        // The minimum size of the disk size. Unit: GiB.
        shared_ptr<int64_t> diskMinSize_ {};
        // The ID of the edge node.
        shared_ptr<string> ensRegionId_ {};
        // The name of the task node.
        shared_ptr<string> ensRegionName_ {};
      };

      virtual bool empty() const override { return this->supportResource_ == nullptr; };
      // supportResource Field Functions 
      bool hasSupportResource() const { return this->supportResource_ != nullptr;};
      void deleteSupportResource() { this->supportResource_ = nullptr;};
      inline const vector<SupportResources::SupportResource> & getSupportResource() const { DARABONBA_PTR_GET_CONST(supportResource_, vector<SupportResources::SupportResource>) };
      inline vector<SupportResources::SupportResource> getSupportResource() { DARABONBA_PTR_GET(supportResource_, vector<SupportResources::SupportResource>) };
      inline SupportResources& setSupportResource(const vector<SupportResources::SupportResource> & supportResource) { DARABONBA_PTR_SET_VALUE(supportResource_, supportResource) };
      inline SupportResources& setSupportResource(vector<SupportResources::SupportResource> && supportResource) { DARABONBA_PTR_SET_RVALUE(supportResource_, supportResource) };


    protected:
      shared_ptr<vector<SupportResources::SupportResource>> supportResource_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->supportResources_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudDiskAvailableResourceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportResources Field Functions 
    bool hasSupportResources() const { return this->supportResources_ != nullptr;};
    void deleteSupportResources() { this->supportResources_ = nullptr;};
    inline const DescribeCloudDiskAvailableResourceInfoResponseBody::SupportResources & getSupportResources() const { DARABONBA_PTR_GET_CONST(supportResources_, DescribeCloudDiskAvailableResourceInfoResponseBody::SupportResources) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBody::SupportResources getSupportResources() { DARABONBA_PTR_GET(supportResources_, DescribeCloudDiskAvailableResourceInfoResponseBody::SupportResources) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBody& setSupportResources(const DescribeCloudDiskAvailableResourceInfoResponseBody::SupportResources & supportResources) { DARABONBA_PTR_SET_VALUE(supportResources_, supportResources) };
    inline DescribeCloudDiskAvailableResourceInfoResponseBody& setSupportResources(DescribeCloudDiskAvailableResourceInfoResponseBody::SupportResources && supportResources) { DARABONBA_PTR_SET_RVALUE(supportResources_, supportResources) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The specifications of resources that you can purchase.
    shared_ptr<DescribeCloudDiskAvailableResourceInfoResponseBody::SupportResources> supportResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
