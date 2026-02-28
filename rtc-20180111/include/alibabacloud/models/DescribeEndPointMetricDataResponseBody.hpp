// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeEndPointMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndPointMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PubMetrics, pubMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubMetrics, subMetrics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndPointMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PubMetrics, pubMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubMetrics, subMetrics_);
    };
    DescribeEndPointMetricDataResponseBody() = default ;
    DescribeEndPointMetricDataResponseBody(const DescribeEndPointMetricDataResponseBody &) = default ;
    DescribeEndPointMetricDataResponseBody(DescribeEndPointMetricDataResponseBody &&) = default ;
    DescribeEndPointMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndPointMetricDataResponseBody() = default ;
    DescribeEndPointMetricDataResponseBody& operator=(const DescribeEndPointMetricDataResponseBody &) = default ;
    DescribeEndPointMetricDataResponseBody& operator=(DescribeEndPointMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, SubMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      SubMetrics() = default ;
      SubMetrics(const SubMetrics &) = default ;
      SubMetrics(SubMetrics &&) = default ;
      SubMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubMetrics() = default ;
      SubMetrics& operator=(const SubMetrics &) = default ;
      SubMetrics& operator=(SubMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_ANY_TO_JSON(Ext, ext_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_ANY_FROM_JSON(Ext, ext_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ext_ == nullptr
        && this->x_ == nullptr && this->y_ == nullptr; };
        // ext Field Functions 
        bool hasExt() const { return this->ext_ != nullptr;};
        void deleteExt() { this->ext_ = nullptr;};
        inline         const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
        Darabonba::Json & getExt() { DARABONBA_GET(ext_) };
        inline Nodes& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
        inline Nodes& setExt(Darabonba::Json && ext) { DARABONBA_SET_RVALUE(ext_, ext) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline string getX() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
        inline Nodes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline string getY() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
        inline Nodes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        Darabonba::Json ext_ {};
        shared_ptr<string> x_ {};
        shared_ptr<string> y_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr
        && this->type_ == nullptr && this->userId_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<SubMetrics::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<SubMetrics::Nodes>) };
      inline vector<SubMetrics::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<SubMetrics::Nodes>) };
      inline SubMetrics& setNodes(const vector<SubMetrics::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline SubMetrics& setNodes(vector<SubMetrics::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SubMetrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline SubMetrics& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<vector<SubMetrics::Nodes>> nodes_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> userId_ {};
    };

    class PubMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PubMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, PubMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      PubMetrics() = default ;
      PubMetrics(const PubMetrics &) = default ;
      PubMetrics(PubMetrics &&) = default ;
      PubMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PubMetrics() = default ;
      PubMetrics& operator=(const PubMetrics &) = default ;
      PubMetrics& operator=(PubMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_ANY_TO_JSON(Ext, ext_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_ANY_FROM_JSON(Ext, ext_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ext_ == nullptr
        && this->x_ == nullptr && this->y_ == nullptr; };
        // ext Field Functions 
        bool hasExt() const { return this->ext_ != nullptr;};
        void deleteExt() { this->ext_ = nullptr;};
        inline         const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
        Darabonba::Json & getExt() { DARABONBA_GET(ext_) };
        inline Nodes& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
        inline Nodes& setExt(Darabonba::Json && ext) { DARABONBA_SET_RVALUE(ext_, ext) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline string getX() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
        inline Nodes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline string getY() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
        inline Nodes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        Darabonba::Json ext_ {};
        shared_ptr<string> x_ {};
        shared_ptr<string> y_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr
        && this->type_ == nullptr && this->userId_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<PubMetrics::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<PubMetrics::Nodes>) };
      inline vector<PubMetrics::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<PubMetrics::Nodes>) };
      inline PubMetrics& setNodes(const vector<PubMetrics::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline PubMetrics& setNodes(vector<PubMetrics::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PubMetrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline PubMetrics& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<vector<PubMetrics::Nodes>> nodes_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->pubMetrics_ == nullptr
        && this->requestId_ == nullptr && this->subMetrics_ == nullptr; };
    // pubMetrics Field Functions 
    bool hasPubMetrics() const { return this->pubMetrics_ != nullptr;};
    void deletePubMetrics() { this->pubMetrics_ = nullptr;};
    inline const vector<DescribeEndPointMetricDataResponseBody::PubMetrics> & getPubMetrics() const { DARABONBA_PTR_GET_CONST(pubMetrics_, vector<DescribeEndPointMetricDataResponseBody::PubMetrics>) };
    inline vector<DescribeEndPointMetricDataResponseBody::PubMetrics> getPubMetrics() { DARABONBA_PTR_GET(pubMetrics_, vector<DescribeEndPointMetricDataResponseBody::PubMetrics>) };
    inline DescribeEndPointMetricDataResponseBody& setPubMetrics(const vector<DescribeEndPointMetricDataResponseBody::PubMetrics> & pubMetrics) { DARABONBA_PTR_SET_VALUE(pubMetrics_, pubMetrics) };
    inline DescribeEndPointMetricDataResponseBody& setPubMetrics(vector<DescribeEndPointMetricDataResponseBody::PubMetrics> && pubMetrics) { DARABONBA_PTR_SET_RVALUE(pubMetrics_, pubMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEndPointMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subMetrics Field Functions 
    bool hasSubMetrics() const { return this->subMetrics_ != nullptr;};
    void deleteSubMetrics() { this->subMetrics_ = nullptr;};
    inline const vector<DescribeEndPointMetricDataResponseBody::SubMetrics> & getSubMetrics() const { DARABONBA_PTR_GET_CONST(subMetrics_, vector<DescribeEndPointMetricDataResponseBody::SubMetrics>) };
    inline vector<DescribeEndPointMetricDataResponseBody::SubMetrics> getSubMetrics() { DARABONBA_PTR_GET(subMetrics_, vector<DescribeEndPointMetricDataResponseBody::SubMetrics>) };
    inline DescribeEndPointMetricDataResponseBody& setSubMetrics(const vector<DescribeEndPointMetricDataResponseBody::SubMetrics> & subMetrics) { DARABONBA_PTR_SET_VALUE(subMetrics_, subMetrics) };
    inline DescribeEndPointMetricDataResponseBody& setSubMetrics(vector<DescribeEndPointMetricDataResponseBody::SubMetrics> && subMetrics) { DARABONBA_PTR_SET_RVALUE(subMetrics_, subMetrics) };


  protected:
    shared_ptr<vector<DescribeEndPointMetricDataResponseBody::PubMetrics>> pubMetrics_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeEndPointMetricDataResponseBody::SubMetrics>> subMetrics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
