// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYMODELFAILED_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYMODELFAILED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DryRunSwaggerResponseBodyModelFailedApiImportModelFailed.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DryRunSwaggerResponseBodyModelFailed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunSwaggerResponseBodyModelFailed& obj) { 
      DARABONBA_PTR_TO_JSON(ApiImportModelFailed, apiImportModelFailed_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunSwaggerResponseBodyModelFailed& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiImportModelFailed, apiImportModelFailed_);
    };
    DryRunSwaggerResponseBodyModelFailed() = default ;
    DryRunSwaggerResponseBodyModelFailed(const DryRunSwaggerResponseBodyModelFailed &) = default ;
    DryRunSwaggerResponseBodyModelFailed(DryRunSwaggerResponseBodyModelFailed &&) = default ;
    DryRunSwaggerResponseBodyModelFailed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunSwaggerResponseBodyModelFailed() = default ;
    DryRunSwaggerResponseBodyModelFailed& operator=(const DryRunSwaggerResponseBodyModelFailed &) = default ;
    DryRunSwaggerResponseBodyModelFailed& operator=(DryRunSwaggerResponseBodyModelFailed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiImportModelFailed_ == nullptr; };
    // apiImportModelFailed Field Functions 
    bool hasApiImportModelFailed() const { return this->apiImportModelFailed_ != nullptr;};
    void deleteApiImportModelFailed() { this->apiImportModelFailed_ = nullptr;};
    inline const vector<Models::DryRunSwaggerResponseBodyModelFailedApiImportModelFailed> & apiImportModelFailed() const { DARABONBA_PTR_GET_CONST(apiImportModelFailed_, vector<Models::DryRunSwaggerResponseBodyModelFailedApiImportModelFailed>) };
    inline vector<Models::DryRunSwaggerResponseBodyModelFailedApiImportModelFailed> apiImportModelFailed() { DARABONBA_PTR_GET(apiImportModelFailed_, vector<Models::DryRunSwaggerResponseBodyModelFailedApiImportModelFailed>) };
    inline DryRunSwaggerResponseBodyModelFailed& setApiImportModelFailed(const vector<Models::DryRunSwaggerResponseBodyModelFailedApiImportModelFailed> & apiImportModelFailed) { DARABONBA_PTR_SET_VALUE(apiImportModelFailed_, apiImportModelFailed) };
    inline DryRunSwaggerResponseBodyModelFailed& setApiImportModelFailed(vector<Models::DryRunSwaggerResponseBodyModelFailedApiImportModelFailed> && apiImportModelFailed) { DARABONBA_PTR_SET_RVALUE(apiImportModelFailed_, apiImportModelFailed) };


  protected:
    std::shared_ptr<vector<Models::DryRunSwaggerResponseBodyModelFailedApiImportModelFailed>> apiImportModelFailed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
