// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATEDDESKTOPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATEDDESKTOPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetAggregatedDesktopsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregatedDesktopsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregations, aggregations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregatedDesktopsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregations, aggregations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregatedDesktopsResponseBody() = default ;
    GetAggregatedDesktopsResponseBody(const GetAggregatedDesktopsResponseBody &) = default ;
    GetAggregatedDesktopsResponseBody(GetAggregatedDesktopsResponseBody &&) = default ;
    GetAggregatedDesktopsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregatedDesktopsResponseBody() = default ;
    GetAggregatedDesktopsResponseBody& operator=(const GetAggregatedDesktopsResponseBody &) = default ;
    GetAggregatedDesktopsResponseBody& operator=(GetAggregatedDesktopsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Aggregations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Aggregations& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopAggregation, desktopAggregation_);
      };
      friend void from_json(const Darabonba::Json& j, Aggregations& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopAggregation, desktopAggregation_);
      };
      Aggregations() = default ;
      Aggregations(const Aggregations &) = default ;
      Aggregations(Aggregations &&) = default ;
      Aggregations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Aggregations() = default ;
      Aggregations& operator=(const Aggregations &) = default ;
      Aggregations& operator=(Aggregations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desktopAggregation_ == nullptr; };
      // desktopAggregation Field Functions 
      bool hasDesktopAggregation() const { return this->desktopAggregation_ != nullptr;};
      void deleteDesktopAggregation() { this->desktopAggregation_ = nullptr;};
      inline const vector<map<string, string>> & getDesktopAggregation() const { DARABONBA_PTR_GET_CONST(desktopAggregation_, vector<map<string, string>>) };
      inline vector<map<string, string>> getDesktopAggregation() { DARABONBA_PTR_GET(desktopAggregation_, vector<map<string, string>>) };
      inline Aggregations& setDesktopAggregation(const vector<map<string, string>> & desktopAggregation) { DARABONBA_PTR_SET_VALUE(desktopAggregation_, desktopAggregation) };
      inline Aggregations& setDesktopAggregation(vector<map<string, string>> && desktopAggregation) { DARABONBA_PTR_SET_RVALUE(desktopAggregation_, desktopAggregation) };


    protected:
      // The aggregation results.
      shared_ptr<vector<map<string, string>>> desktopAggregation_ {};
    };

    virtual bool empty() const override { return this->aggregations_ == nullptr
        && this->requestId_ == nullptr; };
    // aggregations Field Functions 
    bool hasAggregations() const { return this->aggregations_ != nullptr;};
    void deleteAggregations() { this->aggregations_ = nullptr;};
    inline const GetAggregatedDesktopsResponseBody::Aggregations & getAggregations() const { DARABONBA_PTR_GET_CONST(aggregations_, GetAggregatedDesktopsResponseBody::Aggregations) };
    inline GetAggregatedDesktopsResponseBody::Aggregations getAggregations() { DARABONBA_PTR_GET(aggregations_, GetAggregatedDesktopsResponseBody::Aggregations) };
    inline GetAggregatedDesktopsResponseBody& setAggregations(const GetAggregatedDesktopsResponseBody::Aggregations & aggregations) { DARABONBA_PTR_SET_VALUE(aggregations_, aggregations) };
    inline GetAggregatedDesktopsResponseBody& setAggregations(GetAggregatedDesktopsResponseBody::Aggregations && aggregations) { DARABONBA_PTR_SET_RVALUE(aggregations_, aggregations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregatedDesktopsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of aggregation field information.
    // >Notice: When you use an aggregate query, only aggregation results are returned. The list of matched metadata is not returned.
    shared_ptr<GetAggregatedDesktopsResponseBody::Aggregations> aggregations_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
