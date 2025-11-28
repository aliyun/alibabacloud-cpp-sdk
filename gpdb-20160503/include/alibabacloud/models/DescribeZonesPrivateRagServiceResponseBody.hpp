// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESPRIVATERAGSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESPRIVATERAGSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeZonesPrivateRAGServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesPrivateRAGServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesPrivateRAGServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
    };
    DescribeZonesPrivateRAGServiceResponseBody() = default ;
    DescribeZonesPrivateRAGServiceResponseBody(const DescribeZonesPrivateRAGServiceResponseBody &) = default ;
    DescribeZonesPrivateRAGServiceResponseBody(DescribeZonesPrivateRAGServiceResponseBody &&) = default ;
    DescribeZonesPrivateRAGServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesPrivateRAGServiceResponseBody() = default ;
    DescribeZonesPrivateRAGServiceResponseBody& operator=(const DescribeZonesPrivateRAGServiceResponseBody &) = default ;
    DescribeZonesPrivateRAGServiceResponseBody& operator=(DescribeZonesPrivateRAGServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->zoneIds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeZonesPrivateRAGServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline const vector<string> & zoneIds() const { DARABONBA_PTR_GET_CONST(zoneIds_, vector<string>) };
    inline vector<string> zoneIds() { DARABONBA_PTR_GET(zoneIds_, vector<string>) };
    inline DescribeZonesPrivateRAGServiceResponseBody& setZoneIds(const vector<string> & zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };
    inline DescribeZonesPrivateRAGServiceResponseBody& setZoneIds(vector<string> && zoneIds) { DARABONBA_PTR_SET_RVALUE(zoneIds_, zoneIds) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> zoneIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
