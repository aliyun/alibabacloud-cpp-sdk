// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLLATIONTIMEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLLATIONTIMEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCollationTimeZonesResponseBodyCollationTimeZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCollationTimeZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCollationTimeZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CollationTimeZones, collationTimeZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCollationTimeZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CollationTimeZones, collationTimeZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCollationTimeZonesResponseBody() = default ;
    DescribeCollationTimeZonesResponseBody(const DescribeCollationTimeZonesResponseBody &) = default ;
    DescribeCollationTimeZonesResponseBody(DescribeCollationTimeZonesResponseBody &&) = default ;
    DescribeCollationTimeZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCollationTimeZonesResponseBody() = default ;
    DescribeCollationTimeZonesResponseBody& operator=(const DescribeCollationTimeZonesResponseBody &) = default ;
    DescribeCollationTimeZonesResponseBody& operator=(DescribeCollationTimeZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collationTimeZones_ == nullptr
        && return this->requestId_ == nullptr; };
    // collationTimeZones Field Functions 
    bool hasCollationTimeZones() const { return this->collationTimeZones_ != nullptr;};
    void deleteCollationTimeZones() { this->collationTimeZones_ = nullptr;};
    inline const DescribeCollationTimeZonesResponseBodyCollationTimeZones & collationTimeZones() const { DARABONBA_PTR_GET_CONST(collationTimeZones_, DescribeCollationTimeZonesResponseBodyCollationTimeZones) };
    inline DescribeCollationTimeZonesResponseBodyCollationTimeZones collationTimeZones() { DARABONBA_PTR_GET(collationTimeZones_, DescribeCollationTimeZonesResponseBodyCollationTimeZones) };
    inline DescribeCollationTimeZonesResponseBody& setCollationTimeZones(const DescribeCollationTimeZonesResponseBodyCollationTimeZones & collationTimeZones) { DARABONBA_PTR_SET_VALUE(collationTimeZones_, collationTimeZones) };
    inline DescribeCollationTimeZonesResponseBody& setCollationTimeZones(DescribeCollationTimeZonesResponseBodyCollationTimeZones && collationTimeZones) { DARABONBA_PTR_SET_RVALUE(collationTimeZones_, collationTimeZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCollationTimeZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of the character set collations and time zones that are available.
    std::shared_ptr<DescribeCollationTimeZonesResponseBodyCollationTimeZones> collationTimeZones_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
