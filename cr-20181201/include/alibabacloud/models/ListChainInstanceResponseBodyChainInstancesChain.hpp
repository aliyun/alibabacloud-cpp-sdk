// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHAININSTANCERESPONSEBODYCHAININSTANCESCHAIN_HPP_
#define ALIBABACLOUD_MODELS_LISTCHAININSTANCERESPONSEBODYCHAININSTANCESCHAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListChainInstanceResponseBodyChainInstancesChain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChainInstanceResponseBodyChainInstancesChain& obj) { 
      DARABONBA_PTR_TO_JSON(ChainId, chainId_);
      DARABONBA_PTR_TO_JSON(ChainName, chainName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListChainInstanceResponseBodyChainInstancesChain& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainId, chainId_);
      DARABONBA_PTR_FROM_JSON(ChainName, chainName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListChainInstanceResponseBodyChainInstancesChain() = default ;
    ListChainInstanceResponseBodyChainInstancesChain(const ListChainInstanceResponseBodyChainInstancesChain &) = default ;
    ListChainInstanceResponseBodyChainInstancesChain(ListChainInstanceResponseBodyChainInstancesChain &&) = default ;
    ListChainInstanceResponseBodyChainInstancesChain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChainInstanceResponseBodyChainInstancesChain() = default ;
    ListChainInstanceResponseBodyChainInstancesChain& operator=(const ListChainInstanceResponseBodyChainInstancesChain &) = default ;
    ListChainInstanceResponseBodyChainInstancesChain& operator=(ListChainInstanceResponseBodyChainInstancesChain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chainId_ == nullptr
        && return this->chainName_ == nullptr && return this->version_ == nullptr; };
    // chainId Field Functions 
    bool hasChainId() const { return this->chainId_ != nullptr;};
    void deleteChainId() { this->chainId_ = nullptr;};
    inline string chainId() const { DARABONBA_PTR_GET_DEFAULT(chainId_, "") };
    inline ListChainInstanceResponseBodyChainInstancesChain& setChainId(string chainId) { DARABONBA_PTR_SET_VALUE(chainId_, chainId) };


    // chainName Field Functions 
    bool hasChainName() const { return this->chainName_ != nullptr;};
    void deleteChainName() { this->chainName_ = nullptr;};
    inline string chainName() const { DARABONBA_PTR_GET_DEFAULT(chainName_, "") };
    inline ListChainInstanceResponseBodyChainInstancesChain& setChainName(string chainName) { DARABONBA_PTR_SET_VALUE(chainName_, chainName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline ListChainInstanceResponseBodyChainInstancesChain& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the namespace.
    std::shared_ptr<string> chainId_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<string> chainName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
