// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECALCULATIONJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECALCULATIONJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateCalculationJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCalculationJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CalculationJobIds, calculationJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCalculationJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CalculationJobIds, calculationJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCalculationJobsResponseBody() = default ;
    CreateCalculationJobsResponseBody(const CreateCalculationJobsResponseBody &) = default ;
    CreateCalculationJobsResponseBody(CreateCalculationJobsResponseBody &&) = default ;
    CreateCalculationJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCalculationJobsResponseBody() = default ;
    CreateCalculationJobsResponseBody& operator=(const CreateCalculationJobsResponseBody &) = default ;
    CreateCalculationJobsResponseBody& operator=(CreateCalculationJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calculationJobIds_ != nullptr
        && this->requestId_ != nullptr; };
    // calculationJobIds Field Functions 
    bool hasCalculationJobIds() const { return this->calculationJobIds_ != nullptr;};
    void deleteCalculationJobIds() { this->calculationJobIds_ = nullptr;};
    inline const vector<string> & calculationJobIds() const { DARABONBA_PTR_GET_CONST(calculationJobIds_, vector<string>) };
    inline vector<string> calculationJobIds() { DARABONBA_PTR_GET(calculationJobIds_, vector<string>) };
    inline CreateCalculationJobsResponseBody& setCalculationJobIds(const vector<string> & calculationJobIds) { DARABONBA_PTR_SET_VALUE(calculationJobIds_, calculationJobIds) };
    inline CreateCalculationJobsResponseBody& setCalculationJobIds(vector<string> && calculationJobIds) { DARABONBA_PTR_SET_RVALUE(calculationJobIds_, calculationJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCalculationJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> calculationJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
