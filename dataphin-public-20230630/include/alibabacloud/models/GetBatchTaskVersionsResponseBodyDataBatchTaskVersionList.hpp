// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKVERSIONSRESPONSEBODYDATABATCHTASKVERSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKVERSIONSRESPONSEBODYDATABATCHTASKVERSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Published, published_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Published, published_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList() = default ;
    GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList(const GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList &) = default ;
    GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList(GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList &&) = default ;
    GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList() = default ;
    GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& operator=(const GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList &) = default ;
    GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& operator=(GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->nodeId_ != nullptr && this->projectId_ != nullptr && this->published_ != nullptr
        && this->userId_ != nullptr && this->userName_ != nullptr && this->version_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // published Field Functions 
    bool hasPublished() const { return this->published_ != nullptr;};
    void deletePublished() { this->published_ = nullptr;};
    inline bool published() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
    inline GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<bool> published_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
