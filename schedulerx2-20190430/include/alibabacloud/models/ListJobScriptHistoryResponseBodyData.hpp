// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSCRIPTHISTORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSCRIPTHISTORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListJobScriptHistoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobScriptHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JobScriptHistoryInfos, jobScriptHistoryInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobScriptHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JobScriptHistoryInfos, jobScriptHistoryInfos_);
    };
    ListJobScriptHistoryResponseBodyData() = default ;
    ListJobScriptHistoryResponseBodyData(const ListJobScriptHistoryResponseBodyData &) = default ;
    ListJobScriptHistoryResponseBodyData(ListJobScriptHistoryResponseBodyData &&) = default ;
    ListJobScriptHistoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobScriptHistoryResponseBodyData() = default ;
    ListJobScriptHistoryResponseBodyData& operator=(const ListJobScriptHistoryResponseBodyData &) = default ;
    ListJobScriptHistoryResponseBodyData& operator=(ListJobScriptHistoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobScriptHistoryInfos_ == nullptr; };
    // jobScriptHistoryInfos Field Functions 
    bool hasJobScriptHistoryInfos() const { return this->jobScriptHistoryInfos_ != nullptr;};
    void deleteJobScriptHistoryInfos() { this->jobScriptHistoryInfos_ = nullptr;};
    inline const vector<Models::ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos> & jobScriptHistoryInfos() const { DARABONBA_PTR_GET_CONST(jobScriptHistoryInfos_, vector<Models::ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos>) };
    inline vector<Models::ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos> jobScriptHistoryInfos() { DARABONBA_PTR_GET(jobScriptHistoryInfos_, vector<Models::ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos>) };
    inline ListJobScriptHistoryResponseBodyData& setJobScriptHistoryInfos(const vector<Models::ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos> & jobScriptHistoryInfos) { DARABONBA_PTR_SET_VALUE(jobScriptHistoryInfos_, jobScriptHistoryInfos) };
    inline ListJobScriptHistoryResponseBodyData& setJobScriptHistoryInfos(vector<Models::ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos> && jobScriptHistoryInfos) { DARABONBA_PTR_SET_RVALUE(jobScriptHistoryInfos_, jobScriptHistoryInfos) };


  protected:
    // -
    std::shared_ptr<vector<Models::ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos>> jobScriptHistoryInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
