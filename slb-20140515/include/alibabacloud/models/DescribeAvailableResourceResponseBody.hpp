// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody(DescribeAvailableResourceResponseBody &&) = default ;
    DescribeAvailableResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody& operator=(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody& operator=(DescribeAvailableResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableResources& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableResource, availableResource_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableResources& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableResource, availableResource_);
      };
      AvailableResources() = default ;
      AvailableResources(const AvailableResources &) = default ;
      AvailableResources(AvailableResources &&) = default ;
      AvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableResources() = default ;
      AvailableResources& operator=(const AvailableResources &) = default ;
      AvailableResources& operator=(AvailableResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AvailableResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailableResource& obj) { 
          DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
          DARABONBA_PTR_TO_JSON(SlaveZoneId, slaveZoneId_);
          DARABONBA_PTR_TO_JSON(SupportResources, supportResources_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableResource& obj) { 
          DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
          DARABONBA_PTR_FROM_JSON(SlaveZoneId, slaveZoneId_);
          DARABONBA_PTR_FROM_JSON(SupportResources, supportResources_);
        };
        AvailableResource() = default ;
        AvailableResource(const AvailableResource &) = default ;
        AvailableResource(AvailableResource &&) = default ;
        AvailableResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailableResource() = default ;
        AvailableResource& operator=(const AvailableResource &) = default ;
        AvailableResource& operator=(AvailableResource &&) = default ;
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
              DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
              DARABONBA_PTR_TO_JSON(AddressType, addressType_);
            };
            friend void from_json(const Darabonba::Json& j, SupportResource& obj) { 
              DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
              DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
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
            virtual bool empty() const override { return this->addressIPVersion_ == nullptr
        && this->addressType_ == nullptr; };
            // addressIPVersion Field Functions 
            bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
            void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
            inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
            inline SupportResource& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


            // addressType Field Functions 
            bool hasAddressType() const { return this->addressType_ != nullptr;};
            void deleteAddressType() { this->addressType_ = nullptr;};
            inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
            inline SupportResource& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


          protected:
            shared_ptr<string> addressIPVersion_ {};
            shared_ptr<string> addressType_ {};
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

        virtual bool empty() const override { return this->masterZoneId_ == nullptr
        && this->slaveZoneId_ == nullptr && this->supportResources_ == nullptr; };
        // masterZoneId Field Functions 
        bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
        void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
        inline string getMasterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
        inline AvailableResource& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


        // slaveZoneId Field Functions 
        bool hasSlaveZoneId() const { return this->slaveZoneId_ != nullptr;};
        void deleteSlaveZoneId() { this->slaveZoneId_ = nullptr;};
        inline string getSlaveZoneId() const { DARABONBA_PTR_GET_DEFAULT(slaveZoneId_, "") };
        inline AvailableResource& setSlaveZoneId(string slaveZoneId) { DARABONBA_PTR_SET_VALUE(slaveZoneId_, slaveZoneId) };


        // supportResources Field Functions 
        bool hasSupportResources() const { return this->supportResources_ != nullptr;};
        void deleteSupportResources() { this->supportResources_ = nullptr;};
        inline const AvailableResource::SupportResources & getSupportResources() const { DARABONBA_PTR_GET_CONST(supportResources_, AvailableResource::SupportResources) };
        inline AvailableResource::SupportResources getSupportResources() { DARABONBA_PTR_GET(supportResources_, AvailableResource::SupportResources) };
        inline AvailableResource& setSupportResources(const AvailableResource::SupportResources & supportResources) { DARABONBA_PTR_SET_VALUE(supportResources_, supportResources) };
        inline AvailableResource& setSupportResources(AvailableResource::SupportResources && supportResources) { DARABONBA_PTR_SET_RVALUE(supportResources_, supportResources) };


      protected:
        shared_ptr<string> masterZoneId_ {};
        shared_ptr<string> slaveZoneId_ {};
        shared_ptr<AvailableResource::SupportResources> supportResources_ {};
      };

      virtual bool empty() const override { return this->availableResource_ == nullptr; };
      // availableResource Field Functions 
      bool hasAvailableResource() const { return this->availableResource_ != nullptr;};
      void deleteAvailableResource() { this->availableResource_ = nullptr;};
      inline const vector<AvailableResources::AvailableResource> & getAvailableResource() const { DARABONBA_PTR_GET_CONST(availableResource_, vector<AvailableResources::AvailableResource>) };
      inline vector<AvailableResources::AvailableResource> getAvailableResource() { DARABONBA_PTR_GET(availableResource_, vector<AvailableResources::AvailableResource>) };
      inline AvailableResources& setAvailableResource(const vector<AvailableResources::AvailableResource> & availableResource) { DARABONBA_PTR_SET_VALUE(availableResource_, availableResource) };
      inline AvailableResources& setAvailableResource(vector<AvailableResources::AvailableResource> && availableResource) { DARABONBA_PTR_SET_RVALUE(availableResource_, availableResource) };


    protected:
      shared_ptr<vector<AvailableResources::AvailableResource>> availableResource_ {};
    };

    virtual bool empty() const override { return this->availableResources_ == nullptr
        && this->requestId_ == nullptr; };
    // availableResources Field Functions 
    bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
    void deleteAvailableResources() { this->availableResources_ = nullptr;};
    inline const DescribeAvailableResourceResponseBody::AvailableResources & getAvailableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, DescribeAvailableResourceResponseBody::AvailableResources) };
    inline DescribeAvailableResourceResponseBody::AvailableResources getAvailableResources() { DARABONBA_PTR_GET(availableResources_, DescribeAvailableResourceResponseBody::AvailableResources) };
    inline DescribeAvailableResourceResponseBody& setAvailableResources(const DescribeAvailableResourceResponseBody::AvailableResources & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
    inline DescribeAvailableResourceResponseBody& setAvailableResources(DescribeAvailableResourceResponseBody::AvailableResources && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeAvailableResourceResponseBody::AvailableResources> availableResources_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
