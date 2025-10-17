// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXTENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXTENSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExtensionsResponseBodyInstalledExtensions.hpp>
#include <alibabacloud/models/DescribeExtensionsResponseBodyUninstalledExtensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeExtensionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExtensionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstalledExtensions, installedExtensions_);
      DARABONBA_PTR_TO_JSON(Overview, overview_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UninstalledExtensions, uninstalledExtensions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExtensionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstalledExtensions, installedExtensions_);
      DARABONBA_PTR_FROM_JSON(Overview, overview_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UninstalledExtensions, uninstalledExtensions_);
    };
    DescribeExtensionsResponseBody() = default ;
    DescribeExtensionsResponseBody(const DescribeExtensionsResponseBody &) = default ;
    DescribeExtensionsResponseBody(DescribeExtensionsResponseBody &&) = default ;
    DescribeExtensionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExtensionsResponseBody() = default ;
    DescribeExtensionsResponseBody& operator=(const DescribeExtensionsResponseBody &) = default ;
    DescribeExtensionsResponseBody& operator=(DescribeExtensionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->installedExtensions_ == nullptr
        && return this->overview_ == nullptr && return this->requestId_ == nullptr && return this->uninstalledExtensions_ == nullptr; };
    // installedExtensions Field Functions 
    bool hasInstalledExtensions() const { return this->installedExtensions_ != nullptr;};
    void deleteInstalledExtensions() { this->installedExtensions_ = nullptr;};
    inline const vector<DescribeExtensionsResponseBodyInstalledExtensions> & installedExtensions() const { DARABONBA_PTR_GET_CONST(installedExtensions_, vector<DescribeExtensionsResponseBodyInstalledExtensions>) };
    inline vector<DescribeExtensionsResponseBodyInstalledExtensions> installedExtensions() { DARABONBA_PTR_GET(installedExtensions_, vector<DescribeExtensionsResponseBodyInstalledExtensions>) };
    inline DescribeExtensionsResponseBody& setInstalledExtensions(const vector<DescribeExtensionsResponseBodyInstalledExtensions> & installedExtensions) { DARABONBA_PTR_SET_VALUE(installedExtensions_, installedExtensions) };
    inline DescribeExtensionsResponseBody& setInstalledExtensions(vector<DescribeExtensionsResponseBodyInstalledExtensions> && installedExtensions) { DARABONBA_PTR_SET_RVALUE(installedExtensions_, installedExtensions) };


    // overview Field Functions 
    bool hasOverview() const { return this->overview_ != nullptr;};
    void deleteOverview() { this->overview_ = nullptr;};
    inline string overview() const { DARABONBA_PTR_GET_DEFAULT(overview_, "") };
    inline DescribeExtensionsResponseBody& setOverview(string overview) { DARABONBA_PTR_SET_VALUE(overview_, overview) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExtensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uninstalledExtensions Field Functions 
    bool hasUninstalledExtensions() const { return this->uninstalledExtensions_ != nullptr;};
    void deleteUninstalledExtensions() { this->uninstalledExtensions_ = nullptr;};
    inline const vector<DescribeExtensionsResponseBodyUninstalledExtensions> & uninstalledExtensions() const { DARABONBA_PTR_GET_CONST(uninstalledExtensions_, vector<DescribeExtensionsResponseBodyUninstalledExtensions>) };
    inline vector<DescribeExtensionsResponseBodyUninstalledExtensions> uninstalledExtensions() { DARABONBA_PTR_GET(uninstalledExtensions_, vector<DescribeExtensionsResponseBodyUninstalledExtensions>) };
    inline DescribeExtensionsResponseBody& setUninstalledExtensions(const vector<DescribeExtensionsResponseBodyUninstalledExtensions> & uninstalledExtensions) { DARABONBA_PTR_SET_VALUE(uninstalledExtensions_, uninstalledExtensions) };
    inline DescribeExtensionsResponseBody& setUninstalledExtensions(vector<DescribeExtensionsResponseBodyUninstalledExtensions> && uninstalledExtensions) { DARABONBA_PTR_SET_RVALUE(uninstalledExtensions_, uninstalledExtensions) };


  protected:
    std::shared_ptr<vector<DescribeExtensionsResponseBodyInstalledExtensions>> installedExtensions_ = nullptr;
    std::shared_ptr<string> overview_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeExtensionsResponseBodyUninstalledExtensions>> uninstalledExtensions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
