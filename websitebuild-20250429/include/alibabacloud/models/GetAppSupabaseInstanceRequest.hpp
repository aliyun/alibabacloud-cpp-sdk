// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPSUPABASEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPSUPABASEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppSupabaseInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppSupabaseInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppSupabaseInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
    };
    GetAppSupabaseInstanceRequest() = default ;
    GetAppSupabaseInstanceRequest(const GetAppSupabaseInstanceRequest &) = default ;
    GetAppSupabaseInstanceRequest(GetAppSupabaseInstanceRequest &&) = default ;
    GetAppSupabaseInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppSupabaseInstanceRequest() = default ;
    GetAppSupabaseInstanceRequest& operator=(const GetAppSupabaseInstanceRequest &) = default ;
    GetAppSupabaseInstanceRequest& operator=(GetAppSupabaseInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetAppSupabaseInstanceRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


  protected:
    // business ID
    shared_ptr<string> bizId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
