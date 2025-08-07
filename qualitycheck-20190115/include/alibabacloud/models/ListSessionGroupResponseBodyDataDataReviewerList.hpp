// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATAREVIEWERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATAREVIEWERLIST_HPP_
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
  class ListSessionGroupResponseBodyDataDataReviewerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionGroupResponseBodyDataDataReviewerList& obj) { 
      DARABONBA_PTR_TO_JSON(ReviewerList, reviewerList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionGroupResponseBodyDataDataReviewerList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReviewerList, reviewerList_);
    };
    ListSessionGroupResponseBodyDataDataReviewerList() = default ;
    ListSessionGroupResponseBodyDataDataReviewerList(const ListSessionGroupResponseBodyDataDataReviewerList &) = default ;
    ListSessionGroupResponseBodyDataDataReviewerList(ListSessionGroupResponseBodyDataDataReviewerList &&) = default ;
    ListSessionGroupResponseBodyDataDataReviewerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionGroupResponseBodyDataDataReviewerList() = default ;
    ListSessionGroupResponseBodyDataDataReviewerList& operator=(const ListSessionGroupResponseBodyDataDataReviewerList &) = default ;
    ListSessionGroupResponseBodyDataDataReviewerList& operator=(ListSessionGroupResponseBodyDataDataReviewerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reviewerList_ != nullptr; };
    // reviewerList Field Functions 
    bool hasReviewerList() const { return this->reviewerList_ != nullptr;};
    void deleteReviewerList() { this->reviewerList_ = nullptr;};
    inline const vector<string> & reviewerList() const { DARABONBA_PTR_GET_CONST(reviewerList_, vector<string>) };
    inline vector<string> reviewerList() { DARABONBA_PTR_GET(reviewerList_, vector<string>) };
    inline ListSessionGroupResponseBodyDataDataReviewerList& setReviewerList(const vector<string> & reviewerList) { DARABONBA_PTR_SET_VALUE(reviewerList_, reviewerList) };
    inline ListSessionGroupResponseBodyDataDataReviewerList& setReviewerList(vector<string> && reviewerList) { DARABONBA_PTR_SET_RVALUE(reviewerList_, reviewerList) };


  protected:
    std::shared_ptr<vector<string>> reviewerList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
