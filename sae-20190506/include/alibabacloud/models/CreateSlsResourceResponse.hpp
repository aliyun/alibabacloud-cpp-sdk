// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLSRESOURCERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATESLSRESOURCERESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateSlsResourceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlsResourceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(logStore, logStore_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlsResourceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(logStore, logStore_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateSlsResourceResponse() = default ;
    CreateSlsResourceResponse(const CreateSlsResourceResponse &) = default ;
    CreateSlsResourceResponse(CreateSlsResourceResponse &&) = default ;
    CreateSlsResourceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlsResourceResponse() = default ;
    CreateSlsResourceResponse& operator=(const CreateSlsResourceResponse &) = default ;
    CreateSlsResourceResponse& operator=(CreateSlsResourceResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logStore_ != nullptr
        && this->project_ != nullptr && this->requestId_ != nullptr; };
    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline CreateSlsResourceResponse& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline CreateSlsResourceResponse& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSlsResourceResponse& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> logStore_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
