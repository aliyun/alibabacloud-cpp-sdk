// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Directories, directories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Directories, directories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDirectoriesResponseBody() = default ;
    DescribeDirectoriesResponseBody(const DescribeDirectoriesResponseBody &) = default ;
    DescribeDirectoriesResponseBody(DescribeDirectoriesResponseBody &&) = default ;
    DescribeDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirectoriesResponseBody() = default ;
    DescribeDirectoriesResponseBody& operator=(const DescribeDirectoriesResponseBody &) = default ;
    DescribeDirectoriesResponseBody& operator=(DescribeDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Directories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Directories& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopAccessType, desktopAccessType_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
        DARABONBA_PTR_TO_JSON(SsoServiceUrl, ssoServiceUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Directories& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopAccessType, desktopAccessType_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
        DARABONBA_PTR_FROM_JSON(SsoServiceUrl, ssoServiceUrl_);
      };
      Directories() = default ;
      Directories(const Directories &) = default ;
      Directories(Directories &&) = default ;
      Directories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Directories() = default ;
      Directories& operator=(const Directories &) = default ;
      Directories& operator=(Directories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desktopAccessType_ == nullptr
        && this->directoryId_ == nullptr && this->directoryType_ == nullptr && this->providerId_ == nullptr && this->ssoServiceUrl_ == nullptr; };
      // desktopAccessType Field Functions 
      bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
      void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
      inline string getDesktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
      inline Directories& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Directories& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // directoryType Field Functions 
      bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
      void deleteDirectoryType() { this->directoryType_ = nullptr;};
      inline string getDirectoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
      inline Directories& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


      // providerId Field Functions 
      bool hasProviderId() const { return this->providerId_ != nullptr;};
      void deleteProviderId() { this->providerId_ = nullptr;};
      inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
      inline Directories& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


      // ssoServiceUrl Field Functions 
      bool hasSsoServiceUrl() const { return this->ssoServiceUrl_ != nullptr;};
      void deleteSsoServiceUrl() { this->ssoServiceUrl_ = nullptr;};
      inline string getSsoServiceUrl() const { DARABONBA_PTR_GET_DEFAULT(ssoServiceUrl_, "") };
      inline Directories& setSsoServiceUrl(string ssoServiceUrl) { DARABONBA_PTR_SET_VALUE(ssoServiceUrl_, ssoServiceUrl) };


    protected:
      // The connection method.
      // 
      // Valid values:
      // 
      // *   VPC: End users connect to cloud computers over an enterprise virtual private cloud (VPC).
      // *   INTERNET: End users connect to cloud computers over the Internet.
      // *   ANY: End users connect to cloud computers over the Internet or an enterprise VPC.
      shared_ptr<string> desktopAccessType_ {};
      // The directory ID.
      shared_ptr<string> directoryId_ {};
      // The directory type.
      shared_ptr<string> directoryType_ {};
      // The provider ID.
      shared_ptr<string> providerId_ {};
      // The URL of the SSO service.
      shared_ptr<string> ssoServiceUrl_ {};
    };

    virtual bool empty() const override { return this->directories_ == nullptr
        && this->requestId_ == nullptr; };
    // directories Field Functions 
    bool hasDirectories() const { return this->directories_ != nullptr;};
    void deleteDirectories() { this->directories_ = nullptr;};
    inline const vector<DescribeDirectoriesResponseBody::Directories> & getDirectories() const { DARABONBA_PTR_GET_CONST(directories_, vector<DescribeDirectoriesResponseBody::Directories>) };
    inline vector<DescribeDirectoriesResponseBody::Directories> getDirectories() { DARABONBA_PTR_GET(directories_, vector<DescribeDirectoriesResponseBody::Directories>) };
    inline DescribeDirectoriesResponseBody& setDirectories(const vector<DescribeDirectoriesResponseBody::Directories> & directories) { DARABONBA_PTR_SET_VALUE(directories_, directories) };
    inline DescribeDirectoriesResponseBody& setDirectories(vector<DescribeDirectoriesResponseBody::Directories> && directories) { DARABONBA_PTR_SET_RVALUE(directories_, directories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The directories.
    shared_ptr<vector<DescribeDirectoriesResponseBody::Directories>> directories_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
