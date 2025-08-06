// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCDNSTATISSUMRESPONSEBODYCDNSTATISLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCDNSTATISSUMRESPONSEBODYCDNSTATISLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCDNStatisSumResponseBodyCDNStatisListCDNMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCDNStatisSumResponseBodyCDNStatisList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCDNStatisSumResponseBodyCDNStatisList& obj) { 
      DARABONBA_PTR_TO_JSON(CDNMetric, CDNMetric_);
    };
    friend void from_json(const Darabonba::Json& j, GetCDNStatisSumResponseBodyCDNStatisList& obj) { 
      DARABONBA_PTR_FROM_JSON(CDNMetric, CDNMetric_);
    };
    GetCDNStatisSumResponseBodyCDNStatisList() = default ;
    GetCDNStatisSumResponseBodyCDNStatisList(const GetCDNStatisSumResponseBodyCDNStatisList &) = default ;
    GetCDNStatisSumResponseBodyCDNStatisList(GetCDNStatisSumResponseBodyCDNStatisList &&) = default ;
    GetCDNStatisSumResponseBodyCDNStatisList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCDNStatisSumResponseBodyCDNStatisList() = default ;
    GetCDNStatisSumResponseBodyCDNStatisList& operator=(const GetCDNStatisSumResponseBodyCDNStatisList &) = default ;
    GetCDNStatisSumResponseBodyCDNStatisList& operator=(GetCDNStatisSumResponseBodyCDNStatisList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CDNMetric_ != nullptr; };
    // CDNMetric Field Functions 
    bool hasCDNMetric() const { return this->CDNMetric_ != nullptr;};
    void deleteCDNMetric() { this->CDNMetric_ = nullptr;};
    inline const vector<Models::GetCDNStatisSumResponseBodyCDNStatisListCDNMetric> & CDNMetric() const { DARABONBA_PTR_GET_CONST(CDNMetric_, vector<Models::GetCDNStatisSumResponseBodyCDNStatisListCDNMetric>) };
    inline vector<Models::GetCDNStatisSumResponseBodyCDNStatisListCDNMetric> CDNMetric() { DARABONBA_PTR_GET(CDNMetric_, vector<Models::GetCDNStatisSumResponseBodyCDNStatisListCDNMetric>) };
    inline GetCDNStatisSumResponseBodyCDNStatisList& setCDNMetric(const vector<Models::GetCDNStatisSumResponseBodyCDNStatisListCDNMetric> & CDNMetric) { DARABONBA_PTR_SET_VALUE(CDNMetric_, CDNMetric) };
    inline GetCDNStatisSumResponseBodyCDNStatisList& setCDNMetric(vector<Models::GetCDNStatisSumResponseBodyCDNStatisListCDNMetric> && CDNMetric) { DARABONBA_PTR_SET_RVALUE(CDNMetric_, CDNMetric) };


  protected:
    std::shared_ptr<vector<Models::GetCDNStatisSumResponseBodyCDNStatisListCDNMetric>> CDNMetric_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
