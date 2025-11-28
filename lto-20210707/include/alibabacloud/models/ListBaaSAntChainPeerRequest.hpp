// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBAASANTCHAINPEERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBAASANTCHAINPEERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListBaaSAntChainPeerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaaSAntChainPeerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaaSAntChainChainId, baaSAntChainChainId_);
      DARABONBA_PTR_TO_JSON(BaaSAntChainConsortiumId, baaSAntChainConsortiumId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaaSAntChainPeerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaaSAntChainChainId, baaSAntChainChainId_);
      DARABONBA_PTR_FROM_JSON(BaaSAntChainConsortiumId, baaSAntChainConsortiumId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListBaaSAntChainPeerRequest() = default ;
    ListBaaSAntChainPeerRequest(const ListBaaSAntChainPeerRequest &) = default ;
    ListBaaSAntChainPeerRequest(ListBaaSAntChainPeerRequest &&) = default ;
    ListBaaSAntChainPeerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaaSAntChainPeerRequest() = default ;
    ListBaaSAntChainPeerRequest& operator=(const ListBaaSAntChainPeerRequest &) = default ;
    ListBaaSAntChainPeerRequest& operator=(ListBaaSAntChainPeerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baaSAntChainChainId_ == nullptr
        && return this->baaSAntChainConsortiumId_ == nullptr && return this->regionId_ == nullptr; };
    // baaSAntChainChainId Field Functions 
    bool hasBaaSAntChainChainId() const { return this->baaSAntChainChainId_ != nullptr;};
    void deleteBaaSAntChainChainId() { this->baaSAntChainChainId_ = nullptr;};
    inline string baaSAntChainChainId() const { DARABONBA_PTR_GET_DEFAULT(baaSAntChainChainId_, "") };
    inline ListBaaSAntChainPeerRequest& setBaaSAntChainChainId(string baaSAntChainChainId) { DARABONBA_PTR_SET_VALUE(baaSAntChainChainId_, baaSAntChainChainId) };


    // baaSAntChainConsortiumId Field Functions 
    bool hasBaaSAntChainConsortiumId() const { return this->baaSAntChainConsortiumId_ != nullptr;};
    void deleteBaaSAntChainConsortiumId() { this->baaSAntChainConsortiumId_ = nullptr;};
    inline string baaSAntChainConsortiumId() const { DARABONBA_PTR_GET_DEFAULT(baaSAntChainConsortiumId_, "") };
    inline ListBaaSAntChainPeerRequest& setBaaSAntChainConsortiumId(string baaSAntChainConsortiumId) { DARABONBA_PTR_SET_VALUE(baaSAntChainConsortiumId_, baaSAntChainConsortiumId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListBaaSAntChainPeerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baaSAntChainChainId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> baaSAntChainConsortiumId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
