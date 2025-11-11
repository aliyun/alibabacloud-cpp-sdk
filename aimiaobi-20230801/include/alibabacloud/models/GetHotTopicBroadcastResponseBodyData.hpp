// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHotTopicBroadcastResponseBodyDataData.hpp>
#include <alibabacloud/models/GetHotTopicBroadcastResponseBodyDataTotalTokenInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetHotTopicBroadcastResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotTopicBroadcastResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalTokenInfo, totalTokenInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotTopicBroadcastResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalTokenInfo, totalTokenInfo_);
    };
    GetHotTopicBroadcastResponseBodyData() = default ;
    GetHotTopicBroadcastResponseBodyData(const GetHotTopicBroadcastResponseBodyData &) = default ;
    GetHotTopicBroadcastResponseBodyData(GetHotTopicBroadcastResponseBodyData &&) = default ;
    GetHotTopicBroadcastResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotTopicBroadcastResponseBodyData() = default ;
    GetHotTopicBroadcastResponseBodyData& operator=(const GetHotTopicBroadcastResponseBodyData &) = default ;
    GetHotTopicBroadcastResponseBodyData& operator=(GetHotTopicBroadcastResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->totalCount_ == nullptr && return this->totalTokenInfo_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::GetHotTopicBroadcastResponseBodyDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::GetHotTopicBroadcastResponseBodyDataData>) };
    inline vector<Models::GetHotTopicBroadcastResponseBodyDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::GetHotTopicBroadcastResponseBodyDataData>) };
    inline GetHotTopicBroadcastResponseBodyData& setData(const vector<Models::GetHotTopicBroadcastResponseBodyDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHotTopicBroadcastResponseBodyData& setData(vector<Models::GetHotTopicBroadcastResponseBodyDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetHotTopicBroadcastResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalTokenInfo Field Functions 
    bool hasTotalTokenInfo() const { return this->totalTokenInfo_ != nullptr;};
    void deleteTotalTokenInfo() { this->totalTokenInfo_ = nullptr;};
    inline const Models::GetHotTopicBroadcastResponseBodyDataTotalTokenInfo & totalTokenInfo() const { DARABONBA_PTR_GET_CONST(totalTokenInfo_, Models::GetHotTopicBroadcastResponseBodyDataTotalTokenInfo) };
    inline Models::GetHotTopicBroadcastResponseBodyDataTotalTokenInfo totalTokenInfo() { DARABONBA_PTR_GET(totalTokenInfo_, Models::GetHotTopicBroadcastResponseBodyDataTotalTokenInfo) };
    inline GetHotTopicBroadcastResponseBodyData& setTotalTokenInfo(const Models::GetHotTopicBroadcastResponseBodyDataTotalTokenInfo & totalTokenInfo) { DARABONBA_PTR_SET_VALUE(totalTokenInfo_, totalTokenInfo) };
    inline GetHotTopicBroadcastResponseBodyData& setTotalTokenInfo(Models::GetHotTopicBroadcastResponseBodyDataTotalTokenInfo && totalTokenInfo) { DARABONBA_PTR_SET_RVALUE(totalTokenInfo_, totalTokenInfo) };


  protected:
    std::shared_ptr<vector<Models::GetHotTopicBroadcastResponseBodyDataData>> data_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<Models::GetHotTopicBroadcastResponseBodyDataTotalTokenInfo> totalTokenInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
