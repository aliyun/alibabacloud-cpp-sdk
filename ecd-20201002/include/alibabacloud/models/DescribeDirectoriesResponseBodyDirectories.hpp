// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODYDIRECTORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODYDIRECTORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeDirectoriesResponseBodyDirectories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirectoriesResponseBodyDirectories& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
      DARABONBA_PTR_TO_JSON(SsoServiceUrl, ssoServiceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirectoriesResponseBodyDirectories& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
      DARABONBA_PTR_FROM_JSON(SsoServiceUrl, ssoServiceUrl_);
    };
    DescribeDirectoriesResponseBodyDirectories() = default ;
    DescribeDirectoriesResponseBodyDirectories(const DescribeDirectoriesResponseBodyDirectories &) = default ;
    DescribeDirectoriesResponseBodyDirectories(DescribeDirectoriesResponseBodyDirectories &&) = default ;
    DescribeDirectoriesResponseBodyDirectories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirectoriesResponseBodyDirectories() = default ;
    DescribeDirectoriesResponseBodyDirectories& operator=(const DescribeDirectoriesResponseBodyDirectories &) = default ;
    DescribeDirectoriesResponseBodyDirectories& operator=(DescribeDirectoriesResponseBodyDirectories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopAccessType_ != nullptr
        && this->directoryId_ != nullptr && this->directoryType_ != nullptr && this->providerId_ != nullptr && this->ssoServiceUrl_ != nullptr; };
    // desktopAccessType Field Functions 
    bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
    void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
    inline string desktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // directoryType Field Functions 
    bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
    void deleteDirectoryType() { this->directoryType_ = nullptr;};
    inline string directoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string providerId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


    // ssoServiceUrl Field Functions 
    bool hasSsoServiceUrl() const { return this->ssoServiceUrl_ != nullptr;};
    void deleteSsoServiceUrl() { this->ssoServiceUrl_ = nullptr;};
    inline string ssoServiceUrl() const { DARABONBA_PTR_GET_DEFAULT(ssoServiceUrl_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setSsoServiceUrl(string ssoServiceUrl) { DARABONBA_PTR_SET_VALUE(ssoServiceUrl_, ssoServiceUrl) };


  protected:
    // The connection method.
    // 
    // Valid values:
    // 
    // *   VPC: End users connect to cloud computers over an enterprise virtual private cloud (VPC).
    // *   INTERNET: End users connect to cloud computers over the Internet.
    // *   ANY: End users connect to cloud computers over the Internet or an enterprise VPC.
    std::shared_ptr<string> desktopAccessType_ = nullptr;
    // The directory ID.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The directory type.
    std::shared_ptr<string> directoryType_ = nullptr;
    // The provider ID.
    std::shared_ptr<string> providerId_ = nullptr;
    // The URL of the SSO service.
    std::shared_ptr<string> ssoServiceUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
