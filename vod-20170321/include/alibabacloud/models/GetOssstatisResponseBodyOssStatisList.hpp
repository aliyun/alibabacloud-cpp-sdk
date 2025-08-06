// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSTATISRESPONSEBODYOSSSTATISLIST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSTATISRESPONSEBODYOSSSTATISLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOSSStatisResponseBodyOssStatisListOSSMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetOSSStatisResponseBodyOssStatisList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOSSStatisResponseBodyOssStatisList& obj) { 
      DARABONBA_PTR_TO_JSON(OSSMetric, OSSMetric_);
    };
    friend void from_json(const Darabonba::Json& j, GetOSSStatisResponseBodyOssStatisList& obj) { 
      DARABONBA_PTR_FROM_JSON(OSSMetric, OSSMetric_);
    };
    GetOSSStatisResponseBodyOssStatisList() = default ;
    GetOSSStatisResponseBodyOssStatisList(const GetOSSStatisResponseBodyOssStatisList &) = default ;
    GetOSSStatisResponseBodyOssStatisList(GetOSSStatisResponseBodyOssStatisList &&) = default ;
    GetOSSStatisResponseBodyOssStatisList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOSSStatisResponseBodyOssStatisList() = default ;
    GetOSSStatisResponseBodyOssStatisList& operator=(const GetOSSStatisResponseBodyOssStatisList &) = default ;
    GetOSSStatisResponseBodyOssStatisList& operator=(GetOSSStatisResponseBodyOssStatisList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->OSSMetric_ != nullptr; };
    // OSSMetric Field Functions 
    bool hasOSSMetric() const { return this->OSSMetric_ != nullptr;};
    void deleteOSSMetric() { this->OSSMetric_ = nullptr;};
    inline const vector<Models::GetOSSStatisResponseBodyOssStatisListOSSMetric> & OSSMetric() const { DARABONBA_PTR_GET_CONST(OSSMetric_, vector<Models::GetOSSStatisResponseBodyOssStatisListOSSMetric>) };
    inline vector<Models::GetOSSStatisResponseBodyOssStatisListOSSMetric> OSSMetric() { DARABONBA_PTR_GET(OSSMetric_, vector<Models::GetOSSStatisResponseBodyOssStatisListOSSMetric>) };
    inline GetOSSStatisResponseBodyOssStatisList& setOSSMetric(const vector<Models::GetOSSStatisResponseBodyOssStatisListOSSMetric> & OSSMetric) { DARABONBA_PTR_SET_VALUE(OSSMetric_, OSSMetric) };
    inline GetOSSStatisResponseBodyOssStatisList& setOSSMetric(vector<Models::GetOSSStatisResponseBodyOssStatisListOSSMetric> && OSSMetric) { DARABONBA_PTR_SET_RVALUE(OSSMetric_, OSSMetric) };


  protected:
    std::shared_ptr<vector<Models::GetOSSStatisResponseBodyOssStatisListOSSMetric>> OSSMetric_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
