// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVAILABLEPARSERTYPESRESPONSEBODYDATAPARSERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAVAILABLEPARSERTYPESRESPONSEBODYDATAPARSERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetAvailableParserTypesResponseBodyDataParserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvailableParserTypesResponseBodyDataParserList& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvailableParserTypesResponseBodyDataParserList& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
    };
    GetAvailableParserTypesResponseBodyDataParserList() = default ;
    GetAvailableParserTypesResponseBodyDataParserList(const GetAvailableParserTypesResponseBodyDataParserList &) = default ;
    GetAvailableParserTypesResponseBodyDataParserList(GetAvailableParserTypesResponseBodyDataParserList &&) = default ;
    GetAvailableParserTypesResponseBodyDataParserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvailableParserTypesResponseBodyDataParserList() = default ;
    GetAvailableParserTypesResponseBodyDataParserList& operator=(const GetAvailableParserTypesResponseBodyDataParserList &) = default ;
    GetAvailableParserTypesResponseBodyDataParserList& operator=(GetAvailableParserTypesResponseBodyDataParserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->parser_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetAvailableParserTypesResponseBodyDataParserList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string parser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline GetAvailableParserTypesResponseBodyDataParserList& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


  protected:
    // The display name of the parsing method.
    std::shared_ptr<string> displayName_ = nullptr;
    // The parser code. Valid values:
    // 
    // *   DOCMIND (Intelligent parsing)
    // *   DOCMIND_DIGITAL (Digital parsing)
    // *   DOCMIND_LLM_VERSION (LLM parsing)
    // *   DASH_QWEN_VL_PARSER (Qwen VL parsing)
    std::shared_ptr<string> parser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
