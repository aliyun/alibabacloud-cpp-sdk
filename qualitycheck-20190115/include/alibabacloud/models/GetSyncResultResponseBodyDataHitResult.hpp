// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODYDATAHITRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODYDATAHITRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSyncResultResponseBodyDataHitResultHits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSyncResultResponseBodyDataHitResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyncResultResponseBodyDataHitResult& obj) { 
      DARABONBA_PTR_TO_JSON(Hits, hits_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyncResultResponseBodyDataHitResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Hits, hits_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetSyncResultResponseBodyDataHitResult() = default ;
    GetSyncResultResponseBodyDataHitResult(const GetSyncResultResponseBodyDataHitResult &) = default ;
    GetSyncResultResponseBodyDataHitResult(GetSyncResultResponseBodyDataHitResult &&) = default ;
    GetSyncResultResponseBodyDataHitResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyncResultResponseBodyDataHitResult() = default ;
    GetSyncResultResponseBodyDataHitResult& operator=(const GetSyncResultResponseBodyDataHitResult &) = default ;
    GetSyncResultResponseBodyDataHitResult& operator=(GetSyncResultResponseBodyDataHitResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hits_ != nullptr
        && this->name_ != nullptr && this->reviewResult_ != nullptr && this->rid_ != nullptr && this->type_ != nullptr; };
    // hits Field Functions 
    bool hasHits() const { return this->hits_ != nullptr;};
    void deleteHits() { this->hits_ = nullptr;};
    inline const vector<Models::GetSyncResultResponseBodyDataHitResultHits> & hits() const { DARABONBA_PTR_GET_CONST(hits_, vector<Models::GetSyncResultResponseBodyDataHitResultHits>) };
    inline vector<Models::GetSyncResultResponseBodyDataHitResultHits> hits() { DARABONBA_PTR_GET(hits_, vector<Models::GetSyncResultResponseBodyDataHitResultHits>) };
    inline GetSyncResultResponseBodyDataHitResult& setHits(const vector<Models::GetSyncResultResponseBodyDataHitResultHits> & hits) { DARABONBA_PTR_SET_VALUE(hits_, hits) };
    inline GetSyncResultResponseBodyDataHitResult& setHits(vector<Models::GetSyncResultResponseBodyDataHitResultHits> && hits) { DARABONBA_PTR_SET_RVALUE(hits_, hits) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSyncResultResponseBodyDataHitResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reviewResult Field Functions 
    bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
    void deleteReviewResult() { this->reviewResult_ = nullptr;};
    inline int32_t reviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
    inline GetSyncResultResponseBodyDataHitResult& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline GetSyncResultResponseBodyDataHitResult& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetSyncResultResponseBodyDataHitResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::GetSyncResultResponseBodyDataHitResultHits>> hits_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> reviewResult_ = nullptr;
    std::shared_ptr<string> rid_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
