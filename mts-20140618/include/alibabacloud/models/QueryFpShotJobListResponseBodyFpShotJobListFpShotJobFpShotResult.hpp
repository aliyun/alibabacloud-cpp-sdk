// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots.hpp>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots.hpp>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult& obj) { 
      DARABONBA_PTR_TO_JSON(AudioFpShots, audioFpShots_);
      DARABONBA_PTR_TO_JSON(FpShots, fpShots_);
      DARABONBA_PTR_TO_JSON(TextFpShots, textFpShots_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioFpShots, audioFpShots_);
      DARABONBA_PTR_FROM_JSON(FpShots, fpShots_);
      DARABONBA_PTR_FROM_JSON(TextFpShots, textFpShots_);
    };
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult &&) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult& operator=(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult& operator=(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioFpShots_ == nullptr
        && return this->fpShots_ == nullptr && return this->textFpShots_ == nullptr; };
    // audioFpShots Field Functions 
    bool hasAudioFpShots() const { return this->audioFpShots_ != nullptr;};
    void deleteAudioFpShots() { this->audioFpShots_ = nullptr;};
    inline const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots & audioFpShots() const { DARABONBA_PTR_GET_CONST(audioFpShots_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots) };
    inline Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots audioFpShots() { DARABONBA_PTR_GET(audioFpShots_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult& setAudioFpShots(const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots & audioFpShots) { DARABONBA_PTR_SET_VALUE(audioFpShots_, audioFpShots) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult& setAudioFpShots(Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots && audioFpShots) { DARABONBA_PTR_SET_RVALUE(audioFpShots_, audioFpShots) };


    // fpShots Field Functions 
    bool hasFpShots() const { return this->fpShots_ != nullptr;};
    void deleteFpShots() { this->fpShots_ = nullptr;};
    inline const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots & fpShots() const { DARABONBA_PTR_GET_CONST(fpShots_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots) };
    inline Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots fpShots() { DARABONBA_PTR_GET(fpShots_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult& setFpShots(const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots & fpShots) { DARABONBA_PTR_SET_VALUE(fpShots_, fpShots) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult& setFpShots(Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots && fpShots) { DARABONBA_PTR_SET_RVALUE(fpShots_, fpShots) };


    // textFpShots Field Functions 
    bool hasTextFpShots() const { return this->textFpShots_ != nullptr;};
    void deleteTextFpShots() { this->textFpShots_ = nullptr;};
    inline const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots & textFpShots() const { DARABONBA_PTR_GET_CONST(textFpShots_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots) };
    inline Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots textFpShots() { DARABONBA_PTR_GET(textFpShots_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult& setTextFpShots(const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots & textFpShots) { DARABONBA_PTR_SET_VALUE(textFpShots_, textFpShots) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResult& setTextFpShots(Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots && textFpShots) { DARABONBA_PTR_SET_RVALUE(textFpShots_, textFpShots) };


  protected:
    // The audio fingerprint analysis results.
    std::shared_ptr<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultAudioFpShots> audioFpShots_ = nullptr;
    // The video fingerprint analysis results.
    std::shared_ptr<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShots> fpShots_ = nullptr;
    // The text fingerprint analysis results.
    std::shared_ptr<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShots> textFpShots_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
