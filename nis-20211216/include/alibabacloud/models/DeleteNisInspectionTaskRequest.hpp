// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENISINSPECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENISINSPECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DeleteNisInspectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNisInspectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionTaskId, inspectionTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNisInspectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionTaskId, inspectionTaskId_);
    };
    DeleteNisInspectionTaskRequest() = default ;
    DeleteNisInspectionTaskRequest(const DeleteNisInspectionTaskRequest &) = default ;
    DeleteNisInspectionTaskRequest(DeleteNisInspectionTaskRequest &&) = default ;
    DeleteNisInspectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNisInspectionTaskRequest() = default ;
    DeleteNisInspectionTaskRequest& operator=(const DeleteNisInspectionTaskRequest &) = default ;
    DeleteNisInspectionTaskRequest& operator=(DeleteNisInspectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inspectionTaskId_ == nullptr; };
    // inspectionTaskId Field Functions 
    bool hasInspectionTaskId() const { return this->inspectionTaskId_ != nullptr;};
    void deleteInspectionTaskId() { this->inspectionTaskId_ = nullptr;};
    inline string inspectionTaskId() const { DARABONBA_PTR_GET_DEFAULT(inspectionTaskId_, "") };
    inline DeleteNisInspectionTaskRequest& setInspectionTaskId(string inspectionTaskId) { DARABONBA_PTR_SET_VALUE(inspectionTaskId_, inspectionTaskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> inspectionTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
