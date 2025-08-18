// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITECUSTOMLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSITECUSTOMLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSiteCustomLogResponseBodyLogCustomField.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSiteCustomLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteCustomLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(IsExist, isExist_);
      DARABONBA_PTR_TO_JSON(LogCustomField, logCustomField_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteCustomLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(IsExist, isExist_);
      DARABONBA_PTR_FROM_JSON(LogCustomField, logCustomField_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetSiteCustomLogResponseBody() = default ;
    GetSiteCustomLogResponseBody(const GetSiteCustomLogResponseBody &) = default ;
    GetSiteCustomLogResponseBody(GetSiteCustomLogResponseBody &&) = default ;
    GetSiteCustomLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteCustomLogResponseBody() = default ;
    GetSiteCustomLogResponseBody& operator=(const GetSiteCustomLogResponseBody &) = default ;
    GetSiteCustomLogResponseBody& operator=(GetSiteCustomLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->isExist_ != nullptr && this->logCustomField_ != nullptr && this->requestId_ != nullptr && this->siteId_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetSiteCustomLogResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // isExist Field Functions 
    bool hasIsExist() const { return this->isExist_ != nullptr;};
    void deleteIsExist() { this->isExist_ = nullptr;};
    inline bool isExist() const { DARABONBA_PTR_GET_DEFAULT(isExist_, false) };
    inline GetSiteCustomLogResponseBody& setIsExist(bool isExist) { DARABONBA_PTR_SET_VALUE(isExist_, isExist) };


    // logCustomField Field Functions 
    bool hasLogCustomField() const { return this->logCustomField_ != nullptr;};
    void deleteLogCustomField() { this->logCustomField_ = nullptr;};
    inline const GetSiteCustomLogResponseBodyLogCustomField & logCustomField() const { DARABONBA_PTR_GET_CONST(logCustomField_, GetSiteCustomLogResponseBodyLogCustomField) };
    inline GetSiteCustomLogResponseBodyLogCustomField logCustomField() { DARABONBA_PTR_GET(logCustomField_, GetSiteCustomLogResponseBodyLogCustomField) };
    inline GetSiteCustomLogResponseBody& setLogCustomField(const GetSiteCustomLogResponseBodyLogCustomField & logCustomField) { DARABONBA_PTR_SET_VALUE(logCustomField_, logCustomField) };
    inline GetSiteCustomLogResponseBody& setLogCustomField(GetSiteCustomLogResponseBodyLogCustomField && logCustomField) { DARABONBA_PTR_SET_RVALUE(logCustomField_, logCustomField) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSiteCustomLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetSiteCustomLogResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The ID of the custom log field configuration.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Indicates whether the custom configuration exists.
    std::shared_ptr<bool> isExist_ = nullptr;
    // The custom fields.
    std::shared_ptr<GetSiteCustomLogResponseBodyLogCustomField> logCustomField_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
