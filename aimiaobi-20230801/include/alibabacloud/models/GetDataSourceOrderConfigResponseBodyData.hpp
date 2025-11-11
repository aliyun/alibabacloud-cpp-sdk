// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEORDERCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEORDERCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDataSourceOrderConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceOrderConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TotalDocSize, totalDocSize_);
      DARABONBA_PTR_TO_JSON(UserConfigDataSourceList, userConfigDataSourceList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceOrderConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TotalDocSize, totalDocSize_);
      DARABONBA_PTR_FROM_JSON(UserConfigDataSourceList, userConfigDataSourceList_);
    };
    GetDataSourceOrderConfigResponseBodyData() = default ;
    GetDataSourceOrderConfigResponseBodyData(const GetDataSourceOrderConfigResponseBodyData &) = default ;
    GetDataSourceOrderConfigResponseBodyData(GetDataSourceOrderConfigResponseBodyData &&) = default ;
    GetDataSourceOrderConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceOrderConfigResponseBodyData() = default ;
    GetDataSourceOrderConfigResponseBodyData& operator=(const GetDataSourceOrderConfigResponseBodyData &) = default ;
    GetDataSourceOrderConfigResponseBodyData& operator=(GetDataSourceOrderConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->totalDocSize_ == nullptr
        && return this->userConfigDataSourceList_ == nullptr; };
    // totalDocSize Field Functions 
    bool hasTotalDocSize() const { return this->totalDocSize_ != nullptr;};
    void deleteTotalDocSize() { this->totalDocSize_ = nullptr;};
    inline int32_t totalDocSize() const { DARABONBA_PTR_GET_DEFAULT(totalDocSize_, 0) };
    inline GetDataSourceOrderConfigResponseBodyData& setTotalDocSize(int32_t totalDocSize) { DARABONBA_PTR_SET_VALUE(totalDocSize_, totalDocSize) };


    // userConfigDataSourceList Field Functions 
    bool hasUserConfigDataSourceList() const { return this->userConfigDataSourceList_ != nullptr;};
    void deleteUserConfigDataSourceList() { this->userConfigDataSourceList_ = nullptr;};
    inline const vector<Models::GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList> & userConfigDataSourceList() const { DARABONBA_PTR_GET_CONST(userConfigDataSourceList_, vector<Models::GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList>) };
    inline vector<Models::GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList> userConfigDataSourceList() { DARABONBA_PTR_GET(userConfigDataSourceList_, vector<Models::GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList>) };
    inline GetDataSourceOrderConfigResponseBodyData& setUserConfigDataSourceList(const vector<Models::GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList> & userConfigDataSourceList) { DARABONBA_PTR_SET_VALUE(userConfigDataSourceList_, userConfigDataSourceList) };
    inline GetDataSourceOrderConfigResponseBodyData& setUserConfigDataSourceList(vector<Models::GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList> && userConfigDataSourceList) { DARABONBA_PTR_SET_RVALUE(userConfigDataSourceList_, userConfigDataSourceList) };


  protected:
    std::shared_ptr<int32_t> totalDocSize_ = nullptr;
    std::shared_ptr<vector<Models::GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList>> userConfigDataSourceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
