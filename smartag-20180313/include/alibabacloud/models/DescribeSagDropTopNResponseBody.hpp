// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGDROPTOPNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGDROPTOPNRESPONSEBODY_HPP_
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
  class DescribeSagDropTopNResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagDropTopNResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DropTopN, dropTopN_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagDropTopNResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DropTopN, dropTopN_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSagDropTopNResponseBody() = default ;
    DescribeSagDropTopNResponseBody(const DescribeSagDropTopNResponseBody &) = default ;
    DescribeSagDropTopNResponseBody(DescribeSagDropTopNResponseBody &&) = default ;
    DescribeSagDropTopNResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagDropTopNResponseBody() = default ;
    DescribeSagDropTopNResponseBody& operator=(const DescribeSagDropTopNResponseBody &) = default ;
    DescribeSagDropTopNResponseBody& operator=(DescribeSagDropTopNResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DropTopN : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DropTopN& obj) { 
        DARABONBA_PTR_TO_JSON(DropRate, dropRate_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, DropTopN& obj) { 
        DARABONBA_PTR_FROM_JSON(DropRate, dropRate_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      DropTopN() = default ;
      DropTopN(const DropTopN &) = default ;
      DropTopN(DropTopN &&) = default ;
      DropTopN(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DropTopN() = default ;
      DropTopN& operator=(const DropTopN &) = default ;
      DropTopN& operator=(DropTopN &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dropRate_ == nullptr
        && this->instanceId_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr; };
      // dropRate Field Functions 
      bool hasDropRate() const { return this->dropRate_ != nullptr;};
      void deleteDropRate() { this->dropRate_ = nullptr;};
      inline string getDropRate() const { DARABONBA_PTR_GET_DEFAULT(dropRate_, "") };
      inline DropTopN& setDropRate(string dropRate) { DARABONBA_PTR_SET_VALUE(dropRate_, dropRate) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DropTopN& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DropTopN& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DropTopN& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The packet loss rate of the SAG instance. Unit: packets per second (PPS).
      shared_ptr<string> dropRate_ {};
      // The ID of the SAG instance.
      shared_ptr<string> instanceId_ {};
      // The name of the SAG instance.
      shared_ptr<string> name_ {};
      // The ID of the region where the SAG instance is deployed.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->dropTopN_ == nullptr
        && this->requestId_ == nullptr; };
    // dropTopN Field Functions 
    bool hasDropTopN() const { return this->dropTopN_ != nullptr;};
    void deleteDropTopN() { this->dropTopN_ = nullptr;};
    inline const vector<DescribeSagDropTopNResponseBody::DropTopN> & getDropTopN() const { DARABONBA_PTR_GET_CONST(dropTopN_, vector<DescribeSagDropTopNResponseBody::DropTopN>) };
    inline vector<DescribeSagDropTopNResponseBody::DropTopN> getDropTopN() { DARABONBA_PTR_GET(dropTopN_, vector<DescribeSagDropTopNResponseBody::DropTopN>) };
    inline DescribeSagDropTopNResponseBody& setDropTopN(const vector<DescribeSagDropTopNResponseBody::DropTopN> & dropTopN) { DARABONBA_PTR_SET_VALUE(dropTopN_, dropTopN) };
    inline DescribeSagDropTopNResponseBody& setDropTopN(vector<DescribeSagDropTopNResponseBody::DropTopN> && dropTopN) { DARABONBA_PTR_SET_RVALUE(dropTopN_, dropTopN) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagDropTopNResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about packets dropped by the SAG instance.
    shared_ptr<vector<DescribeSagDropTopNResponseBody::DropTopN>> dropTopN_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
