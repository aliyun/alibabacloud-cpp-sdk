// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITAUDIORESULTDETAILRESPONSEBODYMEDIAAUDITAUDIORESULTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITAUDIORESULTDETAILRESPONSEBODYMEDIAAUDITAUDIORESULTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageTotal, pageTotal_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageTotal, pageTotal_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail() = default ;
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail(const GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail &) = default ;
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail(GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail &&) = default ;
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail() = default ;
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail& operator=(const GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail &) = default ;
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail& operator=(GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pageTotal_ == nullptr && return this->total_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList>) };
    inline vector<Models::GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList>) };
    inline GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail& setList(const vector<Models::GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail& setList(vector<Models::GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageTotal Field Functions 
    bool hasPageTotal() const { return this->pageTotal_ != nullptr;};
    void deletePageTotal() { this->pageTotal_ = nullptr;};
    inline int32_t pageTotal() const { DARABONBA_PTR_GET_DEFAULT(pageTotal_, 0) };
    inline GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail& setPageTotal(int32_t pageTotal) { DARABONBA_PTR_SET_VALUE(pageTotal_, pageTotal) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of results.
    std::shared_ptr<vector<Models::GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList>> list_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageTotal_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
