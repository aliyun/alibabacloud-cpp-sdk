// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYSUCCESS_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYSUCCESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DryRunSwaggerResponseBodySuccessApiDryRunSwaggerSuccess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DryRunSwaggerResponseBodySuccess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunSwaggerResponseBodySuccess& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDryRunSwaggerSuccess, apiDryRunSwaggerSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunSwaggerResponseBodySuccess& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDryRunSwaggerSuccess, apiDryRunSwaggerSuccess_);
    };
    DryRunSwaggerResponseBodySuccess() = default ;
    DryRunSwaggerResponseBodySuccess(const DryRunSwaggerResponseBodySuccess &) = default ;
    DryRunSwaggerResponseBodySuccess(DryRunSwaggerResponseBodySuccess &&) = default ;
    DryRunSwaggerResponseBodySuccess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunSwaggerResponseBodySuccess() = default ;
    DryRunSwaggerResponseBodySuccess& operator=(const DryRunSwaggerResponseBodySuccess &) = default ;
    DryRunSwaggerResponseBodySuccess& operator=(DryRunSwaggerResponseBodySuccess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiDryRunSwaggerSuccess_ == nullptr; };
    // apiDryRunSwaggerSuccess Field Functions 
    bool hasApiDryRunSwaggerSuccess() const { return this->apiDryRunSwaggerSuccess_ != nullptr;};
    void deleteApiDryRunSwaggerSuccess() { this->apiDryRunSwaggerSuccess_ = nullptr;};
    inline const vector<Models::DryRunSwaggerResponseBodySuccessApiDryRunSwaggerSuccess> & apiDryRunSwaggerSuccess() const { DARABONBA_PTR_GET_CONST(apiDryRunSwaggerSuccess_, vector<Models::DryRunSwaggerResponseBodySuccessApiDryRunSwaggerSuccess>) };
    inline vector<Models::DryRunSwaggerResponseBodySuccessApiDryRunSwaggerSuccess> apiDryRunSwaggerSuccess() { DARABONBA_PTR_GET(apiDryRunSwaggerSuccess_, vector<Models::DryRunSwaggerResponseBodySuccessApiDryRunSwaggerSuccess>) };
    inline DryRunSwaggerResponseBodySuccess& setApiDryRunSwaggerSuccess(const vector<Models::DryRunSwaggerResponseBodySuccessApiDryRunSwaggerSuccess> & apiDryRunSwaggerSuccess) { DARABONBA_PTR_SET_VALUE(apiDryRunSwaggerSuccess_, apiDryRunSwaggerSuccess) };
    inline DryRunSwaggerResponseBodySuccess& setApiDryRunSwaggerSuccess(vector<Models::DryRunSwaggerResponseBodySuccessApiDryRunSwaggerSuccess> && apiDryRunSwaggerSuccess) { DARABONBA_PTR_SET_RVALUE(apiDryRunSwaggerSuccess_, apiDryRunSwaggerSuccess) };


  protected:
    std::shared_ptr<vector<Models::DryRunSwaggerResponseBodySuccessApiDryRunSwaggerSuccess>> apiDryRunSwaggerSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
