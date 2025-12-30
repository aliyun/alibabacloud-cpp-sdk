// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOLVERAVAILABLEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOLVERAVAILABLEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeResolverAvailableZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResolverAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResolverAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeResolverAvailableZonesResponseBody() = default ;
    DescribeResolverAvailableZonesResponseBody(const DescribeResolverAvailableZonesResponseBody &) = default ;
    DescribeResolverAvailableZonesResponseBody(DescribeResolverAvailableZonesResponseBody &&) = default ;
    DescribeResolverAvailableZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResolverAvailableZonesResponseBody() = default ;
    DescribeResolverAvailableZonesResponseBody& operator=(const DescribeResolverAvailableZonesResponseBody &) = default ;
    DescribeResolverAvailableZonesResponseBody& operator=(DescribeResolverAvailableZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableZones& obj) { 
        DARABONBA_PTR_TO_JSON(AzId, azId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableZones& obj) { 
        DARABONBA_PTR_FROM_JSON(AzId, azId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->azId_ == nullptr
        && this->status_ == nullptr; };
      // azId Field Functions 
      bool hasAzId() const { return this->azId_ != nullptr;};
      void deleteAzId() { this->azId_ = nullptr;};
      inline string getAzId() const { DARABONBA_PTR_GET_DEFAULT(azId_, "") };
      inline AvailableZones& setAzId(string azId) { DARABONBA_PTR_SET_VALUE(azId_, azId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AvailableZones& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The zone ID.
      shared_ptr<string> azId_ {};
      // The state of resources in the zone. Valid values:
      // 
      // *   NORMAL: The resources are in the normal state.
      // *   SOLD_OUT: The resources are sold out.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->availableZones_ == nullptr
        && this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const vector<DescribeResolverAvailableZonesResponseBody::AvailableZones> & getAvailableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, vector<DescribeResolverAvailableZonesResponseBody::AvailableZones>) };
    inline vector<DescribeResolverAvailableZonesResponseBody::AvailableZones> getAvailableZones() { DARABONBA_PTR_GET(availableZones_, vector<DescribeResolverAvailableZonesResponseBody::AvailableZones>) };
    inline DescribeResolverAvailableZonesResponseBody& setAvailableZones(const vector<DescribeResolverAvailableZonesResponseBody::AvailableZones> & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeResolverAvailableZonesResponseBody& setAvailableZones(vector<DescribeResolverAvailableZonesResponseBody::AvailableZones> && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResolverAvailableZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried zones.
    shared_ptr<vector<DescribeResolverAvailableZonesResponseBody::AvailableZones>> availableZones_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
