// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCHILDDIVISIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCHILDDIVISIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DivisionQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class QueryChildDivisionCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryChildDivisionCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryChildDivisionCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryChildDivisionCodeRequest() = default ;
    QueryChildDivisionCodeRequest(const QueryChildDivisionCodeRequest &) = default ;
    QueryChildDivisionCodeRequest(QueryChildDivisionCodeRequest &&) = default ;
    QueryChildDivisionCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryChildDivisionCodeRequest() = default ;
    QueryChildDivisionCodeRequest& operator=(const QueryChildDivisionCodeRequest &) = default ;
    QueryChildDivisionCodeRequest& operator=(QueryChildDivisionCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DivisionQuery & getBody() const { DARABONBA_PTR_GET_CONST(body_, DivisionQuery) };
    inline DivisionQuery getBody() { DARABONBA_PTR_GET(body_, DivisionQuery) };
    inline QueryChildDivisionCodeRequest& setBody(const DivisionQuery & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryChildDivisionCodeRequest& setBody(DivisionQuery && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<DivisionQuery> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
