// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIADNALIBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIADNALIBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMediaDNALibsResponseBodyAIDNALibInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListMediaDNALibsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaDNALibsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIDNALibInfoList, AIDNALibInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaDNALibsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIDNALibInfoList, AIDNALibInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMediaDNALibsResponseBody() = default ;
    ListMediaDNALibsResponseBody(const ListMediaDNALibsResponseBody &) = default ;
    ListMediaDNALibsResponseBody(ListMediaDNALibsResponseBody &&) = default ;
    ListMediaDNALibsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaDNALibsResponseBody() = default ;
    ListMediaDNALibsResponseBody& operator=(const ListMediaDNALibsResponseBody &) = default ;
    ListMediaDNALibsResponseBody& operator=(ListMediaDNALibsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIDNALibInfoList_ != nullptr
        && this->requestId_ != nullptr; };
    // AIDNALibInfoList Field Functions 
    bool hasAIDNALibInfoList() const { return this->AIDNALibInfoList_ != nullptr;};
    void deleteAIDNALibInfoList() { this->AIDNALibInfoList_ = nullptr;};
    inline const ListMediaDNALibsResponseBodyAIDNALibInfoList & AIDNALibInfoList() const { DARABONBA_PTR_GET_CONST(AIDNALibInfoList_, ListMediaDNALibsResponseBodyAIDNALibInfoList) };
    inline ListMediaDNALibsResponseBodyAIDNALibInfoList AIDNALibInfoList() { DARABONBA_PTR_GET(AIDNALibInfoList_, ListMediaDNALibsResponseBodyAIDNALibInfoList) };
    inline ListMediaDNALibsResponseBody& setAIDNALibInfoList(const ListMediaDNALibsResponseBodyAIDNALibInfoList & AIDNALibInfoList) { DARABONBA_PTR_SET_VALUE(AIDNALibInfoList_, AIDNALibInfoList) };
    inline ListMediaDNALibsResponseBody& setAIDNALibInfoList(ListMediaDNALibsResponseBodyAIDNALibInfoList && AIDNALibInfoList) { DARABONBA_PTR_SET_RVALUE(AIDNALibInfoList_, AIDNALibInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaDNALibsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListMediaDNALibsResponseBodyAIDNALibInfoList> AIDNALibInfoList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
