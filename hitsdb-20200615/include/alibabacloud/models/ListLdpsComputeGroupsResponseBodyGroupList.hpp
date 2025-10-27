// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLDPSCOMPUTEGROUPSRESPONSEBODYGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLDPSCOMPUTEGROUPSRESPONSEBODYGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ListLdpsComputeGroupsResponseBodyGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLdpsComputeGroupsResponseBodyGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionInfo, exceptionInfo_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_ANY_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(WebUI, webUI_);
    };
    friend void from_json(const Darabonba::Json& j, ListLdpsComputeGroupsResponseBodyGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionInfo, exceptionInfo_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_ANY_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(WebUI, webUI_);
    };
    ListLdpsComputeGroupsResponseBodyGroupList() = default ;
    ListLdpsComputeGroupsResponseBodyGroupList(const ListLdpsComputeGroupsResponseBodyGroupList &) = default ;
    ListLdpsComputeGroupsResponseBodyGroupList(ListLdpsComputeGroupsResponseBodyGroupList &&) = default ;
    ListLdpsComputeGroupsResponseBodyGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLdpsComputeGroupsResponseBodyGroupList() = default ;
    ListLdpsComputeGroupsResponseBodyGroupList& operator=(const ListLdpsComputeGroupsResponseBodyGroupList &) = default ;
    ListLdpsComputeGroupsResponseBodyGroupList& operator=(ListLdpsComputeGroupsResponseBodyGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptionInfo_ == nullptr
        && return this->groupName_ == nullptr && return this->isDefault_ == nullptr && return this->properties_ == nullptr && return this->state_ == nullptr && return this->webUI_ == nullptr; };
    // exceptionInfo Field Functions 
    bool hasExceptionInfo() const { return this->exceptionInfo_ != nullptr;};
    void deleteExceptionInfo() { this->exceptionInfo_ = nullptr;};
    inline string exceptionInfo() const { DARABONBA_PTR_GET_DEFAULT(exceptionInfo_, "") };
    inline ListLdpsComputeGroupsResponseBodyGroupList& setExceptionInfo(string exceptionInfo) { DARABONBA_PTR_SET_VALUE(exceptionInfo_, exceptionInfo) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListLdpsComputeGroupsResponseBodyGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListLdpsComputeGroupsResponseBodyGroupList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline ListLdpsComputeGroupsResponseBodyGroupList& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline ListLdpsComputeGroupsResponseBodyGroupList& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListLdpsComputeGroupsResponseBodyGroupList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // webUI Field Functions 
    bool hasWebUI() const { return this->webUI_ != nullptr;};
    void deleteWebUI() { this->webUI_ = nullptr;};
    inline string webUI() const { DARABONBA_PTR_GET_DEFAULT(webUI_, "") };
    inline ListLdpsComputeGroupsResponseBodyGroupList& setWebUI(string webUI) { DARABONBA_PTR_SET_VALUE(webUI_, webUI) };


  protected:
    std::shared_ptr<string> exceptionInfo_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    Darabonba::Json properties_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> webUI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
