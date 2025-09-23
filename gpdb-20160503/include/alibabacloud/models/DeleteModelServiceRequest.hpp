// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMODELSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMODELSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteModelServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteModelServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ModelServiceId, modelServiceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteModelServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ModelServiceId, modelServiceId_);
    };
    DeleteModelServiceRequest() = default ;
    DeleteModelServiceRequest(const DeleteModelServiceRequest &) = default ;
    DeleteModelServiceRequest(DeleteModelServiceRequest &&) = default ;
    DeleteModelServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteModelServiceRequest() = default ;
    DeleteModelServiceRequest& operator=(const DeleteModelServiceRequest &) = default ;
    DeleteModelServiceRequest& operator=(DeleteModelServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->modelServiceId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteModelServiceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // modelServiceId Field Functions 
    bool hasModelServiceId() const { return this->modelServiceId_ != nullptr;};
    void deleteModelServiceId() { this->modelServiceId_ = nullptr;};
    inline string modelServiceId() const { DARABONBA_PTR_GET_DEFAULT(modelServiceId_, "") };
    inline DeleteModelServiceRequest& setModelServiceId(string modelServiceId) { DARABONBA_PTR_SET_VALUE(modelServiceId_, modelServiceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelServiceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
