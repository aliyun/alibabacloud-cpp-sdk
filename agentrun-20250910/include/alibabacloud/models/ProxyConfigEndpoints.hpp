// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROXYCONFIGENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_PROXYCONFIGENDPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ProxyConfigEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProxyConfigEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(modelNames, modelNames_);
      DARABONBA_PTR_TO_JSON(modelServiceName, modelServiceName_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ProxyConfigEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(modelNames, modelNames_);
      DARABONBA_PTR_FROM_JSON(modelServiceName, modelServiceName_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    ProxyConfigEndpoints() = default ;
    ProxyConfigEndpoints(const ProxyConfigEndpoints &) = default ;
    ProxyConfigEndpoints(ProxyConfigEndpoints &&) = default ;
    ProxyConfigEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProxyConfigEndpoints() = default ;
    ProxyConfigEndpoints& operator=(const ProxyConfigEndpoints &) = default ;
    ProxyConfigEndpoints& operator=(ProxyConfigEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseUrl_ == nullptr
        && return this->modelNames_ == nullptr && return this->modelServiceName_ == nullptr && return this->weight_ == nullptr; };
    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string baseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline ProxyConfigEndpoints& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // modelNames Field Functions 
    bool hasModelNames() const { return this->modelNames_ != nullptr;};
    void deleteModelNames() { this->modelNames_ = nullptr;};
    inline const vector<string> & modelNames() const { DARABONBA_PTR_GET_CONST(modelNames_, vector<string>) };
    inline vector<string> modelNames() { DARABONBA_PTR_GET(modelNames_, vector<string>) };
    inline ProxyConfigEndpoints& setModelNames(const vector<string> & modelNames) { DARABONBA_PTR_SET_VALUE(modelNames_, modelNames) };
    inline ProxyConfigEndpoints& setModelNames(vector<string> && modelNames) { DARABONBA_PTR_SET_RVALUE(modelNames_, modelNames) };


    // modelServiceName Field Functions 
    bool hasModelServiceName() const { return this->modelServiceName_ != nullptr;};
    void deleteModelServiceName() { this->modelServiceName_ = nullptr;};
    inline string modelServiceName() const { DARABONBA_PTR_GET_DEFAULT(modelServiceName_, "") };
    inline ProxyConfigEndpoints& setModelServiceName(string modelServiceName) { DARABONBA_PTR_SET_VALUE(modelServiceName_, modelServiceName) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ProxyConfigEndpoints& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> baseUrl_ = nullptr;
    std::shared_ptr<vector<string>> modelNames_ = nullptr;
    std::shared_ptr<string> modelServiceName_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
