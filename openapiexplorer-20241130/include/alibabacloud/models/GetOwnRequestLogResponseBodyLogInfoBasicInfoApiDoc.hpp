// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOWNREQUESTLOGRESPONSEBODYLOGINFOBASICINFOAPIDOC_HPP_
#define ALIBABACLOUD_MODELS_GETOWNREQUESTLOGRESPONSEBODYLOGINFOBASICINFOAPIDOC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc& obj) { 
      DARABONBA_PTR_TO_JSON(alibabacloudSite, alibabacloudSite_);
      DARABONBA_PTR_TO_JSON(aliyunSite, aliyunSite_);
    };
    friend void from_json(const Darabonba::Json& j, GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc& obj) { 
      DARABONBA_PTR_FROM_JSON(alibabacloudSite, alibabacloudSite_);
      DARABONBA_PTR_FROM_JSON(aliyunSite, aliyunSite_);
    };
    GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc() = default ;
    GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc(const GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc &) = default ;
    GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc(GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc &&) = default ;
    GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc() = default ;
    GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc& operator=(const GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc &) = default ;
    GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc& operator=(GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc &&) = default ;
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
    inline GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc& setAlibabacloudSite(string alibabacloudSite) { DARABONBA_PTR_SET_VALUE(alibabacloudSite_, alibabacloudSite) };


    // aliyunSite Field Functions 
    bool hasAliyunSite() const { return this->aliyunSite_ != nullptr;};
    void deleteAliyunSite() { this->aliyunSite_ = nullptr;};
    inline string aliyunSite() const { DARABONBA_PTR_GET_DEFAULT(aliyunSite_, "") };
    inline GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc& setAliyunSite(string aliyunSite) { DARABONBA_PTR_SET_VALUE(aliyunSite_, aliyunSite) };


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
