// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDRESPONSEBODYACCESSKEYLASTUSED_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDRESPONSEBODYACCESSKEYLASTUSED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed& obj) { 
      DARABONBA_PTR_TO_JSON(LastUsedDate, lastUsedDate_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed& obj) { 
      DARABONBA_PTR_FROM_JSON(LastUsedDate, lastUsedDate_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed() = default ;
    GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed(const GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed &) = default ;
    GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed(GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed &&) = default ;
    GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed() = default ;
    GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed& operator=(const GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed &) = default ;
    GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed& operator=(GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lastUsedDate_ != nullptr
        && this->serviceName_ != nullptr; };
    // lastUsedDate Field Functions 
    bool hasLastUsedDate() const { return this->lastUsedDate_ != nullptr;};
    void deleteLastUsedDate() { this->lastUsedDate_ = nullptr;};
    inline string lastUsedDate() const { DARABONBA_PTR_GET_DEFAULT(lastUsedDate_, "") };
    inline GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed& setLastUsedDate(string lastUsedDate) { DARABONBA_PTR_SET_VALUE(lastUsedDate_, lastUsedDate) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The time when the AccessKey pair was used for the last time.
    std::shared_ptr<string> lastUsedDate_ = nullptr;
    // The Alibaba Cloud service that was last accessed by using the AccessKey pair.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
