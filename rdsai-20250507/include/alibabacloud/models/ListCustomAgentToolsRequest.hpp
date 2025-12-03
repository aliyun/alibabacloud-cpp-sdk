// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTTOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTTOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListCustomAgentToolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentToolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAgentToolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
    };
    ListCustomAgentToolsRequest() = default ;
    ListCustomAgentToolsRequest(const ListCustomAgentToolsRequest &) = default ;
    ListCustomAgentToolsRequest(ListCustomAgentToolsRequest &&) = default ;
    ListCustomAgentToolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentToolsRequest() = default ;
    ListCustomAgentToolsRequest& operator=(const ListCustomAgentToolsRequest &) = default ;
    ListCustomAgentToolsRequest& operator=(ListCustomAgentToolsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline ListCustomAgentToolsRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


  protected:
    std::shared_ptr<string> apiId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
