// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVATARTRAININGJOBSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAVATARTRAININGJOBSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAvatarTrainingJobsResponseBodyDataAvatarTrainingJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAvatarTrainingJobsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvatarTrainingJobsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarTrainingJobList, avatarTrainingJobList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvatarTrainingJobsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarTrainingJobList, avatarTrainingJobList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAvatarTrainingJobsResponseBodyData() = default ;
    ListAvatarTrainingJobsResponseBodyData(const ListAvatarTrainingJobsResponseBodyData &) = default ;
    ListAvatarTrainingJobsResponseBodyData(ListAvatarTrainingJobsResponseBodyData &&) = default ;
    ListAvatarTrainingJobsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvatarTrainingJobsResponseBodyData() = default ;
    ListAvatarTrainingJobsResponseBodyData& operator=(const ListAvatarTrainingJobsResponseBodyData &) = default ;
    ListAvatarTrainingJobsResponseBodyData& operator=(ListAvatarTrainingJobsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avatarTrainingJobList_ != nullptr
        && this->totalCount_ != nullptr; };
    // avatarTrainingJobList Field Functions 
    bool hasAvatarTrainingJobList() const { return this->avatarTrainingJobList_ != nullptr;};
    void deleteAvatarTrainingJobList() { this->avatarTrainingJobList_ = nullptr;};
    inline const vector<Models::ListAvatarTrainingJobsResponseBodyDataAvatarTrainingJobList> & avatarTrainingJobList() const { DARABONBA_PTR_GET_CONST(avatarTrainingJobList_, vector<Models::ListAvatarTrainingJobsResponseBodyDataAvatarTrainingJobList>) };
    inline vector<Models::ListAvatarTrainingJobsResponseBodyDataAvatarTrainingJobList> avatarTrainingJobList() { DARABONBA_PTR_GET(avatarTrainingJobList_, vector<Models::ListAvatarTrainingJobsResponseBodyDataAvatarTrainingJobList>) };
    inline ListAvatarTrainingJobsResponseBodyData& setAvatarTrainingJobList(const vector<Models::ListAvatarTrainingJobsResponseBodyDataAvatarTrainingJobList> & avatarTrainingJobList) { DARABONBA_PTR_SET_VALUE(avatarTrainingJobList_, avatarTrainingJobList) };
    inline ListAvatarTrainingJobsResponseBodyData& setAvatarTrainingJobList(vector<Models::ListAvatarTrainingJobsResponseBodyDataAvatarTrainingJobList> && avatarTrainingJobList) { DARABONBA_PTR_SET_RVALUE(avatarTrainingJobList_, avatarTrainingJobList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAvatarTrainingJobsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of digital human training jobs.
    std::shared_ptr<vector<Models::ListAvatarTrainingJobsResponseBodyDataAvatarTrainingJobList>> avatarTrainingJobList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
