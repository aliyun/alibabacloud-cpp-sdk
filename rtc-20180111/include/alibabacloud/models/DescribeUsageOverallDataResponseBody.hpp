// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEOVERALLDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEOVERALLDATARESPONSEBODY_HPP_
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
  class DescribeUsageOverallDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageOverallDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageOverallData, usageOverallData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageOverallDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageOverallData, usageOverallData_);
    };
    DescribeUsageOverallDataResponseBody() = default ;
    DescribeUsageOverallDataResponseBody(const DescribeUsageOverallDataResponseBody &) = default ;
    DescribeUsageOverallDataResponseBody(DescribeUsageOverallDataResponseBody &&) = default ;
    DescribeUsageOverallDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageOverallDataResponseBody() = default ;
    DescribeUsageOverallDataResponseBody& operator=(const DescribeUsageOverallDataResponseBody &) = default ;
    DescribeUsageOverallDataResponseBody& operator=(DescribeUsageOverallDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageOverallData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageOverallData& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, UsageOverallData& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      UsageOverallData() = default ;
      UsageOverallData(const UsageOverallData &) = default ;
      UsageOverallData(UsageOverallData &&) = default ;
      UsageOverallData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageOverallData() = default ;
      UsageOverallData& operator=(const UsageOverallData &) = default ;
      UsageOverallData& operator=(UsageOverallData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
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
        virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
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
        shared_ptr<string> x_ {};
        shared_ptr<string> y_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr
        && this->type_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<UsageOverallData::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<UsageOverallData::Nodes>) };
      inline vector<UsageOverallData::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<UsageOverallData::Nodes>) };
      inline UsageOverallData& setNodes(const vector<UsageOverallData::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline UsageOverallData& setNodes(vector<UsageOverallData::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UsageOverallData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<UsageOverallData::Nodes>> nodes_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->usageOverallData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsageOverallDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageOverallData Field Functions 
    bool hasUsageOverallData() const { return this->usageOverallData_ != nullptr;};
    void deleteUsageOverallData() { this->usageOverallData_ = nullptr;};
    inline const vector<DescribeUsageOverallDataResponseBody::UsageOverallData> & getUsageOverallData() const { DARABONBA_PTR_GET_CONST(usageOverallData_, vector<DescribeUsageOverallDataResponseBody::UsageOverallData>) };
    inline vector<DescribeUsageOverallDataResponseBody::UsageOverallData> getUsageOverallData() { DARABONBA_PTR_GET(usageOverallData_, vector<DescribeUsageOverallDataResponseBody::UsageOverallData>) };
    inline DescribeUsageOverallDataResponseBody& setUsageOverallData(const vector<DescribeUsageOverallDataResponseBody::UsageOverallData> & usageOverallData) { DARABONBA_PTR_SET_VALUE(usageOverallData_, usageOverallData) };
    inline DescribeUsageOverallDataResponseBody& setUsageOverallData(vector<DescribeUsageOverallDataResponseBody::UsageOverallData> && usageOverallData) { DARABONBA_PTR_SET_RVALUE(usageOverallData_, usageOverallData) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeUsageOverallDataResponseBody::UsageOverallData>> usageOverallData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
