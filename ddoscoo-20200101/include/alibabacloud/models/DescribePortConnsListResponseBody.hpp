// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTCONNSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTCONNSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortConnsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortConnsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnsList, connsList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortConnsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnsList, connsList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortConnsListResponseBody() = default ;
    DescribePortConnsListResponseBody(const DescribePortConnsListResponseBody &) = default ;
    DescribePortConnsListResponseBody(DescribePortConnsListResponseBody &&) = default ;
    DescribePortConnsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortConnsListResponseBody() = default ;
    DescribePortConnsListResponseBody& operator=(const DescribePortConnsListResponseBody &) = default ;
    DescribePortConnsListResponseBody& operator=(DescribePortConnsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConnsList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConnsList& obj) { 
        DARABONBA_PTR_TO_JSON(ActConns, actConns_);
        DARABONBA_PTR_TO_JSON(Conns, conns_);
        DARABONBA_PTR_TO_JSON(Cps, cps_);
        DARABONBA_PTR_TO_JSON(InActConns, inActConns_);
        DARABONBA_PTR_TO_JSON(Index, index_);
      };
      friend void from_json(const Darabonba::Json& j, ConnsList& obj) { 
        DARABONBA_PTR_FROM_JSON(ActConns, actConns_);
        DARABONBA_PTR_FROM_JSON(Conns, conns_);
        DARABONBA_PTR_FROM_JSON(Cps, cps_);
        DARABONBA_PTR_FROM_JSON(InActConns, inActConns_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
      };
      ConnsList() = default ;
      ConnsList(const ConnsList &) = default ;
      ConnsList(ConnsList &&) = default ;
      ConnsList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConnsList() = default ;
      ConnsList& operator=(const ConnsList &) = default ;
      ConnsList& operator=(ConnsList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actConns_ == nullptr
        && this->conns_ == nullptr && this->cps_ == nullptr && this->inActConns_ == nullptr && this->index_ == nullptr; };
      // actConns Field Functions 
      bool hasActConns() const { return this->actConns_ != nullptr;};
      void deleteActConns() { this->actConns_ = nullptr;};
      inline int64_t getActConns() const { DARABONBA_PTR_GET_DEFAULT(actConns_, 0L) };
      inline ConnsList& setActConns(int64_t actConns) { DARABONBA_PTR_SET_VALUE(actConns_, actConns) };


      // conns Field Functions 
      bool hasConns() const { return this->conns_ != nullptr;};
      void deleteConns() { this->conns_ = nullptr;};
      inline int64_t getConns() const { DARABONBA_PTR_GET_DEFAULT(conns_, 0L) };
      inline ConnsList& setConns(int64_t conns) { DARABONBA_PTR_SET_VALUE(conns_, conns) };


      // cps Field Functions 
      bool hasCps() const { return this->cps_ != nullptr;};
      void deleteCps() { this->cps_ = nullptr;};
      inline int64_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0L) };
      inline ConnsList& setCps(int64_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


      // inActConns Field Functions 
      bool hasInActConns() const { return this->inActConns_ != nullptr;};
      void deleteInActConns() { this->inActConns_ = nullptr;};
      inline int64_t getInActConns() const { DARABONBA_PTR_GET_DEFAULT(inActConns_, 0L) };
      inline ConnsList& setInActConns(int64_t inActConns) { DARABONBA_PTR_SET_VALUE(inActConns_, inActConns) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline ConnsList& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    protected:
      // The number of active connections.
      shared_ptr<int64_t> actConns_ {};
      // >  This parameter is in internal preview. Do not use this parameter.
      shared_ptr<int64_t> conns_ {};
      // The number of new connections.
      shared_ptr<int64_t> cps_ {};
      // The number of inactive connections.
      shared_ptr<int64_t> inActConns_ {};
      // The index number of the returned data.
      shared_ptr<int64_t> index_ {};
    };

    virtual bool empty() const override { return this->connsList_ == nullptr
        && this->requestId_ == nullptr; };
    // connsList Field Functions 
    bool hasConnsList() const { return this->connsList_ != nullptr;};
    void deleteConnsList() { this->connsList_ = nullptr;};
    inline const vector<DescribePortConnsListResponseBody::ConnsList> & getConnsList() const { DARABONBA_PTR_GET_CONST(connsList_, vector<DescribePortConnsListResponseBody::ConnsList>) };
    inline vector<DescribePortConnsListResponseBody::ConnsList> getConnsList() { DARABONBA_PTR_GET(connsList_, vector<DescribePortConnsListResponseBody::ConnsList>) };
    inline DescribePortConnsListResponseBody& setConnsList(const vector<DescribePortConnsListResponseBody::ConnsList> & connsList) { DARABONBA_PTR_SET_VALUE(connsList_, connsList) };
    inline DescribePortConnsListResponseBody& setConnsList(vector<DescribePortConnsListResponseBody::ConnsList> && connsList) { DARABONBA_PTR_SET_RVALUE(connsList_, connsList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortConnsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the connections established over the port.
    shared_ptr<vector<DescribePortConnsListResponseBody::ConnsList>> connsList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
