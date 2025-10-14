// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENORMALIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENORMALIZATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateNormalizationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNormalizationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNormalizationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNormalizationRuleResponseBody() = default ;
    CreateNormalizationRuleResponseBody(const CreateNormalizationRuleResponseBody &) = default ;
    CreateNormalizationRuleResponseBody(CreateNormalizationRuleResponseBody &&) = default ;
    CreateNormalizationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNormalizationRuleResponseBody() = default ;
    CreateNormalizationRuleResponseBody& operator=(const CreateNormalizationRuleResponseBody &) = default ;
    CreateNormalizationRuleResponseBody& operator=(CreateNormalizationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->normalizationRuleId_ == nullptr
        && return this->requestId_ == nullptr; };
    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string normalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline CreateNormalizationRuleResponseBody& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNormalizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> normalizationRuleId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
