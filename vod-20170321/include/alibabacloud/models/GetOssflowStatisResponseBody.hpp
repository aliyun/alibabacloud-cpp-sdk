// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSFLOWSTATISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSFLOWSTATISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOSSFlowStatisResponseBodyOSSFlowStatisList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetOSSFlowStatisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOSSFlowStatisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OSSFlowStatisList, OSSFlowStatisList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOSSFlowStatisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OSSFlowStatisList, OSSFlowStatisList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOSSFlowStatisResponseBody() = default ;
    GetOSSFlowStatisResponseBody(const GetOSSFlowStatisResponseBody &) = default ;
    GetOSSFlowStatisResponseBody(GetOSSFlowStatisResponseBody &&) = default ;
    GetOSSFlowStatisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOSSFlowStatisResponseBody() = default ;
    GetOSSFlowStatisResponseBody& operator=(const GetOSSFlowStatisResponseBody &) = default ;
    GetOSSFlowStatisResponseBody& operator=(GetOSSFlowStatisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->OSSFlowStatisList_ != nullptr
        && this->requestId_ != nullptr; };
    // OSSFlowStatisList Field Functions 
    bool hasOSSFlowStatisList() const { return this->OSSFlowStatisList_ != nullptr;};
    void deleteOSSFlowStatisList() { this->OSSFlowStatisList_ = nullptr;};
    inline const vector<GetOSSFlowStatisResponseBodyOSSFlowStatisList> & OSSFlowStatisList() const { DARABONBA_PTR_GET_CONST(OSSFlowStatisList_, vector<GetOSSFlowStatisResponseBodyOSSFlowStatisList>) };
    inline vector<GetOSSFlowStatisResponseBodyOSSFlowStatisList> OSSFlowStatisList() { DARABONBA_PTR_GET(OSSFlowStatisList_, vector<GetOSSFlowStatisResponseBodyOSSFlowStatisList>) };
    inline GetOSSFlowStatisResponseBody& setOSSFlowStatisList(const vector<GetOSSFlowStatisResponseBodyOSSFlowStatisList> & OSSFlowStatisList) { DARABONBA_PTR_SET_VALUE(OSSFlowStatisList_, OSSFlowStatisList) };
    inline GetOSSFlowStatisResponseBody& setOSSFlowStatisList(vector<GetOSSFlowStatisResponseBodyOSSFlowStatisList> && OSSFlowStatisList) { DARABONBA_PTR_SET_RVALUE(OSSFlowStatisList_, OSSFlowStatisList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOSSFlowStatisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetOSSFlowStatisResponseBodyOSSFlowStatisList>> OSSFlowStatisList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
