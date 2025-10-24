// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTOPENINGLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTOPENINGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputOpeningListOpening.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputOpeningList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputOpeningList& obj) { 
      DARABONBA_PTR_TO_JSON(Opening, opening_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputOpeningList& obj) { 
      DARABONBA_PTR_FROM_JSON(Opening, opening_);
    };
    QueryJobListResponseBodyJobListJobOutputOpeningList() = default ;
    QueryJobListResponseBodyJobListJobOutputOpeningList(const QueryJobListResponseBodyJobListJobOutputOpeningList &) = default ;
    QueryJobListResponseBodyJobListJobOutputOpeningList(QueryJobListResponseBodyJobListJobOutputOpeningList &&) = default ;
    QueryJobListResponseBodyJobListJobOutputOpeningList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputOpeningList() = default ;
    QueryJobListResponseBodyJobListJobOutputOpeningList& operator=(const QueryJobListResponseBodyJobListJobOutputOpeningList &) = default ;
    QueryJobListResponseBodyJobListJobOutputOpeningList& operator=(QueryJobListResponseBodyJobListJobOutputOpeningList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opening_ == nullptr; };
    // opening Field Functions 
    bool hasOpening() const { return this->opening_ != nullptr;};
    void deleteOpening() { this->opening_ = nullptr;};
    inline const vector<Models::QueryJobListResponseBodyJobListJobOutputOpeningListOpening> & opening() const { DARABONBA_PTR_GET_CONST(opening_, vector<Models::QueryJobListResponseBodyJobListJobOutputOpeningListOpening>) };
    inline vector<Models::QueryJobListResponseBodyJobListJobOutputOpeningListOpening> opening() { DARABONBA_PTR_GET(opening_, vector<Models::QueryJobListResponseBodyJobListJobOutputOpeningListOpening>) };
    inline QueryJobListResponseBodyJobListJobOutputOpeningList& setOpening(const vector<Models::QueryJobListResponseBodyJobListJobOutputOpeningListOpening> & opening) { DARABONBA_PTR_SET_VALUE(opening_, opening) };
    inline QueryJobListResponseBodyJobListJobOutputOpeningList& setOpening(vector<Models::QueryJobListResponseBodyJobListJobOutputOpeningListOpening> && opening) { DARABONBA_PTR_SET_RVALUE(opening_, opening) };


  protected:
    std::shared_ptr<vector<Models::QueryJobListResponseBodyJobListJobOutputOpeningListOpening>> opening_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
