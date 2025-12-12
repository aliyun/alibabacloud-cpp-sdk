// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWTYPEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWTYPEIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataReviewTypeIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataReviewTypeIdList& obj) { 
      DARABONBA_PTR_TO_JSON(ReviewTypeIdList, reviewTypeIdList_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataReviewTypeIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReviewTypeIdList, reviewTypeIdList_);
    };
    GetResultToReviewResponseBodyDataReviewTypeIdList() = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdList(const GetResultToReviewResponseBodyDataReviewTypeIdList &) = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdList(GetResultToReviewResponseBodyDataReviewTypeIdList &&) = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataReviewTypeIdList() = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdList& operator=(const GetResultToReviewResponseBodyDataReviewTypeIdList &) = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdList& operator=(GetResultToReviewResponseBodyDataReviewTypeIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reviewTypeIdList_ == nullptr; };
    // reviewTypeIdList Field Functions 
    bool hasReviewTypeIdList() const { return this->reviewTypeIdList_ != nullptr;};
    void deleteReviewTypeIdList() { this->reviewTypeIdList_ = nullptr;};
    inline const vector<Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList> & reviewTypeIdList() const { DARABONBA_PTR_GET_CONST(reviewTypeIdList_, vector<Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList>) };
    inline vector<Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList> reviewTypeIdList() { DARABONBA_PTR_GET(reviewTypeIdList_, vector<Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList>) };
    inline GetResultToReviewResponseBodyDataReviewTypeIdList& setReviewTypeIdList(const vector<Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList> & reviewTypeIdList) { DARABONBA_PTR_SET_VALUE(reviewTypeIdList_, reviewTypeIdList) };
    inline GetResultToReviewResponseBodyDataReviewTypeIdList& setReviewTypeIdList(vector<Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList> && reviewTypeIdList) { DARABONBA_PTR_SET_RVALUE(reviewTypeIdList_, reviewTypeIdList) };


  protected:
    std::shared_ptr<vector<Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList>> reviewTypeIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
