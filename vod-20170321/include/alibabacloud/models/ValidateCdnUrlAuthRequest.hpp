// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATECDNURLAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATECDNURLAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ValidateCdnUrlAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateCdnUrlAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputUrl, inputUrl_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateCdnUrlAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputUrl, inputUrl_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ValidateCdnUrlAuthRequest() = default ;
    ValidateCdnUrlAuthRequest(const ValidateCdnUrlAuthRequest &) = default ;
    ValidateCdnUrlAuthRequest(ValidateCdnUrlAuthRequest &&) = default ;
    ValidateCdnUrlAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateCdnUrlAuthRequest() = default ;
    ValidateCdnUrlAuthRequest& operator=(const ValidateCdnUrlAuthRequest &) = default ;
    ValidateCdnUrlAuthRequest& operator=(ValidateCdnUrlAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputUrl_ != nullptr
        && this->ownerId_ != nullptr && this->resourceRealOwnerId_ != nullptr && this->type_ != nullptr; };
    // inputUrl Field Functions 
    bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
    void deleteInputUrl() { this->inputUrl_ = nullptr;};
    inline string inputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
    inline ValidateCdnUrlAuthRequest& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ValidateCdnUrlAuthRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceRealOwnerId Field Functions 
    bool hasResourceRealOwnerId() const { return this->resourceRealOwnerId_ != nullptr;};
    void deleteResourceRealOwnerId() { this->resourceRealOwnerId_ = nullptr;};
    inline int64_t resourceRealOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceRealOwnerId_, 0L) };
    inline ValidateCdnUrlAuthRequest& setResourceRealOwnerId(int64_t resourceRealOwnerId) { DARABONBA_PTR_SET_VALUE(resourceRealOwnerId_, resourceRealOwnerId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ValidateCdnUrlAuthRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> inputUrl_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<int64_t> resourceRealOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
