// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINEIDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINEIDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListPipelineIdsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineIdsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineIdsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListPipelineIdsRequest() = default ;
    ListPipelineIdsRequest(const ListPipelineIdsRequest &) = default ;
    ListPipelineIdsRequest(ListPipelineIdsRequest &&) = default ;
    ListPipelineIdsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineIdsRequest() = default ;
    ListPipelineIdsRequest& operator=(const ListPipelineIdsRequest &) = default ;
    ListPipelineIdsRequest& operator=(ListPipelineIdsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline ListPipelineIdsRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    shared_ptr<string> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
