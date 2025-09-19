// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODULECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModuleConfigResponseBodyModuleConfigList.hpp>
#include <alibabacloud/models/GetModuleConfigResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetModuleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ModuleConfigList, moduleConfigList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ModuleConfigList, moduleConfigList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetModuleConfigResponseBody() = default ;
    GetModuleConfigResponseBody(const GetModuleConfigResponseBody &) = default ;
    GetModuleConfigResponseBody(GetModuleConfigResponseBody &&) = default ;
    GetModuleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleConfigResponseBody() = default ;
    GetModuleConfigResponseBody& operator=(const GetModuleConfigResponseBody &) = default ;
    GetModuleConfigResponseBody& operator=(GetModuleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpStatusCode_ != nullptr
        && this->moduleConfigList_ != nullptr && this->pageInfo_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetModuleConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // moduleConfigList Field Functions 
    bool hasModuleConfigList() const { return this->moduleConfigList_ != nullptr;};
    void deleteModuleConfigList() { this->moduleConfigList_ = nullptr;};
    inline const vector<GetModuleConfigResponseBodyModuleConfigList> & moduleConfigList() const { DARABONBA_PTR_GET_CONST(moduleConfigList_, vector<GetModuleConfigResponseBodyModuleConfigList>) };
    inline vector<GetModuleConfigResponseBodyModuleConfigList> moduleConfigList() { DARABONBA_PTR_GET(moduleConfigList_, vector<GetModuleConfigResponseBodyModuleConfigList>) };
    inline GetModuleConfigResponseBody& setModuleConfigList(const vector<GetModuleConfigResponseBodyModuleConfigList> & moduleConfigList) { DARABONBA_PTR_SET_VALUE(moduleConfigList_, moduleConfigList) };
    inline GetModuleConfigResponseBody& setModuleConfigList(vector<GetModuleConfigResponseBodyModuleConfigList> && moduleConfigList) { DARABONBA_PTR_SET_RVALUE(moduleConfigList_, moduleConfigList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const GetModuleConfigResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, GetModuleConfigResponseBodyPageInfo) };
    inline GetModuleConfigResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, GetModuleConfigResponseBodyPageInfo) };
    inline GetModuleConfigResponseBody& setPageInfo(const GetModuleConfigResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline GetModuleConfigResponseBody& setPageInfo(GetModuleConfigResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModuleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetModuleConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // An array that consists of the configurations of the module.
    std::shared_ptr<vector<GetModuleConfigResponseBodyModuleConfigList>> moduleConfigList_ = nullptr;
    // The pagination information.
    std::shared_ptr<GetModuleConfigResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
