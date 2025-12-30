// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPNODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPNODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class StopNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(Nodes, nodesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StopNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodesShrink_);
    };
    StopNodesShrinkRequest() = default ;
    StopNodesShrinkRequest(const StopNodesShrinkRequest &) = default ;
    StopNodesShrinkRequest(StopNodesShrinkRequest &&) = default ;
    StopNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopNodesShrinkRequest() = default ;
    StopNodesShrinkRequest& operator=(const StopNodesShrinkRequest &) = default ;
    StopNodesShrinkRequest& operator=(StopNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreFailedNodeTasks_ == nullptr
        && this->nodesShrink_ == nullptr; };
    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool getIgnoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline StopNodesShrinkRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // nodesShrink Field Functions 
    bool hasNodesShrink() const { return this->nodesShrink_ != nullptr;};
    void deleteNodesShrink() { this->nodesShrink_ = nullptr;};
    inline string getNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(nodesShrink_, "") };
    inline StopNodesShrinkRequest& setNodesShrink(string nodesShrink) { DARABONBA_PTR_SET_VALUE(nodesShrink_, nodesShrink) };


  protected:
    // Specifies whether to allow skipping failed nodes. Default value: False.
    shared_ptr<bool> ignoreFailedNodeTasks_ {};
    // The nodes.
    shared_ptr<string> nodesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
