// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFORWARDSTRATEGIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFORWARDSTRATEGIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListForwardStrategiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListForwardStrategiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardStrategies, forwardStrategies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListForwardStrategiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardStrategies, forwardStrategies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListForwardStrategiesResponseBody() = default ;
    ListForwardStrategiesResponseBody(const ListForwardStrategiesResponseBody &) = default ;
    ListForwardStrategiesResponseBody(ListForwardStrategiesResponseBody &&) = default ;
    ListForwardStrategiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListForwardStrategiesResponseBody() = default ;
    ListForwardStrategiesResponseBody& operator=(const ListForwardStrategiesResponseBody &) = default ;
    ListForwardStrategiesResponseBody& operator=(ListForwardStrategiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ForwardStrategies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardStrategies& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
        DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
        DARABONBA_PTR_TO_JSON(ForwardId, forwardId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardStrategies& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
        DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
        DARABONBA_PTR_FROM_JSON(ForwardId, forwardId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ForwardStrategies() = default ;
      ForwardStrategies(const ForwardStrategies &) = default ;
      ForwardStrategies(ForwardStrategies &&) = default ;
      ForwardStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardStrategies() = default ;
      ForwardStrategies& operator=(const ForwardStrategies &) = default ;
      ForwardStrategies& operator=(ForwardStrategies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationId_ == nullptr && this->destinationType_ == nullptr && this->forwardId_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr
        && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ForwardStrategies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destinationId Field Functions 
      bool hasDestinationId() const { return this->destinationId_ != nullptr;};
      void deleteDestinationId() { this->destinationId_ = nullptr;};
      inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
      inline ForwardStrategies& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


      // destinationType Field Functions 
      bool hasDestinationType() const { return this->destinationType_ != nullptr;};
      void deleteDestinationType() { this->destinationType_ = nullptr;};
      inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
      inline ForwardStrategies& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


      // forwardId Field Functions 
      bool hasForwardId() const { return this->forwardId_ != nullptr;};
      void deleteForwardId() { this->forwardId_ = nullptr;};
      inline string getForwardId() const { DARABONBA_PTR_GET_DEFAULT(forwardId_, "") };
      inline ForwardStrategies& setForwardId(string forwardId) { DARABONBA_PTR_SET_VALUE(forwardId_, forwardId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ForwardStrategies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline ForwardStrategies& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ForwardStrategies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> destinationId_ {};
      shared_ptr<string> destinationType_ {};
      shared_ptr<string> forwardId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> priority_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->forwardStrategies_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // forwardStrategies Field Functions 
    bool hasForwardStrategies() const { return this->forwardStrategies_ != nullptr;};
    void deleteForwardStrategies() { this->forwardStrategies_ = nullptr;};
    inline const vector<ListForwardStrategiesResponseBody::ForwardStrategies> & getForwardStrategies() const { DARABONBA_PTR_GET_CONST(forwardStrategies_, vector<ListForwardStrategiesResponseBody::ForwardStrategies>) };
    inline vector<ListForwardStrategiesResponseBody::ForwardStrategies> getForwardStrategies() { DARABONBA_PTR_GET(forwardStrategies_, vector<ListForwardStrategiesResponseBody::ForwardStrategies>) };
    inline ListForwardStrategiesResponseBody& setForwardStrategies(const vector<ListForwardStrategiesResponseBody::ForwardStrategies> & forwardStrategies) { DARABONBA_PTR_SET_VALUE(forwardStrategies_, forwardStrategies) };
    inline ListForwardStrategiesResponseBody& setForwardStrategies(vector<ListForwardStrategiesResponseBody::ForwardStrategies> && forwardStrategies) { DARABONBA_PTR_SET_RVALUE(forwardStrategies_, forwardStrategies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListForwardStrategiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListForwardStrategiesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    shared_ptr<vector<ListForwardStrategiesResponseBody::ForwardStrategies>> forwardStrategies_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
