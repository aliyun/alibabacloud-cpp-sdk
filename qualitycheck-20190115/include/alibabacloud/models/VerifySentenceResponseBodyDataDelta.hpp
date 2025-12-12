// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODYDATADELTA_HPP_
#define ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODYDATADELTA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifySentenceResponseBodyDataDeltaSource.hpp>
#include <alibabacloud/models/VerifySentenceResponseBodyDataDeltaTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class VerifySentenceResponseBodyDataDelta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifySentenceResponseBodyDataDelta& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, VerifySentenceResponseBodyDataDelta& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    VerifySentenceResponseBodyDataDelta() = default ;
    VerifySentenceResponseBodyDataDelta(const VerifySentenceResponseBodyDataDelta &) = default ;
    VerifySentenceResponseBodyDataDelta(VerifySentenceResponseBodyDataDelta &&) = default ;
    VerifySentenceResponseBodyDataDelta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifySentenceResponseBodyDataDelta() = default ;
    VerifySentenceResponseBodyDataDelta& operator=(const VerifySentenceResponseBodyDataDelta &) = default ;
    VerifySentenceResponseBodyDataDelta& operator=(VerifySentenceResponseBodyDataDelta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr
        && return this->target_ == nullptr && return this->type_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::VerifySentenceResponseBodyDataDeltaSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::VerifySentenceResponseBodyDataDeltaSource) };
    inline Models::VerifySentenceResponseBodyDataDeltaSource source() { DARABONBA_PTR_GET(source_, Models::VerifySentenceResponseBodyDataDeltaSource) };
    inline VerifySentenceResponseBodyDataDelta& setSource(const Models::VerifySentenceResponseBodyDataDeltaSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline VerifySentenceResponseBodyDataDelta& setSource(Models::VerifySentenceResponseBodyDataDeltaSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const Models::VerifySentenceResponseBodyDataDeltaTarget & target() const { DARABONBA_PTR_GET_CONST(target_, Models::VerifySentenceResponseBodyDataDeltaTarget) };
    inline Models::VerifySentenceResponseBodyDataDeltaTarget target() { DARABONBA_PTR_GET(target_, Models::VerifySentenceResponseBodyDataDeltaTarget) };
    inline VerifySentenceResponseBodyDataDelta& setTarget(const Models::VerifySentenceResponseBodyDataDeltaTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline VerifySentenceResponseBodyDataDelta& setTarget(Models::VerifySentenceResponseBodyDataDeltaTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline VerifySentenceResponseBodyDataDelta& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::VerifySentenceResponseBodyDataDeltaSource> source_ = nullptr;
    std::shared_ptr<Models::VerifySentenceResponseBodyDataDeltaTarget> target_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
