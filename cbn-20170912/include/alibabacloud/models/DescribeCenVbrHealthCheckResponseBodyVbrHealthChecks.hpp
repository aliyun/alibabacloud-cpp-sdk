// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENVBRHEALTHCHECKRESPONSEBODYVBRHEALTHCHECKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENVBRHEALTHCHECKRESPONSEBODYVBRHEALTHCHECKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks& obj) { 
      DARABONBA_PTR_TO_JSON(VbrHealthCheck, vbrHealthCheck_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks& obj) { 
      DARABONBA_PTR_FROM_JSON(VbrHealthCheck, vbrHealthCheck_);
    };
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks() = default ;
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks(const DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks &) = default ;
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks(DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks &&) = default ;
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks() = default ;
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks& operator=(const DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks &) = default ;
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks& operator=(DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vbrHealthCheck_ != nullptr; };
    // vbrHealthCheck Field Functions 
    bool hasVbrHealthCheck() const { return this->vbrHealthCheck_ != nullptr;};
    void deleteVbrHealthCheck() { this->vbrHealthCheck_ = nullptr;};
    inline const vector<Models::DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck> & vbrHealthCheck() const { DARABONBA_PTR_GET_CONST(vbrHealthCheck_, vector<Models::DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck>) };
    inline vector<Models::DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck> vbrHealthCheck() { DARABONBA_PTR_GET(vbrHealthCheck_, vector<Models::DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck>) };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks& setVbrHealthCheck(const vector<Models::DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck> & vbrHealthCheck) { DARABONBA_PTR_SET_VALUE(vbrHealthCheck_, vbrHealthCheck) };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecks& setVbrHealthCheck(vector<Models::DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck> && vbrHealthCheck) { DARABONBA_PTR_SET_RVALUE(vbrHealthCheck_, vbrHealthCheck) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck>> vbrHealthCheck_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
