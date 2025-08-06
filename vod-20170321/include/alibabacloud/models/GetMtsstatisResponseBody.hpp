// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMTSSTATISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMTSSTATISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMTSStatisResponseBodyMTSStatisBySpecList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMTSStatisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMTSStatisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MTSStatisBySpecList, MTSStatisBySpecList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMTSStatisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MTSStatisBySpecList, MTSStatisBySpecList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMTSStatisResponseBody() = default ;
    GetMTSStatisResponseBody(const GetMTSStatisResponseBody &) = default ;
    GetMTSStatisResponseBody(GetMTSStatisResponseBody &&) = default ;
    GetMTSStatisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMTSStatisResponseBody() = default ;
    GetMTSStatisResponseBody& operator=(const GetMTSStatisResponseBody &) = default ;
    GetMTSStatisResponseBody& operator=(GetMTSStatisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->MTSStatisBySpecList_ != nullptr
        && this->requestId_ != nullptr; };
    // MTSStatisBySpecList Field Functions 
    bool hasMTSStatisBySpecList() const { return this->MTSStatisBySpecList_ != nullptr;};
    void deleteMTSStatisBySpecList() { this->MTSStatisBySpecList_ = nullptr;};
    inline const GetMTSStatisResponseBodyMTSStatisBySpecList & MTSStatisBySpecList() const { DARABONBA_PTR_GET_CONST(MTSStatisBySpecList_, GetMTSStatisResponseBodyMTSStatisBySpecList) };
    inline GetMTSStatisResponseBodyMTSStatisBySpecList MTSStatisBySpecList() { DARABONBA_PTR_GET(MTSStatisBySpecList_, GetMTSStatisResponseBodyMTSStatisBySpecList) };
    inline GetMTSStatisResponseBody& setMTSStatisBySpecList(const GetMTSStatisResponseBodyMTSStatisBySpecList & MTSStatisBySpecList) { DARABONBA_PTR_SET_VALUE(MTSStatisBySpecList_, MTSStatisBySpecList) };
    inline GetMTSStatisResponseBody& setMTSStatisBySpecList(GetMTSStatisResponseBodyMTSStatisBySpecList && MTSStatisBySpecList) { DARABONBA_PTR_SET_RVALUE(MTSStatisBySpecList_, MTSStatisBySpecList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMTSStatisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetMTSStatisResponseBodyMTSStatisBySpecList> MTSStatisBySpecList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
