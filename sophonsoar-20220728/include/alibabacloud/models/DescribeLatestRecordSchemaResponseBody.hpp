// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELATESTRECORDSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELATESTRECORDSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeLatestRecordSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLatestRecordSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlaybookNodeSchema, playbookNodeSchema_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLatestRecordSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlaybookNodeSchema, playbookNodeSchema_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLatestRecordSchemaResponseBody() = default ;
    DescribeLatestRecordSchemaResponseBody(const DescribeLatestRecordSchemaResponseBody &) = default ;
    DescribeLatestRecordSchemaResponseBody(DescribeLatestRecordSchemaResponseBody &&) = default ;
    DescribeLatestRecordSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLatestRecordSchemaResponseBody() = default ;
    DescribeLatestRecordSchemaResponseBody& operator=(const DescribeLatestRecordSchemaResponseBody &) = default ;
    DescribeLatestRecordSchemaResponseBody& operator=(DescribeLatestRecordSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playbookNodeSchema_ == nullptr
        && return this->requestId_ == nullptr; };
    // playbookNodeSchema Field Functions 
    bool hasPlaybookNodeSchema() const { return this->playbookNodeSchema_ != nullptr;};
    void deletePlaybookNodeSchema() { this->playbookNodeSchema_ = nullptr;};
    inline const DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema & playbookNodeSchema() const { DARABONBA_PTR_GET_CONST(playbookNodeSchema_, DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema) };
    inline DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema playbookNodeSchema() { DARABONBA_PTR_GET(playbookNodeSchema_, DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema) };
    inline DescribeLatestRecordSchemaResponseBody& setPlaybookNodeSchema(const DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema & playbookNodeSchema) { DARABONBA_PTR_SET_VALUE(playbookNodeSchema_, playbookNodeSchema) };
    inline DescribeLatestRecordSchemaResponseBody& setPlaybookNodeSchema(DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema && playbookNodeSchema) { DARABONBA_PTR_SET_RVALUE(playbookNodeSchema_, playbookNodeSchema) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLatestRecordSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The output structure information of the playbook.
    std::shared_ptr<DescribeLatestRecordSchemaResponseBodyPlaybookNodeSchema> playbookNodeSchema_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
