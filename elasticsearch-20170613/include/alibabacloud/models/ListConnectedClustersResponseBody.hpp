// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTEDCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTEDCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListConnectedClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectedClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectedClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListConnectedClustersResponseBody() = default ;
    ListConnectedClustersResponseBody(const ListConnectedClustersResponseBody &) = default ;
    ListConnectedClustersResponseBody(ListConnectedClustersResponseBody &&) = default ;
    ListConnectedClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectedClustersResponseBody() = default ;
    ListConnectedClustersResponseBody& operator=(const ListConnectedClustersResponseBody &) = default ;
    ListConnectedClustersResponseBody& operator=(ListConnectedClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResultItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultItem& obj) { 
          DARABONBA_PTR_TO_JSON(instances, instances_);
          DARABONBA_PTR_TO_JSON(networkType, networkType_);
        };
        friend void from_json(const Darabonba::Json& j, ResultItem& obj) { 
          DARABONBA_PTR_FROM_JSON(instances, instances_);
          DARABONBA_PTR_FROM_JSON(networkType, networkType_);
        };
        ResultItem() = default ;
        ResultItem(const ResultItem &) = default ;
        ResultItem(ResultItem &&) = default ;
        ResultItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultItem() = default ;
        ResultItem& operator=(const ResultItem &) = default ;
        ResultItem& operator=(ResultItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instances_ == nullptr
        && this->networkType_ == nullptr; };
        // instances Field Functions 
        bool hasInstances() const { return this->instances_ != nullptr;};
        void deleteInstances() { this->instances_ = nullptr;};
        inline string getInstances() const { DARABONBA_PTR_GET_DEFAULT(instances_, "") };
        inline ResultItem& setInstances(string instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline ResultItem& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      protected:
        // The ID of the remote instance that is connected to the network of the current instance.
        shared_ptr<string> instances_ {};
        // The network type of the instance.
        shared_ptr<string> networkType_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Result::ResultItem> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Result::ResultItem>) };
      inline vector<Result::ResultItem> getResult() { DARABONBA_PTR_GET(result_, vector<Result::ResultItem>) };
      inline Result& setResult(const vector<Result::ResultItem> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Result& setResult(vector<Result::ResultItem> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      shared_ptr<vector<Result::ResultItem>> result_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConnectedClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListConnectedClustersResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListConnectedClustersResponseBody::Result) };
    inline ListConnectedClustersResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListConnectedClustersResponseBody::Result) };
    inline ListConnectedClustersResponseBody& setResult(const ListConnectedClustersResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListConnectedClustersResponseBody& setResult(ListConnectedClustersResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The return results.
    shared_ptr<ListConnectedClustersResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
