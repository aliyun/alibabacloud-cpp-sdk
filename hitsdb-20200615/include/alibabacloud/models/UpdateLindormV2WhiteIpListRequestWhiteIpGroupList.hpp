// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELINDORMV2WHITEIPLISTREQUESTWHITEIPGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELINDORMV2WHITEIPLISTREQUESTWHITEIPGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class UpdateLindormV2WhiteIpListRequestWhiteIpGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLindormV2WhiteIpListRequestWhiteIpGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(WhiteIpList, whiteIpList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLindormV2WhiteIpListRequestWhiteIpGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(WhiteIpList, whiteIpList_);
    };
    UpdateLindormV2WhiteIpListRequestWhiteIpGroupList() = default ;
    UpdateLindormV2WhiteIpListRequestWhiteIpGroupList(const UpdateLindormV2WhiteIpListRequestWhiteIpGroupList &) = default ;
    UpdateLindormV2WhiteIpListRequestWhiteIpGroupList(UpdateLindormV2WhiteIpListRequestWhiteIpGroupList &&) = default ;
    UpdateLindormV2WhiteIpListRequestWhiteIpGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLindormV2WhiteIpListRequestWhiteIpGroupList() = default ;
    UpdateLindormV2WhiteIpListRequestWhiteIpGroupList& operator=(const UpdateLindormV2WhiteIpListRequestWhiteIpGroupList &) = default ;
    UpdateLindormV2WhiteIpListRequestWhiteIpGroupList& operator=(UpdateLindormV2WhiteIpListRequestWhiteIpGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->whiteIpList_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateLindormV2WhiteIpListRequestWhiteIpGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // whiteIpList Field Functions 
    bool hasWhiteIpList() const { return this->whiteIpList_ != nullptr;};
    void deleteWhiteIpList() { this->whiteIpList_ = nullptr;};
    inline string whiteIpList() const { DARABONBA_PTR_GET_DEFAULT(whiteIpList_, "") };
    inline UpdateLindormV2WhiteIpListRequestWhiteIpGroupList& setWhiteIpList(string whiteIpList) { DARABONBA_PTR_SET_VALUE(whiteIpList_, whiteIpList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> whiteIpList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
