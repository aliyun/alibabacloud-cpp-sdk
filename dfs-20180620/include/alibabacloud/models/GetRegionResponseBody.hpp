// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRegionResponseBody() = default ;
    GetRegionResponseBody(const GetRegionResponseBody &) = default ;
    GetRegionResponseBody(GetRegionResponseBody &&) = default ;
    GetRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionResponseBody() = default ;
    GetRegionResponseBody& operator=(const GetRegionResponseBody &) = default ;
    GetRegionResponseBody& operator=(GetRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableZones& obj) { 
        DARABONBA_PTR_TO_JSON(Options, options_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableZones& obj) { 
        DARABONBA_PTR_FROM_JSON(Options, options_);
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
      class Options : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Options& obj) { 
          DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        };
        friend void from_json(const Darabonba::Json& j, Options& obj) { 
          DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        };
        Options() = default ;
        Options(const Options &) = default ;
        Options(Options &&) = default ;
        Options(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Options() = default ;
        Options& operator=(const Options &) = default ;
        Options& operator=(Options &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->protocolType_ == nullptr
        && this->storageType_ == nullptr; };
        // protocolType Field Functions 
        bool hasProtocolType() const { return this->protocolType_ != nullptr;};
        void deleteProtocolType() { this->protocolType_ = nullptr;};
        inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
        inline Options& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline Options& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      protected:
        shared_ptr<string> protocolType_ {};
        shared_ptr<string> storageType_ {};
      };

      virtual bool empty() const override { return this->options_ == nullptr
        && this->zoneId_ == nullptr; };
      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline const vector<AvailableZones::Options> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, vector<AvailableZones::Options>) };
      inline vector<AvailableZones::Options> getOptions() { DARABONBA_PTR_GET(options_, vector<AvailableZones::Options>) };
      inline AvailableZones& setOptions(const vector<AvailableZones::Options> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
      inline AvailableZones& setOptions(vector<AvailableZones::Options> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline AvailableZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<vector<AvailableZones::Options>> options_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->availableZones_ == nullptr
        && this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const vector<GetRegionResponseBody::AvailableZones> & getAvailableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, vector<GetRegionResponseBody::AvailableZones>) };
    inline vector<GetRegionResponseBody::AvailableZones> getAvailableZones() { DARABONBA_PTR_GET(availableZones_, vector<GetRegionResponseBody::AvailableZones>) };
    inline GetRegionResponseBody& setAvailableZones(const vector<GetRegionResponseBody::AvailableZones> & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline GetRegionResponseBody& setAvailableZones(vector<GetRegionResponseBody::AvailableZones> && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetRegionResponseBody::AvailableZones>> availableZones_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
