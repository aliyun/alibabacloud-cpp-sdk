// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMQUERYREQUESTEXT_HPP_
#define ALIBABACLOUD_MODELS_TERMQUERYREQUESTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class TermQueryRequestExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TermQueryRequestExt& obj) { 
      DARABONBA_ANY_TO_JSON(paramMap, paramMap_);
    };
    friend void from_json(const Darabonba::Json& j, TermQueryRequestExt& obj) { 
      DARABONBA_ANY_FROM_JSON(paramMap, paramMap_);
    };
    TermQueryRequestExt() = default ;
    TermQueryRequestExt(const TermQueryRequestExt &) = default ;
    TermQueryRequestExt(TermQueryRequestExt &&) = default ;
    TermQueryRequestExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TermQueryRequestExt() = default ;
    TermQueryRequestExt& operator=(const TermQueryRequestExt &) = default ;
    TermQueryRequestExt& operator=(TermQueryRequestExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramMap_ == nullptr; };
    // paramMap Field Functions 
    bool hasParamMap() const { return this->paramMap_ != nullptr;};
    void deleteParamMap() { this->paramMap_ = nullptr;};
    inline     const Darabonba::Json & paramMap() const { DARABONBA_GET(paramMap_) };
    Darabonba::Json & paramMap() { DARABONBA_GET(paramMap_) };
    inline TermQueryRequestExt& setParamMap(const Darabonba::Json & paramMap) { DARABONBA_SET_VALUE(paramMap_, paramMap) };
    inline TermQueryRequestExt& setParamMap(Darabonba::Json & paramMap) { DARABONBA_SET_RVALUE(paramMap_, paramMap) };


  protected:
    Darabonba::Json paramMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
