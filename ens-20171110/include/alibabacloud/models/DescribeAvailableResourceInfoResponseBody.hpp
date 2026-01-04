// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODY_HPP_
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
  class DescribeAvailableResourceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportResources, supportResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportResources, supportResources_);
    };
    DescribeAvailableResourceInfoResponseBody() = default ;
    DescribeAvailableResourceInfoResponseBody(const DescribeAvailableResourceInfoResponseBody &) = default ;
    DescribeAvailableResourceInfoResponseBody(DescribeAvailableResourceInfoResponseBody &&) = default ;
    DescribeAvailableResourceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceInfoResponseBody() = default ;
    DescribeAvailableResourceInfoResponseBody& operator=(const DescribeAvailableResourceInfoResponseBody &) = default ;
    DescribeAvailableResourceInfoResponseBody& operator=(DescribeAvailableResourceInfoResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(BandwidthTypes, bandwidthTypes_);
          DARABONBA_PTR_TO_JSON(DataDiskMaxSize, dataDiskMaxSize_);
          DARABONBA_PTR_TO_JSON(DataDiskMinSize, dataDiskMinSize_);
          DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
          DARABONBA_PTR_TO_JSON(EnsRegionIdsExtends, ensRegionIdsExtends_);
          DARABONBA_PTR_TO_JSON(InstanceSpeces, instanceSpeces_);
          DARABONBA_PTR_TO_JSON(Isp, isp_);
          DARABONBA_PTR_TO_JSON(SystemDiskMaxSize, systemDiskMaxSize_);
          DARABONBA_PTR_TO_JSON(SystemDiskMinSize, systemDiskMinSize_);
        };
        friend void from_json(const Darabonba::Json& j, SupportResource& obj) { 
          DARABONBA_PTR_FROM_JSON(BandwidthTypes, bandwidthTypes_);
          DARABONBA_PTR_FROM_JSON(DataDiskMaxSize, dataDiskMaxSize_);
          DARABONBA_PTR_FROM_JSON(DataDiskMinSize, dataDiskMinSize_);
          DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
          DARABONBA_PTR_FROM_JSON(EnsRegionIdsExtends, ensRegionIdsExtends_);
          DARABONBA_PTR_FROM_JSON(InstanceSpeces, instanceSpeces_);
          DARABONBA_PTR_FROM_JSON(Isp, isp_);
          DARABONBA_PTR_FROM_JSON(SystemDiskMaxSize, systemDiskMaxSize_);
          DARABONBA_PTR_FROM_JSON(SystemDiskMinSize, systemDiskMinSize_);
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
        class Isp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Isp& obj) { 
            DARABONBA_PTR_TO_JSON(Isp, isp_);
          };
          friend void from_json(const Darabonba::Json& j, Isp& obj) { 
            DARABONBA_PTR_FROM_JSON(Isp, isp_);
          };
          Isp() = default ;
          Isp(const Isp &) = default ;
          Isp(Isp &&) = default ;
          Isp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Isp() = default ;
          Isp& operator=(const Isp &) = default ;
          Isp& operator=(Isp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->isp_ == nullptr; };
          // isp Field Functions 
          bool hasIsp() const { return this->isp_ != nullptr;};
          void deleteIsp() { this->isp_ = nullptr;};
          inline const vector<string> & getIsp() const { DARABONBA_PTR_GET_CONST(isp_, vector<string>) };
          inline vector<string> getIsp() { DARABONBA_PTR_GET(isp_, vector<string>) };
          inline Isp& setIsp(const vector<string> & isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };
          inline Isp& setIsp(vector<string> && isp) { DARABONBA_PTR_SET_RVALUE(isp_, isp) };


        protected:
          shared_ptr<vector<string>> isp_ {};
        };

        class InstanceSpeces : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceSpeces& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceSpeces& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
          };
          InstanceSpeces() = default ;
          InstanceSpeces(const InstanceSpeces &) = default ;
          InstanceSpeces(InstanceSpeces &&) = default ;
          InstanceSpeces(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceSpeces() = default ;
          InstanceSpeces& operator=(const InstanceSpeces &) = default ;
          InstanceSpeces& operator=(InstanceSpeces &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instanceSpec_ == nullptr; };
          // instanceSpec Field Functions 
          bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
          void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
          inline const vector<string> & getInstanceSpec() const { DARABONBA_PTR_GET_CONST(instanceSpec_, vector<string>) };
          inline vector<string> getInstanceSpec() { DARABONBA_PTR_GET(instanceSpec_, vector<string>) };
          inline InstanceSpeces& setInstanceSpec(const vector<string> & instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };
          inline InstanceSpeces& setInstanceSpec(vector<string> && instanceSpec) { DARABONBA_PTR_SET_RVALUE(instanceSpec_, instanceSpec) };


        protected:
          shared_ptr<vector<string>> instanceSpec_ {};
        };

        class EnsRegionIdsExtends : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EnsRegionIdsExtends& obj) { 
            DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          };
          friend void from_json(const Darabonba::Json& j, EnsRegionIdsExtends& obj) { 
            DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          };
          EnsRegionIdsExtends() = default ;
          EnsRegionIdsExtends(const EnsRegionIdsExtends &) = default ;
          EnsRegionIdsExtends(EnsRegionIdsExtends &&) = default ;
          EnsRegionIdsExtends(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EnsRegionIdsExtends() = default ;
          EnsRegionIdsExtends& operator=(const EnsRegionIdsExtends &) = default ;
          EnsRegionIdsExtends& operator=(EnsRegionIdsExtends &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class EnsRegionId : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EnsRegionId& obj) { 
              DARABONBA_PTR_TO_JSON(Area, area_);
              DARABONBA_PTR_TO_JSON(EnName, enName_);
              DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
              DARABONBA_PTR_TO_JSON(Isp, isp_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Province, province_);
            };
            friend void from_json(const Darabonba::Json& j, EnsRegionId& obj) { 
              DARABONBA_PTR_FROM_JSON(Area, area_);
              DARABONBA_PTR_FROM_JSON(EnName, enName_);
              DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
              DARABONBA_PTR_FROM_JSON(Isp, isp_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Province, province_);
            };
            EnsRegionId() = default ;
            EnsRegionId(const EnsRegionId &) = default ;
            EnsRegionId(EnsRegionId &&) = default ;
            EnsRegionId(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EnsRegionId() = default ;
            EnsRegionId& operator=(const EnsRegionId &) = default ;
            EnsRegionId& operator=(EnsRegionId &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->area_ == nullptr
        && this->enName_ == nullptr && this->ensRegionId_ == nullptr && this->isp_ == nullptr && this->name_ == nullptr && this->province_ == nullptr; };
            // area Field Functions 
            bool hasArea() const { return this->area_ != nullptr;};
            void deleteArea() { this->area_ = nullptr;};
            inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
            inline EnsRegionId& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


            // enName Field Functions 
            bool hasEnName() const { return this->enName_ != nullptr;};
            void deleteEnName() { this->enName_ = nullptr;};
            inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
            inline EnsRegionId& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


            // ensRegionId Field Functions 
            bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
            void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
            inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
            inline EnsRegionId& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


            // isp Field Functions 
            bool hasIsp() const { return this->isp_ != nullptr;};
            void deleteIsp() { this->isp_ = nullptr;};
            inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
            inline EnsRegionId& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline EnsRegionId& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // province Field Functions 
            bool hasProvince() const { return this->province_ != nullptr;};
            void deleteProvince() { this->province_ = nullptr;};
            inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
            inline EnsRegionId& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


          protected:
            // The region.
            shared_ptr<string> area_ {};
            // The name. This parameter is empty by default.
            shared_ptr<string> enName_ {};
            // The ID of the edge node.
            shared_ptr<string> ensRegionId_ {};
            // The information about the Internet service provider (ISP).
            shared_ptr<string> isp_ {};
            // The name of the edge node.
            shared_ptr<string> name_ {};
            // The province.
            shared_ptr<string> province_ {};
          };

          virtual bool empty() const override { return this->ensRegionId_ == nullptr; };
          // ensRegionId Field Functions 
          bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
          void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
          inline const vector<EnsRegionIdsExtends::EnsRegionId> & getEnsRegionId() const { DARABONBA_PTR_GET_CONST(ensRegionId_, vector<EnsRegionIdsExtends::EnsRegionId>) };
          inline vector<EnsRegionIdsExtends::EnsRegionId> getEnsRegionId() { DARABONBA_PTR_GET(ensRegionId_, vector<EnsRegionIdsExtends::EnsRegionId>) };
          inline EnsRegionIdsExtends& setEnsRegionId(const vector<EnsRegionIdsExtends::EnsRegionId> & ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };
          inline EnsRegionIdsExtends& setEnsRegionId(vector<EnsRegionIdsExtends::EnsRegionId> && ensRegionId) { DARABONBA_PTR_SET_RVALUE(ensRegionId_, ensRegionId) };


        protected:
          shared_ptr<vector<EnsRegionIdsExtends::EnsRegionId>> ensRegionId_ {};
        };

        class EnsRegionIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EnsRegionIds& obj) { 
            DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          };
          friend void from_json(const Darabonba::Json& j, EnsRegionIds& obj) { 
            DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          };
          EnsRegionIds() = default ;
          EnsRegionIds(const EnsRegionIds &) = default ;
          EnsRegionIds(EnsRegionIds &&) = default ;
          EnsRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EnsRegionIds() = default ;
          EnsRegionIds& operator=(const EnsRegionIds &) = default ;
          EnsRegionIds& operator=(EnsRegionIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ensRegionId_ == nullptr; };
          // ensRegionId Field Functions 
          bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
          void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
          inline const vector<string> & getEnsRegionId() const { DARABONBA_PTR_GET_CONST(ensRegionId_, vector<string>) };
          inline vector<string> getEnsRegionId() { DARABONBA_PTR_GET(ensRegionId_, vector<string>) };
          inline EnsRegionIds& setEnsRegionId(const vector<string> & ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };
          inline EnsRegionIds& setEnsRegionId(vector<string> && ensRegionId) { DARABONBA_PTR_SET_RVALUE(ensRegionId_, ensRegionId) };


        protected:
          shared_ptr<vector<string>> ensRegionId_ {};
        };

        class BandwidthTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BandwidthTypes& obj) { 
            DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
          };
          friend void from_json(const Darabonba::Json& j, BandwidthTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
          };
          BandwidthTypes() = default ;
          BandwidthTypes(const BandwidthTypes &) = default ;
          BandwidthTypes(BandwidthTypes &&) = default ;
          BandwidthTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BandwidthTypes() = default ;
          BandwidthTypes& operator=(const BandwidthTypes &) = default ;
          BandwidthTypes& operator=(BandwidthTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bandwidthType_ == nullptr; };
          // bandwidthType Field Functions 
          bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
          void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
          inline const vector<string> & getBandwidthType() const { DARABONBA_PTR_GET_CONST(bandwidthType_, vector<string>) };
          inline vector<string> getBandwidthType() { DARABONBA_PTR_GET(bandwidthType_, vector<string>) };
          inline BandwidthTypes& setBandwidthType(const vector<string> & bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };
          inline BandwidthTypes& setBandwidthType(vector<string> && bandwidthType) { DARABONBA_PTR_SET_RVALUE(bandwidthType_, bandwidthType) };


        protected:
          shared_ptr<vector<string>> bandwidthType_ {};
        };

        virtual bool empty() const override { return this->bandwidthTypes_ == nullptr
        && this->dataDiskMaxSize_ == nullptr && this->dataDiskMinSize_ == nullptr && this->ensRegionIds_ == nullptr && this->ensRegionIdsExtends_ == nullptr && this->instanceSpeces_ == nullptr
        && this->isp_ == nullptr && this->systemDiskMaxSize_ == nullptr && this->systemDiskMinSize_ == nullptr; };
        // bandwidthTypes Field Functions 
        bool hasBandwidthTypes() const { return this->bandwidthTypes_ != nullptr;};
        void deleteBandwidthTypes() { this->bandwidthTypes_ = nullptr;};
        inline const SupportResource::BandwidthTypes & getBandwidthTypes() const { DARABONBA_PTR_GET_CONST(bandwidthTypes_, SupportResource::BandwidthTypes) };
        inline SupportResource::BandwidthTypes getBandwidthTypes() { DARABONBA_PTR_GET(bandwidthTypes_, SupportResource::BandwidthTypes) };
        inline SupportResource& setBandwidthTypes(const SupportResource::BandwidthTypes & bandwidthTypes) { DARABONBA_PTR_SET_VALUE(bandwidthTypes_, bandwidthTypes) };
        inline SupportResource& setBandwidthTypes(SupportResource::BandwidthTypes && bandwidthTypes) { DARABONBA_PTR_SET_RVALUE(bandwidthTypes_, bandwidthTypes) };


        // dataDiskMaxSize Field Functions 
        bool hasDataDiskMaxSize() const { return this->dataDiskMaxSize_ != nullptr;};
        void deleteDataDiskMaxSize() { this->dataDiskMaxSize_ = nullptr;};
        inline int32_t getDataDiskMaxSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskMaxSize_, 0) };
        inline SupportResource& setDataDiskMaxSize(int32_t dataDiskMaxSize) { DARABONBA_PTR_SET_VALUE(dataDiskMaxSize_, dataDiskMaxSize) };


        // dataDiskMinSize Field Functions 
        bool hasDataDiskMinSize() const { return this->dataDiskMinSize_ != nullptr;};
        void deleteDataDiskMinSize() { this->dataDiskMinSize_ = nullptr;};
        inline int32_t getDataDiskMinSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskMinSize_, 0) };
        inline SupportResource& setDataDiskMinSize(int32_t dataDiskMinSize) { DARABONBA_PTR_SET_VALUE(dataDiskMinSize_, dataDiskMinSize) };


        // ensRegionIds Field Functions 
        bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
        void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
        inline const SupportResource::EnsRegionIds & getEnsRegionIds() const { DARABONBA_PTR_GET_CONST(ensRegionIds_, SupportResource::EnsRegionIds) };
        inline SupportResource::EnsRegionIds getEnsRegionIds() { DARABONBA_PTR_GET(ensRegionIds_, SupportResource::EnsRegionIds) };
        inline SupportResource& setEnsRegionIds(const SupportResource::EnsRegionIds & ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };
        inline SupportResource& setEnsRegionIds(SupportResource::EnsRegionIds && ensRegionIds) { DARABONBA_PTR_SET_RVALUE(ensRegionIds_, ensRegionIds) };


        // ensRegionIdsExtends Field Functions 
        bool hasEnsRegionIdsExtends() const { return this->ensRegionIdsExtends_ != nullptr;};
        void deleteEnsRegionIdsExtends() { this->ensRegionIdsExtends_ = nullptr;};
        inline const SupportResource::EnsRegionIdsExtends & getEnsRegionIdsExtends() const { DARABONBA_PTR_GET_CONST(ensRegionIdsExtends_, SupportResource::EnsRegionIdsExtends) };
        inline SupportResource::EnsRegionIdsExtends getEnsRegionIdsExtends() { DARABONBA_PTR_GET(ensRegionIdsExtends_, SupportResource::EnsRegionIdsExtends) };
        inline SupportResource& setEnsRegionIdsExtends(const SupportResource::EnsRegionIdsExtends & ensRegionIdsExtends) { DARABONBA_PTR_SET_VALUE(ensRegionIdsExtends_, ensRegionIdsExtends) };
        inline SupportResource& setEnsRegionIdsExtends(SupportResource::EnsRegionIdsExtends && ensRegionIdsExtends) { DARABONBA_PTR_SET_RVALUE(ensRegionIdsExtends_, ensRegionIdsExtends) };


        // instanceSpeces Field Functions 
        bool hasInstanceSpeces() const { return this->instanceSpeces_ != nullptr;};
        void deleteInstanceSpeces() { this->instanceSpeces_ = nullptr;};
        inline const SupportResource::InstanceSpeces & getInstanceSpeces() const { DARABONBA_PTR_GET_CONST(instanceSpeces_, SupportResource::InstanceSpeces) };
        inline SupportResource::InstanceSpeces getInstanceSpeces() { DARABONBA_PTR_GET(instanceSpeces_, SupportResource::InstanceSpeces) };
        inline SupportResource& setInstanceSpeces(const SupportResource::InstanceSpeces & instanceSpeces) { DARABONBA_PTR_SET_VALUE(instanceSpeces_, instanceSpeces) };
        inline SupportResource& setInstanceSpeces(SupportResource::InstanceSpeces && instanceSpeces) { DARABONBA_PTR_SET_RVALUE(instanceSpeces_, instanceSpeces) };


        // isp Field Functions 
        bool hasIsp() const { return this->isp_ != nullptr;};
        void deleteIsp() { this->isp_ = nullptr;};
        inline const SupportResource::Isp & getIsp() const { DARABONBA_PTR_GET_CONST(isp_, SupportResource::Isp) };
        inline SupportResource::Isp getIsp() { DARABONBA_PTR_GET(isp_, SupportResource::Isp) };
        inline SupportResource& setIsp(const SupportResource::Isp & isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };
        inline SupportResource& setIsp(SupportResource::Isp && isp) { DARABONBA_PTR_SET_RVALUE(isp_, isp) };


        // systemDiskMaxSize Field Functions 
        bool hasSystemDiskMaxSize() const { return this->systemDiskMaxSize_ != nullptr;};
        void deleteSystemDiskMaxSize() { this->systemDiskMaxSize_ = nullptr;};
        inline int32_t getSystemDiskMaxSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskMaxSize_, 0) };
        inline SupportResource& setSystemDiskMaxSize(int32_t systemDiskMaxSize) { DARABONBA_PTR_SET_VALUE(systemDiskMaxSize_, systemDiskMaxSize) };


        // systemDiskMinSize Field Functions 
        bool hasSystemDiskMinSize() const { return this->systemDiskMinSize_ != nullptr;};
        void deleteSystemDiskMinSize() { this->systemDiskMinSize_ = nullptr;};
        inline int32_t getSystemDiskMinSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskMinSize_, 0) };
        inline SupportResource& setSystemDiskMinSize(int32_t systemDiskMinSize) { DARABONBA_PTR_SET_VALUE(systemDiskMinSize_, systemDiskMinSize) };


      protected:
        // Bandwidth billing method.
        shared_ptr<SupportResource::BandwidthTypes> bandwidthTypes_ {};
        // The maximum capacity of a data disk. Unit: GB.
        shared_ptr<int32_t> dataDiskMaxSize_ {};
        // The minimum data disk size. Unit: GiB.
        shared_ptr<int32_t> dataDiskMinSize_ {};
        // node ID
        shared_ptr<SupportResource::EnsRegionIds> ensRegionIds_ {};
        // The supplementary information about the edge nodes.
        shared_ptr<SupportResource::EnsRegionIdsExtends> ensRegionIdsExtends_ {};
        shared_ptr<SupportResource::InstanceSpeces> instanceSpeces_ {};
        // Operator
        shared_ptr<SupportResource::Isp> isp_ {};
        // The maximum size of the system disk. Unit: GiB.
        shared_ptr<int32_t> systemDiskMaxSize_ {};
        // The minimum capacity of a system disk. Unit: GB.
        shared_ptr<int32_t> systemDiskMinSize_ {};
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

    class Images : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Images& obj) { 
        DARABONBA_PTR_TO_JSON(Image, image_);
      };
      friend void from_json(const Darabonba::Json& j, Images& obj) { 
        DARABONBA_PTR_FROM_JSON(Image, image_);
      };
      Images() = default ;
      Images(const Images &) = default ;
      Images(Images &&) = default ;
      Images(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Images() = default ;
      Images& operator=(const Images &) = default ;
      Images& operator=(Images &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Image : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Image& obj) { 
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(ImageName, imageName_);
          DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
        };
        friend void from_json(const Darabonba::Json& j, Image& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
          DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
        };
        Image() = default ;
        Image(const Image &) = default ;
        Image(Image &&) = default ;
        Image(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Image() = default ;
        Image& operator=(const Image &) = default ;
        Image& operator=(Image &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->imageSize_ == nullptr; };
        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline Image& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // imageName Field Functions 
        bool hasImageName() const { return this->imageName_ != nullptr;};
        void deleteImageName() { this->imageName_ = nullptr;};
        inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
        inline Image& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


        // imageSize Field Functions 
        bool hasImageSize() const { return this->imageSize_ != nullptr;};
        void deleteImageSize() { this->imageSize_ = nullptr;};
        inline int32_t getImageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0) };
        inline Image& setImageSize(int32_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


      protected:
        // The ID of the image.
        shared_ptr<string> imageId_ {};
        // The name of the image.
        shared_ptr<string> imageName_ {};
        // The size of the image. Unit: GB.
        shared_ptr<int32_t> imageSize_ {};
      };

      virtual bool empty() const override { return this->image_ == nullptr; };
      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline const vector<Images::Image> & getImage() const { DARABONBA_PTR_GET_CONST(image_, vector<Images::Image>) };
      inline vector<Images::Image> getImage() { DARABONBA_PTR_GET(image_, vector<Images::Image>) };
      inline Images& setImage(const vector<Images::Image> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
      inline Images& setImage(vector<Images::Image> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    protected:
      shared_ptr<vector<Images::Image>> image_ {};
    };

    virtual bool empty() const override { return this->images_ == nullptr
        && this->requestId_ == nullptr && this->supportResources_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const DescribeAvailableResourceInfoResponseBody::Images & getImages() const { DARABONBA_PTR_GET_CONST(images_, DescribeAvailableResourceInfoResponseBody::Images) };
    inline DescribeAvailableResourceInfoResponseBody::Images getImages() { DARABONBA_PTR_GET(images_, DescribeAvailableResourceInfoResponseBody::Images) };
    inline DescribeAvailableResourceInfoResponseBody& setImages(const DescribeAvailableResourceInfoResponseBody::Images & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline DescribeAvailableResourceInfoResponseBody& setImages(DescribeAvailableResourceInfoResponseBody::Images && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportResources Field Functions 
    bool hasSupportResources() const { return this->supportResources_ != nullptr;};
    void deleteSupportResources() { this->supportResources_ = nullptr;};
    inline const DescribeAvailableResourceInfoResponseBody::SupportResources & getSupportResources() const { DARABONBA_PTR_GET_CONST(supportResources_, DescribeAvailableResourceInfoResponseBody::SupportResources) };
    inline DescribeAvailableResourceInfoResponseBody::SupportResources getSupportResources() { DARABONBA_PTR_GET(supportResources_, DescribeAvailableResourceInfoResponseBody::SupportResources) };
    inline DescribeAvailableResourceInfoResponseBody& setSupportResources(const DescribeAvailableResourceInfoResponseBody::SupportResources & supportResources) { DARABONBA_PTR_SET_VALUE(supportResources_, supportResources) };
    inline DescribeAvailableResourceInfoResponseBody& setSupportResources(DescribeAvailableResourceInfoResponseBody::SupportResources && supportResources) { DARABONBA_PTR_SET_RVALUE(supportResources_, supportResources) };


  protected:
    // The information about the image.
    shared_ptr<DescribeAvailableResourceInfoResponseBody::Images> images_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The specifications of resources that you can purchase.
    shared_ptr<DescribeAvailableResourceInfoResponseBody::SupportResources> supportResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
