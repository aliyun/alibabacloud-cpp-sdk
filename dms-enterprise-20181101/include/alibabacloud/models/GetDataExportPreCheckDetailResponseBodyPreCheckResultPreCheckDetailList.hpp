// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTPRECHECKDETAILRESPONSEBODYPRECHECKRESULTPRECHECKDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTPRECHECKDETAILRESPONSEBODYPRECHECKRESULTPRECHECKDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(PreCheckDetailList, preCheckDetailList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(PreCheckDetailList, preCheckDetailList_);
    };
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList() = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList(const GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList &) = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList(GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList &&) = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList() = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList& operator=(const GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList &) = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList& operator=(GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preCheckDetailList_ != nullptr; };
    // preCheckDetailList Field Functions 
    bool hasPreCheckDetailList() const { return this->preCheckDetailList_ != nullptr;};
    void deletePreCheckDetailList() { this->preCheckDetailList_ = nullptr;};
    inline const vector<Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList> & preCheckDetailList() const { DARABONBA_PTR_GET_CONST(preCheckDetailList_, vector<Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList>) };
    inline vector<Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList> preCheckDetailList() { DARABONBA_PTR_GET(preCheckDetailList_, vector<Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList>) };
    inline GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList& setPreCheckDetailList(const vector<Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList> & preCheckDetailList) { DARABONBA_PTR_SET_VALUE(preCheckDetailList_, preCheckDetailList) };
    inline GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList& setPreCheckDetailList(vector<Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList> && preCheckDetailList) { DARABONBA_PTR_SET_RVALUE(preCheckDetailList_, preCheckDetailList) };


  protected:
    std::shared_ptr<vector<Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailListPreCheckDetailList>> preCheckDetailList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
