// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTDOMAINFUNCTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTDOMAINFUNCTIONS_HPP_
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
  class CreateAppResponseBodyResultDomainFunctions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBodyResultDomainFunctions& obj) { 
      DARABONBA_PTR_TO_JSON(algo, algo_);
      DARABONBA_PTR_TO_JSON(qp, qp_);
      DARABONBA_PTR_TO_JSON(service, service_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBodyResultDomainFunctions& obj) { 
      DARABONBA_PTR_FROM_JSON(algo, algo_);
      DARABONBA_PTR_FROM_JSON(qp, qp_);
      DARABONBA_PTR_FROM_JSON(service, service_);
    };
    CreateAppResponseBodyResultDomainFunctions() = default ;
    CreateAppResponseBodyResultDomainFunctions(const CreateAppResponseBodyResultDomainFunctions &) = default ;
    CreateAppResponseBodyResultDomainFunctions(CreateAppResponseBodyResultDomainFunctions &&) = default ;
    CreateAppResponseBodyResultDomainFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBodyResultDomainFunctions() = default ;
    CreateAppResponseBodyResultDomainFunctions& operator=(const CreateAppResponseBodyResultDomainFunctions &) = default ;
    CreateAppResponseBodyResultDomainFunctions& operator=(CreateAppResponseBodyResultDomainFunctions &&) = default ;
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
    inline CreateAppResponseBodyResultDomainFunctions& setAlgo(const vector<string> & algo) { DARABONBA_PTR_SET_VALUE(algo_, algo) };
    inline CreateAppResponseBodyResultDomainFunctions& setAlgo(vector<string> && algo) { DARABONBA_PTR_SET_RVALUE(algo_, algo) };


    // qp Field Functions 
    bool hasQp() const { return this->qp_ != nullptr;};
    void deleteQp() { this->qp_ = nullptr;};
    inline const vector<string> & qp() const { DARABONBA_PTR_GET_CONST(qp_, vector<string>) };
    inline vector<string> qp() { DARABONBA_PTR_GET(qp_, vector<string>) };
    inline CreateAppResponseBodyResultDomainFunctions& setQp(const vector<string> & qp) { DARABONBA_PTR_SET_VALUE(qp_, qp) };
    inline CreateAppResponseBodyResultDomainFunctions& setQp(vector<string> && qp) { DARABONBA_PTR_SET_RVALUE(qp_, qp) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline const vector<string> & service() const { DARABONBA_PTR_GET_CONST(service_, vector<string>) };
    inline vector<string> service() { DARABONBA_PTR_GET(service_, vector<string>) };
    inline CreateAppResponseBodyResultDomainFunctions& setService(const vector<string> & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
    inline CreateAppResponseBodyResultDomainFunctions& setService(vector<string> && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


  protected:
    // The features of the sort policy category.
    std::shared_ptr<vector<string>> algo_ = nullptr;
    // The features of the query analysis category.
    std::shared_ptr<vector<string>> qp_ = nullptr;
    // The features of the service category.
    std::shared_ptr<vector<string>> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
