// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICEJOBSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICEJOBSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomizedVoiceJobsResponseBodyDataCustomizedVoiceJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListCustomizedVoiceJobsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomizedVoiceJobsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomizedVoiceJobList, customizedVoiceJobList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomizedVoiceJobsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomizedVoiceJobList, customizedVoiceJobList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomizedVoiceJobsResponseBodyData() = default ;
    ListCustomizedVoiceJobsResponseBodyData(const ListCustomizedVoiceJobsResponseBodyData &) = default ;
    ListCustomizedVoiceJobsResponseBodyData(ListCustomizedVoiceJobsResponseBodyData &&) = default ;
    ListCustomizedVoiceJobsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomizedVoiceJobsResponseBodyData() = default ;
    ListCustomizedVoiceJobsResponseBodyData& operator=(const ListCustomizedVoiceJobsResponseBodyData &) = default ;
    ListCustomizedVoiceJobsResponseBodyData& operator=(ListCustomizedVoiceJobsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customizedVoiceJobList_ != nullptr
        && this->totalCount_ != nullptr; };
    // customizedVoiceJobList Field Functions 
    bool hasCustomizedVoiceJobList() const { return this->customizedVoiceJobList_ != nullptr;};
    void deleteCustomizedVoiceJobList() { this->customizedVoiceJobList_ = nullptr;};
    inline const vector<Models::ListCustomizedVoiceJobsResponseBodyDataCustomizedVoiceJobList> & customizedVoiceJobList() const { DARABONBA_PTR_GET_CONST(customizedVoiceJobList_, vector<Models::ListCustomizedVoiceJobsResponseBodyDataCustomizedVoiceJobList>) };
    inline vector<Models::ListCustomizedVoiceJobsResponseBodyDataCustomizedVoiceJobList> customizedVoiceJobList() { DARABONBA_PTR_GET(customizedVoiceJobList_, vector<Models::ListCustomizedVoiceJobsResponseBodyDataCustomizedVoiceJobList>) };
    inline ListCustomizedVoiceJobsResponseBodyData& setCustomizedVoiceJobList(const vector<Models::ListCustomizedVoiceJobsResponseBodyDataCustomizedVoiceJobList> & customizedVoiceJobList) { DARABONBA_PTR_SET_VALUE(customizedVoiceJobList_, customizedVoiceJobList) };
    inline ListCustomizedVoiceJobsResponseBodyData& setCustomizedVoiceJobList(vector<Models::ListCustomizedVoiceJobsResponseBodyDataCustomizedVoiceJobList> && customizedVoiceJobList) { DARABONBA_PTR_SET_RVALUE(customizedVoiceJobList_, customizedVoiceJobList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCustomizedVoiceJobsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried human voice cloning jobs.
    std::shared_ptr<vector<Models::ListCustomizedVoiceJobsResponseBodyDataCustomizedVoiceJobList>> customizedVoiceJobList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
