// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESSTOPICLISTTOPICLISTOFFSETLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESSTOPICLISTTOPICLISTOFFSETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList& obj) { 
      DARABONBA_PTR_TO_JSON(OffsetList, offsetList_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList& obj) { 
      DARABONBA_PTR_FROM_JSON(OffsetList, offsetList_);
    };
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList() = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList(const GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList &) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList(GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList &&) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList() = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList& operator=(const GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList &) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList& operator=(GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offsetList_ != nullptr; };
    // offsetList Field Functions 
    bool hasOffsetList() const { return this->offsetList_ != nullptr;};
    void deleteOffsetList() { this->offsetList_ = nullptr;};
    inline const vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList> & offsetList() const { DARABONBA_PTR_GET_CONST(offsetList_, vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList>) };
    inline vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList> offsetList() { DARABONBA_PTR_GET(offsetList_, vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList>) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList& setOffsetList(const vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList> & offsetList) { DARABONBA_PTR_SET_VALUE(offsetList_, offsetList) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList& setOffsetList(vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList> && offsetList) { DARABONBA_PTR_SET_RVALUE(offsetList_, offsetList) };


  protected:
    std::shared_ptr<vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList>> offsetList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
