// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTDIAGNOSISPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTDIAGNOSISPAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRequestDiagnosisPageResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRequestDiagnosisPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestDiagnosisPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(pageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestDiagnosisPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(pageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    GetRequestDiagnosisPageResponseBodyData() = default ;
    GetRequestDiagnosisPageResponseBodyData(const GetRequestDiagnosisPageResponseBodyData &) = default ;
    GetRequestDiagnosisPageResponseBodyData(GetRequestDiagnosisPageResponseBodyData &&) = default ;
    GetRequestDiagnosisPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestDiagnosisPageResponseBodyData() = default ;
    GetRequestDiagnosisPageResponseBodyData& operator=(const GetRequestDiagnosisPageResponseBodyData &) = default ;
    GetRequestDiagnosisPageResponseBodyData& operator=(GetRequestDiagnosisPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extra_ != nullptr
        && this->list_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline GetRequestDiagnosisPageResponseBodyData& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetRequestDiagnosisPageResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetRequestDiagnosisPageResponseBodyDataList>) };
    inline vector<Models::GetRequestDiagnosisPageResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetRequestDiagnosisPageResponseBodyDataList>) };
    inline GetRequestDiagnosisPageResponseBodyData& setList(const vector<Models::GetRequestDiagnosisPageResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetRequestDiagnosisPageResponseBodyData& setList(vector<Models::GetRequestDiagnosisPageResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetRequestDiagnosisPageResponseBodyData& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetRequestDiagnosisPageResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetRequestDiagnosisPageResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Additional information.
    std::shared_ptr<string> extra_ = nullptr;
    // The SQL diagnostics records returned.
    std::shared_ptr<vector<Models::GetRequestDiagnosisPageResponseBodyDataList>> list_ = nullptr;
    // The page number. The value must be a positive integer. Default value: 1.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page. The value must be a positive integer. Default value: 10.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
