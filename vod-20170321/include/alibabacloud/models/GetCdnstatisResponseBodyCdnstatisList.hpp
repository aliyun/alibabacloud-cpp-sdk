// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCDNSTATISRESPONSEBODYCDNSTATISLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCDNSTATISRESPONSEBODYCDNSTATISLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCDNStatisResponseBodyCDNStatisListCDNMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCDNStatisResponseBodyCDNStatisList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCDNStatisResponseBodyCDNStatisList& obj) { 
      DARABONBA_PTR_TO_JSON(CDNMetric, CDNMetric_);
    };
    friend void from_json(const Darabonba::Json& j, GetCDNStatisResponseBodyCDNStatisList& obj) { 
      DARABONBA_PTR_FROM_JSON(CDNMetric, CDNMetric_);
    };
    GetCDNStatisResponseBodyCDNStatisList() = default ;
    GetCDNStatisResponseBodyCDNStatisList(const GetCDNStatisResponseBodyCDNStatisList &) = default ;
    GetCDNStatisResponseBodyCDNStatisList(GetCDNStatisResponseBodyCDNStatisList &&) = default ;
    GetCDNStatisResponseBodyCDNStatisList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCDNStatisResponseBodyCDNStatisList() = default ;
    GetCDNStatisResponseBodyCDNStatisList& operator=(const GetCDNStatisResponseBodyCDNStatisList &) = default ;
    GetCDNStatisResponseBodyCDNStatisList& operator=(GetCDNStatisResponseBodyCDNStatisList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CDNMetric_ != nullptr; };
    // CDNMetric Field Functions 
    bool hasCDNMetric() const { return this->CDNMetric_ != nullptr;};
    void deleteCDNMetric() { this->CDNMetric_ = nullptr;};
    inline const vector<Models::GetCDNStatisResponseBodyCDNStatisListCDNMetric> & CDNMetric() const { DARABONBA_PTR_GET_CONST(CDNMetric_, vector<Models::GetCDNStatisResponseBodyCDNStatisListCDNMetric>) };
    inline vector<Models::GetCDNStatisResponseBodyCDNStatisListCDNMetric> CDNMetric() { DARABONBA_PTR_GET(CDNMetric_, vector<Models::GetCDNStatisResponseBodyCDNStatisListCDNMetric>) };
    inline GetCDNStatisResponseBodyCDNStatisList& setCDNMetric(const vector<Models::GetCDNStatisResponseBodyCDNStatisListCDNMetric> & CDNMetric) { DARABONBA_PTR_SET_VALUE(CDNMetric_, CDNMetric) };
    inline GetCDNStatisResponseBodyCDNStatisList& setCDNMetric(vector<Models::GetCDNStatisResponseBodyCDNStatisListCDNMetric> && CDNMetric) { DARABONBA_PTR_SET_RVALUE(CDNMetric_, CDNMetric) };


  protected:
    std::shared_ptr<vector<Models::GetCDNStatisResponseBodyCDNStatisListCDNMetric>> CDNMetric_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
