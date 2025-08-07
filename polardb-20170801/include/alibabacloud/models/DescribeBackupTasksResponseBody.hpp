// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupTasksResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupTasksResponseBody() = default ;
    DescribeBackupTasksResponseBody(const DescribeBackupTasksResponseBody &) = default ;
    DescribeBackupTasksResponseBody(DescribeBackupTasksResponseBody &&) = default ;
    DescribeBackupTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupTasksResponseBody() = default ;
    DescribeBackupTasksResponseBody& operator=(const DescribeBackupTasksResponseBody &) = default ;
    DescribeBackupTasksResponseBody& operator=(DescribeBackupTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->requestId_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeBackupTasksResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeBackupTasksResponseBodyItems) };
    inline DescribeBackupTasksResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeBackupTasksResponseBodyItems) };
    inline DescribeBackupTasksResponseBody& setItems(const DescribeBackupTasksResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBackupTasksResponseBody& setItems(DescribeBackupTasksResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the backup task.
    std::shared_ptr<DescribeBackupTasksResponseBodyItems> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
