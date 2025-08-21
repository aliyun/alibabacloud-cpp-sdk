// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTASHRESPONSEBODYRESULTZONEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTASHRESPONSEBODYRESULTZONEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeLogstashResponseBodyResultZoneInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogstashResponseBodyResultZoneInfos& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogstashResponseBodyResultZoneInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    DescribeLogstashResponseBodyResultZoneInfos() = default ;
    DescribeLogstashResponseBodyResultZoneInfos(const DescribeLogstashResponseBodyResultZoneInfos &) = default ;
    DescribeLogstashResponseBodyResultZoneInfos(DescribeLogstashResponseBodyResultZoneInfos &&) = default ;
    DescribeLogstashResponseBodyResultZoneInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogstashResponseBodyResultZoneInfos() = default ;
    DescribeLogstashResponseBodyResultZoneInfos& operator=(const DescribeLogstashResponseBodyResultZoneInfos &) = default ;
    DescribeLogstashResponseBodyResultZoneInfos& operator=(DescribeLogstashResponseBodyResultZoneInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->zoneId_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLogstashResponseBodyResultZoneInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeLogstashResponseBodyResultZoneInfos& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The zone ID of the new instance.
    std::shared_ptr<string> status_ = nullptr;
    // The configuration of cluster extension parameters.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
