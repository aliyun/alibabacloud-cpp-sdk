// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMETASKINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMETASKINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ResumeTaskInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeTaskInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeTaskInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
    };
    ResumeTaskInstancesShrinkRequest() = default ;
    ResumeTaskInstancesShrinkRequest(const ResumeTaskInstancesShrinkRequest &) = default ;
    ResumeTaskInstancesShrinkRequest(ResumeTaskInstancesShrinkRequest &&) = default ;
    ResumeTaskInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeTaskInstancesShrinkRequest() = default ;
    ResumeTaskInstancesShrinkRequest& operator=(const ResumeTaskInstancesShrinkRequest &) = default ;
    ResumeTaskInstancesShrinkRequest& operator=(ResumeTaskInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->idsShrink_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ResumeTaskInstancesShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string idsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline ResumeTaskInstancesShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


  protected:
    // Remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID list of the task instance.
    std::shared_ptr<string> idsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
