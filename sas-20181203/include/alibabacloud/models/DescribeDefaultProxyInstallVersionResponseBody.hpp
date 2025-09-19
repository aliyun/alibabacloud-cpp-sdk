// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFAULTPROXYINSTALLVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFAULTPROXYINSTALLVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDefaultProxyInstallVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefaultProxyInstallVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstallVersion, installVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefaultProxyInstallVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstallVersion, installVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDefaultProxyInstallVersionResponseBody() = default ;
    DescribeDefaultProxyInstallVersionResponseBody(const DescribeDefaultProxyInstallVersionResponseBody &) = default ;
    DescribeDefaultProxyInstallVersionResponseBody(DescribeDefaultProxyInstallVersionResponseBody &&) = default ;
    DescribeDefaultProxyInstallVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefaultProxyInstallVersionResponseBody() = default ;
    DescribeDefaultProxyInstallVersionResponseBody& operator=(const DescribeDefaultProxyInstallVersionResponseBody &) = default ;
    DescribeDefaultProxyInstallVersionResponseBody& operator=(DescribeDefaultProxyInstallVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->installVersion_ != nullptr
        && this->requestId_ != nullptr; };
    // installVersion Field Functions 
    bool hasInstallVersion() const { return this->installVersion_ != nullptr;};
    void deleteInstallVersion() { this->installVersion_ = nullptr;};
    inline string installVersion() const { DARABONBA_PTR_GET_DEFAULT(installVersion_, "") };
    inline DescribeDefaultProxyInstallVersionResponseBody& setInstallVersion(string installVersion) { DARABONBA_PTR_SET_VALUE(installVersion_, installVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefaultProxyInstallVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The default installation version.
    std::shared_ptr<string> installVersion_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
