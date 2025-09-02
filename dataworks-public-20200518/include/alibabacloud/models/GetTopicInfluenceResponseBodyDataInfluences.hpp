// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICINFLUENCERESPONSEBODYDATAINFLUENCES_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICINFLUENCERESPONSEBODYDATAINFLUENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetTopicInfluenceResponseBodyDataInfluences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicInfluenceResponseBodyDataInfluences& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(Buffer, buffer_);
      DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicInfluenceResponseBodyDataInfluences& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(Buffer, buffer_);
      DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetTopicInfluenceResponseBodyDataInfluences() = default ;
    GetTopicInfluenceResponseBodyDataInfluences(const GetTopicInfluenceResponseBodyDataInfluences &) = default ;
    GetTopicInfluenceResponseBodyDataInfluences(GetTopicInfluenceResponseBodyDataInfluences &&) = default ;
    GetTopicInfluenceResponseBodyDataInfluences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicInfluenceResponseBodyDataInfluences() = default ;
    GetTopicInfluenceResponseBodyDataInfluences& operator=(const GetTopicInfluenceResponseBodyDataInfluences &) = default ;
    GetTopicInfluenceResponseBodyDataInfluences& operator=(GetTopicInfluenceResponseBodyDataInfluences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->baselineName_ != nullptr && this->bizdate_ != nullptr && this->buffer_ != nullptr && this->inGroupId_ != nullptr && this->owner_ != nullptr
        && this->priority_ != nullptr && this->projectId_ != nullptr && this->status_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline GetTopicInfluenceResponseBodyDataInfluences& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline GetTopicInfluenceResponseBodyDataInfluences& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline GetTopicInfluenceResponseBodyDataInfluences& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // buffer Field Functions 
    bool hasBuffer() const { return this->buffer_ != nullptr;};
    void deleteBuffer() { this->buffer_ = nullptr;};
    inline int64_t buffer() const { DARABONBA_PTR_GET_DEFAULT(buffer_, 0L) };
    inline GetTopicInfluenceResponseBodyDataInfluences& setBuffer(int64_t buffer) { DARABONBA_PTR_SET_VALUE(buffer_, buffer) };


    // inGroupId Field Functions 
    bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
    void deleteInGroupId() { this->inGroupId_ = nullptr;};
    inline int32_t inGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
    inline GetTopicInfluenceResponseBodyDataInfluences& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetTopicInfluenceResponseBodyDataInfluences& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetTopicInfluenceResponseBodyDataInfluences& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetTopicInfluenceResponseBodyDataInfluences& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTopicInfluenceResponseBodyDataInfluences& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the baseline.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The data timestamp of the baseline instance.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The margin of the baseline instance. Unit: seconds.
    std::shared_ptr<int64_t> buffer_ = nullptr;
    // The ID of the cycle of the baseline instance. For a baseline instance that is scheduled by day, the field value is 1. For a baseline instance that is scheduled by hour, the field value ranges from 1 to 24.
    std::shared_ptr<int32_t> inGroupId_ = nullptr;
    // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs are separated by commas (,).
    std::shared_ptr<string> owner_ = nullptr;
    // The priority of the baseline. Valid values: 1, 2, 5, 7, and 8.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the workspace to which the baseline belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The status of the baseline. Valid values: ERROR, SAFE, DANGROUS, and OVER. The value ERROR indicates that no nodes are associated with the baseline, or all nodes associated with the baseline are suspended. The value SAFE indicates that nodes are run before the alert duration begins. The value DANGROUS indicates that nodes are still running after the alert duration ends but the committed time does not arrive. The value OVER indicates that nodes are still running after the committed time.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
