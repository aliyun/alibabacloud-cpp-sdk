// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWAREFORUSERDEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWAREFORUSERDEVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSoftwareForUserDeviceResponseBodySoftware.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListSoftwareForUserDeviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwareForUserDeviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Software, software_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwareForUserDeviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Software, software_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListSoftwareForUserDeviceResponseBody() = default ;
    ListSoftwareForUserDeviceResponseBody(const ListSoftwareForUserDeviceResponseBody &) = default ;
    ListSoftwareForUserDeviceResponseBody(ListSoftwareForUserDeviceResponseBody &&) = default ;
    ListSoftwareForUserDeviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwareForUserDeviceResponseBody() = default ;
    ListSoftwareForUserDeviceResponseBody& operator=(const ListSoftwareForUserDeviceResponseBody &) = default ;
    ListSoftwareForUserDeviceResponseBody& operator=(ListSoftwareForUserDeviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->software_ == nullptr && return this->totalNum_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSoftwareForUserDeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // software Field Functions 
    bool hasSoftware() const { return this->software_ != nullptr;};
    void deleteSoftware() { this->software_ = nullptr;};
    inline const vector<ListSoftwareForUserDeviceResponseBodySoftware> & software() const { DARABONBA_PTR_GET_CONST(software_, vector<ListSoftwareForUserDeviceResponseBodySoftware>) };
    inline vector<ListSoftwareForUserDeviceResponseBodySoftware> software() { DARABONBA_PTR_GET(software_, vector<ListSoftwareForUserDeviceResponseBodySoftware>) };
    inline ListSoftwareForUserDeviceResponseBody& setSoftware(const vector<ListSoftwareForUserDeviceResponseBodySoftware> & software) { DARABONBA_PTR_SET_VALUE(software_, software) };
    inline ListSoftwareForUserDeviceResponseBody& setSoftware(vector<ListSoftwareForUserDeviceResponseBodySoftware> && software) { DARABONBA_PTR_SET_RVALUE(software_, software) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListSoftwareForUserDeviceResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListSoftwareForUserDeviceResponseBodySoftware>> software_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
