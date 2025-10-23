// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCEXTRACTIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCEXTRACTIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocExtractionResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocExtractionResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocExtractionResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetDocExtractionResultRequest() = default ;
    GetDocExtractionResultRequest(const GetDocExtractionResultRequest &) = default ;
    GetDocExtractionResultRequest(GetDocExtractionResultRequest &&) = default ;
    GetDocExtractionResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocExtractionResultRequest() = default ;
    GetDocExtractionResultRequest& operator=(const GetDocExtractionResultRequest &) = default ;
    GetDocExtractionResultRequest& operator=(GetDocExtractionResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetDocExtractionResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // - Task ID.
    // - taskId is obtained from the SubmitDocExtractionTaskAdvance and SubmitDocExtractionTask interfaces.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
