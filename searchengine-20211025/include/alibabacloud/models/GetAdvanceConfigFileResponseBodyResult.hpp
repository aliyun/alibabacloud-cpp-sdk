// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADVANCECONFIGFILERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETADVANCECONFIGFILERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetAdvanceConfigFileResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdvanceConfigFileResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdvanceConfigFileResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
    };
    GetAdvanceConfigFileResponseBodyResult() = default ;
    GetAdvanceConfigFileResponseBodyResult(const GetAdvanceConfigFileResponseBodyResult &) = default ;
    GetAdvanceConfigFileResponseBodyResult(GetAdvanceConfigFileResponseBodyResult &&) = default ;
    GetAdvanceConfigFileResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdvanceConfigFileResponseBodyResult() = default ;
    GetAdvanceConfigFileResponseBodyResult& operator=(const GetAdvanceConfigFileResponseBodyResult &) = default ;
    GetAdvanceConfigFileResponseBodyResult& operator=(GetAdvanceConfigFileResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetAdvanceConfigFileResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    // The file content.
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
