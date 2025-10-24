// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTTEXTFPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTTEXTFPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots& obj) { 
      DARABONBA_PTR_TO_JSON(TextFpShot, textFpShot_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots& obj) { 
      DARABONBA_PTR_FROM_JSON(TextFpShot, textFpShot_);
    };
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots &&) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots& operator=(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots& operator=(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->textFpShot_ == nullptr; };
    // textFpShot Field Functions 
    bool hasTextFpShot() const { return this->textFpShot_ != nullptr;};
    void deleteTextFpShot() { this->textFpShot_ = nullptr;};
    inline const vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot> & textFpShot() const { DARABONBA_PTR_GET_CONST(textFpShot_, vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot>) };
    inline vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot> textFpShot() { DARABONBA_PTR_GET(textFpShot_, vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot>) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots& setTextFpShot(const vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot> & textFpShot) { DARABONBA_PTR_SET_VALUE(textFpShot_, textFpShot) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots& setTextFpShot(vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot> && textFpShot) { DARABONBA_PTR_SET_RVALUE(textFpShot_, textFpShot) };


  protected:
    std::shared_ptr<vector<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot>> textFpShot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
