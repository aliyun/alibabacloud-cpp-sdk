// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONECAPACITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONECAPACITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZoneCapacity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneCapacity& obj) { 
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneCapacity& obj) { 
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeZonesResponseBodyZonesZoneCapacity() = default ;
    DescribeZonesResponseBodyZonesZoneCapacity(const DescribeZonesResponseBodyZonesZoneCapacity &) = default ;
    DescribeZonesResponseBodyZonesZoneCapacity(DescribeZonesResponseBodyZonesZoneCapacity &&) = default ;
    DescribeZonesResponseBodyZonesZoneCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneCapacity() = default ;
    DescribeZonesResponseBodyZonesZoneCapacity& operator=(const DescribeZonesResponseBodyZonesZoneCapacity &) = default ;
    DescribeZonesResponseBodyZonesZoneCapacity& operator=(DescribeZonesResponseBodyZonesZoneCapacity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->protocol_ != nullptr; };
    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline const vector<string> & protocol() const { DARABONBA_PTR_GET_CONST(protocol_, vector<string>) };
    inline vector<string> protocol() { DARABONBA_PTR_GET(protocol_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneCapacity& setProtocol(const vector<string> & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
    inline DescribeZonesResponseBodyZonesZoneCapacity& setProtocol(vector<string> && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<vector<string>> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
