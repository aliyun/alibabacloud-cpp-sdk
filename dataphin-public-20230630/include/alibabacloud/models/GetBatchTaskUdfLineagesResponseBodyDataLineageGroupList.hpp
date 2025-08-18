// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODYDATALINEAGEGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODYDATALINEAGEGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList.hpp>
#include <alibabacloud/models/GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(InputLineageList, inputLineageList_);
      DARABONBA_PTR_TO_JSON(OutputLineageList, outputLineageList_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(InputLineageList, inputLineageList_);
      DARABONBA_PTR_FROM_JSON(OutputLineageList, outputLineageList_);
    };
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList() = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList(const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList &) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList(GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList &&) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList() = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList& operator=(const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList &) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList& operator=(GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputLineageList_ != nullptr
        && this->outputLineageList_ != nullptr; };
    // inputLineageList Field Functions 
    bool hasInputLineageList() const { return this->inputLineageList_ != nullptr;};
    void deleteInputLineageList() { this->inputLineageList_ = nullptr;};
    inline const vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList> & inputLineageList() const { DARABONBA_PTR_GET_CONST(inputLineageList_, vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList>) };
    inline vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList> inputLineageList() { DARABONBA_PTR_GET(inputLineageList_, vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList>) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList& setInputLineageList(const vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList> & inputLineageList) { DARABONBA_PTR_SET_VALUE(inputLineageList_, inputLineageList) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList& setInputLineageList(vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList> && inputLineageList) { DARABONBA_PTR_SET_RVALUE(inputLineageList_, inputLineageList) };


    // outputLineageList Field Functions 
    bool hasOutputLineageList() const { return this->outputLineageList_ != nullptr;};
    void deleteOutputLineageList() { this->outputLineageList_ = nullptr;};
    inline const vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList> & outputLineageList() const { DARABONBA_PTR_GET_CONST(outputLineageList_, vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList>) };
    inline vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList> outputLineageList() { DARABONBA_PTR_GET(outputLineageList_, vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList>) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList& setOutputLineageList(const vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList> & outputLineageList) { DARABONBA_PTR_SET_VALUE(outputLineageList_, outputLineageList) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupList& setOutputLineageList(vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList> && outputLineageList) { DARABONBA_PTR_SET_RVALUE(outputLineageList_, outputLineageList) };


  protected:
    std::shared_ptr<vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListInputLineageList>> inputLineageList_ = nullptr;
    std::shared_ptr<vector<Models::GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageList>> outputLineageList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
