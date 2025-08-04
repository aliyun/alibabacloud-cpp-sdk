// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTRESPONSEBODYDESCRIBEPOLICYGROUPSCLIENTTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTRESPONSEBODYDESCRIBEPOLICYGROUPSCLIENTTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes() = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes(const DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes &) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes(DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes &&) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes() = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes& operator=(const DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes &) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes& operator=(DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes &&) = default ;
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
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroupsClientTypes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The client type.
    std::shared_ptr<string> clientType_ = nullptr;
    // Indicates whether a specific client type can connect to cloud computers.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
