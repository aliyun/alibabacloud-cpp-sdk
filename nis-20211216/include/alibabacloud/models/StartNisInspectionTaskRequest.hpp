// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTNISINSPECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTNISINSPECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class StartNisInspectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartNisInspectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionTaskId, inspectionTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, StartNisInspectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionTaskId, inspectionTaskId_);
    };
    StartNisInspectionTaskRequest() = default ;
    StartNisInspectionTaskRequest(const StartNisInspectionTaskRequest &) = default ;
    StartNisInspectionTaskRequest(StartNisInspectionTaskRequest &&) = default ;
    StartNisInspectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartNisInspectionTaskRequest() = default ;
    StartNisInspectionTaskRequest& operator=(const StartNisInspectionTaskRequest &) = default ;
    StartNisInspectionTaskRequest& operator=(StartNisInspectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inspectionTaskId_ == nullptr; };
    // inspectionTaskId Field Functions 
    bool hasInspectionTaskId() const { return this->inspectionTaskId_ != nullptr;};
    void deleteInspectionTaskId() { this->inspectionTaskId_ = nullptr;};
    inline string getInspectionTaskId() const { DARABONBA_PTR_GET_DEFAULT(inspectionTaskId_, "") };
    inline StartNisInspectionTaskRequest& setInspectionTaskId(string inspectionTaskId) { DARABONBA_PTR_SET_VALUE(inspectionTaskId_, inspectionTaskId) };


  protected:
    // This parameter is required.
    shared_ptr<string> inspectionTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
