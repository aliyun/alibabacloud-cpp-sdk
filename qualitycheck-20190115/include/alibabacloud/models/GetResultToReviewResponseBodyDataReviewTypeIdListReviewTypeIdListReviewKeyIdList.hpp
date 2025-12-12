// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWTYPEIDLISTREVIEWTYPEIDLISTREVIEWKEYIDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWTYPEIDLISTREVIEWTYPEIDLISTREVIEWKEYIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList& obj) { 
      DARABONBA_PTR_TO_JSON(ReviewKeyIdList, reviewKeyIdList_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReviewKeyIdList, reviewKeyIdList_);
    };
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList() = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList(const GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList &) = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList(GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList &&) = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList() = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList& operator=(const GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList &) = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList& operator=(GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reviewKeyIdList_ == nullptr; };
    // reviewKeyIdList Field Functions 
    bool hasReviewKeyIdList() const { return this->reviewKeyIdList_ != nullptr;};
    void deleteReviewKeyIdList() { this->reviewKeyIdList_ = nullptr;};
    inline const vector<int64_t> & reviewKeyIdList() const { DARABONBA_PTR_GET_CONST(reviewKeyIdList_, vector<int64_t>) };
    inline vector<int64_t> reviewKeyIdList() { DARABONBA_PTR_GET(reviewKeyIdList_, vector<int64_t>) };
    inline GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList& setReviewKeyIdList(const vector<int64_t> & reviewKeyIdList) { DARABONBA_PTR_SET_VALUE(reviewKeyIdList_, reviewKeyIdList) };
    inline GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList& setReviewKeyIdList(vector<int64_t> && reviewKeyIdList) { DARABONBA_PTR_SET_RVALUE(reviewKeyIdList_, reviewKeyIdList) };


  protected:
    std::shared_ptr<vector<int64_t>> reviewKeyIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
