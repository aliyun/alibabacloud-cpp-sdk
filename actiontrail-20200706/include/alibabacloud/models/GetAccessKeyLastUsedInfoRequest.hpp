// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
    };
    GetAccessKeyLastUsedInfoRequest() = default ;
    GetAccessKeyLastUsedInfoRequest(const GetAccessKeyLastUsedInfoRequest &) = default ;
    GetAccessKeyLastUsedInfoRequest(GetAccessKeyLastUsedInfoRequest &&) = default ;
    GetAccessKeyLastUsedInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedInfoRequest() = default ;
    GetAccessKeyLastUsedInfoRequest& operator=(const GetAccessKeyLastUsedInfoRequest &) = default ;
    GetAccessKeyLastUsedInfoRequest& operator=(GetAccessKeyLastUsedInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKey_ != nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline GetAccessKeyLastUsedInfoRequest& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


  protected:
    // The AccessKey ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
