// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCPARSINGRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCPARSINGRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocParsingResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocParsingResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocParsingResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
    };
    GetDocParsingResultResponseBodyData() = default ;
    GetDocParsingResultResponseBodyData(const GetDocParsingResultResponseBodyData &) = default ;
    GetDocParsingResultResponseBodyData(GetDocParsingResultResponseBodyData &&) = default ;
    GetDocParsingResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocParsingResultResponseBodyData() = default ;
    GetDocParsingResultResponseBodyData& operator=(const GetDocParsingResultResponseBodyData &) = default ;
    GetDocParsingResultResponseBodyData& operator=(GetDocParsingResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetDocParsingResultResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    // - The parsed content of the document.
    // - The format (markdown or json) is determined by the returnFormat parameter. For specific format details, refer to: [json return structure](https://www.alibabacloud.com/help/en/energy-expert/developer-reference/interface-attached-information#b644b6255cojj)
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
