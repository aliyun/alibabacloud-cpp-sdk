// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINEAGERELATIONSHIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINEAGERELATIONSHIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LineageRelationship.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetLineageRelationshipResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLineageRelationshipResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LineageRelationship, lineageRelationship_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLineageRelationshipResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LineageRelationship, lineageRelationship_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLineageRelationshipResponseBody() = default ;
    GetLineageRelationshipResponseBody(const GetLineageRelationshipResponseBody &) = default ;
    GetLineageRelationshipResponseBody(GetLineageRelationshipResponseBody &&) = default ;
    GetLineageRelationshipResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLineageRelationshipResponseBody() = default ;
    GetLineageRelationshipResponseBody& operator=(const GetLineageRelationshipResponseBody &) = default ;
    GetLineageRelationshipResponseBody& operator=(GetLineageRelationshipResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lineageRelationship_ == nullptr
        && return this->requestId_ == nullptr; };
    // lineageRelationship Field Functions 
    bool hasLineageRelationship() const { return this->lineageRelationship_ != nullptr;};
    void deleteLineageRelationship() { this->lineageRelationship_ = nullptr;};
    inline const LineageRelationship & lineageRelationship() const { DARABONBA_PTR_GET_CONST(lineageRelationship_, LineageRelationship) };
    inline LineageRelationship lineageRelationship() { DARABONBA_PTR_GET(lineageRelationship_, LineageRelationship) };
    inline GetLineageRelationshipResponseBody& setLineageRelationship(const LineageRelationship & lineageRelationship) { DARABONBA_PTR_SET_VALUE(lineageRelationship_, lineageRelationship) };
    inline GetLineageRelationshipResponseBody& setLineageRelationship(LineageRelationship && lineageRelationship) { DARABONBA_PTR_SET_RVALUE(lineageRelationship_, lineageRelationship) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLineageRelationshipResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The lineage structure.
    std::shared_ptr<LineageRelationship> lineageRelationship_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
