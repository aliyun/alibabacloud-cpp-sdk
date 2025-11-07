// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENISINSPECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENISINSPECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class UpdateNisInspectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNisInspectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionTaskId, inspectionTaskId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNisInspectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionTaskId, inspectionTaskId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateNisInspectionTaskRequest() = default ;
    UpdateNisInspectionTaskRequest(const UpdateNisInspectionTaskRequest &) = default ;
    UpdateNisInspectionTaskRequest(UpdateNisInspectionTaskRequest &&) = default ;
    UpdateNisInspectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNisInspectionTaskRequest() = default ;
    UpdateNisInspectionTaskRequest& operator=(const UpdateNisInspectionTaskRequest &) = default ;
    UpdateNisInspectionTaskRequest& operator=(UpdateNisInspectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inspectionTaskId_ == nullptr
        && return this->status_ == nullptr; };
    // inspectionTaskId Field Functions 
    bool hasInspectionTaskId() const { return this->inspectionTaskId_ != nullptr;};
    void deleteInspectionTaskId() { this->inspectionTaskId_ = nullptr;};
    inline string inspectionTaskId() const { DARABONBA_PTR_GET_DEFAULT(inspectionTaskId_, "") };
    inline UpdateNisInspectionTaskRequest& setInspectionTaskId(string inspectionTaskId) { DARABONBA_PTR_SET_VALUE(inspectionTaskId_, inspectionTaskId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateNisInspectionTaskRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> inspectionTaskId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
