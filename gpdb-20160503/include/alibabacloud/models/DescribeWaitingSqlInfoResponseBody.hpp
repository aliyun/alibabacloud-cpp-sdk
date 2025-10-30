// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWaitingSQLInfoResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeWaitingSQLInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWaitingSQLInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWaitingSQLInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWaitingSQLInfoResponseBody() = default ;
    DescribeWaitingSQLInfoResponseBody(const DescribeWaitingSQLInfoResponseBody &) = default ;
    DescribeWaitingSQLInfoResponseBody(DescribeWaitingSQLInfoResponseBody &&) = default ;
    DescribeWaitingSQLInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWaitingSQLInfoResponseBody() = default ;
    DescribeWaitingSQLInfoResponseBody& operator=(const DescribeWaitingSQLInfoResponseBody &) = default ;
    DescribeWaitingSQLInfoResponseBody& operator=(DescribeWaitingSQLInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr
        && return this->items_ == nullptr && return this->requestId_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeWaitingSQLInfoResponseBody& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeWaitingSQLInfoResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeWaitingSQLInfoResponseBodyItems>) };
    inline vector<DescribeWaitingSQLInfoResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeWaitingSQLInfoResponseBodyItems>) };
    inline DescribeWaitingSQLInfoResponseBody& setItems(const vector<DescribeWaitingSQLInfoResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeWaitingSQLInfoResponseBody& setItems(vector<DescribeWaitingSQLInfoResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWaitingSQLInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The queried lock-waiting query.
    std::shared_ptr<vector<DescribeWaitingSQLInfoResponseBodyItems>> items_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
