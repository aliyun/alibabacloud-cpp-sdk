// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDIGITALEMPLOYEEUMODELCOMMONSCHEMAREFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDIGITALEMPLOYEEUMODELCOMMONSCHEMAREFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class DeleteDigitalEmployeeUmodelCommonSchemaRefRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDigitalEmployeeUmodelCommonSchemaRefRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteDigitalEmployeeUmodelCommonSchemaRefRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteDigitalEmployeeUmodelCommonSchemaRefRequest() = default ;
    DeleteDigitalEmployeeUmodelCommonSchemaRefRequest(const DeleteDigitalEmployeeUmodelCommonSchemaRefRequest &) = default ;
    DeleteDigitalEmployeeUmodelCommonSchemaRefRequest(DeleteDigitalEmployeeUmodelCommonSchemaRefRequest &&) = default ;
    DeleteDigitalEmployeeUmodelCommonSchemaRefRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDigitalEmployeeUmodelCommonSchemaRefRequest() = default ;
    DeleteDigitalEmployeeUmodelCommonSchemaRefRequest& operator=(const DeleteDigitalEmployeeUmodelCommonSchemaRefRequest &) = default ;
    DeleteDigitalEmployeeUmodelCommonSchemaRefRequest& operator=(DeleteDigitalEmployeeUmodelCommonSchemaRefRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
