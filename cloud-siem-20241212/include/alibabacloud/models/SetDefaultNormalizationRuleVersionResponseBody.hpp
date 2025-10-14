// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEFAULTNORMALIZATIONRULEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETDEFAULTNORMALIZATIONRULEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetDefaultNormalizationRuleVersionResponseBodyNormalizationRuleVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class SetDefaultNormalizationRuleVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDefaultNormalizationRuleVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDefaultNormalizationRuleVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetDefaultNormalizationRuleVersionResponseBody() = default ;
    SetDefaultNormalizationRuleVersionResponseBody(const SetDefaultNormalizationRuleVersionResponseBody &) = default ;
    SetDefaultNormalizationRuleVersionResponseBody(SetDefaultNormalizationRuleVersionResponseBody &&) = default ;
    SetDefaultNormalizationRuleVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDefaultNormalizationRuleVersionResponseBody() = default ;
    SetDefaultNormalizationRuleVersionResponseBody& operator=(const SetDefaultNormalizationRuleVersionResponseBody &) = default ;
    SetDefaultNormalizationRuleVersionResponseBody& operator=(SetDefaultNormalizationRuleVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->normalizationRuleVersion_ == nullptr
        && return this->requestId_ == nullptr; };
    // normalizationRuleVersion Field Functions 
    bool hasNormalizationRuleVersion() const { return this->normalizationRuleVersion_ != nullptr;};
    void deleteNormalizationRuleVersion() { this->normalizationRuleVersion_ = nullptr;};
    inline const SetDefaultNormalizationRuleVersionResponseBodyNormalizationRuleVersion & normalizationRuleVersion() const { DARABONBA_PTR_GET_CONST(normalizationRuleVersion_, SetDefaultNormalizationRuleVersionResponseBodyNormalizationRuleVersion) };
    inline SetDefaultNormalizationRuleVersionResponseBodyNormalizationRuleVersion normalizationRuleVersion() { DARABONBA_PTR_GET(normalizationRuleVersion_, SetDefaultNormalizationRuleVersionResponseBodyNormalizationRuleVersion) };
    inline SetDefaultNormalizationRuleVersionResponseBody& setNormalizationRuleVersion(const SetDefaultNormalizationRuleVersionResponseBodyNormalizationRuleVersion & normalizationRuleVersion) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersion_, normalizationRuleVersion) };
    inline SetDefaultNormalizationRuleVersionResponseBody& setNormalizationRuleVersion(SetDefaultNormalizationRuleVersionResponseBodyNormalizationRuleVersion && normalizationRuleVersion) { DARABONBA_PTR_SET_RVALUE(normalizationRuleVersion_, normalizationRuleVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetDefaultNormalizationRuleVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<SetDefaultNormalizationRuleVersionResponseBodyNormalizationRuleVersion> normalizationRuleVersion_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
