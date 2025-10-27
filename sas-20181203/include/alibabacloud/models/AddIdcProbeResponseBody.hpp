// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIDCPROBERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDIDCPROBERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddIdcProbeResponseBodyAddIdcProbeFailedList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddIdcProbeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIdcProbeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddIdcProbeFailedList, addIdcProbeFailedList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddIdcProbeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddIdcProbeFailedList, addIdcProbeFailedList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddIdcProbeResponseBody() = default ;
    AddIdcProbeResponseBody(const AddIdcProbeResponseBody &) = default ;
    AddIdcProbeResponseBody(AddIdcProbeResponseBody &&) = default ;
    AddIdcProbeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIdcProbeResponseBody() = default ;
    AddIdcProbeResponseBody& operator=(const AddIdcProbeResponseBody &) = default ;
    AddIdcProbeResponseBody& operator=(AddIdcProbeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addIdcProbeFailedList_ == nullptr
        && return this->count_ == nullptr && return this->requestId_ == nullptr; };
    // addIdcProbeFailedList Field Functions 
    bool hasAddIdcProbeFailedList() const { return this->addIdcProbeFailedList_ != nullptr;};
    void deleteAddIdcProbeFailedList() { this->addIdcProbeFailedList_ = nullptr;};
    inline const vector<AddIdcProbeResponseBodyAddIdcProbeFailedList> & addIdcProbeFailedList() const { DARABONBA_PTR_GET_CONST(addIdcProbeFailedList_, vector<AddIdcProbeResponseBodyAddIdcProbeFailedList>) };
    inline vector<AddIdcProbeResponseBodyAddIdcProbeFailedList> addIdcProbeFailedList() { DARABONBA_PTR_GET(addIdcProbeFailedList_, vector<AddIdcProbeResponseBodyAddIdcProbeFailedList>) };
    inline AddIdcProbeResponseBody& setAddIdcProbeFailedList(const vector<AddIdcProbeResponseBodyAddIdcProbeFailedList> & addIdcProbeFailedList) { DARABONBA_PTR_SET_VALUE(addIdcProbeFailedList_, addIdcProbeFailedList) };
    inline AddIdcProbeResponseBody& setAddIdcProbeFailedList(vector<AddIdcProbeResponseBodyAddIdcProbeFailedList> && addIdcProbeFailedList) { DARABONBA_PTR_SET_RVALUE(addIdcProbeFailedList_, addIdcProbeFailedList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline AddIdcProbeResponseBody& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddIdcProbeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The records of failure.
    std::shared_ptr<vector<AddIdcProbeResponseBodyAddIdcProbeFailedList>> addIdcProbeFailedList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> count_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
