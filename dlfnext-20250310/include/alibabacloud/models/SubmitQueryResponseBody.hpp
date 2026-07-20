// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class SubmitQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(queryId, queryId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(queryId, queryId_);
    };
    SubmitQueryResponseBody() = default ;
    SubmitQueryResponseBody(const SubmitQueryResponseBody &) = default ;
    SubmitQueryResponseBody(SubmitQueryResponseBody &&) = default ;
    SubmitQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitQueryResponseBody() = default ;
    SubmitQueryResponseBody& operator=(const SubmitQueryResponseBody &) = default ;
    SubmitQueryResponseBody& operator=(SubmitQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryId_ == nullptr; };
    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline SubmitQueryResponseBody& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


  protected:
    shared_ptr<string> queryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
