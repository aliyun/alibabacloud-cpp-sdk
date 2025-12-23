// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPRESPONSEBODYRESULTDOMAINFUNCTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPRESPONSEBODYRESULTDOMAINFUNCTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeAppResponseBodyResultDomainFunctions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppResponseBodyResultDomainFunctions& obj) { 
      DARABONBA_PTR_TO_JSON(algo, algo_);
      DARABONBA_PTR_TO_JSON(qp, qp_);
      DARABONBA_PTR_TO_JSON(service, service_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppResponseBodyResultDomainFunctions& obj) { 
      DARABONBA_PTR_FROM_JSON(algo, algo_);
      DARABONBA_PTR_FROM_JSON(qp, qp_);
      DARABONBA_PTR_FROM_JSON(service, service_);
    };
    DescribeAppResponseBodyResultDomainFunctions() = default ;
    DescribeAppResponseBodyResultDomainFunctions(const DescribeAppResponseBodyResultDomainFunctions &) = default ;
    DescribeAppResponseBodyResultDomainFunctions(DescribeAppResponseBodyResultDomainFunctions &&) = default ;
    DescribeAppResponseBodyResultDomainFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppResponseBodyResultDomainFunctions() = default ;
    DescribeAppResponseBodyResultDomainFunctions& operator=(const DescribeAppResponseBodyResultDomainFunctions &) = default ;
    DescribeAppResponseBodyResultDomainFunctions& operator=(DescribeAppResponseBodyResultDomainFunctions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algo_ == nullptr
        && return this->qp_ == nullptr && return this->service_ == nullptr; };
    // algo Field Functions 
    bool hasAlgo() const { return this->algo_ != nullptr;};
    void deleteAlgo() { this->algo_ = nullptr;};
    inline const vector<string> & algo() const { DARABONBA_PTR_GET_CONST(algo_, vector<string>) };
    inline vector<string> algo() { DARABONBA_PTR_GET(algo_, vector<string>) };
    inline DescribeAppResponseBodyResultDomainFunctions& setAlgo(const vector<string> & algo) { DARABONBA_PTR_SET_VALUE(algo_, algo) };
    inline DescribeAppResponseBodyResultDomainFunctions& setAlgo(vector<string> && algo) { DARABONBA_PTR_SET_RVALUE(algo_, algo) };


    // qp Field Functions 
    bool hasQp() const { return this->qp_ != nullptr;};
    void deleteQp() { this->qp_ = nullptr;};
    inline const vector<string> & qp() const { DARABONBA_PTR_GET_CONST(qp_, vector<string>) };
    inline vector<string> qp() { DARABONBA_PTR_GET(qp_, vector<string>) };
    inline DescribeAppResponseBodyResultDomainFunctions& setQp(const vector<string> & qp) { DARABONBA_PTR_SET_VALUE(qp_, qp) };
    inline DescribeAppResponseBodyResultDomainFunctions& setQp(vector<string> && qp) { DARABONBA_PTR_SET_RVALUE(qp_, qp) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline const vector<string> & service() const { DARABONBA_PTR_GET_CONST(service_, vector<string>) };
    inline vector<string> service() { DARABONBA_PTR_GET(service_, vector<string>) };
    inline DescribeAppResponseBodyResultDomainFunctions& setService(const vector<string> & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
    inline DescribeAppResponseBodyResultDomainFunctions& setService(vector<string> && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


  protected:
    // The structure of the algorithm.
    std::shared_ptr<vector<string>> algo_ = nullptr;
    // The information about the layout.
    std::shared_ptr<vector<string>> qp_ = nullptr;
    // The description of each feature.
    std::shared_ptr<vector<string>> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
