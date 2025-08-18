// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskUdfLineagesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskUdfLineagesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LineageGroupList, lineageGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskUdfLineagesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LineageGroupList, lineageGroupList_);
    };
    GetBatchTaskUdfLineagesResponseBodyData() = default ;
    GetBatchTaskUdfLineagesResponseBodyData(const GetBatchTaskUdfLineagesResponseBodyData &) = default ;
    GetBatchTaskUdfLineagesResponseBodyData(GetBatchTaskUdfLineagesResponseBodyData &&) = default ;
    GetBatchTaskUdfLineagesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskUdfLineagesResponseBodyData() = default ;
    GetBatchTaskUdfLineagesResponseBodyData& operator=(const GetBatchTaskUdfLineagesResponseBodyData &) = default ;
    GetBatchTaskUdfLineagesResponseBodyData& operator=(GetBatchTaskUdfLineagesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lineageGroupList_ != nullptr; };
    // lineageGroupList Field Functions 
    bool hasLineageGroupList() const { return this->lineageGroupList_ != nullptr;};
    void deleteLineageGroupList() { this->lineageGroupList_ = nullptr;};
    inline const vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList> & lineageGroupList() const { DARABONBA_PTR_GET_CONST(lineageGroupList_, vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList>) };
    inline vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList> lineageGroupList() { DARABONBA_PTR_GET(lineageGroupList_, vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList>) };
    inline GetBatchTaskUdfLineagesResponseBodyData& setLineageGroupList(const vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList> & lineageGroupList) { DARABONBA_PTR_SET_VALUE(lineageGroupList_, lineageGroupList) };
    inline GetBatchTaskUdfLineagesResponseBodyData& setLineageGroupList(vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList> && lineageGroupList) { DARABONBA_PTR_SET_RVALUE(lineageGroupList_, lineageGroupList) };


  protected:
    std::shared_ptr<vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList>> lineageGroupList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
