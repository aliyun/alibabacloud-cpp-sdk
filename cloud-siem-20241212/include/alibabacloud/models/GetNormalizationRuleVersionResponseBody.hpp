// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNORMALIZATIONRULEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNORMALIZATIONRULEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetNormalizationRuleVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNormalizationRuleVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNormalizationRuleVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNormalizationRuleVersionResponseBody() = default ;
    GetNormalizationRuleVersionResponseBody(const GetNormalizationRuleVersionResponseBody &) = default ;
    GetNormalizationRuleVersionResponseBody(GetNormalizationRuleVersionResponseBody &&) = default ;
    GetNormalizationRuleVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNormalizationRuleVersionResponseBody() = default ;
    GetNormalizationRuleVersionResponseBody& operator=(const GetNormalizationRuleVersionResponseBody &) = default ;
    GetNormalizationRuleVersionResponseBody& operator=(GetNormalizationRuleVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->normalizationRuleVersion_ == nullptr
        && return this->requestId_ == nullptr; };
    // normalizationRuleVersion Field Functions 
    bool hasNormalizationRuleVersion() const { return this->normalizationRuleVersion_ != nullptr;};
    void deleteNormalizationRuleVersion() { this->normalizationRuleVersion_ = nullptr;};
    inline const GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion & normalizationRuleVersion() const { DARABONBA_PTR_GET_CONST(normalizationRuleVersion_, GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion) };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion normalizationRuleVersion() { DARABONBA_PTR_GET(normalizationRuleVersion_, GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion) };
    inline GetNormalizationRuleVersionResponseBody& setNormalizationRuleVersion(const GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion & normalizationRuleVersion) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersion_, normalizationRuleVersion) };
    inline GetNormalizationRuleVersionResponseBody& setNormalizationRuleVersion(GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion && normalizationRuleVersion) { DARABONBA_PTR_SET_RVALUE(normalizationRuleVersion_, normalizationRuleVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNormalizationRuleVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion> normalizationRuleVersion_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
