// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEABMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEABMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateABMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateABMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ABMetricId, ABMetricId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateABMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ABMetricId, ABMetricId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateABMetricResponseBody() = default ;
    CreateABMetricResponseBody(const CreateABMetricResponseBody &) = default ;
    CreateABMetricResponseBody(CreateABMetricResponseBody &&) = default ;
    CreateABMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateABMetricResponseBody() = default ;
    CreateABMetricResponseBody& operator=(const CreateABMetricResponseBody &) = default ;
    CreateABMetricResponseBody& operator=(CreateABMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ABMetricId_ == nullptr
        && this->requestId_ == nullptr; };
    // ABMetricId Field Functions 
    bool hasABMetricId() const { return this->ABMetricId_ != nullptr;};
    void deleteABMetricId() { this->ABMetricId_ = nullptr;};
    inline string getABMetricId() const { DARABONBA_PTR_GET_DEFAULT(ABMetricId_, "") };
    inline CreateABMetricResponseBody& setABMetricId(string ABMetricId) { DARABONBA_PTR_SET_VALUE(ABMetricId_, ABMetricId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateABMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> ABMetricId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
