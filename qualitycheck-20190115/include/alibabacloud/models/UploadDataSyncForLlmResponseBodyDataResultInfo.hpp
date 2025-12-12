// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFO_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadDataSyncForLLMResponseBodyDataResultInfoRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncForLLMResponseBodyDataResultInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncForLLMResponseBodyDataResultInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncForLLMResponseBodyDataResultInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    UploadDataSyncForLLMResponseBodyDataResultInfo() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfo(const UploadDataSyncForLLMResponseBodyDataResultInfo &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfo(UploadDataSyncForLLMResponseBodyDataResultInfo &&) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncForLLMResponseBodyDataResultInfo() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfo& operator=(const UploadDataSyncForLLMResponseBodyDataResultInfo &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfo& operator=(UploadDataSyncForLLMResponseBodyDataResultInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rules_ == nullptr
        && return this->score_ == nullptr; };
    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const Models::UploadDataSyncForLLMResponseBodyDataResultInfoRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, Models::UploadDataSyncForLLMResponseBodyDataResultInfoRules) };
    inline Models::UploadDataSyncForLLMResponseBodyDataResultInfoRules rules() { DARABONBA_PTR_GET(rules_, Models::UploadDataSyncForLLMResponseBodyDataResultInfoRules) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfo& setRules(const Models::UploadDataSyncForLLMResponseBodyDataResultInfoRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfo& setRules(Models::UploadDataSyncForLLMResponseBodyDataResultInfoRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfo& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    std::shared_ptr<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRules> rules_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
