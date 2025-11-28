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
        && return this->description_ == nullptr && return this->extensionId_ == nullptr && return this->extensionName_ == nullptr && return this->isInstallNeedRestart_ == nullptr && return this->isLatestVersion_ == nullptr
        && return this->latestVersion_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeExtensionResponseBody& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeExtensionResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extensionId Field Functions 
    bool hasExtensionId() const { return this->extensionId_ != nullptr;};
    void deleteExtensionId() { this->extensionId_ = nullptr;};
    inline string extensionId() const { DARABONBA_PTR_GET_DEFAULT(extensionId_, "") };
    inline DescribeExtensionResponseBody& setExtensionId(string extensionId) { DARABONBA_PTR_SET_VALUE(extensionId_, extensionId) };


    // extensionName Field Functions 
    bool hasExtensionName() const { return this->extensionName_ != nullptr;};
    void deleteExtensionName() { this->extensionName_ = nullptr;};
    inline string extensionName() const { DARABONBA_PTR_GET_DEFAULT(extensionName_, "") };
    inline DescribeExtensionResponseBody& setExtensionName(string extensionName) { DARABONBA_PTR_SET_VALUE(extensionName_, extensionName) };


    // isInstallNeedRestart Field Functions 
    bool hasIsInstallNeedRestart() const { return this->isInstallNeedRestart_ != nullptr;};
    void deleteIsInstallNeedRestart() { this->isInstallNeedRestart_ = nullptr;};
    inline bool isInstallNeedRestart() const { DARABONBA_PTR_GET_DEFAULT(isInstallNeedRestart_, false) };
    inline DescribeExtensionResponseBody& setIsInstallNeedRestart(bool isInstallNeedRestart) { DARABONBA_PTR_SET_VALUE(isInstallNeedRestart_, isInstallNeedRestart) };


    // isLatestVersion Field Functions 
    bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
    void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
    inline bool isLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, false) };
    inline DescribeExtensionResponseBody& setIsLatestVersion(bool isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline DescribeExtensionResponseBody& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExtensionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExtensionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> currentVersion_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> extensionId_ = nullptr;
    std::shared_ptr<string> extensionName_ = nullptr;
    std::shared_ptr<bool> isInstallNeedRestart_ = nullptr;
    std::shared_ptr<bool> isLatestVersion_ = nullptr;
    std::shared_ptr<string> latestVersion_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
