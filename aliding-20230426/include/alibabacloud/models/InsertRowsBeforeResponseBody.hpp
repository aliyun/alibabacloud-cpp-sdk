// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTROWSBEFORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSERTROWSBEFORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertRowsBeforeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertRowsBeforeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertRowsBeforeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    InsertRowsBeforeResponseBody() = default ;
    InsertRowsBeforeResponseBody(const InsertRowsBeforeResponseBody &) = default ;
    InsertRowsBeforeResponseBody(InsertRowsBeforeResponseBody &&) = default ;
    InsertRowsBeforeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertRowsBeforeResponseBody() = default ;
    InsertRowsBeforeResponseBody& operator=(const InsertRowsBeforeResponseBody &) = default ;
    InsertRowsBeforeResponseBody& operator=(InsertRowsBeforeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->requestId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline InsertRowsBeforeResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsertRowsBeforeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> id_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
