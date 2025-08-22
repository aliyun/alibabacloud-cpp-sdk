// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCEMAPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCEMAPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSourceMapInfoResponseBodySourceMapList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSourceMapInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceMapInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceMapList, sourceMapList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceMapInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceMapList, sourceMapList_);
    };
    GetSourceMapInfoResponseBody() = default ;
    GetSourceMapInfoResponseBody(const GetSourceMapInfoResponseBody &) = default ;
    GetSourceMapInfoResponseBody(GetSourceMapInfoResponseBody &&) = default ;
    GetSourceMapInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceMapInfoResponseBody() = default ;
    GetSourceMapInfoResponseBody& operator=(const GetSourceMapInfoResponseBody &) = default ;
    GetSourceMapInfoResponseBody& operator=(GetSourceMapInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sourceMapList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSourceMapInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceMapList Field Functions 
    bool hasSourceMapList() const { return this->sourceMapList_ != nullptr;};
    void deleteSourceMapList() { this->sourceMapList_ = nullptr;};
    inline const vector<GetSourceMapInfoResponseBodySourceMapList> & sourceMapList() const { DARABONBA_PTR_GET_CONST(sourceMapList_, vector<GetSourceMapInfoResponseBodySourceMapList>) };
    inline vector<GetSourceMapInfoResponseBodySourceMapList> sourceMapList() { DARABONBA_PTR_GET(sourceMapList_, vector<GetSourceMapInfoResponseBodySourceMapList>) };
    inline GetSourceMapInfoResponseBody& setSourceMapList(const vector<GetSourceMapInfoResponseBodySourceMapList> & sourceMapList) { DARABONBA_PTR_SET_VALUE(sourceMapList_, sourceMapList) };
    inline GetSourceMapInfoResponseBody& setSourceMapList(vector<GetSourceMapInfoResponseBodySourceMapList> && sourceMapList) { DARABONBA_PTR_SET_RVALUE(sourceMapList_, sourceMapList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the SourceMap file.
    std::shared_ptr<vector<GetSourceMapInfoResponseBodySourceMapList>> sourceMapList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
