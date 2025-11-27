// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STREAMOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_STREAMOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class StreamOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StreamOptions& obj) { 
      DARABONBA_PTR_TO_JSON(IncrementalOutput, incrementalOutput_);
      DARABONBA_PTR_TO_JSON(NeedReturnFinalResult, needReturnFinalResult_);
    };
    friend void from_json(const Darabonba::Json& j, StreamOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(IncrementalOutput, incrementalOutput_);
      DARABONBA_PTR_FROM_JSON(NeedReturnFinalResult, needReturnFinalResult_);
    };
    StreamOptions() = default ;
    StreamOptions(const StreamOptions &) = default ;
    StreamOptions(StreamOptions &&) = default ;
    StreamOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StreamOptions() = default ;
    StreamOptions& operator=(const StreamOptions &) = default ;
    StreamOptions& operator=(StreamOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->incrementalOutput_ == nullptr
        && return this->needReturnFinalResult_ == nullptr; };
    // incrementalOutput Field Functions 
    bool hasIncrementalOutput() const { return this->incrementalOutput_ != nullptr;};
    void deleteIncrementalOutput() { this->incrementalOutput_ = nullptr;};
    inline bool incrementalOutput() const { DARABONBA_PTR_GET_DEFAULT(incrementalOutput_, false) };
    inline StreamOptions& setIncrementalOutput(bool incrementalOutput) { DARABONBA_PTR_SET_VALUE(incrementalOutput_, incrementalOutput) };


    // needReturnFinalResult Field Functions 
    bool hasNeedReturnFinalResult() const { return this->needReturnFinalResult_ != nullptr;};
    void deleteNeedReturnFinalResult() { this->needReturnFinalResult_ = nullptr;};
    inline bool needReturnFinalResult() const { DARABONBA_PTR_GET_DEFAULT(needReturnFinalResult_, false) };
    inline StreamOptions& setNeedReturnFinalResult(bool needReturnFinalResult) { DARABONBA_PTR_SET_VALUE(needReturnFinalResult_, needReturnFinalResult) };


  protected:
    std::shared_ptr<bool> incrementalOutput_ = nullptr;
    std::shared_ptr<bool> needReturnFinalResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
