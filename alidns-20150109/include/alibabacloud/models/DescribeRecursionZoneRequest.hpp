// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECURSIONZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECURSIONZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecursionZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecursionZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecursionZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRecursionZoneRequest() = default ;
    DescribeRecursionZoneRequest(const DescribeRecursionZoneRequest &) = default ;
    DescribeRecursionZoneRequest(DescribeRecursionZoneRequest &&) = default ;
    DescribeRecursionZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecursionZoneRequest() = default ;
    DescribeRecursionZoneRequest& operator=(const DescribeRecursionZoneRequest &) = default ;
    DescribeRecursionZoneRequest& operator=(DescribeRecursionZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zoneId_ == nullptr; };
    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRecursionZoneRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
