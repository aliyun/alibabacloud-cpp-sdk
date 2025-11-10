// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOBASICINFOAPIDOC_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOBASICINFOAPIDOC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetRequestLogResponseBodyLogInfoBasicInfoApiDoc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestLogResponseBodyLogInfoBasicInfoApiDoc& obj) { 
      DARABONBA_PTR_TO_JSON(alibabacloudSite, alibabacloudSite_);
      DARABONBA_PTR_TO_JSON(aliyunSite, aliyunSite_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestLogResponseBodyLogInfoBasicInfoApiDoc& obj) { 
      DARABONBA_PTR_FROM_JSON(alibabacloudSite, alibabacloudSite_);
      DARABONBA_PTR_FROM_JSON(aliyunSite, aliyunSite_);
    };
    GetRequestLogResponseBodyLogInfoBasicInfoApiDoc() = default ;
    GetRequestLogResponseBodyLogInfoBasicInfoApiDoc(const GetRequestLogResponseBodyLogInfoBasicInfoApiDoc &) = default ;
    GetRequestLogResponseBodyLogInfoBasicInfoApiDoc(GetRequestLogResponseBodyLogInfoBasicInfoApiDoc &&) = default ;
    GetRequestLogResponseBodyLogInfoBasicInfoApiDoc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestLogResponseBodyLogInfoBasicInfoApiDoc() = default ;
    GetRequestLogResponseBodyLogInfoBasicInfoApiDoc& operator=(const GetRequestLogResponseBodyLogInfoBasicInfoApiDoc &) = default ;
    GetRequestLogResponseBodyLogInfoBasicInfoApiDoc& operator=(GetRequestLogResponseBodyLogInfoBasicInfoApiDoc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alibabacloudSite_ == nullptr
        && return this->aliyunSite_ == nullptr; };
    // alibabacloudSite Field Functions 
    bool hasAlibabacloudSite() const { return this->alibabacloudSite_ != nullptr;};
    void deleteAlibabacloudSite() { this->alibabacloudSite_ = nullptr;};
    inline string alibabacloudSite() const { DARABONBA_PTR_GET_DEFAULT(alibabacloudSite_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfoApiDoc& setAlibabacloudSite(string alibabacloudSite) { DARABONBA_PTR_SET_VALUE(alibabacloudSite_, alibabacloudSite) };


    // aliyunSite Field Functions 
    bool hasAliyunSite() const { return this->aliyunSite_ != nullptr;};
    void deleteAliyunSite() { this->aliyunSite_ = nullptr;};
    inline string aliyunSite() const { DARABONBA_PTR_GET_DEFAULT(aliyunSite_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfoApiDoc& setAliyunSite(string aliyunSite) { DARABONBA_PTR_SET_VALUE(aliyunSite_, aliyunSite) };


  protected:
    // The documentation URL on the international site (alibabacloud.com).
    std::shared_ptr<string> alibabacloudSite_ = nullptr;
    // The documentation URL on the China site (aliyun.com).
    std::shared_ptr<string> aliyunSite_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
