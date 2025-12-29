// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLSINDEXRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATESLSINDEXRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateSlsIndexResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlsIndexResponse& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(logStore, logStore_);
      DARABONBA_PTR_TO_JSON(project, project_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlsIndexResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(logStore, logStore_);
      DARABONBA_PTR_FROM_JSON(project, project_);
    };
    CreateSlsIndexResponse() = default ;
    CreateSlsIndexResponse(const CreateSlsIndexResponse &) = default ;
    CreateSlsIndexResponse(CreateSlsIndexResponse &&) = default ;
    CreateSlsIndexResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlsIndexResponse() = default ;
    CreateSlsIndexResponse& operator=(const CreateSlsIndexResponse &) = default ;
    CreateSlsIndexResponse& operator=(CreateSlsIndexResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->logStore_ == nullptr && this->project_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSlsIndexResponse& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline CreateSlsIndexResponse& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline CreateSlsIndexResponse& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> logStore_ {};
    shared_ptr<string> project_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
