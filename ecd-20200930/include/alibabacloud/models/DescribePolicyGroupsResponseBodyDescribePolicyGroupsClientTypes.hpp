// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPSCLIENTTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPSCLIENTTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes(const DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes(DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes &&) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes& operator=(const DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes& operator=(DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientType_ != nullptr
        && this->status_ != nullptr; };
    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsClientTypes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The client type.
    // 
    // Valid values:
    // 
    // *   html5: web client
    // *   android: Android client
    // *   windows: Windows client
    // *   ios: iOS client
    // *   macos: macOS client
    std::shared_ptr<string> clientType_ = nullptr;
    // Indicates whether end users are allowed to use a specific type of the client to connect to cloud computers.
    // 
    // Valid values:
    // 
    // *   OFF
    // *   ON
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
