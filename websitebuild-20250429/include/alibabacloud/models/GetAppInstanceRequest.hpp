// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
    };
    GetAppInstanceRequest() = default ;
    GetAppInstanceRequest(const GetAppInstanceRequest &) = default ;
    GetAppInstanceRequest(GetAppInstanceRequest &&) = default ;
    GetAppInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInstanceRequest() = default ;
    GetAppInstanceRequest& operator=(const GetAppInstanceRequest &) = default ;
    GetAppInstanceRequest& operator=(GetAppInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetAppInstanceRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
