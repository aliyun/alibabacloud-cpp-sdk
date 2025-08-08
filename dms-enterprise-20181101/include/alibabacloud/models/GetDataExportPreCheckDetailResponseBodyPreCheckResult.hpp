// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTPRECHECKDETAILRESPONSEBODYPRECHECKRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTPRECHECKDETAILRESPONSEBODYPRECHECKRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportPreCheckDetailResponseBodyPreCheckResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportPreCheckDetailResponseBodyPreCheckResult& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreAffectRows, ignoreAffectRows_);
      DARABONBA_PTR_TO_JSON(PreCheckDetailList, preCheckDetailList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportPreCheckDetailResponseBodyPreCheckResult& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreAffectRows, ignoreAffectRows_);
      DARABONBA_PTR_FROM_JSON(PreCheckDetailList, preCheckDetailList_);
    };
    GetDataExportPreCheckDetailResponseBodyPreCheckResult() = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResult(const GetDataExportPreCheckDetailResponseBodyPreCheckResult &) = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResult(GetDataExportPreCheckDetailResponseBodyPreCheckResult &&) = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportPreCheckDetailResponseBodyPreCheckResult() = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResult& operator=(const GetDataExportPreCheckDetailResponseBodyPreCheckResult &) = default ;
    GetDataExportPreCheckDetailResponseBodyPreCheckResult& operator=(GetDataExportPreCheckDetailResponseBodyPreCheckResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ignoreAffectRows_ != nullptr
        && this->preCheckDetailList_ != nullptr; };
    // ignoreAffectRows Field Functions 
    bool hasIgnoreAffectRows() const { return this->ignoreAffectRows_ != nullptr;};
    void deleteIgnoreAffectRows() { this->ignoreAffectRows_ = nullptr;};
    inline bool ignoreAffectRows() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRows_, false) };
    inline GetDataExportPreCheckDetailResponseBodyPreCheckResult& setIgnoreAffectRows(bool ignoreAffectRows) { DARABONBA_PTR_SET_VALUE(ignoreAffectRows_, ignoreAffectRows) };


    // preCheckDetailList Field Functions 
    bool hasPreCheckDetailList() const { return this->preCheckDetailList_ != nullptr;};
    void deletePreCheckDetailList() { this->preCheckDetailList_ = nullptr;};
    inline const Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList & preCheckDetailList() const { DARABONBA_PTR_GET_CONST(preCheckDetailList_, Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList) };
    inline Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList preCheckDetailList() { DARABONBA_PTR_GET(preCheckDetailList_, Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList) };
    inline GetDataExportPreCheckDetailResponseBodyPreCheckResult& setPreCheckDetailList(const Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList & preCheckDetailList) { DARABONBA_PTR_SET_VALUE(preCheckDetailList_, preCheckDetailList) };
    inline GetDataExportPreCheckDetailResponseBodyPreCheckResult& setPreCheckDetailList(Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList && preCheckDetailList) { DARABONBA_PTR_SET_RVALUE(preCheckDetailList_, preCheckDetailList) };


  protected:
    // Specifies whether to skip verification. Valid values:
    // 
    // - true
    // - false
    std::shared_ptr<bool> ignoreAffectRows_ = nullptr;
    // The list of pre-check details.
    std::shared_ptr<Models::GetDataExportPreCheckDetailResponseBodyPreCheckResultPreCheckDetailList> preCheckDetailList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
