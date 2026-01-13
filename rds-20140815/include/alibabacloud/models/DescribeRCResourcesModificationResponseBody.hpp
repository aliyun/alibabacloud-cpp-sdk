// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCResourcesModificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCResourcesModificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCResourcesModificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCResourcesModificationResponseBody() = default ;
    DescribeRCResourcesModificationResponseBody(const DescribeRCResourcesModificationResponseBody &) = default ;
    DescribeRCResourcesModificationResponseBody(DescribeRCResourcesModificationResponseBody &&) = default ;
    DescribeRCResourcesModificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCResourcesModificationResponseBody() = default ;
    DescribeRCResourcesModificationResponseBody& operator=(const DescribeRCResourcesModificationResponseBody &) = default ;
    DescribeRCResourcesModificationResponseBody& operator=(DescribeRCResourcesModificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableZones& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusCategory, statusCategory_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableZones& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusCategory, statusCategory_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      AvailableZones() = default ;
      AvailableZones(const AvailableZones &) = default ;
      AvailableZones(AvailableZones &&) = default ;
      AvailableZones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableZones() = default ;
      AvailableZones& operator=(const AvailableZones &) = default ;
      AvailableZones& operator=(AvailableZones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AvailableResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailableResources& obj) { 
          DARABONBA_PTR_TO_JSON(SupportedResources, supportedResources_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableResources& obj) { 
          DARABONBA_PTR_FROM_JSON(SupportedResources, supportedResources_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        class SupportedResources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedResources& obj) { 
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(StatusCategory, statusCategory_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedResources& obj) { 
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(StatusCategory, statusCategory_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          SupportedResources() = default ;
          SupportedResources(const SupportedResources &) = default ;
          SupportedResources(SupportedResources &&) = default ;
          SupportedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportedResources() = default ;
          SupportedResources& operator=(const SupportedResources &) = default ;
          SupportedResources& operator=(SupportedResources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->status_ == nullptr
        && this->statusCategory_ == nullptr && this->value_ == nullptr; };
          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline SupportedResources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // statusCategory Field Functions 
          bool hasStatusCategory() const { return this->statusCategory_ != nullptr;};
          void deleteStatusCategory() { this->statusCategory_ = nullptr;};
          inline string getStatusCategory() const { DARABONBA_PTR_GET_DEFAULT(statusCategory_, "") };
          inline SupportedResources& setStatusCategory(string statusCategory) { DARABONBA_PTR_SET_VALUE(statusCategory_, statusCategory) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline SupportedResources& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> status_ {};
          shared_ptr<string> statusCategory_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->supportedResources_ == nullptr
        && this->type_ == nullptr; };
        // supportedResources Field Functions 
        bool hasSupportedResources() const { return this->supportedResources_ != nullptr;};
        void deleteSupportedResources() { this->supportedResources_ = nullptr;};
        inline const vector<AvailableResources::SupportedResources> & getSupportedResources() const { DARABONBA_PTR_GET_CONST(supportedResources_, vector<AvailableResources::SupportedResources>) };
        inline vector<AvailableResources::SupportedResources> getSupportedResources() { DARABONBA_PTR_GET(supportedResources_, vector<AvailableResources::SupportedResources>) };
        inline AvailableResources& setSupportedResources(const vector<AvailableResources::SupportedResources> & supportedResources) { DARABONBA_PTR_SET_VALUE(supportedResources_, supportedResources) };
        inline AvailableResources& setSupportedResources(vector<AvailableResources::SupportedResources> && supportedResources) { DARABONBA_PTR_SET_RVALUE(supportedResources_, supportedResources) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AvailableResources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<AvailableResources::SupportedResources>> supportedResources_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->availableResources_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr && this->statusCategory_ == nullptr && this->zoneId_ == nullptr; };
      // availableResources Field Functions 
      bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
      void deleteAvailableResources() { this->availableResources_ = nullptr;};
      inline const vector<AvailableZones::AvailableResources> & getAvailableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, vector<AvailableZones::AvailableResources>) };
      inline vector<AvailableZones::AvailableResources> getAvailableResources() { DARABONBA_PTR_GET(availableResources_, vector<AvailableZones::AvailableResources>) };
      inline AvailableZones& setAvailableResources(const vector<AvailableZones::AvailableResources> & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
      inline AvailableZones& setAvailableResources(vector<AvailableZones::AvailableResources> && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AvailableZones& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AvailableZones& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusCategory Field Functions 
      bool hasStatusCategory() const { return this->statusCategory_ != nullptr;};
      void deleteStatusCategory() { this->statusCategory_ = nullptr;};
      inline string getStatusCategory() const { DARABONBA_PTR_GET_DEFAULT(statusCategory_, "") };
      inline AvailableZones& setStatusCategory(string statusCategory) { DARABONBA_PTR_SET_VALUE(statusCategory_, statusCategory) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline AvailableZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<vector<AvailableZones::AvailableResources>> availableResources_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> statusCategory_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->availableZones_ == nullptr
        && this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const vector<DescribeRCResourcesModificationResponseBody::AvailableZones> & getAvailableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, vector<DescribeRCResourcesModificationResponseBody::AvailableZones>) };
    inline vector<DescribeRCResourcesModificationResponseBody::AvailableZones> getAvailableZones() { DARABONBA_PTR_GET(availableZones_, vector<DescribeRCResourcesModificationResponseBody::AvailableZones>) };
    inline DescribeRCResourcesModificationResponseBody& setAvailableZones(const vector<DescribeRCResourcesModificationResponseBody::AvailableZones> & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeRCResourcesModificationResponseBody& setAvailableZones(vector<DescribeRCResourcesModificationResponseBody::AvailableZones> && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCResourcesModificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeRCResourcesModificationResponseBody::AvailableZones>> availableZones_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
