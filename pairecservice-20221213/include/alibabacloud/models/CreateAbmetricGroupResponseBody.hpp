// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEABMETRICGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEABMETRICGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateABMetricGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateABMetricGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ABMetricGroupId, ABMetricGroupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateABMetricGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ABMetricGroupId, ABMetricGroupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateABMetricGroupResponseBody() = default ;
    CreateABMetricGroupResponseBody(const CreateABMetricGroupResponseBody &) = default ;
    CreateABMetricGroupResponseBody(CreateABMetricGroupResponseBody &&) = default ;
    CreateABMetricGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateABMetricGroupResponseBody() = default ;
    CreateABMetricGroupResponseBody& operator=(const CreateABMetricGroupResponseBody &) = default ;
    CreateABMetricGroupResponseBody& operator=(CreateABMetricGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ABMetricGroupId_ != nullptr
        && this->requestId_ != nullptr; };
    // ABMetricGroupId Field Functions 
    bool hasABMetricGroupId() const { return this->ABMetricGroupId_ != nullptr;};
    void deleteABMetricGroupId() { this->ABMetricGroupId_ = nullptr;};
    inline string ABMetricGroupId() const { DARABONBA_PTR_GET_DEFAULT(ABMetricGroupId_, "") };
    inline CreateABMetricGroupResponseBody& setABMetricGroupId(string ABMetricGroupId) { DARABONBA_PTR_SET_VALUE(ABMetricGroupId_, ABMetricGroupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateABMetricGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> ABMetricGroupId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
