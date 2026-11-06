// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSEARCHPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSEARCHPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifySearchParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySearchParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySearchParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    ModifySearchParametersRequest() = default ;
    ModifySearchParametersRequest(const ModifySearchParametersRequest &) = default ;
    ModifySearchParametersRequest(ModifySearchParametersRequest &&) = default ;
    ModifySearchParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySearchParametersRequest() = default ;
    ModifySearchParametersRequest& operator=(const ModifySearchParametersRequest &) = default ;
    ModifySearchParametersRequest& operator=(ModifySearchParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->parameters_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifySearchParametersRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifySearchParametersRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


  protected:
    // The ID of the primary PolarDB cluster, which is used to locate the Search cluster associated with the current account.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // A non-empty JSON object string where the keys are parameter names and all values must be strings, such as 10% for a percentage or 48mb for a capacity. Only parameters that are visible and modifiable in the current version template can be modified. Dynamic parameters take effect and are persisted immediately, whereas static parameters take effect after a restart triggered by the task flow. A successful response only indicates that the task has been accepted.
    // 
    // This parameter is required.
    shared_ptr<string> parameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
