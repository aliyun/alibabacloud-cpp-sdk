// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYMODELSUCCESS_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYMODELSUCCESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DryRunSwaggerResponseBodyModelSuccess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunSwaggerResponseBodyModelSuccess& obj) { 
      DARABONBA_PTR_TO_JSON(ApiImportModelSuccess, apiImportModelSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunSwaggerResponseBodyModelSuccess& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiImportModelSuccess, apiImportModelSuccess_);
    };
    DryRunSwaggerResponseBodyModelSuccess() = default ;
    DryRunSwaggerResponseBodyModelSuccess(const DryRunSwaggerResponseBodyModelSuccess &) = default ;
    DryRunSwaggerResponseBodyModelSuccess(DryRunSwaggerResponseBodyModelSuccess &&) = default ;
    DryRunSwaggerResponseBodyModelSuccess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunSwaggerResponseBodyModelSuccess() = default ;
    DryRunSwaggerResponseBodyModelSuccess& operator=(const DryRunSwaggerResponseBodyModelSuccess &) = default ;
    DryRunSwaggerResponseBodyModelSuccess& operator=(DryRunSwaggerResponseBodyModelSuccess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiImportModelSuccess_ == nullptr; };
    // apiImportModelSuccess Field Functions 
    bool hasApiImportModelSuccess() const { return this->apiImportModelSuccess_ != nullptr;};
    void deleteApiImportModelSuccess() { this->apiImportModelSuccess_ = nullptr;};
    inline const vector<Models::DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess> & apiImportModelSuccess() const { DARABONBA_PTR_GET_CONST(apiImportModelSuccess_, vector<Models::DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess>) };
    inline vector<Models::DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess> apiImportModelSuccess() { DARABONBA_PTR_GET(apiImportModelSuccess_, vector<Models::DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess>) };
    inline DryRunSwaggerResponseBodyModelSuccess& setApiImportModelSuccess(const vector<Models::DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess> & apiImportModelSuccess) { DARABONBA_PTR_SET_VALUE(apiImportModelSuccess_, apiImportModelSuccess) };
    inline DryRunSwaggerResponseBodyModelSuccess& setApiImportModelSuccess(vector<Models::DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess> && apiImportModelSuccess) { DARABONBA_PTR_SET_RVALUE(apiImportModelSuccess_, apiImportModelSuccess) };


  protected:
    std::shared_ptr<vector<Models::DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess>> apiImportModelSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
