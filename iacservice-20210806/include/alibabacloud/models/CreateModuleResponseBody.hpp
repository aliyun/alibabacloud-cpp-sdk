// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateModuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(moduleId, moduleId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(moduleId, moduleId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateModuleResponseBody() = default ;
    CreateModuleResponseBody(const CreateModuleResponseBody &) = default ;
    CreateModuleResponseBody(CreateModuleResponseBody &&) = default ;
    CreateModuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModuleResponseBody() = default ;
    CreateModuleResponseBody& operator=(const CreateModuleResponseBody &) = default ;
    CreateModuleResponseBody& operator=(CreateModuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleId_ == nullptr
        && this->requestId_ == nullptr; };
    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline string getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
    inline CreateModuleResponseBody& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateModuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> moduleId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
