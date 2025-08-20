// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetChainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChainId, chainId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainId, chainId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetChainRequest() = default ;
    GetChainRequest(const GetChainRequest &) = default ;
    GetChainRequest(GetChainRequest &&) = default ;
    GetChainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChainRequest() = default ;
    GetChainRequest& operator=(const GetChainRequest &) = default ;
    GetChainRequest& operator=(GetChainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chainId_ != nullptr
        && this->instanceId_ != nullptr; };
    // chainId Field Functions 
    bool hasChainId() const { return this->chainId_ != nullptr;};
    void deleteChainId() { this->chainId_ = nullptr;};
    inline string chainId() const { DARABONBA_PTR_GET_DEFAULT(chainId_, "") };
    inline GetChainRequest& setChainId(string chainId) { DARABONBA_PTR_SET_VALUE(chainId_, chainId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetChainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> chainId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
