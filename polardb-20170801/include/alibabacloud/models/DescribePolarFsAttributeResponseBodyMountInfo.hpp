// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARFSATTRIBUTERESPONSEBODYMOUNTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARFSATTRIBUTERESPONSEBODYMOUNTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarFsAttributeResponseBodyMountInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarFsAttributeResponseBodyMountInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PolarDbProxy, polarDbProxy_);
      DARABONBA_PTR_TO_JSON(PolarFsCluster, polarFsCluster_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarFsAttributeResponseBodyMountInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PolarDbProxy, polarDbProxy_);
      DARABONBA_PTR_FROM_JSON(PolarFsCluster, polarFsCluster_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    DescribePolarFsAttributeResponseBodyMountInfo() = default ;
    DescribePolarFsAttributeResponseBodyMountInfo(const DescribePolarFsAttributeResponseBodyMountInfo &) = default ;
    DescribePolarFsAttributeResponseBodyMountInfo(DescribePolarFsAttributeResponseBodyMountInfo &&) = default ;
    DescribePolarFsAttributeResponseBodyMountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarFsAttributeResponseBodyMountInfo() = default ;
    DescribePolarFsAttributeResponseBodyMountInfo& operator=(const DescribePolarFsAttributeResponseBodyMountInfo &) = default ;
    DescribePolarFsAttributeResponseBodyMountInfo& operator=(DescribePolarFsAttributeResponseBodyMountInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->polarDbProxy_ == nullptr
        && return this->polarFsCluster_ == nullptr && return this->token_ == nullptr; };
    // polarDbProxy Field Functions 
    bool hasPolarDbProxy() const { return this->polarDbProxy_ != nullptr;};
    void deletePolarDbProxy() { this->polarDbProxy_ = nullptr;};
    inline string polarDbProxy() const { DARABONBA_PTR_GET_DEFAULT(polarDbProxy_, "") };
    inline DescribePolarFsAttributeResponseBodyMountInfo& setPolarDbProxy(string polarDbProxy) { DARABONBA_PTR_SET_VALUE(polarDbProxy_, polarDbProxy) };


    // polarFsCluster Field Functions 
    bool hasPolarFsCluster() const { return this->polarFsCluster_ != nullptr;};
    void deletePolarFsCluster() { this->polarFsCluster_ = nullptr;};
    inline string polarFsCluster() const { DARABONBA_PTR_GET_DEFAULT(polarFsCluster_, "") };
    inline DescribePolarFsAttributeResponseBodyMountInfo& setPolarFsCluster(string polarFsCluster) { DARABONBA_PTR_SET_VALUE(polarFsCluster_, polarFsCluster) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribePolarFsAttributeResponseBodyMountInfo& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> polarDbProxy_ = nullptr;
    std::shared_ptr<string> polarFsCluster_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
