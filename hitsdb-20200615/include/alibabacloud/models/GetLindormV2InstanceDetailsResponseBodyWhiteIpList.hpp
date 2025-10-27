// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEDETAILSRESPONSEBODYWHITEIPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEDETAILSRESPONSEBODYWHITEIPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceDetailsResponseBodyWhiteIpList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceDetailsResponseBodyWhiteIpList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceDetailsResponseBodyWhiteIpList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
    };
    GetLindormV2InstanceDetailsResponseBodyWhiteIpList() = default ;
    GetLindormV2InstanceDetailsResponseBodyWhiteIpList(const GetLindormV2InstanceDetailsResponseBodyWhiteIpList &) = default ;
    GetLindormV2InstanceDetailsResponseBodyWhiteIpList(GetLindormV2InstanceDetailsResponseBodyWhiteIpList &&) = default ;
    GetLindormV2InstanceDetailsResponseBodyWhiteIpList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceDetailsResponseBodyWhiteIpList() = default ;
    GetLindormV2InstanceDetailsResponseBodyWhiteIpList& operator=(const GetLindormV2InstanceDetailsResponseBodyWhiteIpList &) = default ;
    GetLindormV2InstanceDetailsResponseBodyWhiteIpList& operator=(GetLindormV2InstanceDetailsResponseBodyWhiteIpList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->ipList_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetLindormV2InstanceDetailsResponseBodyWhiteIpList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline string ipList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
    inline GetLindormV2InstanceDetailsResponseBodyWhiteIpList& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


  protected:
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> ipList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
