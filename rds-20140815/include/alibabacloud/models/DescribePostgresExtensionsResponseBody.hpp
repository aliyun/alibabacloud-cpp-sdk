// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTGRESEXTENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTGRESEXTENSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePostgresExtensionsResponseBodyInstalledExtensions.hpp>
#include <alibabacloud/models/DescribePostgresExtensionsResponseBodyUninstalledExtensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePostgresExtensionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostgresExtensionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstalledExtensions, installedExtensions_);
      DARABONBA_ANY_TO_JSON(Overview, overview_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UninstalledExtensions, uninstalledExtensions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostgresExtensionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstalledExtensions, installedExtensions_);
      DARABONBA_ANY_FROM_JSON(Overview, overview_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UninstalledExtensions, uninstalledExtensions_);
    };
    DescribePostgresExtensionsResponseBody() = default ;
    DescribePostgresExtensionsResponseBody(const DescribePostgresExtensionsResponseBody &) = default ;
    DescribePostgresExtensionsResponseBody(DescribePostgresExtensionsResponseBody &&) = default ;
    DescribePostgresExtensionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostgresExtensionsResponseBody() = default ;
    DescribePostgresExtensionsResponseBody& operator=(const DescribePostgresExtensionsResponseBody &) = default ;
    DescribePostgresExtensionsResponseBody& operator=(DescribePostgresExtensionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->installedExtensions_ == nullptr
        && return this->overview_ == nullptr && return this->requestId_ == nullptr && return this->uninstalledExtensions_ == nullptr; };
    // installedExtensions Field Functions 
    bool hasInstalledExtensions() const { return this->installedExtensions_ != nullptr;};
    void deleteInstalledExtensions() { this->installedExtensions_ = nullptr;};
    inline const vector<DescribePostgresExtensionsResponseBodyInstalledExtensions> & installedExtensions() const { DARABONBA_PTR_GET_CONST(installedExtensions_, vector<DescribePostgresExtensionsResponseBodyInstalledExtensions>) };
    inline vector<DescribePostgresExtensionsResponseBodyInstalledExtensions> installedExtensions() { DARABONBA_PTR_GET(installedExtensions_, vector<DescribePostgresExtensionsResponseBodyInstalledExtensions>) };
    inline DescribePostgresExtensionsResponseBody& setInstalledExtensions(const vector<DescribePostgresExtensionsResponseBodyInstalledExtensions> & installedExtensions) { DARABONBA_PTR_SET_VALUE(installedExtensions_, installedExtensions) };
    inline DescribePostgresExtensionsResponseBody& setInstalledExtensions(vector<DescribePostgresExtensionsResponseBodyInstalledExtensions> && installedExtensions) { DARABONBA_PTR_SET_RVALUE(installedExtensions_, installedExtensions) };


    // overview Field Functions 
    bool hasOverview() const { return this->overview_ != nullptr;};
    void deleteOverview() { this->overview_ = nullptr;};
    inline     const Darabonba::Json & overview() const { DARABONBA_GET(overview_) };
    Darabonba::Json & overview() { DARABONBA_GET(overview_) };
    inline DescribePostgresExtensionsResponseBody& setOverview(const Darabonba::Json & overview) { DARABONBA_SET_VALUE(overview_, overview) };
    inline DescribePostgresExtensionsResponseBody& setOverview(Darabonba::Json & overview) { DARABONBA_SET_RVALUE(overview_, overview) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePostgresExtensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uninstalledExtensions Field Functions 
    bool hasUninstalledExtensions() const { return this->uninstalledExtensions_ != nullptr;};
    void deleteUninstalledExtensions() { this->uninstalledExtensions_ = nullptr;};
    inline const vector<DescribePostgresExtensionsResponseBodyUninstalledExtensions> & uninstalledExtensions() const { DARABONBA_PTR_GET_CONST(uninstalledExtensions_, vector<DescribePostgresExtensionsResponseBodyUninstalledExtensions>) };
    inline vector<DescribePostgresExtensionsResponseBodyUninstalledExtensions> uninstalledExtensions() { DARABONBA_PTR_GET(uninstalledExtensions_, vector<DescribePostgresExtensionsResponseBodyUninstalledExtensions>) };
    inline DescribePostgresExtensionsResponseBody& setUninstalledExtensions(const vector<DescribePostgresExtensionsResponseBodyUninstalledExtensions> & uninstalledExtensions) { DARABONBA_PTR_SET_VALUE(uninstalledExtensions_, uninstalledExtensions) };
    inline DescribePostgresExtensionsResponseBody& setUninstalledExtensions(vector<DescribePostgresExtensionsResponseBodyUninstalledExtensions> && uninstalledExtensions) { DARABONBA_PTR_SET_RVALUE(uninstalledExtensions_, uninstalledExtensions) };


  protected:
    // The list of extensions that are installed on the specified database.
    std::shared_ptr<vector<DescribePostgresExtensionsResponseBodyInstalledExtensions>> installedExtensions_ = nullptr;
    // The overview of the extension.
    Darabonba::Json overview_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of extensions that are not installed on the specified database.
    std::shared_ptr<vector<DescribePostgresExtensionsResponseBodyUninstalledExtensions>> uninstalledExtensions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
