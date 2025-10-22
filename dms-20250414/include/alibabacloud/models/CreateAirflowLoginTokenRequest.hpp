// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIRFLOWLOGINTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIRFLOWLOGINTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateAirflowLoginTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAirflowLoginTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AirflowId, airflowId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAirflowLoginTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AirflowId, airflowId_);
    };
    CreateAirflowLoginTokenRequest() = default ;
    CreateAirflowLoginTokenRequest(const CreateAirflowLoginTokenRequest &) = default ;
    CreateAirflowLoginTokenRequest(CreateAirflowLoginTokenRequest &&) = default ;
    CreateAirflowLoginTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAirflowLoginTokenRequest() = default ;
    CreateAirflowLoginTokenRequest& operator=(const CreateAirflowLoginTokenRequest &) = default ;
    CreateAirflowLoginTokenRequest& operator=(CreateAirflowLoginTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airflowId_ == nullptr; };
    // airflowId Field Functions 
    bool hasAirflowId() const { return this->airflowId_ != nullptr;};
    void deleteAirflowId() { this->airflowId_ = nullptr;};
    inline string airflowId() const { DARABONBA_PTR_GET_DEFAULT(airflowId_, "") };
    inline CreateAirflowLoginTokenRequest& setAirflowId(string airflowId) { DARABONBA_PTR_SET_VALUE(airflowId_, airflowId) };


  protected:
    // The ID of the Airflow instance. You can view the instance ID on the [Airflow Instances](https://help.aliyun.com/document_detail/2881043.html) page.
    // 
    // This parameter is required.
    std::shared_ptr<string> airflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
