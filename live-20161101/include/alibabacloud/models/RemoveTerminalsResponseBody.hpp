// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETERMINALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVETERMINALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveTerminalsResponseBodyTerminals.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class RemoveTerminalsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTerminalsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Terminals, terminals_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTerminalsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Terminals, terminals_);
    };
    RemoveTerminalsResponseBody() = default ;
    RemoveTerminalsResponseBody(const RemoveTerminalsResponseBody &) = default ;
    RemoveTerminalsResponseBody(RemoveTerminalsResponseBody &&) = default ;
    RemoveTerminalsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTerminalsResponseBody() = default ;
    RemoveTerminalsResponseBody& operator=(const RemoveTerminalsResponseBody &) = default ;
    RemoveTerminalsResponseBody& operator=(RemoveTerminalsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->terminals_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveTerminalsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // terminals Field Functions 
    bool hasTerminals() const { return this->terminals_ != nullptr;};
    void deleteTerminals() { this->terminals_ = nullptr;};
    inline const vector<RemoveTerminalsResponseBodyTerminals> & terminals() const { DARABONBA_PTR_GET_CONST(terminals_, vector<RemoveTerminalsResponseBodyTerminals>) };
    inline vector<RemoveTerminalsResponseBodyTerminals> terminals() { DARABONBA_PTR_GET(terminals_, vector<RemoveTerminalsResponseBodyTerminals>) };
    inline RemoveTerminalsResponseBody& setTerminals(const vector<RemoveTerminalsResponseBodyTerminals> & terminals) { DARABONBA_PTR_SET_VALUE(terminals_, terminals) };
    inline RemoveTerminalsResponseBody& setTerminals(vector<RemoveTerminalsResponseBodyTerminals> && terminals) { DARABONBA_PTR_SET_RVALUE(terminals_, terminals) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the users.
    std::shared_ptr<vector<RemoveTerminalsResponseBodyTerminals>> terminals_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
