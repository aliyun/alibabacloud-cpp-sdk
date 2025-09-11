// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEPERFORMANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEPERFORMANCE_HPP_
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
  class DescribeZonesResponseBodyZonesZonePerformance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZonePerformance& obj) { 
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZonePerformance& obj) { 
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeZonesResponseBodyZonesZonePerformance() = default ;
    DescribeZonesResponseBodyZonesZonePerformance(const DescribeZonesResponseBodyZonesZonePerformance &) = default ;
    DescribeZonesResponseBodyZonesZonePerformance(DescribeZonesResponseBodyZonesZonePerformance &&) = default ;
    DescribeZonesResponseBodyZonesZonePerformance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZonePerformance() = default ;
    DescribeZonesResponseBodyZonesZonePerformance& operator=(const DescribeZonesResponseBodyZonesZonePerformance &) = default ;
    DescribeZonesResponseBodyZonesZonePerformance& operator=(DescribeZonesResponseBodyZonesZonePerformance &&) = default ;
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
    inline DescribeZonesResponseBodyZonesZonePerformance& setProtocol(const vector<string> & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
    inline DescribeZonesResponseBodyZonesZonePerformance& setProtocol(vector<string> && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<vector<string>> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
