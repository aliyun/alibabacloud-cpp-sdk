// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOREVIEWTYPEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOREVIEWTYPEIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoReviewTypeIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoReviewTypeIdList& obj) { 
      DARABONBA_PTR_TO_JSON(ReviewTypeIdList, reviewTypeIdList_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoReviewTypeIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReviewTypeIdList, reviewTypeIdList_);
    };
    GetResultResponseBodyDataResultInfoReviewTypeIdList() = default ;
    GetResultResponseBodyDataResultInfoReviewTypeIdList(const GetResultResponseBodyDataResultInfoReviewTypeIdList &) = default ;
    GetResultResponseBodyDataResultInfoReviewTypeIdList(GetResultResponseBodyDataResultInfoReviewTypeIdList &&) = default ;
    GetResultResponseBodyDataResultInfoReviewTypeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoReviewTypeIdList() = default ;
    GetResultResponseBodyDataResultInfoReviewTypeIdList& operator=(const GetResultResponseBodyDataResultInfoReviewTypeIdList &) = default ;
    GetResultResponseBodyDataResultInfoReviewTypeIdList& operator=(GetResultResponseBodyDataResultInfoReviewTypeIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reviewTypeIdList_ != nullptr; };
    // reviewTypeIdList Field Functions 
    bool hasReviewTypeIdList() const { return this->reviewTypeIdList_ != nullptr;};
    void deleteReviewTypeIdList() { this->reviewTypeIdList_ = nullptr;};
    inline const vector<Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList> & reviewTypeIdList() const { DARABONBA_PTR_GET_CONST(reviewTypeIdList_, vector<Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList>) };
    inline vector<Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList> reviewTypeIdList() { DARABONBA_PTR_GET(reviewTypeIdList_, vector<Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList>) };
    inline GetResultResponseBodyDataResultInfoReviewTypeIdList& setReviewTypeIdList(const vector<Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList> & reviewTypeIdList) { DARABONBA_PTR_SET_VALUE(reviewTypeIdList_, reviewTypeIdList) };
    inline GetResultResponseBodyDataResultInfoReviewTypeIdList& setReviewTypeIdList(vector<Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList> && reviewTypeIdList) { DARABONBA_PTR_SET_RVALUE(reviewTypeIdList_, reviewTypeIdList) };


  protected:
    std::shared_ptr<vector<Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList>> reviewTypeIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
