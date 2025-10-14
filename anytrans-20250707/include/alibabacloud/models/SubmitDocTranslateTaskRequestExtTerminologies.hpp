// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCTRANSLATETASKREQUESTEXTTERMINOLOGIES_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCTRANSLATETASKREQUESTEXTTERMINOLOGIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitDocTranslateTaskRequestExtTerminologies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocTranslateTaskRequestExtTerminologies& obj) { 
      DARABONBA_PTR_TO_JSON(src, src_);
      DARABONBA_PTR_TO_JSON(tgt, tgt_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocTranslateTaskRequestExtTerminologies& obj) { 
      DARABONBA_PTR_FROM_JSON(src, src_);
      DARABONBA_PTR_FROM_JSON(tgt, tgt_);
    };
    SubmitDocTranslateTaskRequestExtTerminologies() = default ;
    SubmitDocTranslateTaskRequestExtTerminologies(const SubmitDocTranslateTaskRequestExtTerminologies &) = default ;
    SubmitDocTranslateTaskRequestExtTerminologies(SubmitDocTranslateTaskRequestExtTerminologies &&) = default ;
    SubmitDocTranslateTaskRequestExtTerminologies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocTranslateTaskRequestExtTerminologies() = default ;
    SubmitDocTranslateTaskRequestExtTerminologies& operator=(const SubmitDocTranslateTaskRequestExtTerminologies &) = default ;
    SubmitDocTranslateTaskRequestExtTerminologies& operator=(SubmitDocTranslateTaskRequestExtTerminologies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->src_ == nullptr
        && return this->tgt_ == nullptr; };
    // src Field Functions 
    bool hasSrc() const { return this->src_ != nullptr;};
    void deleteSrc() { this->src_ = nullptr;};
    inline string src() const { DARABONBA_PTR_GET_DEFAULT(src_, "") };
    inline SubmitDocTranslateTaskRequestExtTerminologies& setSrc(string src) { DARABONBA_PTR_SET_VALUE(src_, src) };


    // tgt Field Functions 
    bool hasTgt() const { return this->tgt_ != nullptr;};
    void deleteTgt() { this->tgt_ = nullptr;};
    inline string tgt() const { DARABONBA_PTR_GET_DEFAULT(tgt_, "") };
    inline SubmitDocTranslateTaskRequestExtTerminologies& setTgt(string tgt) { DARABONBA_PTR_SET_VALUE(tgt_, tgt) };


  protected:
    std::shared_ptr<string> src_ = nullptr;
    std::shared_ptr<string> tgt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
