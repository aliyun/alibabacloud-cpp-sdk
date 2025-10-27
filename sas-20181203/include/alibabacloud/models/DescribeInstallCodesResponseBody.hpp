// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTALLCODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTALLCODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstallCodesResponseBodyInstallCodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstallCodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstallCodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstallCodes, installCodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstallCodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstallCodes, installCodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstallCodesResponseBody() = default ;
    DescribeInstallCodesResponseBody(const DescribeInstallCodesResponseBody &) = default ;
    DescribeInstallCodesResponseBody(DescribeInstallCodesResponseBody &&) = default ;
    DescribeInstallCodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstallCodesResponseBody() = default ;
    DescribeInstallCodesResponseBody& operator=(const DescribeInstallCodesResponseBody &) = default ;
    DescribeInstallCodesResponseBody& operator=(DescribeInstallCodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->installCodes_ == nullptr
        && return this->requestId_ == nullptr; };
    // installCodes Field Functions 
    bool hasInstallCodes() const { return this->installCodes_ != nullptr;};
    void deleteInstallCodes() { this->installCodes_ = nullptr;};
    inline const vector<DescribeInstallCodesResponseBodyInstallCodes> & installCodes() const { DARABONBA_PTR_GET_CONST(installCodes_, vector<DescribeInstallCodesResponseBodyInstallCodes>) };
    inline vector<DescribeInstallCodesResponseBodyInstallCodes> installCodes() { DARABONBA_PTR_GET(installCodes_, vector<DescribeInstallCodesResponseBodyInstallCodes>) };
    inline DescribeInstallCodesResponseBody& setInstallCodes(const vector<DescribeInstallCodesResponseBodyInstallCodes> & installCodes) { DARABONBA_PTR_SET_VALUE(installCodes_, installCodes) };
    inline DescribeInstallCodesResponseBody& setInstallCodes(vector<DescribeInstallCodesResponseBodyInstallCodes> && installCodes) { DARABONBA_PTR_SET_RVALUE(installCodes_, installCodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstallCodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the installation commands.
    std::shared_ptr<vector<DescribeInstallCodesResponseBodyInstallCodes>> installCodes_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
