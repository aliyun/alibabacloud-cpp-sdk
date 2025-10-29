// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETASKINSTANCEDEPENDENCIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVETASKINSTANCEDEPENDENCIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RemoveTaskInstanceDependenciesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTaskInstanceDependenciesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(UpstreamTaskInstanceIds, upstreamTaskInstanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTaskInstanceDependenciesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(UpstreamTaskInstanceIds, upstreamTaskInstanceIdsShrink_);
    };
    RemoveTaskInstanceDependenciesShrinkRequest() = default ;
    RemoveTaskInstanceDependenciesShrinkRequest(const RemoveTaskInstanceDependenciesShrinkRequest &) = default ;
    RemoveTaskInstanceDependenciesShrinkRequest(RemoveTaskInstanceDependenciesShrinkRequest &&) = default ;
    RemoveTaskInstanceDependenciesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTaskInstanceDependenciesShrinkRequest() = default ;
    RemoveTaskInstanceDependenciesShrinkRequest& operator=(const RemoveTaskInstanceDependenciesShrinkRequest &) = default ;
    RemoveTaskInstanceDependenciesShrinkRequest& operator=(RemoveTaskInstanceDependenciesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->id_ == nullptr && return this->upstreamTaskInstanceIdsShrink_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline RemoveTaskInstanceDependenciesShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RemoveTaskInstanceDependenciesShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // upstreamTaskInstanceIdsShrink Field Functions 
    bool hasUpstreamTaskInstanceIdsShrink() const { return this->upstreamTaskInstanceIdsShrink_ != nullptr;};
    void deleteUpstreamTaskInstanceIdsShrink() { this->upstreamTaskInstanceIdsShrink_ = nullptr;};
    inline string upstreamTaskInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(upstreamTaskInstanceIdsShrink_, "") };
    inline RemoveTaskInstanceDependenciesShrinkRequest& setUpstreamTaskInstanceIdsShrink(string upstreamTaskInstanceIdsShrink) { DARABONBA_PTR_SET_VALUE(upstreamTaskInstanceIdsShrink_, upstreamTaskInstanceIdsShrink) };


  protected:
    // The remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The IDs of ancestor instances of the instance
    std::shared_ptr<string> upstreamTaskInstanceIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
