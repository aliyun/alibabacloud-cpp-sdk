// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYFAILED_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYFAILED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DryRunSwaggerResponseBodyFailed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunSwaggerResponseBodyFailed& obj) { 
      DARABONBA_PTR_TO_JSON(ApiImportSwaggerFailed, apiImportSwaggerFailed_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunSwaggerResponseBodyFailed& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiImportSwaggerFailed, apiImportSwaggerFailed_);
    };
    DryRunSwaggerResponseBodyFailed() = default ;
    DryRunSwaggerResponseBodyFailed(const DryRunSwaggerResponseBodyFailed &) = default ;
    DryRunSwaggerResponseBodyFailed(DryRunSwaggerResponseBodyFailed &&) = default ;
    DryRunSwaggerResponseBodyFailed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunSwaggerResponseBodyFailed() = default ;
    DryRunSwaggerResponseBodyFailed& operator=(const DryRunSwaggerResponseBodyFailed &) = default ;
    DryRunSwaggerResponseBodyFailed& operator=(DryRunSwaggerResponseBodyFailed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiImportSwaggerFailed_ == nullptr; };
    // apiImportSwaggerFailed Field Functions 
    bool hasApiImportSwaggerFailed() const { return this->apiImportSwaggerFailed_ != nullptr;};
    void deleteApiImportSwaggerFailed() { this->apiImportSwaggerFailed_ = nullptr;};
    inline const vector<Models::DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed> & apiImportSwaggerFailed() const { DARABONBA_PTR_GET_CONST(apiImportSwaggerFailed_, vector<Models::DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed>) };
    inline vector<Models::DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed> apiImportSwaggerFailed() { DARABONBA_PTR_GET(apiImportSwaggerFailed_, vector<Models::DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed>) };
    inline DryRunSwaggerResponseBodyFailed& setApiImportSwaggerFailed(const vector<Models::DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed> & apiImportSwaggerFailed) { DARABONBA_PTR_SET_VALUE(apiImportSwaggerFailed_, apiImportSwaggerFailed) };
    inline DryRunSwaggerResponseBodyFailed& setApiImportSwaggerFailed(vector<Models::DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed> && apiImportSwaggerFailed) { DARABONBA_PTR_SET_RVALUE(apiImportSwaggerFailed_, apiImportSwaggerFailed) };


  protected:
    std::shared_ptr<vector<Models::DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed>> apiImportSwaggerFailed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
