// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOCALDEFAULTREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOCALDEFAULTREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetLocalDefaultRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLocalDefaultRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetLocalDefaultRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetLocalDefaultRegionResponseBody() = default ;
    GetLocalDefaultRegionResponseBody(const GetLocalDefaultRegionResponseBody &) = default ;
    GetLocalDefaultRegionResponseBody(GetLocalDefaultRegionResponseBody &&) = default ;
    GetLocalDefaultRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLocalDefaultRegionResponseBody() = default ;
    GetLocalDefaultRegionResponseBody& operator=(const GetLocalDefaultRegionResponseBody &) = default ;
    GetLocalDefaultRegionResponseBody& operator=(GetLocalDefaultRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->status_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLocalDefaultRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetLocalDefaultRegionResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The access type of the multi-cloud site. Valid values:
    // 
    // *   **0**: The current site is not the default site of the multi-cloud site. You can specify a site as the default site of the multi-cloud site.
    // *   **1**: The current site is the default site of the multi-cloud site.
    // *   **2**: Another site is set as the default site of the multi-cloud site.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
