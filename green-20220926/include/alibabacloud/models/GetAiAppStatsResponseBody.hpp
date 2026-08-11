// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DataTotalStatValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAiAppStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiAppStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiAppStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAiAppStatsResponseBody() = default ;
    GetAiAppStatsResponseBody(const GetAiAppStatsResponseBody &) = default ;
    GetAiAppStatsResponseBody(GetAiAppStatsResponseBody &&) = default ;
    GetAiAppStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiAppStatsResponseBody() = default ;
    GetAiAppStatsResponseBody& operator=(const GetAiAppStatsResponseBody &) = default ;
    GetAiAppStatsResponseBody& operator=(GetAiAppStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LabelStatChart, labelStatChart_);
        DARABONBA_PTR_TO_JSON(TotalStat, totalStat_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LabelStatChart, labelStatChart_);
        DARABONBA_PTR_FROM_JSON(TotalStat, totalStat_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
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
      class Y : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Y& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Y& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Y() = default ;
        Y(const Y &) = default ;
        Y(Y &&) = default ;
        Y(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Y() = default ;
        Y& operator=(const Y &) = default ;
        Y& operator=(Y &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr
        && this->name_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<int64_t> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
        inline vector<int64_t> getData() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
        inline Y& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Y& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Y& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The returned data.
        shared_ptr<vector<int64_t>> data_ {};
        // The name.
        shared_ptr<string> name_ {};
      };

      class LabelStatChart : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LabelStatChart& obj) { 
          DARABONBA_PTR_TO_JSON(TreeChart, treeChart_);
        };
        friend void from_json(const Darabonba::Json& j, LabelStatChart& obj) { 
          DARABONBA_PTR_FROM_JSON(TreeChart, treeChart_);
        };
        LabelStatChart() = default ;
        LabelStatChart(const LabelStatChart &) = default ;
        LabelStatChart(LabelStatChart &&) = default ;
        LabelStatChart(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LabelStatChart() = default ;
        LabelStatChart& operator=(const LabelStatChart &) = default ;
        LabelStatChart& operator=(LabelStatChart &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TreeChart : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TreeChart& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TreeChart& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TreeChart() = default ;
          TreeChart(const TreeChart &) = default ;
          TreeChart(TreeChart &&) = default ;
          TreeChart(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TreeChart() = default ;
          TreeChart& operator=(const TreeChart &) = default ;
          TreeChart& operator=(TreeChart &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline TreeChart& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TreeChart& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline TreeChart& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The label description.
          shared_ptr<string> description_ {};
          // The label.
          shared_ptr<string> name_ {};
          // The score.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->treeChart_ == nullptr; };
        // treeChart Field Functions 
        bool hasTreeChart() const { return this->treeChart_ != nullptr;};
        void deleteTreeChart() { this->treeChart_ = nullptr;};
        inline const vector<LabelStatChart::TreeChart> & getTreeChart() const { DARABONBA_PTR_GET_CONST(treeChart_, vector<LabelStatChart::TreeChart>) };
        inline vector<LabelStatChart::TreeChart> getTreeChart() { DARABONBA_PTR_GET(treeChart_, vector<LabelStatChart::TreeChart>) };
        inline LabelStatChart& setTreeChart(const vector<LabelStatChart::TreeChart> & treeChart) { DARABONBA_PTR_SET_VALUE(treeChart_, treeChart) };
        inline LabelStatChart& setTreeChart(vector<LabelStatChart::TreeChart> && treeChart) { DARABONBA_PTR_SET_RVALUE(treeChart_, treeChart) };


      protected:
        // The tree chart.
        shared_ptr<vector<LabelStatChart::TreeChart>> treeChart_ {};
      };

      virtual bool empty() const override { return this->labelStatChart_ == nullptr
        && this->totalStat_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
      // labelStatChart Field Functions 
      bool hasLabelStatChart() const { return this->labelStatChart_ != nullptr;};
      void deleteLabelStatChart() { this->labelStatChart_ = nullptr;};
      inline const vector<Data::LabelStatChart> & getLabelStatChart() const { DARABONBA_PTR_GET_CONST(labelStatChart_, vector<Data::LabelStatChart>) };
      inline vector<Data::LabelStatChart> getLabelStatChart() { DARABONBA_PTR_GET(labelStatChart_, vector<Data::LabelStatChart>) };
      inline Data& setLabelStatChart(const vector<Data::LabelStatChart> & labelStatChart) { DARABONBA_PTR_SET_VALUE(labelStatChart_, labelStatChart) };
      inline Data& setLabelStatChart(vector<Data::LabelStatChart> && labelStatChart) { DARABONBA_PTR_SET_RVALUE(labelStatChart_, labelStatChart) };


      // totalStat Field Functions 
      bool hasTotalStat() const { return this->totalStat_ != nullptr;};
      void deleteTotalStat() { this->totalStat_ = nullptr;};
      inline const map<string, DataTotalStatValue> & getTotalStat() const { DARABONBA_PTR_GET_CONST(totalStat_, map<string, DataTotalStatValue>) };
      inline map<string, DataTotalStatValue> getTotalStat() { DARABONBA_PTR_GET(totalStat_, map<string, DataTotalStatValue>) };
      inline Data& setTotalStat(const map<string, DataTotalStatValue> & totalStat) { DARABONBA_PTR_SET_VALUE(totalStat_, totalStat) };
      inline Data& setTotalStat(map<string, DataTotalStatValue> && totalStat) { DARABONBA_PTR_SET_RVALUE(totalStat_, totalStat) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline const vector<string> & getX() const { DARABONBA_PTR_GET_CONST(x_, vector<string>) };
      inline vector<string> getX() { DARABONBA_PTR_GET(x_, vector<string>) };
      inline Data& setX(const vector<string> & x) { DARABONBA_PTR_SET_VALUE(x_, x) };
      inline Data& setX(vector<string> && x) { DARABONBA_PTR_SET_RVALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline const vector<Data::Y> & getY() const { DARABONBA_PTR_GET_CONST(y_, vector<Data::Y>) };
      inline vector<Data::Y> getY() { DARABONBA_PTR_GET(y_, vector<Data::Y>) };
      inline Data& setY(const vector<Data::Y> & y) { DARABONBA_PTR_SET_VALUE(y_, y) };
      inline Data& setY(vector<Data::Y> && y) { DARABONBA_PTR_SET_RVALUE(y_, y) };


    protected:
      // The label usage chart.
      shared_ptr<vector<Data::LabelStatChart>> labelStatChart_ {};
      // The total count categorized statistics.
      shared_ptr<map<string, DataTotalStatValue>> totalStat_ {};
      // The X value of the coordinate point.
      shared_ptr<vector<string>> x_ {};
      // The Y value of the coordinate point.
      shared_ptr<vector<Data::Y>> y_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAiAppStatsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAiAppStatsResponseBody::Data) };
    inline GetAiAppStatsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAiAppStatsResponseBody::Data) };
    inline GetAiAppStatsResponseBody& setData(const GetAiAppStatsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAiAppStatsResponseBody& setData(GetAiAppStatsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiAppStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetAiAppStatsResponseBody::Data> data_ {};
    // The ID assigned by the backend to uniquely identify a request. Used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
