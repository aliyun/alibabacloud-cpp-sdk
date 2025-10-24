// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTOPENINGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTOPENINGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputOpeningListOpening.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputOpeningList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputOpeningList& obj) { 
      DARABONBA_PTR_TO_JSON(Opening, opening_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputOpeningList& obj) { 
      DARABONBA_PTR_FROM_JSON(Opening, opening_);
    };
    ListJobResponseBodyJobListJobOutputOpeningList() = default ;
    ListJobResponseBodyJobListJobOutputOpeningList(const ListJobResponseBodyJobListJobOutputOpeningList &) = default ;
    ListJobResponseBodyJobListJobOutputOpeningList(ListJobResponseBodyJobListJobOutputOpeningList &&) = default ;
    ListJobResponseBodyJobListJobOutputOpeningList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputOpeningList() = default ;
    ListJobResponseBodyJobListJobOutputOpeningList& operator=(const ListJobResponseBodyJobListJobOutputOpeningList &) = default ;
    ListJobResponseBodyJobListJobOutputOpeningList& operator=(ListJobResponseBodyJobListJobOutputOpeningList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opening_ == nullptr; };
    // opening Field Functions 
    bool hasOpening() const { return this->opening_ != nullptr;};
    void deleteOpening() { this->opening_ = nullptr;};
    inline const vector<Models::ListJobResponseBodyJobListJobOutputOpeningListOpening> & opening() const { DARABONBA_PTR_GET_CONST(opening_, vector<Models::ListJobResponseBodyJobListJobOutputOpeningListOpening>) };
    inline vector<Models::ListJobResponseBodyJobListJobOutputOpeningListOpening> opening() { DARABONBA_PTR_GET(opening_, vector<Models::ListJobResponseBodyJobListJobOutputOpeningListOpening>) };
    inline ListJobResponseBodyJobListJobOutputOpeningList& setOpening(const vector<Models::ListJobResponseBodyJobListJobOutputOpeningListOpening> & opening) { DARABONBA_PTR_SET_VALUE(opening_, opening) };
    inline ListJobResponseBodyJobListJobOutputOpeningList& setOpening(vector<Models::ListJobResponseBodyJobListJobOutputOpeningListOpening> && opening) { DARABONBA_PTR_SET_RVALUE(opening_, opening) };


  protected:
    std::shared_ptr<vector<Models::ListJobResponseBodyJobListJobOutputOpeningListOpening>> opening_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
