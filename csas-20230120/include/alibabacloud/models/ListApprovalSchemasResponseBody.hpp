// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApprovalSchemasResponseBodySchemas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApprovalSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListApprovalSchemasResponseBody() = default ;
    ListApprovalSchemasResponseBody(const ListApprovalSchemasResponseBody &) = default ;
    ListApprovalSchemasResponseBody(ListApprovalSchemasResponseBody &&) = default ;
    ListApprovalSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalSchemasResponseBody() = default ;
    ListApprovalSchemasResponseBody& operator=(const ListApprovalSchemasResponseBody &) = default ;
    ListApprovalSchemasResponseBody& operator=(ListApprovalSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->schemas_ == nullptr && return this->totalNum_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApprovalSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<ListApprovalSchemasResponseBodySchemas> & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<ListApprovalSchemasResponseBodySchemas>) };
    inline vector<ListApprovalSchemasResponseBodySchemas> schemas() { DARABONBA_PTR_GET(schemas_, vector<ListApprovalSchemasResponseBodySchemas>) };
    inline ListApprovalSchemasResponseBody& setSchemas(const vector<ListApprovalSchemasResponseBodySchemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline ListApprovalSchemasResponseBody& setSchemas(vector<ListApprovalSchemasResponseBodySchemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline ListApprovalSchemasResponseBody& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListApprovalSchemasResponseBodySchemas>> schemas_ = nullptr;
    std::shared_ptr<string> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
