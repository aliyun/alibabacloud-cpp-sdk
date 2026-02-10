// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSAGETOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSAGETOPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyUsageTopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyUsageTopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ItemCount, itemCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopStatisticItems, topStatisticItems_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyUsageTopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemCount, itemCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopStatisticItems, topStatisticItems_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribePropertyUsageTopResponseBody() = default ;
    DescribePropertyUsageTopResponseBody(const DescribePropertyUsageTopResponseBody &) = default ;
    DescribePropertyUsageTopResponseBody(DescribePropertyUsageTopResponseBody &&) = default ;
    DescribePropertyUsageTopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyUsageTopResponseBody() = default ;
    DescribePropertyUsageTopResponseBody& operator=(const DescribePropertyUsageTopResponseBody &) = default ;
    DescribePropertyUsageTopResponseBody& operator=(DescribePropertyUsageTopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopStatisticItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopStatisticItems& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, TopStatisticItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      TopStatisticItems() = default ;
      TopStatisticItems(const TopStatisticItems &) = default ;
      TopStatisticItems(TopStatisticItems &&) = default ;
      TopStatisticItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopStatisticItems() = default ;
      TopStatisticItems& operator=(const TopStatisticItems &) = default ;
      TopStatisticItems& operator=(TopStatisticItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->name_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline TopStatisticItems& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TopStatisticItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The quantity.
      shared_ptr<int32_t> count_ {};
      // The statistical item.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->itemCount_ == nullptr
        && this->requestId_ == nullptr && this->topStatisticItems_ == nullptr && this->type_ == nullptr; };
    // itemCount Field Functions 
    bool hasItemCount() const { return this->itemCount_ != nullptr;};
    void deleteItemCount() { this->itemCount_ = nullptr;};
    inline int32_t getItemCount() const { DARABONBA_PTR_GET_DEFAULT(itemCount_, 0) };
    inline DescribePropertyUsageTopResponseBody& setItemCount(int32_t itemCount) { DARABONBA_PTR_SET_VALUE(itemCount_, itemCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyUsageTopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topStatisticItems Field Functions 
    bool hasTopStatisticItems() const { return this->topStatisticItems_ != nullptr;};
    void deleteTopStatisticItems() { this->topStatisticItems_ = nullptr;};
    inline const vector<DescribePropertyUsageTopResponseBody::TopStatisticItems> & getTopStatisticItems() const { DARABONBA_PTR_GET_CONST(topStatisticItems_, vector<DescribePropertyUsageTopResponseBody::TopStatisticItems>) };
    inline vector<DescribePropertyUsageTopResponseBody::TopStatisticItems> getTopStatisticItems() { DARABONBA_PTR_GET(topStatisticItems_, vector<DescribePropertyUsageTopResponseBody::TopStatisticItems>) };
    inline DescribePropertyUsageTopResponseBody& setTopStatisticItems(const vector<DescribePropertyUsageTopResponseBody::TopStatisticItems> & topStatisticItems) { DARABONBA_PTR_SET_VALUE(topStatisticItems_, topStatisticItems) };
    inline DescribePropertyUsageTopResponseBody& setTopStatisticItems(vector<DescribePropertyUsageTopResponseBody::TopStatisticItems> && topStatisticItems) { DARABONBA_PTR_SET_RVALUE(topStatisticItems_, topStatisticItems) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePropertyUsageTopResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of fingerprints.
    shared_ptr<int32_t> itemCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The statistical results.
    shared_ptr<vector<DescribePropertyUsageTopResponseBody::TopStatisticItems>> topStatisticItems_ {};
    // The type of the asset fingerprint. Valid value:
    // 
    // *   **port**: port
    // *   **process**: process
    // *   **software**: software
    // *   **user**: account
    // *   **sca**: middleware
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
