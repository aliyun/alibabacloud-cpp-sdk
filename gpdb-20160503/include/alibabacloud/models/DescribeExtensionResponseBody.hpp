// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXTENSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXTENSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeExtensionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExtensionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExtensionId, extensionId_);
      DARABONBA_PTR_TO_JSON(ExtensionName, extensionName_);
      DARABONBA_PTR_TO_JSON(IsInstallNeedRestart, isInstallNeedRestart_);
      DARABONBA_PTR_TO_JSON(IsLatestVersion, isLatestVersion_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExtensionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExtensionId, extensionId_);
      DARABONBA_PTR_FROM_JSON(ExtensionName, extensionName_);
      DARABONBA_PTR_FROM_JSON(IsInstallNeedRestart, isInstallNeedRestart_);
      DARABONBA_PTR_FROM_JSON(IsLatestVersion, isLatestVersion_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeExtensionResponseBody() = default ;
    DescribeExtensionResponseBody(const DescribeExtensionResponseBody &) = default ;
    DescribeExtensionResponseBody(DescribeExtensionResponseBody &&) = default ;
    DescribeExtensionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExtensionResponseBody() = default ;
    DescribeExtensionResponseBody& operator=(const DescribeExtensionResponseBody &) = default ;
    DescribeExtensionResponseBody& operator=(DescribeExtensionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentVersion_ == nullptr
        && this->description_ == nullptr && this->extensionId_ == nullptr && this->extensionName_ == nullptr && this->isInstallNeedRestart_ == nullptr && this->isLatestVersion_ == nullptr
        && this->latestVersion_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeExtensionResponseBody& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeExtensionResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extensionId Field Functions 
    bool hasExtensionId() const { return this->extensionId_ != nullptr;};
    void deleteExtensionId() { this->extensionId_ = nullptr;};
    inline string getExtensionId() const { DARABONBA_PTR_GET_DEFAULT(extensionId_, "") };
    inline DescribeExtensionResponseBody& setExtensionId(string extensionId) { DARABONBA_PTR_SET_VALUE(extensionId_, extensionId) };


    // extensionName Field Functions 
    bool hasExtensionName() const { return this->extensionName_ != nullptr;};
    void deleteExtensionName() { this->extensionName_ = nullptr;};
    inline string getExtensionName() const { DARABONBA_PTR_GET_DEFAULT(extensionName_, "") };
    inline DescribeExtensionResponseBody& setExtensionName(string extensionName) { DARABONBA_PTR_SET_VALUE(extensionName_, extensionName) };


    // isInstallNeedRestart Field Functions 
    bool hasIsInstallNeedRestart() const { return this->isInstallNeedRestart_ != nullptr;};
    void deleteIsInstallNeedRestart() { this->isInstallNeedRestart_ = nullptr;};
    inline bool getIsInstallNeedRestart() const { DARABONBA_PTR_GET_DEFAULT(isInstallNeedRestart_, false) };
    inline DescribeExtensionResponseBody& setIsInstallNeedRestart(bool isInstallNeedRestart) { DARABONBA_PTR_SET_VALUE(isInstallNeedRestart_, isInstallNeedRestart) };


    // isLatestVersion Field Functions 
    bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
    void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
    inline bool getIsLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, false) };
    inline DescribeExtensionResponseBody& setIsLatestVersion(bool isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline DescribeExtensionResponseBody& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExtensionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExtensionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The current version.
    shared_ptr<string> currentVersion_ {};
    // The description of the extension.
    shared_ptr<string> description_ {};
    // The extension ID.
    shared_ptr<string> extensionId_ {};
    // The extension name.
    shared_ptr<string> extensionName_ {};
    // Indicates whether an instance restart is required after you install the extension.
    shared_ptr<bool> isInstallNeedRestart_ {};
    // Whether it is the latest version extension.
    shared_ptr<bool> isLatestVersion_ {};
    // The latest version.
    shared_ptr<string> latestVersion_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The status of the extension.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
