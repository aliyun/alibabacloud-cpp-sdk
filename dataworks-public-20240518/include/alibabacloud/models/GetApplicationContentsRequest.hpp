// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONCONTENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONCONTENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetApplicationContentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationContentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationContentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
    };
    GetApplicationContentsRequest() = default ;
    GetApplicationContentsRequest(const GetApplicationContentsRequest &) = default ;
    GetApplicationContentsRequest(GetApplicationContentsRequest &&) = default ;
    GetApplicationContentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationContentsRequest() = default ;
    GetApplicationContentsRequest& operator=(const GetApplicationContentsRequest &) = default ;
    GetApplicationContentsRequest& operator=(GetApplicationContentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->processInstanceId_ == nullptr; };
    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetApplicationContentsRequest& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


  protected:
    // The ID of the approval process instance.
    // 
    // This parameter is required.
    shared_ptr<string> processInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
