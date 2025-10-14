// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRICINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class PricingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PricingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, PricingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
    };
    PricingRequest() = default ;
    PricingRequest(const PricingRequest &) = default ;
    PricingRequest(PricingRequest &&) = default ;
    PricingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PricingRequest() = default ;
    PricingRequest& operator=(const PricingRequest &) = default ;
    PricingRequest& operator=(PricingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->solutionId_ == nullptr; };
    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline PricingRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // solution_id returned by Enrich
    // 
    // This parameter is required.
    std::shared_ptr<string> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
