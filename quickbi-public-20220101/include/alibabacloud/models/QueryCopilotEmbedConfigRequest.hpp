// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOPILOTEMBEDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOPILOTEMBEDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryCopilotEmbedConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCopilotEmbedConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCopilotEmbedConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
    };
    QueryCopilotEmbedConfigRequest() = default ;
    QueryCopilotEmbedConfigRequest(const QueryCopilotEmbedConfigRequest &) = default ;
    QueryCopilotEmbedConfigRequest(QueryCopilotEmbedConfigRequest &&) = default ;
    QueryCopilotEmbedConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCopilotEmbedConfigRequest() = default ;
    QueryCopilotEmbedConfigRequest& operator=(const QueryCopilotEmbedConfigRequest &) = default ;
    QueryCopilotEmbedConfigRequest& operator=(QueryCopilotEmbedConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline QueryCopilotEmbedConfigRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


  protected:
    // Name of the embedded configuration module, supports fuzzy search.
    std::shared_ptr<string> keyword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
