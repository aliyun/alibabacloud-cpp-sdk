// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYRESULTDOMAINFUNCTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYRESULTDOMAINFUNCTIONS_HPP_
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
  class DescribeAppsResponseBodyResultDomainFunctions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBodyResultDomainFunctions& obj) { 
      DARABONBA_PTR_TO_JSON(algo, algo_);
      DARABONBA_PTR_TO_JSON(qp, qp_);
      DARABONBA_PTR_TO_JSON(service, service_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBodyResultDomainFunctions& obj) { 
      DARABONBA_PTR_FROM_JSON(algo, algo_);
      DARABONBA_PTR_FROM_JSON(qp, qp_);
      DARABONBA_PTR_FROM_JSON(service, service_);
    };
    DescribeAppsResponseBodyResultDomainFunctions() = default ;
    DescribeAppsResponseBodyResultDomainFunctions(const DescribeAppsResponseBodyResultDomainFunctions &) = default ;
    DescribeAppsResponseBodyResultDomainFunctions(DescribeAppsResponseBodyResultDomainFunctions &&) = default ;
    DescribeAppsResponseBodyResultDomainFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBodyResultDomainFunctions() = default ;
    DescribeAppsResponseBodyResultDomainFunctions& operator=(const DescribeAppsResponseBodyResultDomainFunctions &) = default ;
    DescribeAppsResponseBodyResultDomainFunctions& operator=(DescribeAppsResponseBodyResultDomainFunctions &&) = default ;
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
    inline DescribeAppsResponseBodyResultDomainFunctions& setAlgo(const vector<string> & algo) { DARABONBA_PTR_SET_VALUE(algo_, algo) };
    inline DescribeAppsResponseBodyResultDomainFunctions& setAlgo(vector<string> && algo) { DARABONBA_PTR_SET_RVALUE(algo_, algo) };


    // qp Field Functions 
    bool hasQp() const { return this->qp_ != nullptr;};
    void deleteQp() { this->qp_ = nullptr;};
    inline const vector<string> & qp() const { DARABONBA_PTR_GET_CONST(qp_, vector<string>) };
    inline vector<string> qp() { DARABONBA_PTR_GET(qp_, vector<string>) };
    inline DescribeAppsResponseBodyResultDomainFunctions& setQp(const vector<string> & qp) { DARABONBA_PTR_SET_VALUE(qp_, qp) };
    inline DescribeAppsResponseBodyResultDomainFunctions& setQp(vector<string> && qp) { DARABONBA_PTR_SET_RVALUE(qp_, qp) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline const vector<string> & service() const { DARABONBA_PTR_GET_CONST(service_, vector<string>) };
    inline vector<string> service() { DARABONBA_PTR_GET(service_, vector<string>) };
    inline DescribeAppsResponseBodyResultDomainFunctions& setService(const vector<string> & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
    inline DescribeAppsResponseBodyResultDomainFunctions& setService(vector<string> && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


  protected:
    // Structure 1.
    std::shared_ptr<vector<string>> algo_ = nullptr;
    // Information 1.
    std::shared_ptr<vector<string>> qp_ = nullptr;
    // Feature 1.
    std::shared_ptr<vector<string>> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
