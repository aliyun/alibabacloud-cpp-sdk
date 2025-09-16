// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHDOCUMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class PushDocumentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDocumentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(pkField, pkField_);
    };
    friend void from_json(const Darabonba::Json& j, PushDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(pkField, pkField_);
    };
    PushDocumentsRequest() = default ;
    PushDocumentsRequest(const PushDocumentsRequest &) = default ;
    PushDocumentsRequest(PushDocumentsRequest &&) = default ;
    PushDocumentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDocumentsRequest() = default ;
    PushDocumentsRequest& operator=(const PushDocumentsRequest &) = default ;
    PushDocumentsRequest& operator=(PushDocumentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->pkField_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<Darabonba::Json> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> body() { DARABONBA_PTR_GET(body_, vector<Darabonba::Json>) };
    inline PushDocumentsRequest& setBody(const vector<Darabonba::Json> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PushDocumentsRequest& setBody(vector<Darabonba::Json> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // pkField Field Functions 
    bool hasPkField() const { return this->pkField_ != nullptr;};
    void deletePkField() { this->pkField_ = nullptr;};
    inline string pkField() const { DARABONBA_PTR_GET_DEFAULT(pkField_, "") };
    inline PushDocumentsRequest& setPkField(string pkField) { DARABONBA_PTR_SET_VALUE(pkField_, pkField) };


  protected:
    // The request body.
    std::shared_ptr<vector<Darabonba::Json>> body_ = nullptr;
    // The primary key field.
    std::shared_ptr<string> pkField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
