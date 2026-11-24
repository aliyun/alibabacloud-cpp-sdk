// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATARESULTSVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATARESULTSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DataResultsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataResultsValue& obj) { 
      DARABONBA_PTR_TO_JSON(routeId, routeId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DataResultsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(routeId, routeId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
    };
    DataResultsValue() = default ;
    DataResultsValue(const DataResultsValue &) = default ;
    DataResultsValue(DataResultsValue &&) = default ;
    DataResultsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataResultsValue() = default ;
    DataResultsValue& operator=(const DataResultsValue &) = default ;
    DataResultsValue& operator=(DataResultsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routeId_ == nullptr
        && this->status_ == nullptr && this->errorMessage_ == nullptr; };
    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline DataResultsValue& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DataResultsValue& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DataResultsValue& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


  protected:
    // The route ID corresponding to the result, which is the same as the key in results.
    shared_ptr<string> routeId_ {};
    // For asynchronous publishing, Pending indicates that the request is accepted, and Rejected indicates that the request is rejected before submission. For synchronous publishing, Succeeded indicates that the route is successfully published, and Failed indicates that the publishing failed.
    shared_ptr<string> status_ {};
    // The cause of the route being rejected or failing to be published. This parameter is returned when the status is Rejected or Failed.
    shared_ptr<string> errorMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
