// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFULLREQUESTORIGINSTATBYINSTANCEIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFULLREQUESTORIGINSTATBYINSTANCEIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFullRequestOriginStatByInstanceIdResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetFullRequestOriginStatByInstanceIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFullRequestOriginStatByInstanceIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetFullRequestOriginStatByInstanceIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetFullRequestOriginStatByInstanceIdResponseBodyData() = default ;
    GetFullRequestOriginStatByInstanceIdResponseBodyData(const GetFullRequestOriginStatByInstanceIdResponseBodyData &) = default ;
    GetFullRequestOriginStatByInstanceIdResponseBodyData(GetFullRequestOriginStatByInstanceIdResponseBodyData &&) = default ;
    GetFullRequestOriginStatByInstanceIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFullRequestOriginStatByInstanceIdResponseBodyData() = default ;
    GetFullRequestOriginStatByInstanceIdResponseBodyData& operator=(const GetFullRequestOriginStatByInstanceIdResponseBodyData &) = default ;
    GetFullRequestOriginStatByInstanceIdResponseBodyData& operator=(GetFullRequestOriginStatByInstanceIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->total_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetFullRequestOriginStatByInstanceIdResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetFullRequestOriginStatByInstanceIdResponseBodyDataList>) };
    inline vector<Models::GetFullRequestOriginStatByInstanceIdResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetFullRequestOriginStatByInstanceIdResponseBodyDataList>) };
    inline GetFullRequestOriginStatByInstanceIdResponseBodyData& setList(const vector<Models::GetFullRequestOriginStatByInstanceIdResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetFullRequestOriginStatByInstanceIdResponseBodyData& setList(vector<Models::GetFullRequestOriginStatByInstanceIdResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetFullRequestOriginStatByInstanceIdResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The details of the full request data.
    std::shared_ptr<vector<Models::GetFullRequestOriginStatByInstanceIdResponseBodyDataList>> list_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
