// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSRESPONSEBODYAPIMCPSERVERSURLS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSRESPONSEBODYAPIMCPSERVERSURLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ListApiMcpServersResponseBodyApiMcpServersUrls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiMcpServersResponseBodyApiMcpServersUrls& obj) { 
      DARABONBA_PTR_TO_JSON(mcp, mcp_);
      DARABONBA_PTR_TO_JSON(sse, sse_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiMcpServersResponseBodyApiMcpServersUrls& obj) { 
      DARABONBA_PTR_FROM_JSON(mcp, mcp_);
      DARABONBA_PTR_FROM_JSON(sse, sse_);
    };
    ListApiMcpServersResponseBodyApiMcpServersUrls() = default ;
    ListApiMcpServersResponseBodyApiMcpServersUrls(const ListApiMcpServersResponseBodyApiMcpServersUrls &) = default ;
    ListApiMcpServersResponseBodyApiMcpServersUrls(ListApiMcpServersResponseBodyApiMcpServersUrls &&) = default ;
    ListApiMcpServersResponseBodyApiMcpServersUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiMcpServersResponseBodyApiMcpServersUrls() = default ;
    ListApiMcpServersResponseBodyApiMcpServersUrls& operator=(const ListApiMcpServersResponseBodyApiMcpServersUrls &) = default ;
    ListApiMcpServersResponseBodyApiMcpServersUrls& operator=(ListApiMcpServersResponseBodyApiMcpServersUrls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mcp_ == nullptr
        && return this->sse_ == nullptr; };
    // mcp Field Functions 
    bool hasMcp() const { return this->mcp_ != nullptr;};
    void deleteMcp() { this->mcp_ = nullptr;};
    inline string mcp() const { DARABONBA_PTR_GET_DEFAULT(mcp_, "") };
    inline ListApiMcpServersResponseBodyApiMcpServersUrls& setMcp(string mcp) { DARABONBA_PTR_SET_VALUE(mcp_, mcp) };


    // sse Field Functions 
    bool hasSse() const { return this->sse_ != nullptr;};
    void deleteSse() { this->sse_ = nullptr;};
    inline string sse() const { DARABONBA_PTR_GET_DEFAULT(sse_, "") };
    inline ListApiMcpServersResponseBodyApiMcpServersUrls& setSse(string sse) { DARABONBA_PTR_SET_VALUE(sse_, sse) };


  protected:
    std::shared_ptr<string> mcp_ = nullptr;
    std::shared_ptr<string> sse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
