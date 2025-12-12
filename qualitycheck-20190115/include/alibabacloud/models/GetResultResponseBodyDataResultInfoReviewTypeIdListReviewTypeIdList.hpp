// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOREVIEWTYPEIDLISTREVIEWTYPEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOREVIEWTYPEIDLISTREVIEWTYPEIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdListReviewKeyIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList& obj) { 
      DARABONBA_PTR_TO_JSON(ReviewKeyIdList, reviewKeyIdList_);
      DARABONBA_PTR_TO_JSON(ReviewTypeId, reviewTypeId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReviewKeyIdList, reviewKeyIdList_);
      DARABONBA_PTR_FROM_JSON(ReviewTypeId, reviewTypeId_);
    };
    GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList() = default ;
    GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList(const GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList &) = default ;
    GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList(GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList &&) = default ;
    GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList() = default ;
    GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList& operator=(const GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList &) = default ;
    GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList& operator=(GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reviewKeyIdList_ == nullptr
        && return this->reviewTypeId_ == nullptr; };
    // reviewKeyIdList Field Functions 
    bool hasReviewKeyIdList() const { return this->reviewKeyIdList_ != nullptr;};
    void deleteReviewKeyIdList() { this->reviewKeyIdList_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdListReviewKeyIdList & reviewKeyIdList() const { DARABONBA_PTR_GET_CONST(reviewKeyIdList_, Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdListReviewKeyIdList) };
    inline Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdListReviewKeyIdList reviewKeyIdList() { DARABONBA_PTR_GET(reviewKeyIdList_, Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdListReviewKeyIdList) };
    inline GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList& setReviewKeyIdList(const Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdListReviewKeyIdList & reviewKeyIdList) { DARABONBA_PTR_SET_VALUE(reviewKeyIdList_, reviewKeyIdList) };
    inline GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList& setReviewKeyIdList(Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdListReviewKeyIdList && reviewKeyIdList) { DARABONBA_PTR_SET_RVALUE(reviewKeyIdList_, reviewKeyIdList) };


    // reviewTypeId Field Functions 
    bool hasReviewTypeId() const { return this->reviewTypeId_ != nullptr;};
    void deleteReviewTypeId() { this->reviewTypeId_ = nullptr;};
    inline int64_t reviewTypeId() const { DARABONBA_PTR_GET_DEFAULT(reviewTypeId_, 0L) };
    inline GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdList& setReviewTypeId(int64_t reviewTypeId) { DARABONBA_PTR_SET_VALUE(reviewTypeId_, reviewTypeId) };


  protected:
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoReviewTypeIdListReviewTypeIdListReviewKeyIdList> reviewKeyIdList_ = nullptr;
    std::shared_ptr<int64_t> reviewTypeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
