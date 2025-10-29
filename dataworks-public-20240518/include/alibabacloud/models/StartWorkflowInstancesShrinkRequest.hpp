// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTWORKFLOWINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTWORKFLOWINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class StartWorkflowInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartWorkflowInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartWorkflowInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
    };
    StartWorkflowInstancesShrinkRequest() = default ;
    StartWorkflowInstancesShrinkRequest(const StartWorkflowInstancesShrinkRequest &) = default ;
    StartWorkflowInstancesShrinkRequest(StartWorkflowInstancesShrinkRequest &&) = default ;
    StartWorkflowInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartWorkflowInstancesShrinkRequest() = default ;
    StartWorkflowInstancesShrinkRequest& operator=(const StartWorkflowInstancesShrinkRequest &) = default ;
    StartWorkflowInstancesShrinkRequest& operator=(StartWorkflowInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->idsShrink_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline StartWorkflowInstancesShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string idsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline StartWorkflowInstancesShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


  protected:
    // The remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The IDs of workflow instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> idsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
