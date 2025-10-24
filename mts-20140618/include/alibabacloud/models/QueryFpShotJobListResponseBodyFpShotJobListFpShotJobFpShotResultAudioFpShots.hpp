// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTAUDIOFPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTAUDIOFPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShotsFpShot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots& obj) { 
      DARABONBA_PTR_TO_JSON(FpShot, fpShot_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShot, fpShot_);
    };
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots &&) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots& operator=(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots& operator=(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpShot_ == nullptr; };
    // fpShot Field Functions 
    bool hasFpShot() const { return this->fpShot_ != nullptr;};
    void deleteFpShot() { this->fpShot_ = nullptr;};
    inline const vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShotsFpShot> & fpShot() const { DARABONBA_PTR_GET_CONST(fpShot_, vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShotsFpShot>) };
    inline vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShotsFpShot> fpShot() { DARABONBA_PTR_GET(fpShot_, vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShotsFpShot>) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots& setFpShot(const vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShotsFpShot> & fpShot) { DARABONBA_PTR_SET_VALUE(fpShot_, fpShot) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots& setFpShot(vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShotsFpShot> && fpShot) { DARABONBA_PTR_SET_RVALUE(fpShot_, fpShot) };


  protected:
    std::shared_ptr<vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShotsFpShot>> fpShot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
