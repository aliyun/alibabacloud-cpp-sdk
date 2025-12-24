// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTREEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTREEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class QueryTreeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTreeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTreeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryTreeDataResponseBody() = default ;
    QueryTreeDataResponseBody(const QueryTreeDataResponseBody &) = default ;
    QueryTreeDataResponseBody(QueryTreeDataResponseBody &&) = default ;
    QueryTreeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTreeDataResponseBody() = default ;
    QueryTreeDataResponseBody& operator=(const QueryTreeDataResponseBody &) = default ;
    QueryTreeDataResponseBody& operator=(QueryTreeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playbooks_ == nullptr
        && return this->requestId_ == nullptr; };
    // playbooks Field Functions 
    bool hasPlaybooks() const { return this->playbooks_ != nullptr;};
    void deletePlaybooks() { this->playbooks_ = nullptr;};
    inline string playbooks() const { DARABONBA_PTR_GET_DEFAULT(playbooks_, "") };
    inline QueryTreeDataResponseBody& setPlaybooks(string playbooks) { DARABONBA_PTR_SET_VALUE(playbooks_, playbooks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTreeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about the playbook. The value is a JSON string.
    std::shared_ptr<string> playbooks_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
