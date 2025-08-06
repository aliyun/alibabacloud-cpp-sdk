// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSDKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSDKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetSdkListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSdkListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Product, product_);
    };
    friend void from_json(const Darabonba::Json& j, GetSdkListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
    };
    GetSdkListRequest() = default ;
    GetSdkListRequest(const GetSdkListRequest &) = default ;
    GetSdkListRequest(GetSdkListRequest &&) = default ;
    GetSdkListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSdkListRequest() = default ;
    GetSdkListRequest& operator=(const GetSdkListRequest &) = default ;
    GetSdkListRequest& operator=(GetSdkListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr
        && this->product_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline int32_t group() const { DARABONBA_PTR_GET_DEFAULT(group_, 0) };
    inline GetSdkListRequest& setGroup(int32_t group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetSdkListRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    std::shared_ptr<int32_t> group_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
