// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListNetworkRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkRules, networkRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkRules, networkRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNetworkRulesResponseBody() = default ;
    ListNetworkRulesResponseBody(const ListNetworkRulesResponseBody &) = default ;
    ListNetworkRulesResponseBody(ListNetworkRulesResponseBody &&) = default ;
    ListNetworkRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkRulesResponseBody() = default ;
    ListNetworkRulesResponseBody& operator=(const ListNetworkRulesResponseBody &) = default ;
    ListNetworkRulesResponseBody& operator=(ListNetworkRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkRules& obj) { 
        DARABONBA_PTR_TO_JSON(NetworkRule, networkRule_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkRules& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkRule, networkRule_);
      };
      NetworkRules() = default ;
      NetworkRules(const NetworkRules &) = default ;
      NetworkRules(NetworkRules &&) = default ;
      NetworkRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkRules() = default ;
      NetworkRules& operator=(const NetworkRules &) = default ;
      NetworkRules& operator=(NetworkRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetworkRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkRule& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        NetworkRule() = default ;
        NetworkRule(const NetworkRule &) = default ;
        NetworkRule(NetworkRule &&) = default ;
        NetworkRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkRule() = default ;
        NetworkRule& operator=(const NetworkRule &) = default ;
        NetworkRule& operator=(NetworkRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NetworkRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NetworkRule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->networkRule_ == nullptr; };
      // networkRule Field Functions 
      bool hasNetworkRule() const { return this->networkRule_ != nullptr;};
      void deleteNetworkRule() { this->networkRule_ = nullptr;};
      inline const vector<NetworkRules::NetworkRule> & getNetworkRule() const { DARABONBA_PTR_GET_CONST(networkRule_, vector<NetworkRules::NetworkRule>) };
      inline vector<NetworkRules::NetworkRule> getNetworkRule() { DARABONBA_PTR_GET(networkRule_, vector<NetworkRules::NetworkRule>) };
      inline NetworkRules& setNetworkRule(const vector<NetworkRules::NetworkRule> & networkRule) { DARABONBA_PTR_SET_VALUE(networkRule_, networkRule) };
      inline NetworkRules& setNetworkRule(vector<NetworkRules::NetworkRule> && networkRule) { DARABONBA_PTR_SET_RVALUE(networkRule_, networkRule) };


    protected:
      shared_ptr<vector<NetworkRules::NetworkRule>> networkRule_ {};
    };

    virtual bool empty() const override { return this->networkRules_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkRules Field Functions 
    bool hasNetworkRules() const { return this->networkRules_ != nullptr;};
    void deleteNetworkRules() { this->networkRules_ = nullptr;};
    inline const ListNetworkRulesResponseBody::NetworkRules & getNetworkRules() const { DARABONBA_PTR_GET_CONST(networkRules_, ListNetworkRulesResponseBody::NetworkRules) };
    inline ListNetworkRulesResponseBody::NetworkRules getNetworkRules() { DARABONBA_PTR_GET(networkRules_, ListNetworkRulesResponseBody::NetworkRules) };
    inline ListNetworkRulesResponseBody& setNetworkRules(const ListNetworkRulesResponseBody::NetworkRules & networkRules) { DARABONBA_PTR_SET_VALUE(networkRules_, networkRules) };
    inline ListNetworkRulesResponseBody& setNetworkRules(ListNetworkRulesResponseBody::NetworkRules && networkRules) { DARABONBA_PTR_SET_RVALUE(networkRules_, networkRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNetworkRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNetworkRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNetworkRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListNetworkRulesResponseBody::NetworkRules> networkRules_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
