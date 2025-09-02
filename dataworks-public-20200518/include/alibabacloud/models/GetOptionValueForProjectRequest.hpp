// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPTIONVALUEFORPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPTIONVALUEFORPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetOptionValueForProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOptionValueForProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOptionValueForProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetOptionValueForProjectRequest() = default ;
    GetOptionValueForProjectRequest(const GetOptionValueForProjectRequest &) = default ;
    GetOptionValueForProjectRequest(GetOptionValueForProjectRequest &&) = default ;
    GetOptionValueForProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOptionValueForProjectRequest() = default ;
    GetOptionValueForProjectRequest& operator=(const GetOptionValueForProjectRequest &) = default ;
    GetOptionValueForProjectRequest& operator=(GetOptionValueForProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extensionCode_ != nullptr
        && this->projectId_ != nullptr; };
    // extensionCode Field Functions 
    bool hasExtensionCode() const { return this->extensionCode_ != nullptr;};
    void deleteExtensionCode() { this->extensionCode_ = nullptr;};
    inline string extensionCode() const { DARABONBA_PTR_GET_DEFAULT(extensionCode_, "") };
    inline GetOptionValueForProjectRequest& setExtensionCode(string extensionCode) { DARABONBA_PTR_SET_VALUE(extensionCode_, extensionCode) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetOptionValueForProjectRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The unique code of the extension.
    std::shared_ptr<string> extensionCode_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
