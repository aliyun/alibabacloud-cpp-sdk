// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGPIPELINEJOBRUNRESPONSEBODYLOG_HPP_
#define ALIBABACLOUD_MODELS_LOGPIPELINEJOBRUNRESPONSEBODYLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class LogPipelineJobRunResponseBodyLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogPipelineJobRunResponseBodyLog& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(more, more_);
    };
    friend void from_json(const Darabonba::Json& j, LogPipelineJobRunResponseBodyLog& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(more, more_);
    };
    LogPipelineJobRunResponseBodyLog() = default ;
    LogPipelineJobRunResponseBodyLog(const LogPipelineJobRunResponseBodyLog &) = default ;
    LogPipelineJobRunResponseBodyLog(LogPipelineJobRunResponseBodyLog &&) = default ;
    LogPipelineJobRunResponseBodyLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogPipelineJobRunResponseBodyLog() = default ;
    LogPipelineJobRunResponseBodyLog& operator=(const LogPipelineJobRunResponseBodyLog &) = default ;
    LogPipelineJobRunResponseBodyLog& operator=(LogPipelineJobRunResponseBodyLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->more_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline LogPipelineJobRunResponseBodyLog& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // more Field Functions 
    bool hasMore() const { return this->more_ != nullptr;};
    void deleteMore() { this->more_ = nullptr;};
    inline bool more() const { DARABONBA_PTR_GET_DEFAULT(more_, false) };
    inline LogPipelineJobRunResponseBodyLog& setMore(bool more) { DARABONBA_PTR_SET_VALUE(more_, more) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> more_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
