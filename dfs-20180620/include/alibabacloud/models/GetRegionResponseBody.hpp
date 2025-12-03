// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRegionResponseBodyAvailableZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRegionResponseBody() = default ;
    GetRegionResponseBody(const GetRegionResponseBody &) = default ;
    GetRegionResponseBody(GetRegionResponseBody &&) = default ;
    GetRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionResponseBody() = default ;
    GetRegionResponseBody& operator=(const GetRegionResponseBody &) = default ;
    GetRegionResponseBody& operator=(GetRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableZones_ == nullptr
        && return this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const vector<GetRegionResponseBodyAvailableZones> & availableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, vector<GetRegionResponseBodyAvailableZones>) };
    inline vector<GetRegionResponseBodyAvailableZones> availableZones() { DARABONBA_PTR_GET(availableZones_, vector<GetRegionResponseBodyAvailableZones>) };
    inline GetRegionResponseBody& setAvailableZones(const vector<GetRegionResponseBodyAvailableZones> & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline GetRegionResponseBody& setAvailableZones(vector<GetRegionResponseBodyAvailableZones> && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetRegionResponseBodyAvailableZones>> availableZones_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
