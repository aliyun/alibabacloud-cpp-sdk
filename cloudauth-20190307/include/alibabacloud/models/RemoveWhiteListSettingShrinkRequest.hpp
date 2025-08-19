// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEWHITELISTSETTINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEWHITELISTSETTINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class RemoveWhiteListSettingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveWhiteListSettingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveWhiteListSettingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
    };
    RemoveWhiteListSettingShrinkRequest() = default ;
    RemoveWhiteListSettingShrinkRequest(const RemoveWhiteListSettingShrinkRequest &) = default ;
    RemoveWhiteListSettingShrinkRequest(RemoveWhiteListSettingShrinkRequest &&) = default ;
    RemoveWhiteListSettingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveWhiteListSettingShrinkRequest() = default ;
    RemoveWhiteListSettingShrinkRequest& operator=(const RemoveWhiteListSettingShrinkRequest &) = default ;
    RemoveWhiteListSettingShrinkRequest& operator=(RemoveWhiteListSettingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->idsShrink_ != nullptr
        && this->serviceCode_ != nullptr; };
    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string idsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline RemoveWhiteListSettingShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline RemoveWhiteListSettingShrinkRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


  protected:
    // IDs of the whitelist to be deleted in bulk.
    std::shared_ptr<string> idsShrink_ = nullptr;
    // ServiceCode for the real person cloud product, only value: **antcloudauth**.
    std::shared_ptr<string> serviceCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
