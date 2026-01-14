// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDataQualityAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDataQualityAnalysisResponseBody() = default ;
    GetDataQualityAnalysisResponseBody(const GetDataQualityAnalysisResponseBody &) = default ;
    GetDataQualityAnalysisResponseBody(GetDataQualityAnalysisResponseBody &&) = default ;
    GetDataQualityAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityAnalysisResponseBody() = default ;
    GetDataQualityAnalysisResponseBody& operator=(const GetDataQualityAnalysisResponseBody &) = default ;
    GetDataQualityAnalysisResponseBody& operator=(GetDataQualityAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(dataQuality, dataQuality_);
        DARABONBA_PTR_TO_JSON(dataQualityResult, dataQualityResult_);
        DARABONBA_PTR_TO_JSON(sensitivityList, sensitivityList_);
        DARABONBA_PTR_TO_JSON(uncertainty, uncertainty_);
        DARABONBA_PTR_TO_JSON(uncertaintyValues, uncertaintyValues_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(dataQuality, dataQuality_);
        DARABONBA_PTR_FROM_JSON(dataQualityResult, dataQualityResult_);
        DARABONBA_PTR_FROM_JSON(sensitivityList, sensitivityList_);
        DARABONBA_PTR_FROM_JSON(uncertainty, uncertainty_);
        DARABONBA_PTR_FROM_JSON(uncertaintyValues, uncertaintyValues_);
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
      class UncertaintyValues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UncertaintyValues& obj) { 
          DARABONBA_PTR_TO_JSON(inventory, inventory_);
          DARABONBA_PTR_TO_JSON(uncertaintyContribution, uncertaintyContribution_);
        };
        friend void from_json(const Darabonba::Json& j, UncertaintyValues& obj) { 
          DARABONBA_PTR_FROM_JSON(inventory, inventory_);
          DARABONBA_PTR_FROM_JSON(uncertaintyContribution, uncertaintyContribution_);
        };
        UncertaintyValues() = default ;
        UncertaintyValues(const UncertaintyValues &) = default ;
        UncertaintyValues(UncertaintyValues &&) = default ;
        UncertaintyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UncertaintyValues() = default ;
        UncertaintyValues& operator=(const UncertaintyValues &) = default ;
        UncertaintyValues& operator=(UncertaintyValues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inventory_ == nullptr
        && this->uncertaintyContribution_ == nullptr; };
        // inventory Field Functions 
        bool hasInventory() const { return this->inventory_ != nullptr;};
        void deleteInventory() { this->inventory_ = nullptr;};
        inline string getInventory() const { DARABONBA_PTR_GET_DEFAULT(inventory_, "") };
        inline UncertaintyValues& setInventory(string inventory) { DARABONBA_PTR_SET_VALUE(inventory_, inventory) };


        // uncertaintyContribution Field Functions 
        bool hasUncertaintyContribution() const { return this->uncertaintyContribution_ != nullptr;};
        void deleteUncertaintyContribution() { this->uncertaintyContribution_ = nullptr;};
        inline string getUncertaintyContribution() const { DARABONBA_PTR_GET_DEFAULT(uncertaintyContribution_, "") };
        inline UncertaintyValues& setUncertaintyContribution(string uncertaintyContribution) { DARABONBA_PTR_SET_VALUE(uncertaintyContribution_, uncertaintyContribution) };


      protected:
        // The name of the inventory. Format: process name / inventory name.
        shared_ptr<string> inventory_ {};
        // Inventory uncertainty absolute contribution size. The impact of the quality of each inventory data on the carbon footprint results in the modeling process, when the uncertain contribution of a list is large, please improve its data quality as much as possible to improve the accuracy of carbon footprint analysis. The meaning of "1.4964" is not determined to contribute 1.4964 kgCO₂ e/unit, where unit is the unit of the product.
        shared_ptr<string> uncertaintyContribution_ {};
      };

      class SensitivityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SensitivityList& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(inventory, inventory_);
          DARABONBA_PTR_TO_JSON(reductionList, reductionList_);
          DARABONBA_PTR_TO_JSON(sensitivity, sensitivity_);
        };
        friend void from_json(const Darabonba::Json& j, SensitivityList& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(inventory, inventory_);
          DARABONBA_PTR_FROM_JSON(reductionList, reductionList_);
          DARABONBA_PTR_FROM_JSON(sensitivity, sensitivity_);
        };
        SensitivityList() = default ;
        SensitivityList(const SensitivityList &) = default ;
        SensitivityList(SensitivityList &&) = default ;
        SensitivityList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SensitivityList() = default ;
        SensitivityList& operator=(const SensitivityList &) = default ;
        SensitivityList& operator=(SensitivityList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->inventory_ == nullptr && this->reductionList_ == nullptr && this->sensitivity_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline SensitivityList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inventory Field Functions 
        bool hasInventory() const { return this->inventory_ != nullptr;};
        void deleteInventory() { this->inventory_ = nullptr;};
        inline string getInventory() const { DARABONBA_PTR_GET_DEFAULT(inventory_, "") };
        inline SensitivityList& setInventory(string inventory) { DARABONBA_PTR_SET_VALUE(inventory_, inventory) };


        // reductionList Field Functions 
        bool hasReductionList() const { return this->reductionList_ != nullptr;};
        void deleteReductionList() { this->reductionList_ = nullptr;};
        inline const vector<string> & getReductionList() const { DARABONBA_PTR_GET_CONST(reductionList_, vector<string>) };
        inline vector<string> getReductionList() { DARABONBA_PTR_GET(reductionList_, vector<string>) };
        inline SensitivityList& setReductionList(const vector<string> & reductionList) { DARABONBA_PTR_SET_VALUE(reductionList_, reductionList) };
        inline SensitivityList& setReductionList(vector<string> && reductionList) { DARABONBA_PTR_SET_RVALUE(reductionList_, reductionList) };


        // sensitivity Field Functions 
        bool hasSensitivity() const { return this->sensitivity_ != nullptr;};
        void deleteSensitivity() { this->sensitivity_ = nullptr;};
        inline double getSensitivity() const { DARABONBA_PTR_GET_DEFAULT(sensitivity_, 0.0) };
        inline SensitivityList& setSensitivity(double sensitivity) { DARABONBA_PTR_SET_VALUE(sensitivity_, sensitivity) };


      protected:
        // Inventory id
        shared_ptr<string> id_ {};
        // Name of the inventory item.
        shared_ptr<string> inventory_ {};
        // List of emission reduction measures.
        shared_ptr<vector<string>> reductionList_ {};
        // Sensitivity percentage.
        shared_ptr<double> sensitivity_ {};
      };

      class DataQualityResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataQualityResult& obj) { 
          DARABONBA_PTR_TO_JSON(data_quality_score, dataQualityScore_);
          DARABONBA_PTR_TO_JSON(g1, g1_);
          DARABONBA_PTR_TO_JSON(g2, g2_);
          DARABONBA_PTR_TO_JSON(g3, g3_);
          DARABONBA_PTR_TO_JSON(g4, g4_);
        };
        friend void from_json(const Darabonba::Json& j, DataQualityResult& obj) { 
          DARABONBA_PTR_FROM_JSON(data_quality_score, dataQualityScore_);
          DARABONBA_PTR_FROM_JSON(g1, g1_);
          DARABONBA_PTR_FROM_JSON(g2, g2_);
          DARABONBA_PTR_FROM_JSON(g3, g3_);
          DARABONBA_PTR_FROM_JSON(g4, g4_);
        };
        DataQualityResult() = default ;
        DataQualityResult(const DataQualityResult &) = default ;
        DataQualityResult(DataQualityResult &&) = default ;
        DataQualityResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataQualityResult() = default ;
        DataQualityResult& operator=(const DataQualityResult &) = default ;
        DataQualityResult& operator=(DataQualityResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataQualityScore_ == nullptr
        && this->g1_ == nullptr && this->g2_ == nullptr && this->g3_ == nullptr && this->g4_ == nullptr; };
        // dataQualityScore Field Functions 
        bool hasDataQualityScore() const { return this->dataQualityScore_ != nullptr;};
        void deleteDataQualityScore() { this->dataQualityScore_ = nullptr;};
        inline double getDataQualityScore() const { DARABONBA_PTR_GET_DEFAULT(dataQualityScore_, 0.0) };
        inline DataQualityResult& setDataQualityScore(double dataQualityScore) { DARABONBA_PTR_SET_VALUE(dataQualityScore_, dataQualityScore) };


        // g1 Field Functions 
        bool hasG1() const { return this->g1_ != nullptr;};
        void deleteG1() { this->g1_ = nullptr;};
        inline double getG1() const { DARABONBA_PTR_GET_DEFAULT(g1_, 0.0) };
        inline DataQualityResult& setG1(double g1) { DARABONBA_PTR_SET_VALUE(g1_, g1) };


        // g2 Field Functions 
        bool hasG2() const { return this->g2_ != nullptr;};
        void deleteG2() { this->g2_ = nullptr;};
        inline double getG2() const { DARABONBA_PTR_GET_DEFAULT(g2_, 0.0) };
        inline DataQualityResult& setG2(double g2) { DARABONBA_PTR_SET_VALUE(g2_, g2) };


        // g3 Field Functions 
        bool hasG3() const { return this->g3_ != nullptr;};
        void deleteG3() { this->g3_ = nullptr;};
        inline double getG3() const { DARABONBA_PTR_GET_DEFAULT(g3_, 0.0) };
        inline DataQualityResult& setG3(double g3) { DARABONBA_PTR_SET_VALUE(g3_, g3) };


        // g4 Field Functions 
        bool hasG4() const { return this->g4_ != nullptr;};
        void deleteG4() { this->g4_ = nullptr;};
        inline double getG4() const { DARABONBA_PTR_GET_DEFAULT(g4_, 0.0) };
        inline DataQualityResult& setG4(double g4) { DARABONBA_PTR_SET_VALUE(g4_, g4) };


      protected:
        // The score. This parameter is applicable to DQR results. The distribution ranges from 1 to 5. A value closer to 1 indicates better data quality. The number of valid digits is kept to four decimal places.
        shared_ptr<double> dataQualityScore_ {};
        // Data quality evaluation indicator 1: activity data credibility.
        shared_ptr<double> g1_ {};
        // Data quality evaluation indicator 2: data factor reliability.
        shared_ptr<double> g2_ {};
        // Data quality evaluation indicator 3: time representativeness.
        shared_ptr<double> g3_ {};
        // Data quality evaluation indicator 4: geographic representativeness.
        shared_ptr<double> g4_ {};
      };

      class DataQuality : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataQuality& obj) { 
          DARABONBA_PTR_TO_JSON(inventory, inventory_);
          DARABONBA_PTR_TO_JSON(score, score_);
        };
        friend void from_json(const Darabonba::Json& j, DataQuality& obj) { 
          DARABONBA_PTR_FROM_JSON(inventory, inventory_);
          DARABONBA_PTR_FROM_JSON(score, score_);
        };
        DataQuality() = default ;
        DataQuality(const DataQuality &) = default ;
        DataQuality(DataQuality &&) = default ;
        DataQuality(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataQuality() = default ;
        DataQuality& operator=(const DataQuality &) = default ;
        DataQuality& operator=(DataQuality &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Score : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Score& obj) { 
            DARABONBA_PTR_TO_JSON(g1, g1_);
            DARABONBA_PTR_TO_JSON(g2, g2_);
            DARABONBA_PTR_TO_JSON(g3, g3_);
            DARABONBA_PTR_TO_JSON(g4, g4_);
          };
          friend void from_json(const Darabonba::Json& j, Score& obj) { 
            DARABONBA_PTR_FROM_JSON(g1, g1_);
            DARABONBA_PTR_FROM_JSON(g2, g2_);
            DARABONBA_PTR_FROM_JSON(g3, g3_);
            DARABONBA_PTR_FROM_JSON(g4, g4_);
          };
          Score() = default ;
          Score(const Score &) = default ;
          Score(Score &&) = default ;
          Score(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Score() = default ;
          Score& operator=(const Score &) = default ;
          Score& operator=(Score &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->g1_ == nullptr
        && this->g2_ == nullptr && this->g3_ == nullptr && this->g4_ == nullptr; };
          // g1 Field Functions 
          bool hasG1() const { return this->g1_ != nullptr;};
          void deleteG1() { this->g1_ = nullptr;};
          inline double getG1() const { DARABONBA_PTR_GET_DEFAULT(g1_, 0.0) };
          inline Score& setG1(double g1) { DARABONBA_PTR_SET_VALUE(g1_, g1) };


          // g2 Field Functions 
          bool hasG2() const { return this->g2_ != nullptr;};
          void deleteG2() { this->g2_ = nullptr;};
          inline double getG2() const { DARABONBA_PTR_GET_DEFAULT(g2_, 0.0) };
          inline Score& setG2(double g2) { DARABONBA_PTR_SET_VALUE(g2_, g2) };


          // g3 Field Functions 
          bool hasG3() const { return this->g3_ != nullptr;};
          void deleteG3() { this->g3_ = nullptr;};
          inline double getG3() const { DARABONBA_PTR_GET_DEFAULT(g3_, 0.0) };
          inline Score& setG3(double g3) { DARABONBA_PTR_SET_VALUE(g3_, g3) };


          // g4 Field Functions 
          bool hasG4() const { return this->g4_ != nullptr;};
          void deleteG4() { this->g4_ = nullptr;};
          inline double getG4() const { DARABONBA_PTR_GET_DEFAULT(g4_, 0.0) };
          inline Score& setG4(double g4) { DARABONBA_PTR_SET_VALUE(g4_, g4) };


        protected:
          // Data quality evaluation indicator 1: activity data credibility.
          shared_ptr<double> g1_ {};
          // Data quality evaluation indicator 2: data factor reliability.
          shared_ptr<double> g2_ {};
          // Data quality evaluation indicator 3: time representativeness.
          shared_ptr<double> g3_ {};
          // Data quality evaluation indicator 4: geographic representativeness.
          shared_ptr<double> g4_ {};
        };

        virtual bool empty() const override { return this->inventory_ == nullptr
        && this->score_ == nullptr; };
        // inventory Field Functions 
        bool hasInventory() const { return this->inventory_ != nullptr;};
        void deleteInventory() { this->inventory_ = nullptr;};
        inline string getInventory() const { DARABONBA_PTR_GET_DEFAULT(inventory_, "") };
        inline DataQuality& setInventory(string inventory) { DARABONBA_PTR_SET_VALUE(inventory_, inventory) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline const DataQuality::Score & getScore() const { DARABONBA_PTR_GET_CONST(score_, DataQuality::Score) };
        inline DataQuality::Score getScore() { DARABONBA_PTR_GET(score_, DataQuality::Score) };
        inline DataQuality& setScore(const DataQuality::Score & score) { DARABONBA_PTR_SET_VALUE(score_, score) };
        inline DataQuality& setScore(DataQuality::Score && score) { DARABONBA_PTR_SET_RVALUE(score_, score) };


      protected:
        // Inventory name
        shared_ptr<string> inventory_ {};
        // Score. The distribution ranges from 1 to 5. A value closer to 1 indicates better data quality.
        shared_ptr<DataQuality::Score> score_ {};
      };

      virtual bool empty() const override { return this->dataQuality_ == nullptr
        && this->dataQualityResult_ == nullptr && this->sensitivityList_ == nullptr && this->uncertainty_ == nullptr && this->uncertaintyValues_ == nullptr; };
      // dataQuality Field Functions 
      bool hasDataQuality() const { return this->dataQuality_ != nullptr;};
      void deleteDataQuality() { this->dataQuality_ = nullptr;};
      inline const vector<Data::DataQuality> & getDataQuality() const { DARABONBA_PTR_GET_CONST(dataQuality_, vector<Data::DataQuality>) };
      inline vector<Data::DataQuality> getDataQuality() { DARABONBA_PTR_GET(dataQuality_, vector<Data::DataQuality>) };
      inline Data& setDataQuality(const vector<Data::DataQuality> & dataQuality) { DARABONBA_PTR_SET_VALUE(dataQuality_, dataQuality) };
      inline Data& setDataQuality(vector<Data::DataQuality> && dataQuality) { DARABONBA_PTR_SET_RVALUE(dataQuality_, dataQuality) };


      // dataQualityResult Field Functions 
      bool hasDataQualityResult() const { return this->dataQualityResult_ != nullptr;};
      void deleteDataQualityResult() { this->dataQualityResult_ = nullptr;};
      inline const Data::DataQualityResult & getDataQualityResult() const { DARABONBA_PTR_GET_CONST(dataQualityResult_, Data::DataQualityResult) };
      inline Data::DataQualityResult getDataQualityResult() { DARABONBA_PTR_GET(dataQualityResult_, Data::DataQualityResult) };
      inline Data& setDataQualityResult(const Data::DataQualityResult & dataQualityResult) { DARABONBA_PTR_SET_VALUE(dataQualityResult_, dataQualityResult) };
      inline Data& setDataQualityResult(Data::DataQualityResult && dataQualityResult) { DARABONBA_PTR_SET_RVALUE(dataQualityResult_, dataQualityResult) };


      // sensitivityList Field Functions 
      bool hasSensitivityList() const { return this->sensitivityList_ != nullptr;};
      void deleteSensitivityList() { this->sensitivityList_ = nullptr;};
      inline const vector<Data::SensitivityList> & getSensitivityList() const { DARABONBA_PTR_GET_CONST(sensitivityList_, vector<Data::SensitivityList>) };
      inline vector<Data::SensitivityList> getSensitivityList() { DARABONBA_PTR_GET(sensitivityList_, vector<Data::SensitivityList>) };
      inline Data& setSensitivityList(const vector<Data::SensitivityList> & sensitivityList) { DARABONBA_PTR_SET_VALUE(sensitivityList_, sensitivityList) };
      inline Data& setSensitivityList(vector<Data::SensitivityList> && sensitivityList) { DARABONBA_PTR_SET_RVALUE(sensitivityList_, sensitivityList) };


      // uncertainty Field Functions 
      bool hasUncertainty() const { return this->uncertainty_ != nullptr;};
      void deleteUncertainty() { this->uncertainty_ = nullptr;};
      inline string getUncertainty() const { DARABONBA_PTR_GET_DEFAULT(uncertainty_, "") };
      inline Data& setUncertainty(string uncertainty) { DARABONBA_PTR_SET_VALUE(uncertainty_, uncertainty) };


      // uncertaintyValues Field Functions 
      bool hasUncertaintyValues() const { return this->uncertaintyValues_ != nullptr;};
      void deleteUncertaintyValues() { this->uncertaintyValues_ = nullptr;};
      inline const vector<Data::UncertaintyValues> & getUncertaintyValues() const { DARABONBA_PTR_GET_CONST(uncertaintyValues_, vector<Data::UncertaintyValues>) };
      inline vector<Data::UncertaintyValues> getUncertaintyValues() { DARABONBA_PTR_GET(uncertaintyValues_, vector<Data::UncertaintyValues>) };
      inline Data& setUncertaintyValues(const vector<Data::UncertaintyValues> & uncertaintyValues) { DARABONBA_PTR_SET_VALUE(uncertaintyValues_, uncertaintyValues) };
      inline Data& setUncertaintyValues(vector<Data::UncertaintyValues> && uncertaintyValues) { DARABONBA_PTR_SET_RVALUE(uncertaintyValues_, uncertaintyValues) };


    protected:
      // Score of each inventory.
      shared_ptr<vector<Data::DataQuality>> dataQuality_ {};
      // Data quality result.
      shared_ptr<Data::DataQualityResult> dataQualityResult_ {};
      // Sensitivity analysis list
      shared_ptr<vector<Data::SensitivityList>> sensitivityList_ {};
      // Uncertainty value. The model\\"s overall percentage uncertainty results. "10.00%" symbolizes a 10.00% uncertainty, indicating that the carbon footprint lies within ±10.00%. This is derived from a weighted aggregation of individual inventory uncertainties.
      shared_ptr<string> uncertainty_ {};
      // Uncertainty list
      shared_ptr<vector<Data::UncertaintyValues>> uncertaintyValues_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataQualityAnalysisResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataQualityAnalysisResponseBody::Data) };
    inline GetDataQualityAnalysisResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataQualityAnalysisResponseBody::Data) };
    inline GetDataQualityAnalysisResponseBody& setData(const GetDataQualityAnalysisResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataQualityAnalysisResponseBody& setData(GetDataQualityAnalysisResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetDataQualityAnalysisResponseBody::Data> data_ {};
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
