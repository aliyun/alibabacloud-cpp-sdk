// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCERESPONSEBODYWHITEIPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCERESPONSEBODYWHITEIPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceResponseBodyWhiteIpList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceResponseBodyWhiteIpList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceResponseBodyWhiteIpList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
    };
    GetLindormV2InstanceResponseBodyWhiteIpList() = default ;
    GetLindormV2InstanceResponseBodyWhiteIpList(const GetLindormV2InstanceResponseBodyWhiteIpList &) = default ;
    GetLindormV2InstanceResponseBodyWhiteIpList(GetLindormV2InstanceResponseBodyWhiteIpList &&) = default ;
    GetLindormV2InstanceResponseBodyWhiteIpList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceResponseBodyWhiteIpList() = default ;
    GetLindormV2InstanceResponseBodyWhiteIpList& operator=(const GetLindormV2InstanceResponseBodyWhiteIpList &) = default ;
    GetLindormV2InstanceResponseBodyWhiteIpList& operator=(GetLindormV2InstanceResponseBodyWhiteIpList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->ipList_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetLindormV2InstanceResponseBodyWhiteIpList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline string ipList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
    inline GetLindormV2InstanceResponseBodyWhiteIpList& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


  protected:
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> ipList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
