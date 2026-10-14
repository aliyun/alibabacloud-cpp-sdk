// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGPUCLUSTERTOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGPUCLUSTERTOPOLOGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetGpuClusterTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGpuClusterTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGpuClusterTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGpuClusterTopologyResponseBody() = default ;
    GetGpuClusterTopologyResponseBody(const GetGpuClusterTopologyResponseBody &) = default ;
    GetGpuClusterTopologyResponseBody(GetGpuClusterTopologyResponseBody &&) = default ;
    GetGpuClusterTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGpuClusterTopologyResponseBody() = default ;
    GetGpuClusterTopologyResponseBody& operator=(const GetGpuClusterTopologyResponseBody &) = default ;
    GetGpuClusterTopologyResponseBody& operator=(GetGpuClusterTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(data, data_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(data, data_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_ANY_TO_JSON(edges, edges_);
          DARABONBA_ANY_TO_JSON(nodes, nodes_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_ANY_FROM_JSON(edges, edges_);
          DARABONBA_ANY_FROM_JSON(nodes, nodes_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->edges_ == nullptr
        && this->nodes_ == nullptr; };
        // edges Field Functions 
        bool hasEdges() const { return this->edges_ != nullptr;};
        void deleteEdges() { this->edges_ = nullptr;};
        inline         const Darabonba::Json & getEdges() const { DARABONBA_GET(edges_) };
        Darabonba::Json & getEdges() { DARABONBA_GET(edges_) };
        inline DataItem& setEdges(const Darabonba::Json & edges) { DARABONBA_SET_VALUE(edges_, edges) };
        inline DataItem& setEdges(Darabonba::Json && edges) { DARABONBA_SET_RVALUE(edges_, edges) };


        // nodes Field Functions 
        bool hasNodes() const { return this->nodes_ != nullptr;};
        void deleteNodes() { this->nodes_ = nullptr;};
        inline         const Darabonba::Json & getNodes() const { DARABONBA_GET(nodes_) };
        Darabonba::Json & getNodes() { DARABONBA_GET(nodes_) };
        inline DataItem& setNodes(const Darabonba::Json & nodes) { DARABONBA_SET_VALUE(nodes_, nodes) };
        inline DataItem& setNodes(Darabonba::Json && nodes) { DARABONBA_SET_RVALUE(nodes_, nodes) };


      protected:
        // The edge data in the topology structure.
        Darabonba::Json edges_ {};
        // The node data in the topology structure.
        Darabonba::Json nodes_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->total_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const Data::DataItem & getData() const { DARABONBA_PTR_GET_CONST(data_, Data::DataItem) };
      inline Data::DataItem getData() { DARABONBA_PTR_GET(data_, Data::DataItem) };
      inline Data& setData(const Data::DataItem & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(Data::DataItem && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The cluster topology data structure.
      shared_ptr<Data::DataItem> data_ {};
      // The number of GPU cards returned.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGpuClusterTopologyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGpuClusterTopologyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGpuClusterTopologyResponseBody::Data) };
    inline GetGpuClusterTopologyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGpuClusterTopologyResponseBody::Data) };
    inline GetGpuClusterTopologyResponseBody& setData(const GetGpuClusterTopologyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGpuClusterTopologyResponseBody& setData(GetGpuClusterTopologyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGpuClusterTopologyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGpuClusterTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result code. Valid values: Success, Sysom.ServerError, Sysom.InvalidParameter.
    shared_ptr<string> code_ {};
    // The data returned by the operation.
    shared_ptr<GetGpuClusterTopologyResponseBody::Data> data_ {};
    // The error message returned when the code is not Success.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
