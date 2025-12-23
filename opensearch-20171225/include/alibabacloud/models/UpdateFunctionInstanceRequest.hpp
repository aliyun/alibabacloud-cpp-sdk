// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNCTIONINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNCTIONINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateFunctionInstanceRequestCreateParameters.hpp>
#include <alibabacloud/models/UpdateFunctionInstanceRequestUsageParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateFunctionInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFunctionInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(createParameters, createParameters_);
      DARABONBA_PTR_TO_JSON(cron, cron_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(usageParameters, usageParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFunctionInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(createParameters, createParameters_);
      DARABONBA_PTR_FROM_JSON(cron, cron_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(usageParameters, usageParameters_);
    };
    UpdateFunctionInstanceRequest() = default ;
    UpdateFunctionInstanceRequest(const UpdateFunctionInstanceRequest &) = default ;
    UpdateFunctionInstanceRequest(UpdateFunctionInstanceRequest &&) = default ;
    UpdateFunctionInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFunctionInstanceRequest() = default ;
    UpdateFunctionInstanceRequest& operator=(const UpdateFunctionInstanceRequest &) = default ;
    UpdateFunctionInstanceRequest& operator=(UpdateFunctionInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createParameters_ == nullptr
        && return this->cron_ == nullptr && return this->description_ == nullptr && return this->usageParameters_ == nullptr; };
    // createParameters Field Functions 
    bool hasCreateParameters() const { return this->createParameters_ != nullptr;};
    void deleteCreateParameters() { this->createParameters_ = nullptr;};
    inline const vector<UpdateFunctionInstanceRequestCreateParameters> & createParameters() const { DARABONBA_PTR_GET_CONST(createParameters_, vector<UpdateFunctionInstanceRequestCreateParameters>) };
    inline vector<UpdateFunctionInstanceRequestCreateParameters> createParameters() { DARABONBA_PTR_GET(createParameters_, vector<UpdateFunctionInstanceRequestCreateParameters>) };
    inline UpdateFunctionInstanceRequest& setCreateParameters(const vector<UpdateFunctionInstanceRequestCreateParameters> & createParameters) { DARABONBA_PTR_SET_VALUE(createParameters_, createParameters) };
    inline UpdateFunctionInstanceRequest& setCreateParameters(vector<UpdateFunctionInstanceRequestCreateParameters> && createParameters) { DARABONBA_PTR_SET_RVALUE(createParameters_, createParameters) };


    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string cron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline UpdateFunctionInstanceRequest& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateFunctionInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // usageParameters Field Functions 
    bool hasUsageParameters() const { return this->usageParameters_ != nullptr;};
    void deleteUsageParameters() { this->usageParameters_ = nullptr;};
    inline const vector<UpdateFunctionInstanceRequestUsageParameters> & usageParameters() const { DARABONBA_PTR_GET_CONST(usageParameters_, vector<UpdateFunctionInstanceRequestUsageParameters>) };
    inline vector<UpdateFunctionInstanceRequestUsageParameters> usageParameters() { DARABONBA_PTR_GET(usageParameters_, vector<UpdateFunctionInstanceRequestUsageParameters>) };
    inline UpdateFunctionInstanceRequest& setUsageParameters(const vector<UpdateFunctionInstanceRequestUsageParameters> & usageParameters) { DARABONBA_PTR_SET_VALUE(usageParameters_, usageParameters) };
    inline UpdateFunctionInstanceRequest& setUsageParameters(vector<UpdateFunctionInstanceRequestUsageParameters> && usageParameters) { DARABONBA_PTR_SET_RVALUE(usageParameters_, usageParameters) };


  protected:
    // The parameters that are used to create the instance.
    std::shared_ptr<vector<UpdateFunctionInstanceRequestCreateParameters>> createParameters_ = nullptr;
    // The cron expression used to schedule periodic training, in the format of (Minutes Hours DayofMonth Month DayofWeek). The default value is empty, which indicates that no periodic training is performed. DayofWeek 0 indicates Sunday.
    std::shared_ptr<string> cron_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The parameters that are used.
    std::shared_ptr<vector<UpdateFunctionInstanceRequestUsageParameters>> usageParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
