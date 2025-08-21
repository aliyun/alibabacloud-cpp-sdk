// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListPipelineResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(gmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_TO_JSON(gmtUpdateTime, gmtUpdateTime_);
      DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(pipelineStatus, pipelineStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(gmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_FROM_JSON(gmtUpdateTime, gmtUpdateTime_);
      DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(pipelineStatus, pipelineStatus_);
    };
    ListPipelineResponseBodyResult() = default ;
    ListPipelineResponseBodyResult(const ListPipelineResponseBodyResult &) = default ;
    ListPipelineResponseBodyResult(ListPipelineResponseBodyResult &&) = default ;
    ListPipelineResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineResponseBodyResult() = default ;
    ListPipelineResponseBodyResult& operator=(const ListPipelineResponseBodyResult &) = default ;
    ListPipelineResponseBodyResult& operator=(ListPipelineResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreatedTime_ != nullptr
        && this->gmtUpdateTime_ != nullptr && this->pipelineId_ != nullptr && this->pipelineStatus_ != nullptr; };
    // gmtCreatedTime Field Functions 
    bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
    void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
    inline string gmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
    inline ListPipelineResponseBodyResult& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


    // gmtUpdateTime Field Functions 
    bool hasGmtUpdateTime() const { return this->gmtUpdateTime_ != nullptr;};
    void deleteGmtUpdateTime() { this->gmtUpdateTime_ = nullptr;};
    inline string gmtUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdateTime_, "") };
    inline ListPipelineResponseBodyResult& setGmtUpdateTime(string gmtUpdateTime) { DARABONBA_PTR_SET_VALUE(gmtUpdateTime_, gmtUpdateTime) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ListPipelineResponseBodyResult& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineStatus Field Functions 
    bool hasPipelineStatus() const { return this->pipelineStatus_ != nullptr;};
    void deletePipelineStatus() { this->pipelineStatus_ = nullptr;};
    inline string pipelineStatus() const { DARABONBA_PTR_GET_DEFAULT(pipelineStatus_, "") };
    inline ListPipelineResponseBodyResult& setPipelineStatus(string pipelineStatus) { DARABONBA_PTR_SET_VALUE(pipelineStatus_, pipelineStatus) };


  protected:
    std::shared_ptr<string> gmtCreatedTime_ = nullptr;
    std::shared_ptr<string> gmtUpdateTime_ = nullptr;
    // The status of the pipeline. Supported:
    // 
    // *   NOT_DEPLOYED: The node is not deployed.
    // *   RUNNING
    // *   DELETED: Deleted. The console does not display this status.
    std::shared_ptr<string> pipelineId_ = nullptr;
    std::shared_ptr<string> pipelineStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
