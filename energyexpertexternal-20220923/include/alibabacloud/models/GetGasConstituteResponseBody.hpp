// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGASCONSTITUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGASCONSTITUTERESPONSEBODY_HPP_
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
  class GetGasConstituteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGasConstituteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGasConstituteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGasConstituteResponseBody() = default ;
    GetGasConstituteResponseBody(const GetGasConstituteResponseBody &) = default ;
    GetGasConstituteResponseBody(GetGasConstituteResponseBody &&) = default ;
    GetGasConstituteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGasConstituteResponseBody() = default ;
    GetGasConstituteResponseBody& operator=(const GetGasConstituteResponseBody &) = default ;
    GetGasConstituteResponseBody& operator=(GetGasConstituteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
        DARABONBA_PTR_TO_JSON(gasEmissionData, gasEmissionData_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(ratio, ratio_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
        DARABONBA_PTR_FROM_JSON(gasEmissionData, gasEmissionData_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(ratio, ratio_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->gasEmissionData_ == nullptr && this->name_ == nullptr && this->ratio_ == nullptr && this->type_ == nullptr; };
      // carbonEmissionData Field Functions 
      bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
      void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
      inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
      inline Data& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


      // gasEmissionData Field Functions 
      bool hasGasEmissionData() const { return this->gasEmissionData_ != nullptr;};
      void deleteGasEmissionData() { this->gasEmissionData_ = nullptr;};
      inline double getGasEmissionData() const { DARABONBA_PTR_GET_DEFAULT(gasEmissionData_, 0.0) };
      inline Data& setGasEmissionData(double gasEmissionData) { DARABONBA_PTR_SET_VALUE(gasEmissionData_, gasEmissionData) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ratio Field Functions 
      bool hasRatio() const { return this->ratio_ != nullptr;};
      void deleteRatio() { this->ratio_ = nullptr;};
      inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
      inline Data& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Carbon emissions
      shared_ptr<double> carbonEmissionData_ {};
      // Gas emissions
      shared_ptr<double> gasEmissionData_ {};
      // Name of gas
      shared_ptr<string> name_ {};
      // Proportion of carbon emissions. Example value: 0.5 (50%)
      shared_ptr<double> ratio_ {};
      // Gas Type
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetGasConstituteResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetGasConstituteResponseBody::Data>) };
    inline vector<GetGasConstituteResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetGasConstituteResponseBody::Data>) };
    inline GetGasConstituteResponseBody& setData(const vector<GetGasConstituteResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGasConstituteResponseBody& setData(vector<GetGasConstituteResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGasConstituteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<GetGasConstituteResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
