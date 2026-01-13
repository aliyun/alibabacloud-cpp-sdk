// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LrOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class ListServicesResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesResult& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(services, services_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesResult& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(services, services_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListServicesResult() = default ;
    ListServicesResult(const ListServicesResult &) = default ;
    ListServicesResult(ListServicesResult &&) = default ;
    ListServicesResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesResult() = default ;
    ListServicesResult& operator=(const ListServicesResult &) = default ;
    ListServicesResult& operator=(ListServicesResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->services_ == nullptr && this->total_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServicesResult& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServicesResult& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const LrOrder & getServices() const { DARABONBA_PTR_GET_CONST(services_, LrOrder) };
    inline LrOrder getServices() { DARABONBA_PTR_GET(services_, LrOrder) };
    inline ListServicesResult& setServices(const LrOrder & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ListServicesResult& setServices(LrOrder && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListServicesResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<LrOrder> services_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
