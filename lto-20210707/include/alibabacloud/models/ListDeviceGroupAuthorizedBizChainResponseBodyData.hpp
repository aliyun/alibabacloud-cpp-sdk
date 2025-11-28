// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEGROUPAUTHORIZEDBIZCHAINRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEGROUPAUTHORIZEDBIZCHAINRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListDeviceGroupAuthorizedBizChainResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceGroupAuthorizedBizChainResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Authorized, authorized_);
      DARABONBA_PTR_TO_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_TO_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_TO_JSON(BlockChainType, blockChainType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceGroupAuthorizedBizChainResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorized, authorized_);
      DARABONBA_PTR_FROM_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_FROM_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_FROM_JSON(BlockChainType, blockChainType_);
    };
    ListDeviceGroupAuthorizedBizChainResponseBodyData() = default ;
    ListDeviceGroupAuthorizedBizChainResponseBodyData(const ListDeviceGroupAuthorizedBizChainResponseBodyData &) = default ;
    ListDeviceGroupAuthorizedBizChainResponseBodyData(ListDeviceGroupAuthorizedBizChainResponseBodyData &&) = default ;
    ListDeviceGroupAuthorizedBizChainResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceGroupAuthorizedBizChainResponseBodyData() = default ;
    ListDeviceGroupAuthorizedBizChainResponseBodyData& operator=(const ListDeviceGroupAuthorizedBizChainResponseBodyData &) = default ;
    ListDeviceGroupAuthorizedBizChainResponseBodyData& operator=(ListDeviceGroupAuthorizedBizChainResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorized_ == nullptr
        && return this->bizChainId_ == nullptr && return this->bizChainName_ == nullptr && return this->blockChainType_ == nullptr; };
    // authorized Field Functions 
    bool hasAuthorized() const { return this->authorized_ != nullptr;};
    void deleteAuthorized() { this->authorized_ = nullptr;};
    inline bool authorized() const { DARABONBA_PTR_GET_DEFAULT(authorized_, false) };
    inline ListDeviceGroupAuthorizedBizChainResponseBodyData& setAuthorized(bool authorized) { DARABONBA_PTR_SET_VALUE(authorized_, authorized) };


    // bizChainId Field Functions 
    bool hasBizChainId() const { return this->bizChainId_ != nullptr;};
    void deleteBizChainId() { this->bizChainId_ = nullptr;};
    inline string bizChainId() const { DARABONBA_PTR_GET_DEFAULT(bizChainId_, "") };
    inline ListDeviceGroupAuthorizedBizChainResponseBodyData& setBizChainId(string bizChainId) { DARABONBA_PTR_SET_VALUE(bizChainId_, bizChainId) };


    // bizChainName Field Functions 
    bool hasBizChainName() const { return this->bizChainName_ != nullptr;};
    void deleteBizChainName() { this->bizChainName_ = nullptr;};
    inline string bizChainName() const { DARABONBA_PTR_GET_DEFAULT(bizChainName_, "") };
    inline ListDeviceGroupAuthorizedBizChainResponseBodyData& setBizChainName(string bizChainName) { DARABONBA_PTR_SET_VALUE(bizChainName_, bizChainName) };


    // blockChainType Field Functions 
    bool hasBlockChainType() const { return this->blockChainType_ != nullptr;};
    void deleteBlockChainType() { this->blockChainType_ = nullptr;};
    inline string blockChainType() const { DARABONBA_PTR_GET_DEFAULT(blockChainType_, "") };
    inline ListDeviceGroupAuthorizedBizChainResponseBodyData& setBlockChainType(string blockChainType) { DARABONBA_PTR_SET_VALUE(blockChainType_, blockChainType) };


  protected:
    std::shared_ptr<bool> authorized_ = nullptr;
    std::shared_ptr<string> bizChainId_ = nullptr;
    std::shared_ptr<string> bizChainName_ = nullptr;
    std::shared_ptr<string> blockChainType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
