// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODULECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODULECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeModuleConfigResponseBodyModuleConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeModuleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModuleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ModuleConfigList, moduleConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModuleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ModuleConfigList, moduleConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeModuleConfigResponseBody() = default ;
    DescribeModuleConfigResponseBody(const DescribeModuleConfigResponseBody &) = default ;
    DescribeModuleConfigResponseBody(DescribeModuleConfigResponseBody &&) = default ;
    DescribeModuleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModuleConfigResponseBody() = default ;
    DescribeModuleConfigResponseBody& operator=(const DescribeModuleConfigResponseBody &) = default ;
    DescribeModuleConfigResponseBody& operator=(DescribeModuleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->moduleConfigList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeModuleConfigResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeModuleConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // moduleConfigList Field Functions 
    bool hasModuleConfigList() const { return this->moduleConfigList_ != nullptr;};
    void deleteModuleConfigList() { this->moduleConfigList_ = nullptr;};
    inline const vector<DescribeModuleConfigResponseBodyModuleConfigList> & moduleConfigList() const { DARABONBA_PTR_GET_CONST(moduleConfigList_, vector<DescribeModuleConfigResponseBodyModuleConfigList>) };
    inline vector<DescribeModuleConfigResponseBodyModuleConfigList> moduleConfigList() { DARABONBA_PTR_GET(moduleConfigList_, vector<DescribeModuleConfigResponseBodyModuleConfigList>) };
    inline DescribeModuleConfigResponseBody& setModuleConfigList(const vector<DescribeModuleConfigResponseBodyModuleConfigList> & moduleConfigList) { DARABONBA_PTR_SET_VALUE(moduleConfigList_, moduleConfigList) };
    inline DescribeModuleConfigResponseBody& setModuleConfigList(vector<DescribeModuleConfigResponseBodyModuleConfigList> && moduleConfigList) { DARABONBA_PTR_SET_RVALUE(moduleConfigList_, moduleConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModuleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeModuleConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The number of configurations for the module.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // An array that consists of the configurations of the module.
    std::shared_ptr<vector<DescribeModuleConfigResponseBodyModuleConfigList>> moduleConfigList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
