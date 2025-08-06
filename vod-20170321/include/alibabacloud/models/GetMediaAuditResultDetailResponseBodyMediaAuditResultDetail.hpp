// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTDETAILRESPONSEBODYMEDIAAUDITRESULTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTDETAILRESPONSEBODYMEDIAAUDITRESULTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail() = default ;
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail(const GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail &) = default ;
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail(GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail &&) = default ;
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail() = default ;
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail& operator=(const GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail &) = default ;
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail& operator=(GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->total_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList>) };
    inline vector<Models::GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList>) };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail& setList(const vector<Models::GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail& setList(vector<Models::GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The review results returned.
    std::shared_ptr<vector<Models::GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList>> list_ = nullptr;
    // The total number of snapshots returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
