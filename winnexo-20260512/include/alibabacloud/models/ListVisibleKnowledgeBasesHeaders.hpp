// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVISIBLEKNOWLEDGEBASESHEADERS_HPP_
#define ALIBABACLOUD_MODELS_LISTVISIBLEKNOWLEDGEBASESHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListVisibleKnowledgeBasesHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVisibleKnowledgeBasesHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVisibleKnowledgeBasesHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListVisibleKnowledgeBasesHeaders() = default ;
    ListVisibleKnowledgeBasesHeaders(const ListVisibleKnowledgeBasesHeaders &) = default ;
    ListVisibleKnowledgeBasesHeaders(ListVisibleKnowledgeBasesHeaders &&) = default ;
    ListVisibleKnowledgeBasesHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVisibleKnowledgeBasesHeaders() = default ;
    ListVisibleKnowledgeBasesHeaders& operator=(const ListVisibleKnowledgeBasesHeaders &) = default ;
    ListVisibleKnowledgeBasesHeaders& operator=(ListVisibleKnowledgeBasesHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->requestId_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline ListVisibleKnowledgeBasesHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline ListVisibleKnowledgeBasesHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVisibleKnowledgeBasesHeaders& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
