// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTFPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTFPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots& obj) { 
      DARABONBA_PTR_TO_JSON(FpShot, fpShot_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShot, fpShot_);
    };
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots &&) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots& operator=(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots& operator=(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpShot_ == nullptr; };
    // fpShot Field Functions 
    bool hasFpShot() const { return this->fpShot_ != nullptr;};
    void deleteFpShot() { this->fpShot_ = nullptr;};
    inline const vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot> & fpShot() const { DARABONBA_PTR_GET_CONST(fpShot_, vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot>) };
    inline vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot> fpShot() { DARABONBA_PTR_GET(fpShot_, vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot>) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots& setFpShot(const vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot> & fpShot) { DARABONBA_PTR_SET_VALUE(fpShot_, fpShot) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots& setFpShot(vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot> && fpShot) { DARABONBA_PTR_SET_RVALUE(fpShot_, fpShot) };


  protected:
    std::shared_ptr<vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot>> fpShot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
