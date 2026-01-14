// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBUSINESSLOCATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBUSINESSLOCATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryBusinessLocationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBusinessLocationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBusinessLocationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryBusinessLocationsResponseBody() = default ;
    QueryBusinessLocationsResponseBody(const QueryBusinessLocationsResponseBody &) = default ;
    QueryBusinessLocationsResponseBody(QueryBusinessLocationsResponseBody &&) = default ;
    QueryBusinessLocationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBusinessLocationsResponseBody() = default ;
    QueryBusinessLocationsResponseBody& operator=(const QueryBusinessLocationsResponseBody &) = default ;
    QueryBusinessLocationsResponseBody& operator=(QueryBusinessLocationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CnName, cnName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DistrictCnName, districtCnName_);
        DARABONBA_PTR_TO_JSON(DistrictEnName, districtEnName_);
        DARABONBA_PTR_TO_JSON(DistrictId, districtId_);
        DARABONBA_PTR_TO_JSON(DistrictOrdering, districtOrdering_);
        DARABONBA_PTR_TO_JSON(DistrictShowName, districtShowName_);
        DARABONBA_PTR_TO_JSON(EnDescription, enDescription_);
        DARABONBA_PTR_TO_JSON(EnName, enName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Ordering, ordering_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CnName, cnName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DistrictCnName, districtCnName_);
        DARABONBA_PTR_FROM_JSON(DistrictEnName, districtEnName_);
        DARABONBA_PTR_FROM_JSON(DistrictId, districtId_);
        DARABONBA_PTR_FROM_JSON(DistrictOrdering, districtOrdering_);
        DARABONBA_PTR_FROM_JSON(DistrictShowName, districtShowName_);
        DARABONBA_PTR_FROM_JSON(EnDescription, enDescription_);
        DARABONBA_PTR_FROM_JSON(EnName, enName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Ordering, ordering_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->cnName_ == nullptr
        && this->description_ == nullptr && this->districtCnName_ == nullptr && this->districtEnName_ == nullptr && this->districtId_ == nullptr && this->districtOrdering_ == nullptr
        && this->districtShowName_ == nullptr && this->enDescription_ == nullptr && this->enName_ == nullptr && this->name_ == nullptr && this->ordering_ == nullptr
        && this->showName_ == nullptr && this->type_ == nullptr; };
      // cnName Field Functions 
      bool hasCnName() const { return this->cnName_ != nullptr;};
      void deleteCnName() { this->cnName_ = nullptr;};
      inline string getCnName() const { DARABONBA_PTR_GET_DEFAULT(cnName_, "") };
      inline Data& setCnName(string cnName) { DARABONBA_PTR_SET_VALUE(cnName_, cnName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // districtCnName Field Functions 
      bool hasDistrictCnName() const { return this->districtCnName_ != nullptr;};
      void deleteDistrictCnName() { this->districtCnName_ = nullptr;};
      inline string getDistrictCnName() const { DARABONBA_PTR_GET_DEFAULT(districtCnName_, "") };
      inline Data& setDistrictCnName(string districtCnName) { DARABONBA_PTR_SET_VALUE(districtCnName_, districtCnName) };


      // districtEnName Field Functions 
      bool hasDistrictEnName() const { return this->districtEnName_ != nullptr;};
      void deleteDistrictEnName() { this->districtEnName_ = nullptr;};
      inline string getDistrictEnName() const { DARABONBA_PTR_GET_DEFAULT(districtEnName_, "") };
      inline Data& setDistrictEnName(string districtEnName) { DARABONBA_PTR_SET_VALUE(districtEnName_, districtEnName) };


      // districtId Field Functions 
      bool hasDistrictId() const { return this->districtId_ != nullptr;};
      void deleteDistrictId() { this->districtId_ = nullptr;};
      inline string getDistrictId() const { DARABONBA_PTR_GET_DEFAULT(districtId_, "") };
      inline Data& setDistrictId(string districtId) { DARABONBA_PTR_SET_VALUE(districtId_, districtId) };


      // districtOrdering Field Functions 
      bool hasDistrictOrdering() const { return this->districtOrdering_ != nullptr;};
      void deleteDistrictOrdering() { this->districtOrdering_ = nullptr;};
      inline int32_t getDistrictOrdering() const { DARABONBA_PTR_GET_DEFAULT(districtOrdering_, 0) };
      inline Data& setDistrictOrdering(int32_t districtOrdering) { DARABONBA_PTR_SET_VALUE(districtOrdering_, districtOrdering) };


      // districtShowName Field Functions 
      bool hasDistrictShowName() const { return this->districtShowName_ != nullptr;};
      void deleteDistrictShowName() { this->districtShowName_ = nullptr;};
      inline string getDistrictShowName() const { DARABONBA_PTR_GET_DEFAULT(districtShowName_, "") };
      inline Data& setDistrictShowName(string districtShowName) { DARABONBA_PTR_SET_VALUE(districtShowName_, districtShowName) };


      // enDescription Field Functions 
      bool hasEnDescription() const { return this->enDescription_ != nullptr;};
      void deleteEnDescription() { this->enDescription_ = nullptr;};
      inline string getEnDescription() const { DARABONBA_PTR_GET_DEFAULT(enDescription_, "") };
      inline Data& setEnDescription(string enDescription) { DARABONBA_PTR_SET_VALUE(enDescription_, enDescription) };


      // enName Field Functions 
      bool hasEnName() const { return this->enName_ != nullptr;};
      void deleteEnName() { this->enName_ = nullptr;};
      inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
      inline Data& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ordering Field Functions 
      bool hasOrdering() const { return this->ordering_ != nullptr;};
      void deleteOrdering() { this->ordering_ = nullptr;};
      inline int32_t getOrdering() const { DARABONBA_PTR_GET_DEFAULT(ordering_, 0) };
      inline Data& setOrdering(int32_t ordering) { DARABONBA_PTR_SET_VALUE(ordering_, ordering) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline Data& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The Chinese name of the region.
      shared_ptr<string> cnName_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The Chinese name of the district.
      shared_ptr<string> districtCnName_ {};
      // The English name of the district.
      shared_ptr<string> districtEnName_ {};
      // The ID of the region.
      shared_ptr<string> districtId_ {};
      // The ordering information of the district.
      shared_ptr<int32_t> districtOrdering_ {};
      // The display name of the district.
      shared_ptr<string> districtShowName_ {};
      // The complete description of the region.
      shared_ptr<string> enDescription_ {};
      // The English name of the region.
      shared_ptr<string> enName_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The ordering information.
      shared_ptr<int32_t> ordering_ {};
      // The display name.
      shared_ptr<string> showName_ {};
      // The type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryBusinessLocationsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryBusinessLocationsResponseBody::Data>) };
    inline vector<QueryBusinessLocationsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryBusinessLocationsResponseBody::Data>) };
    inline QueryBusinessLocationsResponseBody& setData(const vector<QueryBusinessLocationsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryBusinessLocationsResponseBody& setData(vector<QueryBusinessLocationsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryBusinessLocationsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryBusinessLocationsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBusinessLocationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline QueryBusinessLocationsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    shared_ptr<vector<QueryBusinessLocationsResponseBody::Data>> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The result of the request.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
