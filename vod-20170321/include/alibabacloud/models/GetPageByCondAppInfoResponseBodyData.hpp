// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAGEBYCONDAPPINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPAGEBYCONDAPPINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Vod20170321.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPageByCondAppInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPageByCondAppInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetPageByCondAppInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetPageByCondAppInfoResponseBodyData() = default ;
    GetPageByCondAppInfoResponseBodyData(const GetPageByCondAppInfoResponseBodyData &) = default ;
    GetPageByCondAppInfoResponseBodyData(GetPageByCondAppInfoResponseBodyData &&) = default ;
    GetPageByCondAppInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPageByCondAppInfoResponseBodyData() = default ;
    GetPageByCondAppInfoResponseBodyData& operator=(const GetPageByCondAppInfoResponseBodyData &) = default ;
    GetPageByCondAppInfoResponseBodyData& operator=(GetPageByCondAppInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->total_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::AppInfoDTO> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::AppInfoDTO>) };
    inline vector<Models::AppInfoDTO> list() { DARABONBA_PTR_GET(list_, vector<Models::AppInfoDTO>) };
    inline GetPageByCondAppInfoResponseBodyData& setList(const vector<Models::AppInfoDTO> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetPageByCondAppInfoResponseBodyData& setList(vector<Models::AppInfoDTO> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetPageByCondAppInfoResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::AppInfoDTO>> list_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
