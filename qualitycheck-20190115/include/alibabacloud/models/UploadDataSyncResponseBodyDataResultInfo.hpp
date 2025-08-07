// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFO_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadDataSyncResponseBodyDataResultInfoHandScoreIdList.hpp>
#include <alibabacloud/models/UploadDataSyncResponseBodyDataResultInfoRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncResponseBodyDataResultInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncResponseBodyDataResultInfo& obj) { 
      DARABONBA_PTR_TO_JSON(HandScoreIdList, handScoreIdList_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncResponseBodyDataResultInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(HandScoreIdList, handScoreIdList_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    UploadDataSyncResponseBodyDataResultInfo() = default ;
    UploadDataSyncResponseBodyDataResultInfo(const UploadDataSyncResponseBodyDataResultInfo &) = default ;
    UploadDataSyncResponseBodyDataResultInfo(UploadDataSyncResponseBodyDataResultInfo &&) = default ;
    UploadDataSyncResponseBodyDataResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncResponseBodyDataResultInfo() = default ;
    UploadDataSyncResponseBodyDataResultInfo& operator=(const UploadDataSyncResponseBodyDataResultInfo &) = default ;
    UploadDataSyncResponseBodyDataResultInfo& operator=(UploadDataSyncResponseBodyDataResultInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->handScoreIdList_ != nullptr
        && this->rules_ != nullptr && this->score_ != nullptr; };
    // handScoreIdList Field Functions 
    bool hasHandScoreIdList() const { return this->handScoreIdList_ != nullptr;};
    void deleteHandScoreIdList() { this->handScoreIdList_ = nullptr;};
    inline const Models::UploadDataSyncResponseBodyDataResultInfoHandScoreIdList & handScoreIdList() const { DARABONBA_PTR_GET_CONST(handScoreIdList_, Models::UploadDataSyncResponseBodyDataResultInfoHandScoreIdList) };
    inline Models::UploadDataSyncResponseBodyDataResultInfoHandScoreIdList handScoreIdList() { DARABONBA_PTR_GET(handScoreIdList_, Models::UploadDataSyncResponseBodyDataResultInfoHandScoreIdList) };
    inline UploadDataSyncResponseBodyDataResultInfo& setHandScoreIdList(const Models::UploadDataSyncResponseBodyDataResultInfoHandScoreIdList & handScoreIdList) { DARABONBA_PTR_SET_VALUE(handScoreIdList_, handScoreIdList) };
    inline UploadDataSyncResponseBodyDataResultInfo& setHandScoreIdList(Models::UploadDataSyncResponseBodyDataResultInfoHandScoreIdList && handScoreIdList) { DARABONBA_PTR_SET_RVALUE(handScoreIdList_, handScoreIdList) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const Models::UploadDataSyncResponseBodyDataResultInfoRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, Models::UploadDataSyncResponseBodyDataResultInfoRules) };
    inline Models::UploadDataSyncResponseBodyDataResultInfoRules rules() { DARABONBA_PTR_GET(rules_, Models::UploadDataSyncResponseBodyDataResultInfoRules) };
    inline UploadDataSyncResponseBodyDataResultInfo& setRules(const Models::UploadDataSyncResponseBodyDataResultInfoRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline UploadDataSyncResponseBodyDataResultInfo& setRules(Models::UploadDataSyncResponseBodyDataResultInfoRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline UploadDataSyncResponseBodyDataResultInfo& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    std::shared_ptr<Models::UploadDataSyncResponseBodyDataResultInfoHandScoreIdList> handScoreIdList_ = nullptr;
    std::shared_ptr<Models::UploadDataSyncResponseBodyDataResultInfoRules> rules_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
