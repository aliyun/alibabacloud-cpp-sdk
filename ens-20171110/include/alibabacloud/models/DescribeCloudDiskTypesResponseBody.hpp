// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKTYPESRESPONSEBODY_HPP_
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
  class DescribeCloudDiskTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportResources, supportResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportResources, supportResources_);
    };
    DescribeCloudDiskTypesResponseBody() = default ;
    DescribeCloudDiskTypesResponseBody(const DescribeCloudDiskTypesResponseBody &) = default ;
    DescribeCloudDiskTypesResponseBody(DescribeCloudDiskTypesResponseBody &&) = default ;
    DescribeCloudDiskTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskTypesResponseBody() = default ;
    DescribeCloudDiskTypesResponseBody& operator=(const DescribeCloudDiskTypesResponseBody &) = default ;
    DescribeCloudDiskTypesResponseBody& operator=(DescribeCloudDiskTypesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        };
        friend void from_json(const Darabonba::Json& j, SupportResource& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
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
        virtual bool empty() const override { return this->category_ == nullptr
        && this->ensRegionId_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline SupportResource& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline SupportResource& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      protected:
        // The category of the disk.
        // 
        // *   cloud_efficiency: ultra disk.
        // *   cloud_ssd: all-flash disk.
        // *   local_hdd: local HDD.
        // *   local_ssd: local SSD.
        shared_ptr<string> category_ {};
        // The ID of the edge node.
        shared_ptr<string> ensRegionId_ {};
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
    inline DescribeCloudDiskTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportResources Field Functions 
    bool hasSupportResources() const { return this->supportResources_ != nullptr;};
    void deleteSupportResources() { this->supportResources_ = nullptr;};
    inline const DescribeCloudDiskTypesResponseBody::SupportResources & getSupportResources() const { DARABONBA_PTR_GET_CONST(supportResources_, DescribeCloudDiskTypesResponseBody::SupportResources) };
    inline DescribeCloudDiskTypesResponseBody::SupportResources getSupportResources() { DARABONBA_PTR_GET(supportResources_, DescribeCloudDiskTypesResponseBody::SupportResources) };
    inline DescribeCloudDiskTypesResponseBody& setSupportResources(const DescribeCloudDiskTypesResponseBody::SupportResources & supportResources) { DARABONBA_PTR_SET_VALUE(supportResources_, supportResources) };
    inline DescribeCloudDiskTypesResponseBody& setSupportResources(DescribeCloudDiskTypesResponseBody::SupportResources && supportResources) { DARABONBA_PTR_SET_RVALUE(supportResources_, supportResources) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The specifications of resources that you can purchase.
    shared_ptr<DescribeCloudDiskTypesResponseBody::SupportResources> supportResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
