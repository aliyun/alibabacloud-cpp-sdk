// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTFACTORYBASELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTFACTORYBASELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class CreateAccountFactoryBaselineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountFactoryBaselineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountFactoryBaselineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAccountFactoryBaselineResponseBody() = default ;
    CreateAccountFactoryBaselineResponseBody(const CreateAccountFactoryBaselineResponseBody &) = default ;
    CreateAccountFactoryBaselineResponseBody(CreateAccountFactoryBaselineResponseBody &&) = default ;
    CreateAccountFactoryBaselineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountFactoryBaselineResponseBody() = default ;
    CreateAccountFactoryBaselineResponseBody& operator=(const CreateAccountFactoryBaselineResponseBody &) = default ;
    CreateAccountFactoryBaselineResponseBody& operator=(CreateAccountFactoryBaselineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineId_ == nullptr
        && return this->requestId_ == nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline CreateAccountFactoryBaselineResponseBody& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAccountFactoryBaselineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The baseline ID.
    std::shared_ptr<string> baselineId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
