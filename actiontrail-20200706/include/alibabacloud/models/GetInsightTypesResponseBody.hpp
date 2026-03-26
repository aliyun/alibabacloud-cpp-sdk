// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSIGHTTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSIGHTTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetInsightTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInsightTypesResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(InsightTypes, insightTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInsightTypesResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(InsightTypes, insightTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInsightTypesResponseBody() = default ;
    GetInsightTypesResponseBody(const GetInsightTypesResponseBody &) = default ;
    GetInsightTypesResponseBody(GetInsightTypesResponseBody &&) = default ;
    GetInsightTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInsightTypesResponseBody() = default ;
    GetInsightTypesResponseBody& operator=(const GetInsightTypesResponseBody &) = default ;
    GetInsightTypesResponseBody& operator=(GetInsightTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->insightTypes_ == nullptr
        && this->requestId_ == nullptr; };
    // insightTypes Field Functions 
    bool hasInsightTypes() const { return this->insightTypes_ != nullptr;};
    void deleteInsightTypes() { this->insightTypes_ = nullptr;};
    inline     const Darabonba::Json & getInsightTypes() const { DARABONBA_GET(insightTypes_) };
    Darabonba::Json & getInsightTypes() { DARABONBA_GET(insightTypes_) };
    inline GetInsightTypesResponseBody& setInsightTypes(const Darabonba::Json & insightTypes) { DARABONBA_SET_VALUE(insightTypes_, insightTypes) };
    inline GetInsightTypesResponseBody& setInsightTypes(Darabonba::Json && insightTypes) { DARABONBA_SET_RVALUE(insightTypes_, insightTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInsightTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    Darabonba::Json insightTypes_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
