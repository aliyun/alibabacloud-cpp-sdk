// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODYDATADELTATARGET_HPP_
#define ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODYDATADELTATARGET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifySentenceResponseBodyDataDeltaTargetLine.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class VerifySentenceResponseBodyDataDeltaTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifySentenceResponseBodyDataDeltaTarget& obj) { 
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(Position, position_);
    };
    friend void from_json(const Darabonba::Json& j, VerifySentenceResponseBodyDataDeltaTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
    };
    VerifySentenceResponseBodyDataDeltaTarget() = default ;
    VerifySentenceResponseBodyDataDeltaTarget(const VerifySentenceResponseBodyDataDeltaTarget &) = default ;
    VerifySentenceResponseBodyDataDeltaTarget(VerifySentenceResponseBodyDataDeltaTarget &&) = default ;
    VerifySentenceResponseBodyDataDeltaTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifySentenceResponseBodyDataDeltaTarget() = default ;
    VerifySentenceResponseBodyDataDeltaTarget& operator=(const VerifySentenceResponseBodyDataDeltaTarget &) = default ;
    VerifySentenceResponseBodyDataDeltaTarget& operator=(VerifySentenceResponseBodyDataDeltaTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->line_ == nullptr
        && return this->position_ == nullptr; };
    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline const Models::VerifySentenceResponseBodyDataDeltaTargetLine & line() const { DARABONBA_PTR_GET_CONST(line_, Models::VerifySentenceResponseBodyDataDeltaTargetLine) };
    inline Models::VerifySentenceResponseBodyDataDeltaTargetLine line() { DARABONBA_PTR_GET(line_, Models::VerifySentenceResponseBodyDataDeltaTargetLine) };
    inline VerifySentenceResponseBodyDataDeltaTarget& setLine(const Models::VerifySentenceResponseBodyDataDeltaTargetLine & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
    inline VerifySentenceResponseBodyDataDeltaTarget& setLine(Models::VerifySentenceResponseBodyDataDeltaTargetLine && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int32_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
    inline VerifySentenceResponseBodyDataDeltaTarget& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


  protected:
    std::shared_ptr<Models::VerifySentenceResponseBodyDataDeltaTargetLine> line_ = nullptr;
    std::shared_ptr<int32_t> position_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
