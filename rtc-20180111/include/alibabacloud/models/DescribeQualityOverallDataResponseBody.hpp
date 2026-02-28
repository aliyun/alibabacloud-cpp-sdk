// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUALITYOVERALLDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUALITYOVERALLDATARESPONSEBODY_HPP_
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
  class DescribeQualityOverallDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQualityOverallDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QualityOverallData, qualityOverallData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQualityOverallDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QualityOverallData, qualityOverallData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeQualityOverallDataResponseBody() = default ;
    DescribeQualityOverallDataResponseBody(const DescribeQualityOverallDataResponseBody &) = default ;
    DescribeQualityOverallDataResponseBody(DescribeQualityOverallDataResponseBody &&) = default ;
    DescribeQualityOverallDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQualityOverallDataResponseBody() = default ;
    DescribeQualityOverallDataResponseBody& operator=(const DescribeQualityOverallDataResponseBody &) = default ;
    DescribeQualityOverallDataResponseBody& operator=(DescribeQualityOverallDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QualityOverallData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QualityOverallData& obj) { 
        DARABONBA_PTR_TO_JSON(Average, average_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, QualityOverallData& obj) { 
        DARABONBA_PTR_FROM_JSON(Average, average_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      QualityOverallData() = default ;
      QualityOverallData(const QualityOverallData &) = default ;
      QualityOverallData(QualityOverallData &&) = default ;
      QualityOverallData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QualityOverallData() = default ;
      QualityOverallData& operator=(const QualityOverallData &) = default ;
      QualityOverallData& operator=(QualityOverallData &&) = default ;
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

      virtual bool empty() const override { return this->average_ == nullptr
        && this->nodes_ == nullptr && this->type_ == nullptr; };
      // average Field Functions 
      bool hasAverage() const { return this->average_ != nullptr;};
      void deleteAverage() { this->average_ = nullptr;};
      inline string getAverage() const { DARABONBA_PTR_GET_DEFAULT(average_, "") };
      inline QualityOverallData& setAverage(string average) { DARABONBA_PTR_SET_VALUE(average_, average) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<QualityOverallData::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<QualityOverallData::Nodes>) };
      inline vector<QualityOverallData::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<QualityOverallData::Nodes>) };
      inline QualityOverallData& setNodes(const vector<QualityOverallData::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline QualityOverallData& setNodes(vector<QualityOverallData::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline QualityOverallData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> average_ {};
      shared_ptr<vector<QualityOverallData::Nodes>> nodes_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->qualityOverallData_ == nullptr
        && this->requestId_ == nullptr; };
    // qualityOverallData Field Functions 
    bool hasQualityOverallData() const { return this->qualityOverallData_ != nullptr;};
    void deleteQualityOverallData() { this->qualityOverallData_ = nullptr;};
    inline const vector<DescribeQualityOverallDataResponseBody::QualityOverallData> & getQualityOverallData() const { DARABONBA_PTR_GET_CONST(qualityOverallData_, vector<DescribeQualityOverallDataResponseBody::QualityOverallData>) };
    inline vector<DescribeQualityOverallDataResponseBody::QualityOverallData> getQualityOverallData() { DARABONBA_PTR_GET(qualityOverallData_, vector<DescribeQualityOverallDataResponseBody::QualityOverallData>) };
    inline DescribeQualityOverallDataResponseBody& setQualityOverallData(const vector<DescribeQualityOverallDataResponseBody::QualityOverallData> & qualityOverallData) { DARABONBA_PTR_SET_VALUE(qualityOverallData_, qualityOverallData) };
    inline DescribeQualityOverallDataResponseBody& setQualityOverallData(vector<DescribeQualityOverallDataResponseBody::QualityOverallData> && qualityOverallData) { DARABONBA_PTR_SET_RVALUE(qualityOverallData_, qualityOverallData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQualityOverallDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeQualityOverallDataResponseBody::QualityOverallData>> qualityOverallData_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
