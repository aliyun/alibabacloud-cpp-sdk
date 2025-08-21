// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODYPUSHRESULTSPUSHRESULTSTATUSSTATS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODYPUSHRESULTSPUSHRESULTSTATUSSTATS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS& obj) { 
      DARABONBA_PTR_TO_JSON(StatusStat, statusStat_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS& obj) { 
      DARABONBA_PTR_FROM_JSON(StatusStat, statusStat_);
    };
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS() = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS(const DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS &) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS(DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS &&) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS() = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS& operator=(const DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS &) = default ;
    DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS& operator=(DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->statusStat_ != nullptr; };
    // statusStat Field Functions 
    bool hasStatusStat() const { return this->statusStat_ != nullptr;};
    void deleteStatusStat() { this->statusStat_ = nullptr;};
    inline const vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat> & statusStat() const { DARABONBA_PTR_GET_CONST(statusStat_, vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat>) };
    inline vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat> statusStat() { DARABONBA_PTR_GET(statusStat_, vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat>) };
    inline DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS& setStatusStat(const vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat> & statusStat) { DARABONBA_PTR_SET_VALUE(statusStat_, statusStat) };
    inline DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatS& setStatusStat(vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat> && statusStat) { DARABONBA_PTR_SET_RVALUE(statusStat_, statusStat) };


  protected:
    std::shared_ptr<vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResultStatusStatSStatusStat>> statusStat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
