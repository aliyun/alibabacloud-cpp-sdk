// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWTYPEIDLISTREVIEWTYPEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWTYPEIDLISTREVIEWTYPEIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList& obj) { 
      DARABONBA_PTR_TO_JSON(ReviewKeyIdList, reviewKeyIdList_);
      DARABONBA_PTR_TO_JSON(ReviewTypeId, reviewTypeId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReviewKeyIdList, reviewKeyIdList_);
      DARABONBA_PTR_FROM_JSON(ReviewTypeId, reviewTypeId_);
    };
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList() = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList(const GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList &) = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList(GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList &&) = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList() = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList& operator=(const GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList &) = default ;
    GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList& operator=(GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reviewKeyIdList_ != nullptr
        && this->reviewTypeId_ != nullptr; };
    // reviewKeyIdList Field Functions 
    bool hasReviewKeyIdList() const { return this->reviewKeyIdList_ != nullptr;};
    void deleteReviewKeyIdList() { this->reviewKeyIdList_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList & reviewKeyIdList() const { DARABONBA_PTR_GET_CONST(reviewKeyIdList_, Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList) };
    inline Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList reviewKeyIdList() { DARABONBA_PTR_GET(reviewKeyIdList_, Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList) };
    inline GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList& setReviewKeyIdList(const Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList & reviewKeyIdList) { DARABONBA_PTR_SET_VALUE(reviewKeyIdList_, reviewKeyIdList) };
    inline GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList& setReviewKeyIdList(Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList && reviewKeyIdList) { DARABONBA_PTR_SET_RVALUE(reviewKeyIdList_, reviewKeyIdList) };


    // reviewTypeId Field Functions 
    bool hasReviewTypeId() const { return this->reviewTypeId_ != nullptr;};
    void deleteReviewTypeId() { this->reviewTypeId_ = nullptr;};
    inline int64_t reviewTypeId() const { DARABONBA_PTR_GET_DEFAULT(reviewTypeId_, 0L) };
    inline GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdList& setReviewTypeId(int64_t reviewTypeId) { DARABONBA_PTR_SET_VALUE(reviewTypeId_, reviewTypeId) };


  protected:
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataReviewTypeIdListReviewTypeIdListReviewKeyIdList> reviewKeyIdList_ = nullptr;
    std::shared_ptr<int64_t> reviewTypeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
