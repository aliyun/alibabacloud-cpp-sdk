// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKSQLFLASHBACKTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKSQLFLASHBACKTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreCheckSqlFlashbackTaskResponseBodyDataCheckResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class PreCheckSqlFlashbackTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreCheckSqlFlashbackTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
    };
    friend void from_json(const Darabonba::Json& j, PreCheckSqlFlashbackTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
    };
    PreCheckSqlFlashbackTaskResponseBodyData() = default ;
    PreCheckSqlFlashbackTaskResponseBodyData(const PreCheckSqlFlashbackTaskResponseBodyData &) = default ;
    PreCheckSqlFlashbackTaskResponseBodyData(PreCheckSqlFlashbackTaskResponseBodyData &&) = default ;
    PreCheckSqlFlashbackTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreCheckSqlFlashbackTaskResponseBodyData() = default ;
    PreCheckSqlFlashbackTaskResponseBodyData& operator=(const PreCheckSqlFlashbackTaskResponseBodyData &) = default ;
    PreCheckSqlFlashbackTaskResponseBodyData& operator=(PreCheckSqlFlashbackTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkResult_ == nullptr; };
    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline const Models::PreCheckSqlFlashbackTaskResponseBodyDataCheckResult & checkResult() const { DARABONBA_PTR_GET_CONST(checkResult_, Models::PreCheckSqlFlashbackTaskResponseBodyDataCheckResult) };
    inline Models::PreCheckSqlFlashbackTaskResponseBodyDataCheckResult checkResult() { DARABONBA_PTR_GET(checkResult_, Models::PreCheckSqlFlashbackTaskResponseBodyDataCheckResult) };
    inline PreCheckSqlFlashbackTaskResponseBodyData& setCheckResult(const Models::PreCheckSqlFlashbackTaskResponseBodyDataCheckResult & checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };
    inline PreCheckSqlFlashbackTaskResponseBodyData& setCheckResult(Models::PreCheckSqlFlashbackTaskResponseBodyDataCheckResult && checkResult) { DARABONBA_PTR_SET_RVALUE(checkResult_, checkResult) };


  protected:
    std::shared_ptr<Models::PreCheckSqlFlashbackTaskResponseBodyDataCheckResult> checkResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
