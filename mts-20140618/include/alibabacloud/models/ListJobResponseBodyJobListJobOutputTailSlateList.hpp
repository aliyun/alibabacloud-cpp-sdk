// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTTAILSLATELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTTAILSLATELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputTailSlateListTailSlate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputTailSlateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputTailSlateList& obj) { 
      DARABONBA_PTR_TO_JSON(TailSlate, tailSlate_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputTailSlateList& obj) { 
      DARABONBA_PTR_FROM_JSON(TailSlate, tailSlate_);
    };
    ListJobResponseBodyJobListJobOutputTailSlateList() = default ;
    ListJobResponseBodyJobListJobOutputTailSlateList(const ListJobResponseBodyJobListJobOutputTailSlateList &) = default ;
    ListJobResponseBodyJobListJobOutputTailSlateList(ListJobResponseBodyJobListJobOutputTailSlateList &&) = default ;
    ListJobResponseBodyJobListJobOutputTailSlateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputTailSlateList() = default ;
    ListJobResponseBodyJobListJobOutputTailSlateList& operator=(const ListJobResponseBodyJobListJobOutputTailSlateList &) = default ;
    ListJobResponseBodyJobListJobOutputTailSlateList& operator=(ListJobResponseBodyJobListJobOutputTailSlateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tailSlate_ == nullptr; };
    // tailSlate Field Functions 
    bool hasTailSlate() const { return this->tailSlate_ != nullptr;};
    void deleteTailSlate() { this->tailSlate_ = nullptr;};
    inline const vector<Models::ListJobResponseBodyJobListJobOutputTailSlateListTailSlate> & tailSlate() const { DARABONBA_PTR_GET_CONST(tailSlate_, vector<Models::ListJobResponseBodyJobListJobOutputTailSlateListTailSlate>) };
    inline vector<Models::ListJobResponseBodyJobListJobOutputTailSlateListTailSlate> tailSlate() { DARABONBA_PTR_GET(tailSlate_, vector<Models::ListJobResponseBodyJobListJobOutputTailSlateListTailSlate>) };
    inline ListJobResponseBodyJobListJobOutputTailSlateList& setTailSlate(const vector<Models::ListJobResponseBodyJobListJobOutputTailSlateListTailSlate> & tailSlate) { DARABONBA_PTR_SET_VALUE(tailSlate_, tailSlate) };
    inline ListJobResponseBodyJobListJobOutputTailSlateList& setTailSlate(vector<Models::ListJobResponseBodyJobListJobOutputTailSlateListTailSlate> && tailSlate) { DARABONBA_PTR_SET_RVALUE(tailSlate_, tailSlate) };


  protected:
    std::shared_ptr<vector<Models::ListJobResponseBodyJobListJobOutputTailSlateListTailSlate>> tailSlate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
