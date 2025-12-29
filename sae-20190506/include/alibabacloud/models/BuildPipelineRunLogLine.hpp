// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINERUNLOGLINE_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINERUNLOGLINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BuildPipelineRunLogLine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildPipelineRunLogLine& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
    };
    friend void from_json(const Darabonba::Json& j, BuildPipelineRunLogLine& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
    };
    BuildPipelineRunLogLine() = default ;
    BuildPipelineRunLogLine(const BuildPipelineRunLogLine &) = default ;
    BuildPipelineRunLogLine(BuildPipelineRunLogLine &&) = default ;
    BuildPipelineRunLogLine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildPipelineRunLogLine() = default ;
    BuildPipelineRunLogLine& operator=(const BuildPipelineRunLogLine &) = default ;
    BuildPipelineRunLogLine& operator=(BuildPipelineRunLogLine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->offset_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline BuildPipelineRunLogLine& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline BuildPipelineRunLogLine& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<int64_t> offset_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
