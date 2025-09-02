// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceAmountResponseBodyInstanceCounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListInstanceAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCounts, instanceCounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCounts, instanceCounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstanceAmountResponseBody() = default ;
    ListInstanceAmountResponseBody(const ListInstanceAmountResponseBody &) = default ;
    ListInstanceAmountResponseBody(ListInstanceAmountResponseBody &&) = default ;
    ListInstanceAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAmountResponseBody() = default ;
    ListInstanceAmountResponseBody& operator=(const ListInstanceAmountResponseBody &) = default ;
    ListInstanceAmountResponseBody& operator=(ListInstanceAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceCounts_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceCounts Field Functions 
    bool hasInstanceCounts() const { return this->instanceCounts_ != nullptr;};
    void deleteInstanceCounts() { this->instanceCounts_ = nullptr;};
    inline const vector<ListInstanceAmountResponseBodyInstanceCounts> & instanceCounts() const { DARABONBA_PTR_GET_CONST(instanceCounts_, vector<ListInstanceAmountResponseBodyInstanceCounts>) };
    inline vector<ListInstanceAmountResponseBodyInstanceCounts> instanceCounts() { DARABONBA_PTR_GET(instanceCounts_, vector<ListInstanceAmountResponseBodyInstanceCounts>) };
    inline ListInstanceAmountResponseBody& setInstanceCounts(const vector<ListInstanceAmountResponseBodyInstanceCounts> & instanceCounts) { DARABONBA_PTR_SET_VALUE(instanceCounts_, instanceCounts) };
    inline ListInstanceAmountResponseBody& setInstanceCounts(vector<ListInstanceAmountResponseBodyInstanceCounts> && instanceCounts) { DARABONBA_PTR_SET_RVALUE(instanceCounts_, instanceCounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The trend of the number of auto triggered node instances within the specified period of time.
    std::shared_ptr<vector<ListInstanceAmountResponseBodyInstanceCounts>> instanceCounts_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
