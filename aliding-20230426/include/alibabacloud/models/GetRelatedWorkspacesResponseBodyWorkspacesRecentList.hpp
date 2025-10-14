// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESRESPONSEBODYWORKSPACESRECENTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESRESPONSEBODYWORKSPACESRECENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRelatedWorkspacesResponseBodyWorkspacesRecentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRelatedWorkspacesResponseBodyWorkspacesRecentList& obj) { 
      DARABONBA_PTR_TO_JSON(LastEditTime, lastEditTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetRelatedWorkspacesResponseBodyWorkspacesRecentList& obj) { 
      DARABONBA_PTR_FROM_JSON(LastEditTime, lastEditTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetRelatedWorkspacesResponseBodyWorkspacesRecentList() = default ;
    GetRelatedWorkspacesResponseBodyWorkspacesRecentList(const GetRelatedWorkspacesResponseBodyWorkspacesRecentList &) = default ;
    GetRelatedWorkspacesResponseBodyWorkspacesRecentList(GetRelatedWorkspacesResponseBodyWorkspacesRecentList &&) = default ;
    GetRelatedWorkspacesResponseBodyWorkspacesRecentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRelatedWorkspacesResponseBodyWorkspacesRecentList() = default ;
    GetRelatedWorkspacesResponseBodyWorkspacesRecentList& operator=(const GetRelatedWorkspacesResponseBodyWorkspacesRecentList &) = default ;
    GetRelatedWorkspacesResponseBodyWorkspacesRecentList& operator=(GetRelatedWorkspacesResponseBodyWorkspacesRecentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastEditTime_ == nullptr
        && return this->name_ == nullptr && return this->nodeId_ == nullptr && return this->url_ == nullptr; };
    // lastEditTime Field Functions 
    bool hasLastEditTime() const { return this->lastEditTime_ != nullptr;};
    void deleteLastEditTime() { this->lastEditTime_ = nullptr;};
    inline int64_t lastEditTime() const { DARABONBA_PTR_GET_DEFAULT(lastEditTime_, 0L) };
    inline GetRelatedWorkspacesResponseBodyWorkspacesRecentList& setLastEditTime(int64_t lastEditTime) { DARABONBA_PTR_SET_VALUE(lastEditTime_, lastEditTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRelatedWorkspacesResponseBodyWorkspacesRecentList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetRelatedWorkspacesResponseBodyWorkspacesRecentList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetRelatedWorkspacesResponseBodyWorkspacesRecentList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int64_t> lastEditTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
