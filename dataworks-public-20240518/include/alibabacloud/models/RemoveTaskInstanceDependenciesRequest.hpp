// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETASKINSTANCEDEPENDENCIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVETASKINSTANCEDEPENDENCIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RemoveTaskInstanceDependenciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTaskInstanceDependenciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(UpstreamTaskInstanceIds, upstreamTaskInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTaskInstanceDependenciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(UpstreamTaskInstanceIds, upstreamTaskInstanceIds_);
    };
    RemoveTaskInstanceDependenciesRequest() = default ;
    RemoveTaskInstanceDependenciesRequest(const RemoveTaskInstanceDependenciesRequest &) = default ;
    RemoveTaskInstanceDependenciesRequest(RemoveTaskInstanceDependenciesRequest &&) = default ;
    RemoveTaskInstanceDependenciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTaskInstanceDependenciesRequest() = default ;
    RemoveTaskInstanceDependenciesRequest& operator=(const RemoveTaskInstanceDependenciesRequest &) = default ;
    RemoveTaskInstanceDependenciesRequest& operator=(RemoveTaskInstanceDependenciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->id_ != nullptr && this->upstreamTaskInstanceIds_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline RemoveTaskInstanceDependenciesRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RemoveTaskInstanceDependenciesRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // upstreamTaskInstanceIds Field Functions 
    bool hasUpstreamTaskInstanceIds() const { return this->upstreamTaskInstanceIds_ != nullptr;};
    void deleteUpstreamTaskInstanceIds() { this->upstreamTaskInstanceIds_ = nullptr;};
    inline const vector<int64_t> & upstreamTaskInstanceIds() const { DARABONBA_PTR_GET_CONST(upstreamTaskInstanceIds_, vector<int64_t>) };
    inline vector<int64_t> upstreamTaskInstanceIds() { DARABONBA_PTR_GET(upstreamTaskInstanceIds_, vector<int64_t>) };
    inline RemoveTaskInstanceDependenciesRequest& setUpstreamTaskInstanceIds(const vector<int64_t> & upstreamTaskInstanceIds) { DARABONBA_PTR_SET_VALUE(upstreamTaskInstanceIds_, upstreamTaskInstanceIds) };
    inline RemoveTaskInstanceDependenciesRequest& setUpstreamTaskInstanceIds(vector<int64_t> && upstreamTaskInstanceIds) { DARABONBA_PTR_SET_RVALUE(upstreamTaskInstanceIds_, upstreamTaskInstanceIds) };


  protected:
    // The remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The IDs of ancestor instances of the instance
    std::shared_ptr<vector<int64_t>> upstreamTaskInstanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
