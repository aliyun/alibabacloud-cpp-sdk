// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERDIAGNOSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERDIAGNOSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterDiagnosisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(diagnosis_id, diagnosisId_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(diagnosis_id, diagnosisId_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
    };
    CreateClusterDiagnosisResponseBody() = default ;
    CreateClusterDiagnosisResponseBody(const CreateClusterDiagnosisResponseBody &) = default ;
    CreateClusterDiagnosisResponseBody(CreateClusterDiagnosisResponseBody &&) = default ;
    CreateClusterDiagnosisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterDiagnosisResponseBody() = default ;
    CreateClusterDiagnosisResponseBody& operator=(const CreateClusterDiagnosisResponseBody &) = default ;
    CreateClusterDiagnosisResponseBody& operator=(CreateClusterDiagnosisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->diagnosisId_ == nullptr && this->requestId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateClusterDiagnosisResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // diagnosisId Field Functions 
    bool hasDiagnosisId() const { return this->diagnosisId_ != nullptr;};
    void deleteDiagnosisId() { this->diagnosisId_ = nullptr;};
    inline string getDiagnosisId() const { DARABONBA_PTR_GET_DEFAULT(diagnosisId_, "") };
    inline CreateClusterDiagnosisResponseBody& setDiagnosisId(string diagnosisId) { DARABONBA_PTR_SET_VALUE(diagnosisId_, diagnosisId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateClusterDiagnosisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The diagnostic ID.
    shared_ptr<string> diagnosisId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
