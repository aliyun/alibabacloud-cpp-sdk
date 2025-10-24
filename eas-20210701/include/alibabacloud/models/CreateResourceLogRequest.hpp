// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCELOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCELOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateResourceLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    CreateResourceLogRequest() = default ;
    CreateResourceLogRequest(const CreateResourceLogRequest &) = default ;
    CreateResourceLogRequest(CreateResourceLogRequest &&) = default ;
    CreateResourceLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceLogRequest() = default ;
    CreateResourceLogRequest& operator=(const CreateResourceLogRequest &) = default ;
    CreateResourceLogRequest& operator=(CreateResourceLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logStore_ == nullptr
        && return this->projectName_ == nullptr; };
    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline CreateResourceLogRequest& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateResourceLogRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The Logstore of Log Service. For more information about how to query a Logstore, see [ListLogStores](https://help.aliyun.com/document_detail/426970.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> logStore_ = nullptr;
    // The Log Service project that is associated with the resource group. For more information about how to query the project, see [ListProject](https://help.aliyun.com/document_detail/74955.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
