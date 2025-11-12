// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHYPERNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEHYPERNODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DeleteHyperNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHyperNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHyperNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteHyperNodeResponseBody() = default ;
    DeleteHyperNodeResponseBody(const DeleteHyperNodeResponseBody &) = default ;
    DeleteHyperNodeResponseBody(DeleteHyperNodeResponseBody &&) = default ;
    DeleteHyperNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHyperNodeResponseBody() = default ;
    DeleteHyperNodeResponseBody& operator=(const DeleteHyperNodeResponseBody &) = default ;
    DeleteHyperNodeResponseBody& operator=(DeleteHyperNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteHyperNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
