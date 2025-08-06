// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITRESULTDETAILRESPONSEBODYAIAUDITRESULTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITRESULTDETAILRESPONSEBODYAIAUDITRESULTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAuditResultDetailResponseBodyAIAuditResultDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAuditResultDetailResponseBodyAIAuditResultDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditResultDetailResponseBodyAIAuditResultDetail& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditResultDetailResponseBodyAIAuditResultDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetAuditResultDetailResponseBodyAIAuditResultDetail() = default ;
    GetAuditResultDetailResponseBodyAIAuditResultDetail(const GetAuditResultDetailResponseBodyAIAuditResultDetail &) = default ;
    GetAuditResultDetailResponseBodyAIAuditResultDetail(GetAuditResultDetailResponseBodyAIAuditResultDetail &&) = default ;
    GetAuditResultDetailResponseBodyAIAuditResultDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditResultDetailResponseBodyAIAuditResultDetail() = default ;
    GetAuditResultDetailResponseBodyAIAuditResultDetail& operator=(const GetAuditResultDetailResponseBodyAIAuditResultDetail &) = default ;
    GetAuditResultDetailResponseBodyAIAuditResultDetail& operator=(GetAuditResultDetailResponseBodyAIAuditResultDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->total_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetAuditResultDetailResponseBodyAIAuditResultDetailList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetAuditResultDetailResponseBodyAIAuditResultDetailList>) };
    inline vector<Models::GetAuditResultDetailResponseBodyAIAuditResultDetailList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetAuditResultDetailResponseBodyAIAuditResultDetailList>) };
    inline GetAuditResultDetailResponseBodyAIAuditResultDetail& setList(const vector<Models::GetAuditResultDetailResponseBodyAIAuditResultDetailList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetAuditResultDetailResponseBodyAIAuditResultDetail& setList(vector<Models::GetAuditResultDetailResponseBodyAIAuditResultDetailList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetAuditResultDetailResponseBodyAIAuditResultDetail& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::GetAuditResultDetailResponseBodyAIAuditResultDetailList>> list_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
