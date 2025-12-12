// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODYDATADELTATARGETLINE_HPP_
#define ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODYDATADELTATARGETLINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class VerifySentenceResponseBodyDataDeltaTargetLine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifySentenceResponseBodyDataDeltaTargetLine& obj) { 
      DARABONBA_PTR_TO_JSON(Line, line_);
    };
    friend void from_json(const Darabonba::Json& j, VerifySentenceResponseBodyDataDeltaTargetLine& obj) { 
      DARABONBA_PTR_FROM_JSON(Line, line_);
    };
    VerifySentenceResponseBodyDataDeltaTargetLine() = default ;
    VerifySentenceResponseBodyDataDeltaTargetLine(const VerifySentenceResponseBodyDataDeltaTargetLine &) = default ;
    VerifySentenceResponseBodyDataDeltaTargetLine(VerifySentenceResponseBodyDataDeltaTargetLine &&) = default ;
    VerifySentenceResponseBodyDataDeltaTargetLine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifySentenceResponseBodyDataDeltaTargetLine() = default ;
    VerifySentenceResponseBodyDataDeltaTargetLine& operator=(const VerifySentenceResponseBodyDataDeltaTargetLine &) = default ;
    VerifySentenceResponseBodyDataDeltaTargetLine& operator=(VerifySentenceResponseBodyDataDeltaTargetLine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->line_ == nullptr; };
    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline const vector<string> & line() const { DARABONBA_PTR_GET_CONST(line_, vector<string>) };
    inline vector<string> line() { DARABONBA_PTR_GET(line_, vector<string>) };
    inline VerifySentenceResponseBodyDataDeltaTargetLine& setLine(const vector<string> & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
    inline VerifySentenceResponseBodyDataDeltaTargetLine& setLine(vector<string> && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


  protected:
    std::shared_ptr<vector<string>> line_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
