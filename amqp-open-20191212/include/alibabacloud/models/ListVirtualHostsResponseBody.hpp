// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALHOSTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALHOSTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListVirtualHostsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualHostsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualHostsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVirtualHostsResponseBody() = default ;
    ListVirtualHostsResponseBody(const ListVirtualHostsResponseBody &) = default ;
    ListVirtualHostsResponseBody(ListVirtualHostsResponseBody &&) = default ;
    ListVirtualHostsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualHostsResponseBody() = default ;
    ListVirtualHostsResponseBody& operator=(const ListVirtualHostsResponseBody &) = default ;
    ListVirtualHostsResponseBody& operator=(ListVirtualHostsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(VirtualHosts, virtualHosts_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(VirtualHosts, virtualHosts_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VirtualHosts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VirtualHosts& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, VirtualHosts& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        VirtualHosts() = default ;
        VirtualHosts(const VirtualHosts &) = default ;
        VirtualHosts(VirtualHosts &&) = default ;
        VirtualHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VirtualHosts() = default ;
        VirtualHosts& operator=(const VirtualHosts &) = default ;
        VirtualHosts& operator=(VirtualHosts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VirtualHosts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The vhost name.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->virtualHosts_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // virtualHosts Field Functions 
      bool hasVirtualHosts() const { return this->virtualHosts_ != nullptr;};
      void deleteVirtualHosts() { this->virtualHosts_ = nullptr;};
      inline const vector<Data::VirtualHosts> & getVirtualHosts() const { DARABONBA_PTR_GET_CONST(virtualHosts_, vector<Data::VirtualHosts>) };
      inline vector<Data::VirtualHosts> getVirtualHosts() { DARABONBA_PTR_GET(virtualHosts_, vector<Data::VirtualHosts>) };
      inline Data& setVirtualHosts(const vector<Data::VirtualHosts> & virtualHosts) { DARABONBA_PTR_SET_VALUE(virtualHosts_, virtualHosts) };
      inline Data& setVirtualHosts(vector<Data::VirtualHosts> && virtualHosts) { DARABONBA_PTR_SET_RVALUE(virtualHosts_, virtualHosts) };


    protected:
      // The maximum number of entries returned.
      shared_ptr<int32_t> maxResults_ {};
      // The token that marks the end of the current returned page. If this parameter is empty, all data is retrieved.
      shared_ptr<string> nextToken_ {};
      // The vhosts.
      shared_ptr<vector<Data::VirtualHosts>> virtualHosts_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListVirtualHostsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListVirtualHostsResponseBody::Data) };
    inline ListVirtualHostsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListVirtualHostsResponseBody::Data) };
    inline ListVirtualHostsResponseBody& setData(const ListVirtualHostsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVirtualHostsResponseBody& setData(ListVirtualHostsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirtualHostsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListVirtualHostsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
