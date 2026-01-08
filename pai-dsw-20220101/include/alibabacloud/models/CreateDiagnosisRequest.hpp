// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateDiagnosisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GmtFailureTime, gmtFailureTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProblemCategory, problemCategory_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtFailureTime, gmtFailureTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProblemCategory, problemCategory_);
    };
    CreateDiagnosisRequest() = default ;
    CreateDiagnosisRequest(const CreateDiagnosisRequest &) = default ;
    CreateDiagnosisRequest(CreateDiagnosisRequest &&) = default ;
    CreateDiagnosisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosisRequest() = default ;
    CreateDiagnosisRequest& operator=(const CreateDiagnosisRequest &) = default ;
    CreateDiagnosisRequest& operator=(CreateDiagnosisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtFailureTime_ == nullptr
        && this->instanceId_ == nullptr && this->problemCategory_ == nullptr; };
    // gmtFailureTime Field Functions 
    bool hasGmtFailureTime() const { return this->gmtFailureTime_ != nullptr;};
    void deleteGmtFailureTime() { this->gmtFailureTime_ = nullptr;};
    inline string getGmtFailureTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFailureTime_, "") };
    inline CreateDiagnosisRequest& setGmtFailureTime(string gmtFailureTime) { DARABONBA_PTR_SET_VALUE(gmtFailureTime_, gmtFailureTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDiagnosisRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // problemCategory Field Functions 
    bool hasProblemCategory() const { return this->problemCategory_ != nullptr;};
    void deleteProblemCategory() { this->problemCategory_ = nullptr;};
    inline string getProblemCategory() const { DARABONBA_PTR_GET_DEFAULT(problemCategory_, "") };
    inline CreateDiagnosisRequest& setProblemCategory(string problemCategory) { DARABONBA_PTR_SET_VALUE(problemCategory_, problemCategory) };


  protected:
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> gmtFailureTime_ {};
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> problemCategory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
