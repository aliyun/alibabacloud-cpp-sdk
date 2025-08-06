// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPLIVELISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPLIVELISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGroupLiveListResponseBodyResultGroupLiveList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetGroupLiveListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupLiveListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(GroupLiveList, groupLiveList_);
    };
    friend void from_json(const Darabonba::Json& j, GetGroupLiveListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupLiveList, groupLiveList_);
    };
    GetGroupLiveListResponseBodyResult() = default ;
    GetGroupLiveListResponseBodyResult(const GetGroupLiveListResponseBodyResult &) = default ;
    GetGroupLiveListResponseBodyResult(GetGroupLiveListResponseBodyResult &&) = default ;
    GetGroupLiveListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupLiveListResponseBodyResult() = default ;
    GetGroupLiveListResponseBodyResult& operator=(const GetGroupLiveListResponseBodyResult &) = default ;
    GetGroupLiveListResponseBodyResult& operator=(GetGroupLiveListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupLiveList_ != nullptr; };
    // groupLiveList Field Functions 
    bool hasGroupLiveList() const { return this->groupLiveList_ != nullptr;};
    void deleteGroupLiveList() { this->groupLiveList_ = nullptr;};
    inline const vector<Models::GetGroupLiveListResponseBodyResultGroupLiveList> & groupLiveList() const { DARABONBA_PTR_GET_CONST(groupLiveList_, vector<Models::GetGroupLiveListResponseBodyResultGroupLiveList>) };
    inline vector<Models::GetGroupLiveListResponseBodyResultGroupLiveList> groupLiveList() { DARABONBA_PTR_GET(groupLiveList_, vector<Models::GetGroupLiveListResponseBodyResultGroupLiveList>) };
    inline GetGroupLiveListResponseBodyResult& setGroupLiveList(const vector<Models::GetGroupLiveListResponseBodyResultGroupLiveList> & groupLiveList) { DARABONBA_PTR_SET_VALUE(groupLiveList_, groupLiveList) };
    inline GetGroupLiveListResponseBodyResult& setGroupLiveList(vector<Models::GetGroupLiveListResponseBodyResultGroupLiveList> && groupLiveList) { DARABONBA_PTR_SET_RVALUE(groupLiveList_, groupLiveList) };


  protected:
    std::shared_ptr<vector<Models::GetGroupLiveListResponseBodyResultGroupLiveList>> groupLiveList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
