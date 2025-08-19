// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERINSPECTREPORTDETAILRESPONSEBODYSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERINSPECTREPORTDETAILRESPONSEBODYSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterInspectReportDetailResponseBodySummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterInspectReportDetailResponseBodySummary& obj) { 
      DARABONBA_PTR_TO_JSON(adviceCount, adviceCount_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(errorCount, errorCount_);
      DARABONBA_PTR_TO_JSON(normalCount, normalCount_);
      DARABONBA_PTR_TO_JSON(warnCount, warnCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterInspectReportDetailResponseBodySummary& obj) { 
      DARABONBA_PTR_FROM_JSON(adviceCount, adviceCount_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(errorCount, errorCount_);
      DARABONBA_PTR_FROM_JSON(normalCount, normalCount_);
      DARABONBA_PTR_FROM_JSON(warnCount, warnCount_);
    };
    GetClusterInspectReportDetailResponseBodySummary() = default ;
    GetClusterInspectReportDetailResponseBodySummary(const GetClusterInspectReportDetailResponseBodySummary &) = default ;
    GetClusterInspectReportDetailResponseBodySummary(GetClusterInspectReportDetailResponseBodySummary &&) = default ;
    GetClusterInspectReportDetailResponseBodySummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterInspectReportDetailResponseBodySummary() = default ;
    GetClusterInspectReportDetailResponseBodySummary& operator=(const GetClusterInspectReportDetailResponseBodySummary &) = default ;
    GetClusterInspectReportDetailResponseBodySummary& operator=(GetClusterInspectReportDetailResponseBodySummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adviceCount_ != nullptr
        && this->code_ != nullptr && this->errorCount_ != nullptr && this->normalCount_ != nullptr && this->warnCount_ != nullptr; };
    // adviceCount Field Functions 
    bool hasAdviceCount() const { return this->adviceCount_ != nullptr;};
    void deleteAdviceCount() { this->adviceCount_ = nullptr;};
    inline int32_t adviceCount() const { DARABONBA_PTR_GET_DEFAULT(adviceCount_, 0) };
    inline GetClusterInspectReportDetailResponseBodySummary& setAdviceCount(int32_t adviceCount) { DARABONBA_PTR_SET_VALUE(adviceCount_, adviceCount) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetClusterInspectReportDetailResponseBodySummary& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int32_t errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0) };
    inline GetClusterInspectReportDetailResponseBodySummary& setErrorCount(int32_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // normalCount Field Functions 
    bool hasNormalCount() const { return this->normalCount_ != nullptr;};
    void deleteNormalCount() { this->normalCount_ = nullptr;};
    inline int32_t normalCount() const { DARABONBA_PTR_GET_DEFAULT(normalCount_, 0) };
    inline GetClusterInspectReportDetailResponseBodySummary& setNormalCount(int32_t normalCount) { DARABONBA_PTR_SET_VALUE(normalCount_, normalCount) };


    // warnCount Field Functions 
    bool hasWarnCount() const { return this->warnCount_ != nullptr;};
    void deleteWarnCount() { this->warnCount_ = nullptr;};
    inline int32_t warnCount() const { DARABONBA_PTR_GET_DEFAULT(warnCount_, 0) };
    inline GetClusterInspectReportDetailResponseBodySummary& setWarnCount(int32_t warnCount) { DARABONBA_PTR_SET_VALUE(warnCount_, warnCount) };


  protected:
    // The number of check items whose inspection result is advice.
    std::shared_ptr<int32_t> adviceCount_ = nullptr;
    // Check the status code of the inspection task.
    std::shared_ptr<string> code_ = nullptr;
    // The number of check items whose inspection result is error.
    std::shared_ptr<int32_t> errorCount_ = nullptr;
    // The number of check items whose inspection result is normal.
    std::shared_ptr<int32_t> normalCount_ = nullptr;
    // The number of check items whose inspection result is warning.
    std::shared_ptr<int32_t> warnCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
